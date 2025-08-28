#include "TaleWorlds.Native.Split.h"

// 99_part_05_part055.c - 9 个函数

// 函数: void FUN_1802fc520(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802fc520(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 unaff_RDI;
  float fVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1000) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0) {
      if (*(short *)(param_1 + 0x40) != 4) {
        if (*(float *)(param_1 + 0x3c) < 0.0) {
          fVar5 = 0.1;
        }
        else {
          fVar5 = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
        }
        *(float *)(param_1 + 0x34) = fVar5;
        *(undefined2 *)(param_1 + 0x40) = 4;
        if ((*(longlong *)(param_1 + 0x130) != 0) || (*(longlong *)(param_1 + 0x138) != 0)) {
          (**(code **)(param_1 + 0x138))(*(longlong *)(param_1 + 0x130),param_1);
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (param_2 == '\0') {
        FUN_1802fb960(param_1,*(longlong *)(param_1 + 0x10) + 0x70,1,param_4,unaff_RDI);
      }
      if (((byte)*(ushort *)(param_1 + 0xa8) >> 2 & 1) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & 0xfffb;
        psVar1 = (short *)(lVar2 + 0x2b0);
        *psVar1 = *psVar1 + 1;
        if (*(longlong *)(lVar2 + 0x168) != 0) {
          func_0x0001802eeba0();
        }
      }
      if (((*(longlong *)(param_1 + 0xd0) != 0) &&
          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x1000) != 0)) &&
         (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)) {
        (**(code **)(**(longlong **)(lVar3 + 0x318) + 0xe0))();
        *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x1000) = 0;
      }
      cVar4 = '\0';
      if ('\0' < *(char *)(param_1 + 0x20)) {
        do {
          lVar3 = (longlong)cVar4;
          cVar4 = cVar4 + '\x01';
          *(undefined8 *)(lVar3 * 0x100 + 0xf0 + *(longlong *)(param_1 + 0x18)) = 0;
        } while (cVar4 < *(char *)(param_1 + 0x20));
      }
      if (*(float *)(param_1 + 0x3c) < 0.0) {
        fVar5 = 0.1;
      }
      else {
        fVar5 = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
      }
      *(float *)(param_1 + 0x34) = fVar5;
      if ((*(longlong *)(param_1 + 0x10) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
        FUN_1801b6ae0(lVar3,param_1);
      }
      *(undefined2 *)(param_1 + 0x40) = 0;
      if ((*(longlong *)(param_1 + 0x130) != 0) || (*(longlong *)(param_1 + 0x138) != 0)) {
        (**(code **)(param_1 + 0x138))(*(longlong *)(param_1 + 0x130),param_1);
      }
      return;
    }
    *(undefined8 *)(lVar3 + 0x1000) = 0;
    if (*(float *)(param_1 + 0x3c) < 0.0) {
      fVar5 = 0.1;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
      FUN_1801b6ae0(lVar3,param_1);
    }
    *(undefined2 *)(param_1 + 0x40) = 0;
    if ((*(longlong *)(param_1 + 0x130) != 0) || (*(longlong *)(param_1 + 0x138) != 0)) {
      (**(code **)(param_1 + 0x138))(*(longlong *)(param_1 + 0x130),param_1);
    }
  }
  return;
}






// 函数: void FUN_1802fc640(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802fc640(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1802fc790(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_1802fca80(param_1,*param_2,uVar1);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



longlong * FUN_1802fc690(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  uVar5 = 0;
  *param_2 = 0;
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  uVar7 = uVar5;
  uVar8 = uVar5;
  if (*(longlong *)(param_1 + 0x1b0) - lVar4 >> 3 != 0) {
    do {
      iVar3 = (**(code **)(**(longlong **)(uVar8 + lVar4) + 0x98))();
      if (iVar3 == param_3) {
        if (param_4 == (int)uVar5) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)(int)uVar7 * 8);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x28))(plVar1);
          }
          plVar2 = (longlong *)*param_2;
          *param_2 = (longlong)plVar1;
          if (plVar2 == (longlong *)0x0) {
            return param_2;
          }
          (**(code **)(*plVar2 + 0x38))();
          return param_2;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
      lVar4 = *(longlong *)(param_1 + 0x1a8);
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - lVar4 >> 3));
  }
  return param_2;
}



char FUN_1802fc790(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  cVar5 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    do {
      lVar6 = (longlong)cVar5 * 0x100;
      plVar1 = *(longlong **)(lVar6 + 0xb8 + lVar3);
      plVar4 = *(longlong **)(lVar6 + 0xb0 + lVar3);
      if (plVar4 != plVar1) {
        while ((longlong *)*plVar4 != param_2) {
          iVar2 = (**(code **)(*(longlong *)*plVar4 + 0x98))();
          if (((iVar2 == 3) && (*(longlong **)(*plVar4 + 0x48) == param_2)) ||
             (plVar4 = plVar4 + 1, plVar4 == plVar1)) break;
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (plVar4 != *(longlong **)(lVar6 + 0xb8 + lVar3)) {
        return cVar5;
      }
      cVar5 = cVar5 + '\x01';
    } while (cVar5 < *(char *)(param_1 + 0x20));
  }
  return -1;
}






// 函数: void FUN_1802fc840(longlong param_1,undefined8 param_2)
void FUN_1802fc840(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar3 = 0;
    do {
      FUN_1802548a0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + lVar3),param_2);
      lVar3 = lVar3 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
  }
  cVar4 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      iVar1 = 0;
      lVar3 = (longlong)cVar4 * 0x100;
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb8 + lVar3) -
          *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar3) >> 3 != 0) {
        lVar2 = 0;
        do {
          FUN_1802548a0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar3) + lVar2),
                        param_2);
          lVar2 = lVar2 + 8;
          iVar1 = iVar1 + 1;
        } while ((ulonglong)(longlong)iVar1 <
                 (ulonglong)
                 (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb8 + lVar3) -
                  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar3) >> 3));
      }
      cVar4 = cVar4 + '\x01';
    } while (cVar4 < *(char *)(param_1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802fc8c0(void)
void FUN_1802fc8c0(void)

{
  longlong unaff_RBX;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char unaff_R14B;
  
  do {
    iVar1 = 0;
    lVar3 = (longlong)unaff_R14B * 0x100;
    if (*(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb8 + lVar3) -
        *(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb0 + lVar3) >> 3 != 0) {
      lVar2 = 0;
      do {
        FUN_1802548a0(*(undefined8 *)
                       (*(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb0 + lVar3) + lVar2));
        lVar2 = lVar2 + 8;
        iVar1 = iVar1 + 1;
      } while ((ulonglong)(longlong)iVar1 <
               (ulonglong)
               (*(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb8 + lVar3) -
                *(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb0 + lVar3) >> 3));
    }
    unaff_R14B = unaff_R14B + '\x01';
  } while (unaff_R14B < *(char *)(unaff_RBX + 0x20));
  return;
}






// 函数: void FUN_1802fc94c(void)
void FUN_1802fc94c(void)

{
  return;
}






// 函数: void FUN_1802fc960(longlong param_1,undefined8 param_2)
void FUN_1802fc960(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar3 = 0;
    do {
      FUN_1802549d0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + lVar3),param_2);
      lVar3 = lVar3 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
  }
  cVar4 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      iVar1 = 0;
      lVar3 = (longlong)cVar4 * 0x100;
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb8 + lVar3) -
          *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar3) >> 3 != 0) {
        lVar2 = 0;
        do {
          FUN_1802549d0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar3) + lVar2),
                        param_2);
          lVar2 = lVar2 + 8;
          iVar1 = iVar1 + 1;
        } while ((ulonglong)(longlong)iVar1 <
                 (ulonglong)
                 (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb8 + lVar3) -
                  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar3) >> 3));
      }
      cVar4 = cVar4 + '\x01';
    } while (cVar4 < *(char *)(param_1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802fc9e0(void)
void FUN_1802fc9e0(void)

{
  longlong unaff_RBX;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char unaff_R14B;
  
  do {
    iVar1 = 0;
    lVar3 = (longlong)unaff_R14B * 0x100;
    if (*(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb8 + lVar3) -
        *(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb0 + lVar3) >> 3 != 0) {
      lVar2 = 0;
      do {
        FUN_1802549d0(*(undefined8 *)
                       (*(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb0 + lVar3) + lVar2));
        lVar2 = lVar2 + 8;
        iVar1 = iVar1 + 1;
      } while ((ulonglong)(longlong)iVar1 <
               (ulonglong)
               (*(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb8 + lVar3) -
                *(longlong *)(*(longlong *)(unaff_RBX + 0x18) + 0xb0 + lVar3) >> 3));
    }
    unaff_R14B = unaff_R14B + '\x01';
  } while (unaff_R14B < *(char *)(unaff_RBX + 0x20));
  return;
}






// 函数: void FUN_1802fca6c(void)
void FUN_1802fca6c(void)

{
  return;
}






// 函数: void FUN_1802fca80(longlong param_1,longlong *param_2,char param_3,undefined8 param_4)
void FUN_1802fca80(longlong param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *aplStackX_10 [2];
  longlong **pplStackX_20;
  undefined8 uVar3;
  undefined4 uStack_2c;
  
  if (param_2 != (longlong *)0x0) {
    uVar3 = 0xfffffffffffffffe;
    if (param_3 == -1) {
      plVar1 = (longlong *)
               FUN_1802f4600(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0),
                             param_2,param_4,0xfffffffffffffffe);
      if (plVar1 != *(longlong **)(param_1 + 0x1b0)) {
        param_2 = (longlong *)*plVar1;
        (**(code **)(*param_2 + 0x1e0))(param_2,0);
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0)) {
          FUN_1802549d0(param_2);
        }
        *(undefined4 *)(param_2 + 2) = 4;
        *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2c;
        *(undefined4 *)(param_2 + 3) = 0;
        *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        param_2[4] = 0;
        FUN_1800ba050(param_1 + 0x1a8,plVar1);
      }
      lVar2 = FUN_1802f4600(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1d0),
                            param_2,param_4,uVar3);
      if (lVar2 != *(longlong *)(param_1 + 0x1d0)) {
        FUN_1800ba050(param_1 + 0x1c8,lVar2);
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x18);
      pplStackX_20 = aplStackX_10;
      aplStackX_10[0] = param_2;
      (**(code **)(*param_2 + 0x28))(param_2);
      FUN_1802f9710((longlong)param_3 * 0x100 + lVar2,aplStackX_10,param_1);
    }
    if (0.0 <= *(float *)(param_1 + 0x3c)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
      return;
    }
    *(undefined4 *)(param_1 + 0x34) = 0x3dcccccd;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




