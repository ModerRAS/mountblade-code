#include "TaleWorlds.Native.Split.h"

// 99_part_08_part006.c - 11 个函数

// 函数: void FUN_1804dfff0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804dfff0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plStackX_8;
  longlong lStackX_10;
  int *piStackX_18;
  int *piStackX_20;
  undefined8 uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  uVar7 = *(uint *)(param_1 + 2);
  lStackX_10 = param_2;
  if (uVar7 != 0xffffffff) {
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x488) + (longlong)((int)uVar7 >> 10) * 8) +
                    (longlong)(int)(*(uint *)(param_2 + 0x4a8) & uVar7) * 0x48);
    if (*piVar1 != -1) {
      FUN_1800571e0(param_2 + 0x468,&plStackX_8,(longlong)((int)uVar7 >> 10),param_4,
                    0xfffffffffffffffe);
      *piVar1 = -1;
    }
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar7 != 0xffffffff) {
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar7 >> 10) * 8) +
                    (longlong)(int)(*(uint *)(param_2 + 0x6b8) & uVar7) * 0x30);
    if (*piVar1 != -1) {
      FUN_1800571e0(param_2 + 0x678,&plStackX_8,(longlong)(int)uVar7,param_4,uVar14);
      *piVar1 = -1;
    }
  }
  uVar7 = *(uint *)(param_1 + 3);
  if (uVar7 != 0xffffffff) {
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x4e0) + (longlong)((int)uVar7 >> 10) * 8) +
                    (longlong)(int)(*(uint *)(param_2 + 0x500) & uVar7) * 0xc0);
    if (*piVar1 != -1) {
      FUN_1800571e0(param_2 + 0x4c0,&plStackX_8,(longlong)(int)uVar7,param_4,uVar14);
      *piVar1 = -1;
    }
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x1c);
  if (uVar7 != 0xffffffff) {
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x3a0) + (longlong)((int)uVar7 >> 10) * 8) +
                    (longlong)(int)(*(uint *)(param_2 + 0x3c0) & uVar7) * 0xc);
    if (*piVar1 != -1) {
      FUN_1800571e0(param_2 + 0x380,&plStackX_8,(longlong)(int)uVar7,param_4,uVar14);
      *piVar1 = -1;
    }
  }
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 != 0xffffffff) {
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x538) + (longlong)((int)uVar7 >> 10) * 8) +
                    (longlong)(int)(*(uint *)(param_2 + 0x558) & uVar7) * 0x18);
    if (*piVar1 != -1) {
      FUN_1800571e0(param_2 + 0x518,&plStackX_8,(longlong)(int)uVar7,param_4,uVar14);
      plStackX_8 = (longlong *)(piVar1 + 2);
      if (*(longlong **)(piVar1 + 4) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(piVar1 + 4) + 0x38))();
      }
      *piVar1 = -1;
    }
  }
  puVar10 = (uint *)((longlong)param_1 + 0x24);
  puVar11 = (uint *)(param_2 + 0x100);
  lVar13 = 8;
  do {
    uVar7 = *puVar10;
    if (uVar7 != 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(puVar11 + -8) + (longlong)((int)uVar7 >> 10) * 8) +
              (longlong)(int)(*puVar11 & uVar7) * 0x68;
      plVar8 = *(longlong **)(lVar5 + 0x10);
      plVar3 = *(longlong **)(lVar5 + 8);
      if (plVar3 != plVar8) {
        do {
          plStackX_8 = plVar3;
          if ((longlong *)plVar3[9] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar3[9] + 0x38))();
          }
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar3[8] + 0x38))();
          }
          plVar3 = plVar3 + 0xd;
        } while (plVar3 != plVar8);
        plVar3 = *(longlong **)(lVar5 + 8);
      }
      *(longlong **)(lVar5 + 0x10) = plVar3;
      lVar5 = *(longlong *)(*(longlong *)(puVar11 + -8) + (longlong)((int)*puVar10 >> 10) * 8) +
              (longlong)(int)(*puVar11 & *puVar10) * 0x68;
      plVar8 = *(longlong **)(lVar5 + 0x30);
      plVar3 = *(longlong **)(lVar5 + 0x28);
      if (plVar3 != plVar8) {
        do {
          plStackX_8 = plVar3;
          if ((longlong *)plVar3[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar3[2] + 0x38))();
          }
          if ((longlong *)plVar3[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar3[1] + 0x38))();
          }
          plVar3 = plVar3 + 0xd;
        } while (plVar3 != plVar8);
        plVar3 = *(longlong **)(lVar5 + 0x28);
      }
      *(longlong **)(lVar5 + 0x30) = plVar3;
      lVar5 = *(longlong *)(*(longlong *)(puVar11 + -8) + (longlong)((int)*puVar10 >> 10) * 8) +
              (longlong)(int)(*puVar11 & *puVar10) * 0x68;
      plVar8 = *(longlong **)(lVar5 + 0x50);
      plVar3 = *(longlong **)(lVar5 + 0x48);
      plVar2 = plVar3;
      plStackX_8 = plVar3;
      if (plVar3 != plVar8) {
        do {
          plStackX_8 = plVar2;
          if ((longlong *)plVar2[3] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar2[3] + 0x38))();
          }
          if ((longlong *)plVar2[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar2[2] + 0x38))();
          }
          if ((longlong *)plVar2[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar2[1] + 0x38))();
          }
          plVar2 = plVar2 + 6;
        } while (plVar2 != plVar8);
        plVar3 = *(longlong **)(lVar5 + 0x48);
        plStackX_8 = plVar2;
      }
      *(longlong **)(lVar5 + 0x50) = plVar3;
      uVar7 = *puVar10;
      plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(puVar11 + -8) + (longlong)((int)uVar7 >> 10) * 8)
                      + (longlong)(int)(*puVar11 & uVar7) * 0x68);
      if ((uVar7 != 0xffffffff) && (*piVar1 != -1)) {
        FUN_1800571e0(puVar11 + -0x10,&plStackX_8);
        piStackX_18 = piVar1 + 0x12;
        plStackX_8 = (longlong *)(piVar1 + 2);
        FUN_1804a7550();
        piStackX_20 = piVar1 + 10;
        FUN_1804a7460();
        FUN_1804a7380(piVar1 + 2);
        *piVar1 = -1;
      }
    }
    lVar5 = lStackX_10;
    puVar11 = puVar11 + 0x16;
    puVar10 = puVar10 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar6 = 0;
  lVar13 = param_1[9];
  uVar9 = uVar6;
  uVar12 = uVar6;
  if (param_1[10] - lVar13 >> 2 != 0) {
    do {
      uVar7 = *(uint *)(uVar12 + lVar13);
      plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
      piVar1 = (int *)(*(longlong *)
                        (*(longlong *)(lVar5 + 0x590) + (longlong)((int)uVar7 >> 10) * 8) +
                      (longlong)(int)(*(uint *)(lVar5 + 0x5b0) & uVar7) * 0x18);
      if ((uVar7 != 0xffffffff) && (*piVar1 != -1)) {
        FUN_1800571e0(lVar5 + 0x570,&plStackX_8);
        plStackX_8 = (longlong *)(piVar1 + 2);
        if (*(longlong **)(piVar1 + 4) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(piVar1 + 4) + 0x38))();
        }
        *piVar1 = -1;
      }
      uVar7 = (int)uVar9 + 1;
      lVar13 = param_1[9];
      uVar9 = (ulonglong)uVar7;
      uVar12 = uVar12 + 4;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[10] - lVar13 >> 2));
  }
  lVar13 = param_1[0xd];
  uVar9 = uVar6;
  if (param_1[0xe] - lVar13 >> 2 != 0) {
    do {
      uVar7 = *(uint *)(uVar9 + lVar13);
      plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar7);
      piVar1 = (int *)(*(longlong *)
                        (*(longlong *)(lVar5 + 0x5e8) + (longlong)((int)uVar7 >> 10) * 8) +
                      (longlong)(int)(uVar7 & *(uint *)(lVar5 + 0x608)) * 0x28);
      if ((uVar7 != 0xffffffff) && (*piVar1 != -1)) {
        FUN_1800571e0(lVar5 + 0x5c8,&plStackX_8);
        plStackX_8 = (longlong *)(piVar1 + 2);
        if (*(longlong **)(piVar1 + 6) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(piVar1 + 6) + 0x38))();
        }
        if (*(longlong **)(piVar1 + 4) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(piVar1 + 4) + 0x38))();
        }
        *piVar1 = -1;
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
      lVar13 = param_1[0xd];
      uVar9 = uVar9 + 4;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[0xe] - lVar13 >> 2));
  }
  *(undefined1 *)(param_1 + 1) = 1;
  plStackX_8 = (longlong *)*param_1;
  *param_1 = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffffffffffff;
  plVar8 = param_1 + 0x12;
  puVar4 = (undefined4 *)((longlong)param_1 + 0x24);
  lVar13 = 8;
  do {
    *puVar4 = 0xffffffff;
    plStackX_8 = (longlong *)*plVar8;
    *plVar8 = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puVar4 = puVar4 + 1;
    plVar8 = plVar8 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  param_1[10] = param_1[9];
  param_1[0xe] = param_1[0xd];
  *(undefined4 *)(param_1 + 0x11) = 0x1010101;
  return;
}






// 函数: void FUN_1804e0550(undefined8 param_1,longlong param_2,uint param_3)
void FUN_1804e0550(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0xffffffff) {
    lVar7 = (longlong)(int)(*(uint *)(param_2 + 0x2b18) & param_3) * 0xd8;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)param_3 >> 10) * 8);
    if (*(int *)(lVar7 + 0x14 + lVar1) != -1) {
      uVar2 = *(ulonglong *)(lVar7 + 8 + lVar1);
      lVar1 = *(longlong *)(param_2 + 0x2b28);
      uVar8 = uVar2 % (ulonglong)*(uint *)(param_2 + 0x2b30);
      for (puVar6 = *(ulonglong **)(lVar1 + uVar8 * 8); puVar6 != (ulonglong *)0x0;
          puVar6 = (ulonglong *)puVar6[2]) {
        if (uVar2 == *puVar6) goto LAB_1804e05e2;
      }
      puVar6 = (ulonglong *)0x0;
LAB_1804e05e2:
      if (puVar6 == (ulonglong *)0x0) {
        uVar8 = *(ulonglong *)(param_2 + 0x2b30);
        puVar6 = *(ulonglong **)(lVar1 + uVar8 * 8);
      }
      puVar9 = (undefined8 *)(lVar1 + uVar8 * 8);
      uVar2 = puVar6[2];
      puVar5 = puVar9;
      while (uVar2 == 0) {
        puVar3 = puVar5 + 1;
        puVar5 = puVar5 + 1;
        uVar2 = *puVar3;
      }
      puVar3 = (ulonglong *)*puVar9;
      puVar4 = (ulonglong *)puVar3[2];
      if (puVar3 == puVar6) {
        *puVar9 = puVar4;
      }
      else {
        for (; puVar4 != puVar6; puVar4 = (ulonglong *)puVar4[2]) {
          puVar3 = puVar4;
        }
        puVar3[2] = puVar4[2];
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}






// 函数: void FUN_1804e056b(undefined8 param_1,longlong param_2)
void FUN_1804e056b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  int in_EAX;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 *puVar9;
  
  lVar7 = ((longlong)*(int *)(param_2 + 0x2b18) & unaff_RDI) * 0xd8;
  lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 11000) + (longlong)(in_EAX >> 10) * 8);
  if (*(int *)(lVar7 + 0x14 + lVar1) == -1) {
    return;
  }
  uVar2 = *(ulonglong *)(lVar7 + 8 + lVar1);
  lVar1 = *(longlong *)(unaff_RBX + 0x2b28);
  uVar8 = uVar2 % (ulonglong)*(uint *)(unaff_RBX + 0x2b30);
  for (puVar6 = *(ulonglong **)(lVar1 + uVar8 * 8); puVar6 != (ulonglong *)0x0;
      puVar6 = (ulonglong *)puVar6[2]) {
    if (uVar2 == *puVar6) goto LAB_1804e05e2;
  }
  puVar6 = (ulonglong *)0x0;
LAB_1804e05e2:
  if (puVar6 == (ulonglong *)0x0) {
    uVar8 = *(ulonglong *)(unaff_RBX + 0x2b30);
    puVar6 = *(ulonglong **)(lVar1 + uVar8 * 8);
  }
  puVar9 = (undefined8 *)(lVar1 + uVar8 * 8);
  uVar2 = puVar6[2];
  puVar5 = puVar9;
  while (uVar2 == 0) {
    puVar3 = puVar5 + 1;
    puVar5 = puVar5 + 1;
    uVar2 = *puVar3;
  }
  puVar3 = (ulonglong *)*puVar9;
  puVar4 = (ulonglong *)puVar3[2];
  if (puVar3 == puVar6) {
    *puVar9 = puVar4;
  }
  else {
    for (; puVar4 != puVar6; puVar4 = (ulonglong *)puVar4[2]) {
      puVar3 = puVar4;
    }
    puVar3[2] = puVar4[2];
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804e06bb(void)
void FUN_1804e06bb(void)

{
  return;
}






// 函数: void FUN_1804e06d0(uint *param_1,longlong param_2)
void FUN_1804e06d0(uint *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint auStackX_8 [2];
  
  FUN_1804e0550(param_1,param_2,param_1[3]);
  lVar10 = *(longlong *)(param_1 + 6);
  iVar9 = 0;
  if (*(longlong *)(param_1 + 8) - lVar10 >> 2 != 0) {
    lVar12 = 0;
    do {
      uVar1 = *(uint *)(lVar12 + lVar10);
      if (uVar1 != 0xffffffff) {
        lVar7 = (longlong)(int)(*(uint *)(param_2 + 0x2b18) & uVar1) * 0xd8;
        lVar10 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)uVar1 >> 10) * 8);
        if (*(int *)(lVar7 + 0x14 + lVar10) != -1) {
          uVar2 = *(ulonglong *)(lVar7 + 8 + lVar10);
          lVar10 = *(longlong *)(param_2 + 0x2b28);
          uVar8 = uVar2 % (ulonglong)*(uint *)(param_2 + 0x2b30);
          puVar6 = *(ulonglong **)(lVar10 + uVar8 * 8);
          goto joined_r0x0001804e078a;
        }
      }
      lVar10 = *(longlong *)(param_1 + 6);
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + 4;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)(*(longlong *)(param_1 + 8) - lVar10 >> 2));
  }
  auStackX_8[0] = *param_1;
  if ((auStackX_8[0] != 0xffffffff) &&
     (lVar12 = (longlong)(int)(*(uint *)(param_2 + 0x2d10) & auStackX_8[0]),
     lVar10 = *(longlong *)
               (*(longlong *)(param_2 + 0x2cf0) + (longlong)((int)auStackX_8[0] >> 10) * 8),
     *(int *)(lVar10 + lVar12 * 0xc) != -1)) {
    FUN_1800571e0(param_2 + 0x2cd0,auStackX_8);
    *(undefined4 *)(lVar10 + lVar12 * 0xc) = 0xffffffff;
  }
  auStackX_8[0] = param_1[1];
  if ((auStackX_8[0] != 0xffffffff) &&
     (lVar12 = (longlong)(int)(*(uint *)(param_2 + 0x418) & auStackX_8[0]),
     lVar10 = *(longlong *)
               (*(longlong *)(param_2 + 0x3f8) + (longlong)((int)auStackX_8[0] >> 10) * 8),
     *(int *)(lVar10 + lVar12 * 0xc) != -1)) {
    FUN_1800571e0(param_2 + 0x3d8,auStackX_8);
    *(undefined4 *)(lVar10 + lVar12 * 0xc) = 0xffffffff;
  }
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x10);
  return;
joined_r0x0001804e078a:
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
LAB_1804e07a0:
    if (puVar6 == (ulonglong *)0x0) {
      uVar8 = *(ulonglong *)(param_2 + 0x2b30);
      puVar6 = *(ulonglong **)(lVar10 + uVar8 * 8);
    }
    puVar11 = (undefined8 *)(lVar10 + uVar8 * 8);
    uVar2 = puVar6[2];
    puVar5 = puVar11;
    while (uVar2 == 0) {
      puVar3 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar3;
    }
    puVar3 = (ulonglong *)*puVar11;
    puVar4 = (ulonglong *)puVar3[2];
    if (puVar3 == puVar6) {
      *puVar11 = puVar4;
    }
    else {
      for (; puVar4 != puVar6; puVar4 = (ulonglong *)puVar4[2]) {
        puVar3 = puVar4;
      }
      puVar3[2] = puVar4[2];
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (uVar2 == *puVar6) goto LAB_1804e07a0;
  puVar6 = (ulonglong *)puVar6[2];
  goto joined_r0x0001804e078a;
}






// 函数: void FUN_1804e06df(uint *param_1)
void FUN_1804e06df(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint in_stack_00000050;
  
  FUN_1804e0550();
  lVar10 = *(longlong *)(param_1 + 6);
  iVar9 = 0;
  if (*(longlong *)(param_1 + 8) - lVar10 >> 2 != 0) {
    lVar12 = 0;
    do {
      uVar1 = *(uint *)(lVar12 + lVar10);
      if (uVar1 != 0xffffffff) {
        lVar7 = (longlong)(int)(*(uint *)(unaff_RDI + 0x2b18) & uVar1) * 0xd8;
        lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 11000) + (longlong)((int)uVar1 >> 10) * 8);
        if (*(int *)(lVar7 + 0x14 + lVar10) != -1) {
          uVar2 = *(ulonglong *)(lVar7 + 8 + lVar10);
          lVar10 = *(longlong *)(unaff_RDI + 0x2b28);
          uVar8 = uVar2 % (ulonglong)*(uint *)(unaff_RDI + 0x2b30);
          puVar6 = *(ulonglong **)(lVar10 + uVar8 * 8);
          goto joined_r0x0001804e078a;
        }
      }
      lVar10 = *(longlong *)(param_1 + 6);
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + 4;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)(*(longlong *)(param_1 + 8) - lVar10 >> 2));
  }
  in_stack_00000050 = *param_1;
  if ((in_stack_00000050 != 0xffffffff) &&
     (lVar12 = (longlong)(int)(*(uint *)(unaff_RDI + 0x2d10) & in_stack_00000050),
     lVar10 = *(longlong *)
               (*(longlong *)(unaff_RDI + 0x2cf0) + (longlong)((int)in_stack_00000050 >> 10) * 8),
     *(int *)(lVar10 + lVar12 * 0xc) != -1)) {
    FUN_1800571e0(unaff_RDI + 0x2cd0,&stack0x00000050);
    *(undefined4 *)(lVar10 + lVar12 * 0xc) = 0xffffffff;
  }
  in_stack_00000050 = param_1[1];
  if ((in_stack_00000050 != 0xffffffff) &&
     (lVar12 = (longlong)(int)(*(uint *)(unaff_RDI + 0x418) & in_stack_00000050),
     lVar10 = *(longlong *)
               (*(longlong *)(unaff_RDI + 0x3f8) + (longlong)((int)in_stack_00000050 >> 10) * 8),
     *(int *)(lVar10 + lVar12 * 0xc) != -1)) {
    FUN_1800571e0(unaff_RDI + 0x3d8,&stack0x00000050);
    *(undefined4 *)(lVar10 + lVar12 * 0xc) = 0xffffffff;
  }
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x10);
  return;
joined_r0x0001804e078a:
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
LAB_1804e07a0:
    if (puVar6 == (ulonglong *)0x0) {
      uVar8 = *(ulonglong *)(unaff_RDI + 0x2b30);
      puVar6 = *(ulonglong **)(lVar10 + uVar8 * 8);
    }
    puVar11 = (undefined8 *)(lVar10 + uVar8 * 8);
    uVar2 = puVar6[2];
    puVar5 = puVar11;
    while (uVar2 == 0) {
      puVar3 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar3;
    }
    puVar3 = (ulonglong *)*puVar11;
    puVar4 = (ulonglong *)puVar3[2];
    if (puVar3 == puVar6) {
      *puVar11 = puVar4;
    }
    else {
      for (; puVar4 != puVar6; puVar4 = (ulonglong *)puVar4[2]) {
        puVar3 = puVar4;
      }
      puVar3[2] = puVar4[2];
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (uVar2 == *puVar6) goto LAB_1804e07a0;
  puVar6 = (ulonglong *)puVar6[2];
  goto joined_r0x0001804e078a;
}






// 函数: void FUN_1804e0706(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1804e0706(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int unaff_EBP;
  uint *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar10;
  longlong lVar11;
  uint in_stack_00000050;
  
  lVar11 = 0;
  do {
    uVar1 = *(uint *)(lVar11 + param_3);
    if (uVar1 != 0xffffffff) {
      lVar8 = (longlong)(int)(*(uint *)(unaff_RDI + 0x2b18) & uVar1) * 0xd8;
      lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 11000) + (longlong)((int)uVar1 >> 10) * 8);
      if (*(int *)(lVar8 + 0x14 + lVar7) != -1) {
        uVar2 = *(ulonglong *)(lVar8 + 8 + lVar7);
        lVar11 = *(longlong *)(unaff_RDI + 0x2b28);
        uVar9 = uVar2 % (ulonglong)*(uint *)(unaff_RDI + 0x2b30);
        puVar6 = *(ulonglong **)(lVar11 + uVar9 * 8);
        break;
      }
    }
    param_3 = *(longlong *)(unaff_RSI + 6);
    unaff_EBP = unaff_EBP + 1;
    lVar11 = lVar11 + 4;
    if ((ulonglong)(*(longlong *)(unaff_RSI + 8) - param_3 >> 2) <= (ulonglong)(longlong)unaff_EBP)
    {
      in_stack_00000050 = *unaff_RSI;
      if ((in_stack_00000050 != 0xffffffff) &&
         (lVar7 = (longlong)(int)(*(uint *)(unaff_RDI + 0x2d10) & in_stack_00000050),
         lVar11 = *(longlong *)
                   (*(longlong *)(unaff_RDI + 0x2cf0) + (longlong)((int)in_stack_00000050 >> 10) * 8
                   ), *(int *)(lVar11 + lVar7 * 0xc) != -1)) {
        FUN_1800571e0(unaff_RDI + 0x2cd0,&stack0x00000050);
        *(undefined4 *)(lVar11 + lVar7 * 0xc) = 0xffffffff;
      }
      in_stack_00000050 = unaff_RSI[1];
      if ((in_stack_00000050 != 0xffffffff) &&
         (lVar7 = (longlong)(int)(*(uint *)(unaff_RDI + 0x418) & in_stack_00000050),
         lVar11 = *(longlong *)
                   (*(longlong *)(unaff_RDI + 0x3f8) + (longlong)((int)in_stack_00000050 >> 10) * 8)
         , *(int *)(lVar11 + lVar7 * 0xc) != -1)) {
        FUN_1800571e0(unaff_RDI + 0x3d8,&stack0x00000050);
        *(undefined4 *)(lVar11 + lVar7 * 0xc) = 0xffffffff;
      }
      unaff_RSI[2] = 0xffffffff;
      unaff_RSI[3] = 0xffffffff;
      unaff_RSI[4] = 0xffffffff;
      *(undefined8 *)(unaff_RSI + 8) = *(undefined8 *)(unaff_RSI + 6);
      *(undefined8 *)(unaff_RSI + 0x12) = *(undefined8 *)(unaff_RSI + 0x10);
      return;
    }
  } while( true );
joined_r0x0001804e078a:
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
LAB_1804e07a0:
    if (puVar6 == (ulonglong *)0x0) {
      uVar9 = *(ulonglong *)(unaff_RDI + 0x2b30);
      puVar6 = *(ulonglong **)(lVar11 + uVar9 * 8);
    }
    puVar10 = (undefined8 *)(lVar11 + uVar9 * 8);
    uVar2 = puVar6[2];
    puVar5 = puVar10;
    while (uVar2 == 0) {
      puVar3 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar3;
    }
    puVar3 = (ulonglong *)*puVar10;
    puVar4 = (ulonglong *)puVar3[2];
    if (puVar3 == puVar6) {
      *puVar10 = puVar4;
    }
    else {
      for (; puVar4 != puVar6; puVar4 = (ulonglong *)puVar4[2]) {
        puVar3 = puVar4;
      }
      puVar3[2] = puVar4[2];
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (uVar2 == *puVar6) goto LAB_1804e07a0;
  puVar6 = (ulonglong *)puVar6[2];
  goto joined_r0x0001804e078a;
}






// 函数: void FUN_1804e08a1(void)
void FUN_1804e08a1(void)

{
  longlong lVar1;
  longlong lVar2;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = *unaff_RSI;
  if (uStack0000000000000050 != 0xffffffff) {
    lVar2 = (longlong)(int)(*(uint *)(unaff_RDI + 0x2d10) & uStack0000000000000050);
    lVar1 = *(longlong *)
             (*(longlong *)(unaff_RDI + 0x2cf0) + (longlong)((int)uStack0000000000000050 >> 10) * 8)
    ;
    if (*(int *)(lVar1 + lVar2 * 0xc) != -1) {
      FUN_1800571e0(unaff_RDI + 0x2cd0,&stack0x00000050);
      *(undefined4 *)(lVar1 + lVar2 * 0xc) = 0xffffffff;
    }
  }
  uStack0000000000000050 = unaff_RSI[1];
  if (uStack0000000000000050 != 0xffffffff) {
    lVar2 = (longlong)(int)(*(uint *)(unaff_RDI + 0x418) & uStack0000000000000050);
    lVar1 = *(longlong *)
             (*(longlong *)(unaff_RDI + 0x3f8) + (longlong)((int)uStack0000000000000050 >> 10) * 8);
    if (*(int *)(lVar1 + lVar2 * 0xc) != -1) {
      FUN_1800571e0(unaff_RDI + 0x3d8,&stack0x00000050);
      *(undefined4 *)(lVar1 + lVar2 * 0xc) = 0xffffffff;
    }
  }
  unaff_RSI[2] = 0xffffffff;
  unaff_RSI[3] = 0xffffffff;
  unaff_RSI[4] = 0xffffffff;
  *(undefined8 *)(unaff_RSI + 8) = *(undefined8 *)(unaff_RSI + 6);
  *(undefined8 *)(unaff_RSI + 0x12) = *(undefined8 *)(unaff_RSI + 0x10);
  return;
}






// 函数: void FUN_1804e08af(void)
void FUN_1804e08af(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R9;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = (uint)in_R9;
  in_R9 = (longlong)*(int *)(unaff_RDI + 0x2d10) & in_R9;
  lVar1 = *(longlong *)
           (*(longlong *)(unaff_RDI + 0x2cf0) + (longlong)((int)uStack0000000000000050 >> 10) * 8);
  if (*(int *)(lVar1 + in_R9 * 0xc) != -1) {
    FUN_1800571e0(unaff_RDI + 0x2cd0,&stack0x00000050);
    *(undefined4 *)(lVar1 + in_R9 * 0xc) = 0xffffffff;
  }
  uStack0000000000000050 = *(uint *)(unaff_RSI + 4);
  if (uStack0000000000000050 != 0xffffffff) {
    lVar2 = (longlong)(int)(*(uint *)(unaff_RDI + 0x418) & uStack0000000000000050);
    lVar1 = *(longlong *)
             (*(longlong *)(unaff_RDI + 0x3f8) + (longlong)((int)uStack0000000000000050 >> 10) * 8);
    if (*(int *)(lVar1 + lVar2 * 0xc) != -1) {
      FUN_1800571e0(unaff_RDI + 0x3d8,&stack0x00000050);
      *(undefined4 *)(lVar1 + lVar2 * 0xc) = 0xffffffff;
    }
  }
  *(undefined8 *)(unaff_RSI + 8) = 0xffffffffffffffff;
  *(undefined4 *)(unaff_RSI + 0x10) = 0xffffffff;
  *(undefined8 *)(unaff_RSI + 0x20) = *(undefined8 *)(unaff_RSI + 0x18);
  *(undefined8 *)(unaff_RSI + 0x48) = *(undefined8 *)(unaff_RSI + 0x40);
  return;
}






// 函数: void FUN_1804e0970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804e0970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar2 + 0xe8);
  plVar4 = *(longlong **)(lVar2 + 0xe0);
  if (plVar4 != plVar3) {
    do {
      if (*plVar4 == param_1 + 0x10) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    if (plVar4 != plVar3) {
      plVar1 = plVar4 + 1;
      if (plVar1 < plVar3) {
                    // WARNING: Subroutine does not return
        memmove(plVar4,plVar1,(longlong)plVar3 - (longlong)plVar1,param_4,0xfffffffffffffffe);
      }
      *(longlong **)(lVar2 + 0xe8) = plVar3 + -1;
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar2 + 0xe8);
  plVar4 = *(longlong **)(lVar2 + 0xe0);
  if (plVar4 != plVar3) {
    do {
      if (*plVar4 == param_1 + 0x2d30) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    if (plVar4 != plVar3) {
      plVar1 = plVar4 + 1;
      if (plVar1 < plVar3) {
                    // WARNING: Subroutine does not return
        memmove(plVar4,plVar1,(longlong)plVar3 - (longlong)plVar1,param_4,0xfffffffffffffffe);
      }
      *(longlong **)(lVar2 + 0xe8) = plVar3 + -1;
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x60d08) = 0;
  plVar3 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  return;
}






// 函数: void FUN_1804e0a70(longlong param_1,longlong *param_2)
void FUN_1804e0a70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  *(longlong **)(param_1 + 8) = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




