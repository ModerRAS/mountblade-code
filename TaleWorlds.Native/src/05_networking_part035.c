#include "TaleWorlds.Native.Split.h"

// 05_networking_part035.c - 6 个函数

// 函数: void FUN_18085ec78(void)
void FUN_18085ec78(void)

{
  return;
}



undefined8 FUN_18085ec90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (int)*(uint *)(param_1 + 0x4cc) >> 0x1f;
  iVar3 = *(int *)(param_1 + 0x4c8) + 1;
  iVar1 = (*(uint *)(param_1 + 0x4cc) ^ uVar4) - uVar4;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar2 = FUN_180747f10((longlong *)(param_1 + 0x4c0),iVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + (longlong)*(int *)(param_1 + 0x4c8) * 8) =
       param_2;
  *(int *)(param_1 + 0x4c8) = *(int *)(param_1 + 0x4c8) + 1;
  return 0;
}



undefined8
FUN_18085ed00(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
             undefined8 param_5,char param_6,byte param_7)

{
  undefined8 uVar1;
  uint uVar2;
  longlong alStack_18 [2];
  
  alStack_18[0] = 0;
  uVar1 = FUN_180860480(param_1,param_2,alStack_18,1);
  if ((int)uVar1 == 0) {
    *(uint *)(alStack_18[0] + 0x1c) = *(uint *)(alStack_18[0] + 0x1c) | 1;
    uVar2 = ((uint)param_7 << 4 | *(uint *)(alStack_18[0] + 0x1c)) & ~((param_7 ^ 1) << 4);
    *(uint *)(alStack_18[0] + 0x1c) = uVar2;
    if (param_6 == '\0') {
      if ((((uVar2 >> 5 & 1) == 0) || ((uVar2 >> 6 & 1) != 0)) &&
         (uVar1 = FUN_180863930(param_1,alStack_18[0],0,0,0,1), (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    else {
      *(uint *)(alStack_18[0] + 0x1c) = ((uint)param_4 * 2 | uVar2 | 4) & ~((param_4 ^ 1) * 2);
      *(undefined8 *)(alStack_18[0] + 0x20) = param_5;
      uVar2 = *(uint *)(alStack_18[0] + 0x1c);
      if (((((uVar2 >> 5 & 1) == 0) || ((uVar2 >> 6 & 1) != 0)) &&
          (((uVar2 >> 2 & 1) != 0 || ((uVar2 >> 3 & 1) != 0)))) &&
         (uVar1 = FUN_1808c7260(param_3,alStack_18[0],(byte)(uVar2 >> 2) & 1,(byte)(uVar2 >> 3) & 1)
         , (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_18085ee30(longlong param_1,float param_2,int *param_3,float *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong alStackX_18 [2];
  
  if (*param_3 == 0) {
    return 0x1c;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x30);
  iVar1 = FUN_18085ab70(param_1 + 200);
  lVar3 = iVar1 + lVar3;
  alStackX_18[0] = 0;
  uVar2 = FUN_1808592c0(param_1 + 200,(int)(param_2 + 0.5) + lVar3,param_3,alStackX_18);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *param_4 = (float)(alStackX_18[0] - lVar3);
  }
  return uVar2;
}



undefined8 FUN_18085ee5e(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  float *unaff_R14;
  float unaff_XMM6_Da;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x30);
  iVar1 = FUN_18085ab70(param_1 + 200);
  lVar3 = iVar1 + lVar3;
  uVar2 = FUN_1808592c0(param_1 + 200,(int)(unaff_XMM6_Da + 0.5) + lVar3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *unaff_R14 = (float)-lVar3;
  }
  return uVar2;
}



undefined8 FUN_18085eec6(void)

{
  longlong unaff_RDI;
  float *unaff_R14;
  longlong in_stack_00000060;
  
  *unaff_R14 = (float)(in_stack_00000060 - unaff_RDI);
  return 0;
}



undefined8 FUN_18085ef10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar3 = FUN_1808605e0();
  if (iVar3 != 2) {
    uVar4 = FUN_18084efe0(*(undefined8 *)(param_1 + 0x2b0),param_1 + 0x338);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    func_0x0001808cf130(param_1 + 0x378,*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x30));
    func_0x0001808cf130(param_1 + 0x3f8,*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x30));
    plVar6 = (longlong *)0x0;
    plVar1 = (longlong *)(param_1 + 0x380);
    plVar5 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar2 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      plVar2 = plVar5 + 4;
    }
    while (plVar2 != plVar1) {
      plVar5 = plVar2 + -4;
      if (plVar2 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      uVar4 = (**(code **)(*plVar5 + 0x80))();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar2 == plVar1) break;
      plVar5 = (longlong *)(*plVar2 + -0x20);
      if (*plVar2 == 0) {
        plVar5 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar5 != (longlong *)0x0) {
        plVar2 = plVar5 + 4;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x400);
    plVar5 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar2 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      plVar2 = plVar5 + 4;
    }
    while (plVar2 != plVar1) {
      plVar5 = plVar2 + -4;
      if (plVar2 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      uVar4 = (**(code **)(*plVar5 + 0x80))();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar2 == plVar1) {
        return 0;
      }
      plVar5 = (longlong *)(*plVar2 + -0x20);
      if (*plVar2 == 0) {
        plVar5 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar5 != (longlong *)0x0) {
        plVar2 = plVar5 + 4;
      }
    }
  }
  return 0;
}



ulonglong FUN_18085f080(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((0.0 < *(float *)(param_1 + 0x2f0) || *(float *)(param_1 + 0x2f0) == 0.0) &&
     (*(char *)(param_1 + 0x5c) == '\0')) {
    cVar1 = func_0x0001808bc370(*(undefined8 *)(param_1 + 0x2c8));
    if (cVar1 == '\0') {
      return (ulonglong)*(uint *)(param_1 + 0x2f0);
    }
  }
  uVar2 = FUN_1808d2430(param_1 + 0x28,*(undefined8 *)(param_1 + 0x2c8));
  *(int *)(param_1 + 0x2f0) = (int)uVar2;
  return uVar2;
}



undefined8 FUN_18085f0e0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = FUN_1808ca6f0(param_1 + 0x378);
  if (((int)uVar4 == 0) && (uVar4 = FUN_1808ca6f0(param_1 + 0x3f8), (int)uVar4 == 0)) {
    puVar5 = (undefined8 *)(param_1 + 0x490);
    for (puVar1 = (undefined8 *)*puVar5; puVar1 != puVar5; puVar1 = (undefined8 *)*puVar1) {
      *(uint *)((longlong)puVar1 + 0x1c) = *(uint *)((longlong)puVar1 + 0x1c) & 0x33;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      if (puVar1 == puVar5) break;
    }
    uVar4 = FUN_18085f670(param_1);
    if ((int)uVar4 == 0) {
      for (puVar5 = *(undefined8 **)(param_1 + 0x4d0);
          (*(undefined8 **)(param_1 + 0x4d0) <= puVar5 &&
          (puVar5 < *(undefined8 **)(param_1 + 0x4d0) + *(int *)(param_1 + 0x4d8)));
          puVar5 = puVar5 + 1) {
        func_0x0001808cded0(*puVar5);
      }
      uVar4 = FUN_180853980(*(undefined8 *)(param_1 + 0x2b0));
      if ((((int)uVar4 == 0) &&
          ((*(longlong *)(param_1 + 0x478) == 0 ||
           (uVar4 = FUN_1808d9380(*(longlong *)(param_1 + 0x478),0), (int)uVar4 == 0)))) &&
         ((1 < *(int *)(param_1 + 0x2e4) - 1U ||
          (uVar4 = FUN_18073d8a0(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x78),
                                 *(uint *)(param_1 + 0x2d8) >> 0xc & 0xffffff01), (int)uVar4 == 0)))
         ) {
        *(undefined4 *)(param_1 + 0x2e4) = 0;
        *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffff7eff;
        uVar4 = FUN_1808624a0(param_1);
        if (((int)uVar4 == 0) &&
           ((*(longlong *)(param_1 + 0x2d0) == 0 ||
            (uVar4 = func_0x0001808c16c0(*(longlong *)(param_1 + 0x2d0),param_1,
                                         *(undefined8 *)(param_1 + 0x2c8)), (int)uVar4 == 0)))) {
          lVar2 = *(longlong *)(param_1 + 0x80);
          if (lVar2 != 0) {
            uVar3 = FUN_1808605e0(param_1);
            *(undefined4 *)(lVar2 + 0x80) = uVar3;
          }
          if ((param_2 != '\0') ||
             (((puVar5 = *(undefined8 **)(param_1 + 0x480), puVar5 == (undefined8 *)0x0 ||
               (uVar4 = (**(code **)*puVar5)(puVar5,param_1,0x20), (int)uVar4 == 0)) &&
              (((*(uint *)(param_1 + 0x2d8) >> 3 & 1) == 0 ||
               (uVar4 = FUN_18085fb30(param_1), (int)uVar4 == 0)))))) {
            *(undefined4 *)(param_1 + 0x488) = 0;
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}



undefined8 FUN_18085f11f(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong unaff_RBX;
  char unaff_SIL;
  
  for (puVar4 = (undefined8 *)*param_1; puVar4 != param_1; puVar4 = (undefined8 *)*puVar4) {
    *(uint *)((longlong)puVar4 + 0x1c) = *(uint *)((longlong)puVar4 + 0x1c) & 0x33;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    if (puVar4 == param_1) break;
  }
  uVar3 = FUN_18085f670();
  if ((int)uVar3 == 0) {
    for (puVar4 = *(undefined8 **)(unaff_RBX + 0x4d0);
        (*(undefined8 **)(unaff_RBX + 0x4d0) <= puVar4 &&
        (puVar4 < *(undefined8 **)(unaff_RBX + 0x4d0) + *(int *)(unaff_RBX + 0x4d8)));
        puVar4 = puVar4 + 1) {
      func_0x0001808cded0(*puVar4);
    }
    uVar3 = FUN_180853980(*(undefined8 *)(unaff_RBX + 0x2b0));
    if ((((int)uVar3 == 0) &&
        ((*(longlong *)(unaff_RBX + 0x478) == 0 ||
         (uVar3 = FUN_1808d9380(*(longlong *)(unaff_RBX + 0x478),0), (int)uVar3 == 0)))) &&
       ((1 < *(int *)(unaff_RBX + 0x2e4) - 1U ||
        (uVar3 = FUN_18073d8a0(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x2b0) + 0x78),
                               *(uint *)(unaff_RBX + 0x2d8) >> 0xc & 0xffffff01), (int)uVar3 == 0)))
       ) {
      *(undefined4 *)(unaff_RBX + 0x2e4) = 0;
      *(uint *)(unaff_RBX + 0x2d8) = *(uint *)(unaff_RBX + 0x2d8) & 0xffff7eff;
      uVar3 = FUN_1808624a0();
      if (((int)uVar3 == 0) &&
         ((*(longlong *)(unaff_RBX + 0x2d0) == 0 || (uVar3 = func_0x0001808c16c0(), (int)uVar3 == 0)
          ))) {
        lVar1 = *(longlong *)(unaff_RBX + 0x80);
        if (lVar1 != 0) {
          uVar2 = FUN_1808605e0();
          *(undefined4 *)(lVar1 + 0x80) = uVar2;
        }
        if ((unaff_SIL != '\0') ||
           (((*(undefined8 **)(unaff_RBX + 0x480) == (undefined8 *)0x0 ||
             (uVar3 = (**(code **)**(undefined8 **)(unaff_RBX + 0x480))(), (int)uVar3 == 0)) &&
            (((*(uint *)(unaff_RBX + 0x2d8) >> 3 & 1) == 0 ||
             (uVar3 = FUN_18085fb30(), (int)uVar3 == 0)))))) {
          *(undefined4 *)(unaff_RBX + 0x488) = 0;
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}



undefined8 FUN_18085f163(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  char unaff_SIL;
  
  for (; (*(undefined8 **)(unaff_RBX + 0x4d0) <= param_1 &&
         (param_1 < *(undefined8 **)(unaff_RBX + 0x4d0) + *(int *)(unaff_RBX + 0x4d8)));
      param_1 = param_1 + 1) {
    func_0x0001808cded0(*param_1);
  }
  uVar3 = FUN_180853980(*(undefined8 *)(unaff_RBX + 0x2b0));
  if ((int)uVar3 == 0) {
    if ((*(longlong *)(unaff_RBX + 0x478) != 0) &&
       (uVar3 = FUN_1808d9380(*(longlong *)(unaff_RBX + 0x478),0), (int)uVar3 != 0)) {
      return uVar3;
    }
    if ((*(int *)(unaff_RBX + 0x2e4) - 1U < 2) &&
       (uVar3 = FUN_18073d8a0(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x2b0) + 0x78),
                              *(uint *)(unaff_RBX + 0x2d8) >> 0xc & 0xffffff01), (int)uVar3 != 0)) {
      return uVar3;
    }
    *(undefined4 *)(unaff_RBX + 0x2e4) = unaff_EBP;
    *(uint *)(unaff_RBX + 0x2d8) = *(uint *)(unaff_RBX + 0x2d8) & 0xffff7eff;
    uVar3 = FUN_1808624a0();
    if ((int)uVar3 == 0) {
      if ((*(longlong *)(unaff_RBX + 0x2d0) != 0) &&
         (uVar3 = func_0x0001808c16c0(), (int)uVar3 != 0)) {
        return uVar3;
      }
      lVar1 = *(longlong *)(unaff_RBX + 0x80);
      if (lVar1 != 0) {
        uVar2 = FUN_1808605e0();
        *(undefined4 *)(lVar1 + 0x80) = uVar2;
      }
      if (unaff_SIL == '\0') {
        if ((*(undefined8 **)(unaff_RBX + 0x480) != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)**(undefined8 **)(unaff_RBX + 0x480))(), (int)uVar3 != 0)) {
          return uVar3;
        }
        if (((*(uint *)(unaff_RBX + 0x2d8) >> 3 & 1) != 0) &&
           (uVar3 = FUN_18085fb30(), (int)uVar3 != 0)) {
          return uVar3;
        }
      }
      *(undefined4 *)(unaff_RBX + 0x488) = unaff_EBP;
      uVar3 = 0;
    }
  }
  return uVar3;
}





// 函数: void FUN_18085f294(void)
void FUN_18085f294(void)

{
  return;
}





// 函数: void FUN_18085f299(void)
void FUN_18085f299(void)

{
  return;
}



undefined8 FUN_18085f2b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_18085ef10();
  if ((int)uVar2 == 0) {
    lVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x2c8) + 0x778) +
            *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x30);
    *(longlong *)(param_1 + 0x328) = lVar3;
    FUN_1808d0490(param_1 + 0x378,lVar3,1);
    FUN_1808d0490(param_1 + 0x3f8,*(undefined8 *)(param_1 + 0x328),1);
    lVar3 = *(longlong *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x2e4) = 5;
    if (lVar3 != 0) {
      uVar1 = FUN_1808605e0(param_1);
      *(undefined4 *)(lVar3 + 0x80) = uVar1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_18085f2d3(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong in_RAX;
  longlong unaff_RBX;
  
  *(ulonglong *)(unaff_RBX + 0x328) =
       (ulonglong)*(uint *)(in_RAX + 0x778) + *(longlong *)(*(longlong *)(unaff_RBX + 0x2b0) + 0x30)
  ;
  FUN_1808d0490();
  FUN_1808d0490(unaff_RBX + 0x3f8,*(undefined8 *)(unaff_RBX + 0x328),1);
  lVar1 = *(longlong *)(unaff_RBX + 0x80);
  *(undefined4 *)(unaff_RBX + 0x2e4) = 5;
  if (lVar1 != 0) {
    uVar2 = FUN_1808605e0();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
  }
  return 0;
}





// 函数: void FUN_18085f336(void)
void FUN_18085f336(void)

{
  return;
}



undefined8 FUN_18085f340(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_18085ef10();
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1808d5480(param_1 + 0x280,*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x30));
    if ((int)uVar3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x2e4) = 4;
      if (lVar1 != 0) {
        uVar2 = FUN_1808605e0(param_1);
        *(undefined4 *)(lVar1 + 0x80) = uVar2;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



undefined8 FUN_18085f36d(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong unaff_RBX;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x80);
  *(undefined4 *)(unaff_RBX + 0x2e4) = 4;
  if (lVar1 != 0) {
    uVar2 = FUN_1808605e0();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
  }
  return 0;
}





// 函数: void FUN_18085f39d(void)
void FUN_18085f39d(void)

{
  return;
}



undefined8 FUN_18085f440(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x4c0);
      (*(undefined8 **)(param_1 + 0x4c0) <= puVar2 &&
      (puVar2 < *(undefined8 **)(param_1 + 0x4c0) + *(int *)(param_1 + 0x4c8))); puVar2 = puVar2 + 1
      ) {
    uVar1 = FUN_1808b42b0(*puVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint FUN_18085f500(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if ((*(float *)(param_1 + 0x2f0) <= 0.0 && *(float *)(param_1 + 0x2f0) != 0.0) ||
     (*(char *)(param_1 + 0x5c) != '\0')) {
LAB_18085f53c:
    uVar4 = FUN_1808d2430(param_1 + 0x28,*(undefined8 *)(param_1 + 0x2c8));
    *(undefined4 *)(param_1 + 0x2f0) = uVar4;
  }
  else {
    cVar1 = func_0x0001808bc370(*(undefined8 *)(param_1 + 0x2c8));
    if (cVar1 != '\0') goto LAB_18085f53c;
  }
  fVar5 = *(float *)(param_1 + 0x2f0);
  if ((0.0 < *(float *)(param_2 + 0x2f0) || *(float *)(param_2 + 0x2f0) == 0.0) &&
     (*(char *)(param_2 + 0x5c) == '\0')) {
    cVar1 = func_0x0001808bc370(*(undefined8 *)(param_2 + 0x2c8));
    if (cVar1 == '\0') goto LAB_18085f593;
  }
  uVar4 = FUN_1808d2430(param_2 + 0x28,*(undefined8 *)(param_2 + 0x2c8));
  *(undefined4 *)(param_2 + 0x2f0) = uVar4;
LAB_18085f593:
  fVar5 = fVar5 - *(float *)(param_2 + 0x2f0);
  uVar3 = (uint)(0.0 < fVar5) - (uint)(fVar5 < 0.0);
  uVar2 = (int)(uVar3 * -0x80000000) >> 0x1f;
  return (*(int *)(param_2 + 0x2e8) - *(int *)(param_1 + 0x2e8) >> 0x1e & 0xfffffffeU) + 1 & ~uVar2
         | uVar2 & uVar3;
}



undefined8
FUN_18085f5f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x480);
  if ((plVar1 != (longlong *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3,param_4,param_5,param_6),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



undefined8
FUN_18085f630(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x480);
  if ((plVar1 != (longlong *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3,param_4,param_5),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}





// 函数: void FUN_18085f670(longlong param_1)
void FUN_18085f670(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x240);
  plVar4 = (longlong *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = plVar4 + 3;
  }
  while (plVar2 != plVar1) {
    plVar4 = plVar2 + -3;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    iVar3 = FUN_1808d5ee0(plVar4);
    if (iVar3 != 0) {
      return;
    }
    if (plVar2 == plVar1) break;
    plVar4 = (longlong *)(*plVar2 + -0x18);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 3;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x250);
  plVar4 = (longlong *)(*plVar1 + -8);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = plVar4 + 1;
  }
  while (plVar2 != plVar1) {
    plVar4 = plVar2 + -1;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    FUN_1808d71b0(plVar4,0);
    if (plVar2 == plVar1) break;
    plVar4 = (longlong *)(*plVar2 + -8);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 1;
    }
  }
  FUN_18085a980(param_1 + 200);
  return;
}



undefined8
FUN_18085f790(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
             byte param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_28 [16];
  
  lVar3 = FUN_18085fea0();
  if (lVar3 == 0) {
    return 0x1c;
  }
  uVar1 = (uint)param_6 * 4 + 4;
  if ((param_5 != '\0') && ((*(uint *)(lVar3 + 0x1c) & uVar1) == 0)) {
    return 0;
  }
  if ((param_4 == '\0') && (*(longlong *)(lVar3 + 0x20 + (ulonglong)param_6 * 8) != 0)) {
    return 0x1c;
  }
  *(undefined8 *)(lVar3 + 0x20 + (ulonglong)param_6 * 8) = 0;
  uVar1 = ~uVar1 & *(uint *)(lVar3 + 0x1c);
  *(uint *)(lVar3 + 0x1c) = uVar1;
  uVar5 = (param_6 + 1) * 0x100;
  if ((((uVar1 >> 5 & 1) == 0) || ((uVar1 >> 6 & 1) != 0)) || (param_4 != '\0')) {
    uVar4 = FUN_180863930(param_1,lVar3,param_3,0,param_6,1);
    iVar2 = (int)uVar4;
  }
  else {
    if ((uVar5 & uVar1) == 0) goto LAB_18085f8b2;
    (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x30))(*(longlong **)(lVar3 + 0x10),auStack_28);
    uVar4 = FUN_1808ca4f0(param_1 + 0x378 + (ulonglong)(~(uVar1 >> 1) & 1) * 0x80,auStack_28,param_3
                          ,param_6);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 0) {
    return uVar4;
  }
LAB_18085f8b2:
  *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & ~uVar5;
  return 0;
}



undefined8 FUN_18085f812(void)

{
  uint in_EAX;
  int iVar1;
  undefined8 uVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R12;
  char unaff_R15B;
  
  *(uint *)(unaff_RDI + 0x1c) = in_EAX;
  if ((((in_EAX >> 5 & 1) == 0) || ((in_EAX >> 6 & 1) != 0)) || (unaff_R15B != '\0')) {
    uVar2 = FUN_180863930();
    iVar1 = (int)uVar2;
  }
  else {
    if ((unaff_ESI << 8 & in_EAX) == 0) goto LAB_18085f8b2;
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x30))
              (*(longlong **)(unaff_RDI + 0x10),&stack0x00000030);
    uVar2 = FUN_1808ca4f0(unaff_R12 + 0x378 + (ulonglong)(~(in_EAX >> 1) & 1) * 0x80,
                          &stack0x00000030);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    return uVar2;
  }
LAB_18085f8b2:
  *(uint *)(unaff_RDI + 0x1c) = *(uint *)(unaff_RDI + 0x1c) & ~(unaff_ESI << 8);
  return 0;
}





