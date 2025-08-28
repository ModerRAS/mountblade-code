#include "TaleWorlds.Native.Split.h"

// 99_part_05_part032.c - 19 个函数

// 函数: void FUN_1802ebcf1(void)
void FUN_1802ebcf1(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar4;
  longlong lVar5;
  char unaff_R12B;
  
  lVar5 = 0;
  iVar3 = (int)(in_RAX >> 3);
  lVar4 = lVar5;
  if (0 < iVar3) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0x1e0) + lVar4 * 8);
      (**(code **)(*plVar1 + 0x1b8))(plVar1);
      cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
      if (cVar2 != '\0') {
        FUN_1801985e0(*(undefined8 *)(unaff_RBX + 0x20),plVar1,0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (((*(longlong *)(unaff_RBX + 0x260) != 0) &&
      (FUN_1802fa820(), (*(byte *)(*(longlong *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0)) &&
     (*(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1,
     *(longlong *)(unaff_RBX + 0x168) != 0)) {
    func_0x0001802eeba0();
  }
  if ((((unaff_R12B != '\0') &&
       (iVar3 = (int)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3),
       0 < iVar3)) &&
      ((((*(byte *)(unaff_RBX + 0x2e8) & 0x10) != 0 ||
        ((*(longlong **)(unaff_RBX + 0x270) != (longlong *)0x0 &&
         (cVar2 = (**(code **)(**(longlong **)(unaff_RBX + 0x270) + 0x70))(), cVar2 != '\0')))) ||
       ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) == 0)))) && (0 < (longlong)iVar3)) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x1c0) + lVar5 * 8) + 0x2ac) &
          0x20000000) == 0) {
        FUN_1802ebcb0();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((*(longlong *)(unaff_RBX + 0x260) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebd12(void)
void FUN_1802ebd12(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int iVar3;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  char unaff_R12B;
  
  uVar4 = unaff_RDI & 0xffffffff;
  do {
    plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0x1e0) + uVar4 * 8);
    (**(code **)(*plVar1 + 0x1b8))(plVar1);
    cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
    if (cVar2 != '\0') {
      FUN_1801985e0(*(undefined8 *)(unaff_RBX + 0x20),plVar1,0);
    }
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < unaff_RBP);
  if (*(longlong *)(unaff_RBX + 0x260) != 0) {
    FUN_1802fa820();
    if ((*(byte *)(*(longlong *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0) {
      *(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1;
      if (*(longlong *)(unaff_RBX + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  if ((unaff_R12B == '\0') ||
     (iVar3 = (int)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3),
     iVar3 < 1)) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(longlong **)(unaff_RBX + 0x270) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar2 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (longlong)iVar3) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        FUN_1802ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while ((longlong)unaff_RDI < (longlong)iVar3);
  }
LAB_1802ebe3a:
  if ((*(longlong *)(unaff_RBX + 0x260) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebd72(undefined8 param_1,undefined8 param_2)
void FUN_1802ebd72(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong unaff_RBX;
  int iVar2;
  longlong unaff_RDI;
  char unaff_R12B;
  
  if (*(longlong *)(unaff_RBX + 0x260) != 0) {
    FUN_1802fa820(*(longlong *)(unaff_RBX + 0x260),param_2,unaff_RBX + 0x70);
    if ((*(byte *)(*(longlong *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0) {
      *(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1;
      if (*(longlong *)(unaff_RBX + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  if ((unaff_R12B == '\0') ||
     (iVar2 = (int)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3),
     iVar2 < 1)) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(longlong **)(unaff_RBX + 0x270) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar1 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (longlong)iVar2) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        FUN_1802ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI < iVar2);
  }
LAB_1802ebe3a:
  if ((*(longlong *)(unaff_RBX + 0x260) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebd83(undefined8 param_1,undefined8 param_2)
void FUN_1802ebd83(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong unaff_RBX;
  int iVar2;
  longlong unaff_RDI;
  char unaff_R12B;
  
  FUN_1802fa820(param_1,param_2,unaff_RBX + 0x70);
  if ((*(byte *)(*(longlong *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0) {
    *(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1;
    if (*(longlong *)(unaff_RBX + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
  if ((unaff_R12B == '\0') ||
     (iVar2 = (int)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3),
     iVar2 < 1)) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(longlong **)(unaff_RBX + 0x270) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar1 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (longlong)iVar2) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        FUN_1802ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI < iVar2);
  }
LAB_1802ebe3a:
  if ((*(longlong *)(unaff_RBX + 0x260) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebdd9(void)
void FUN_1802ebdd9(void)

{
  char cVar1;
  longlong unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (unaff_ESI < 1) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(longlong **)(unaff_RBX + 0x270) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar1 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (longlong)unaff_ESI) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        FUN_1802ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI < unaff_ESI);
  }
LAB_1802ebe3a:
  if ((*(longlong *)(unaff_RBX + 0x260) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebe44(void)
void FUN_1802ebe44(void)

{
  longlong unaff_RBX;
  
  if ((*(longlong *)(unaff_RBX + 0x260) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebe5a(longlong param_1)
void FUN_1802ebe5a(longlong param_1)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(unaff_RBX + 0x28),*(longlong *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(undefined2 *)(unaff_RBX + 0x2b0) = *(undefined2 *)(unaff_RBX + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebec0(longlong param_1)
void FUN_1802ebec0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (((*(uint *)(param_1 + 0x2ac) & 0x200000) == 0) &&
     (bVar3 = (*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x80) -
              *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x88)) * *(float *)(param_1 + 0x94)
              + (*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x88) -
                *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x84)) *
                *(float *)(param_1 + 0x90) +
              (*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x84) -
              *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x80)) * *(float *)(param_1 + 0x98)
              < 0.0, (bool)(*(byte *)(param_1 + 0x2e8) >> 2 & 1) != bVar3)) {
    lVar4 = *(longlong *)(param_1 + 0xf0);
    iVar8 = 0;
    if (*(longlong *)(param_1 + 0xf8) - lVar4 >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar5 + lVar4);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar3);
        }
        lVar4 = *(longlong *)(param_1 + 0xf0);
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 8;
      } while ((ulonglong)(longlong)iVar8 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar4 >> 3))
      ;
    }
    lVar4 = *(longlong *)(param_1 + 0x260);
    if (lVar4 != 0) {
      iVar8 = 0;
      if (*(longlong *)(lVar4 + 0x1b0) - *(longlong *)(lVar4 + 0x1a8) >> 3 != 0) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(lVar5 + *(longlong *)(lVar4 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar3);
          lVar5 = lVar5 + 8;
          iVar8 = iVar8 + 1;
        } while ((ulonglong)(longlong)iVar8 <
                 (ulonglong)(*(longlong *)(lVar4 + 0x1b0) - *(longlong *)(lVar4 + 0x1a8) >> 3));
      }
      iVar8 = 0;
      if ('\0' < *(char *)(lVar4 + 0x20)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(lVar4 + 0x18);
          iVar6 = 0;
          if (*(longlong *)(lVar5 + 0xb8 + lVar2) - *(longlong *)(lVar5 + 0xb0 + lVar2) >> 3 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(longlong **)(lVar7 + *(longlong *)(lVar5 + 0xb0 + lVar2));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar3);
              lVar7 = lVar7 + 8;
              iVar6 = iVar6 + 1;
            } while ((ulonglong)(longlong)iVar6 <
                     (ulonglong)
                     (*(longlong *)(lVar5 + 0xb8 + lVar2) - *(longlong *)(lVar5 + 0xb0 + lVar2) >> 3
                     ));
          }
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 0x100;
        } while (iVar8 < *(char *)(lVar4 + 0x20));
      }
    }
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xfb;
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | bVar3 << 2;
  }
  return;
}






// 函数: void FUN_1802ebf08(float param_1,float param_2,float param_3,float param_4)
void FUN_1802ebf08(float param_1,float param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte in_AL;
  longlong in_RCX;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  int iVar5;
  char cVar6;
  undefined8 unaff_RSI;
  longlong lVar7;
  int iVar8;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  longlong unaff_R15;
  float in_XMM4_Da;
  float in_XMM5_Da;
  uint uStack0000000000000070;
  
  *(undefined8 *)(in_R11 + 0x20) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x18) = unaff_R12;
  cVar6 = (param_3 * in_XMM4_Da - param_1 * param_2) * *(float *)(in_RCX + 0x94) +
          (*(float *)(in_RCX + 0x74) * param_2 - param_3 * param_4) * *(float *)(in_RCX + 0x90) +
          (in_XMM5_Da * param_4 - *(float *)(in_RCX + 0x74) * in_XMM4_Da) *
          *(float *)(in_RCX + 0x98) < 0.0;
  uStack0000000000000070 = (uint)(byte)cVar6;
  if ((in_AL >> 2 & 1) != cVar6) {
    lVar3 = *(longlong *)(in_RCX + 0xf0);
    lVar4 = *(longlong *)(in_RCX + 0xf8);
    *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
    *(undefined8 *)(in_R11 + -0x10) = unaff_RDI;
    iVar8 = 0;
    *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
    if (lVar4 - lVar3 >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + lVar3);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
        }
        lVar3 = *(longlong *)(unaff_R15 + 0xf0);
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while ((ulonglong)(longlong)iVar8 <
               (ulonglong)(*(longlong *)(unaff_R15 + 0xf8) - lVar3 >> 3));
    }
    lVar3 = *(longlong *)(unaff_R15 + 0x260);
    if (lVar3 != 0) {
      iVar8 = 0;
      if (*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3 != 0) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
          lVar4 = lVar4 + 8;
          iVar8 = iVar8 + 1;
        } while ((ulonglong)(longlong)iVar8 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3));
      }
      iVar8 = 0;
      if ('\0' < *(char *)(lVar3 + 0x20)) {
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + 0x18);
          iVar5 = 0;
          if (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(longlong **)(lVar7 + *(longlong *)(lVar4 + 0xb0 + lVar2));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
              lVar7 = lVar7 + 8;
              iVar5 = iVar5 + 1;
            } while ((ulonglong)(longlong)iVar5 <
                     (ulonglong)
                     (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3
                     ));
          }
          iVar8 = iVar8 + 1;
          lVar4 = lVar4 + 0x100;
        } while (iVar8 < *(char *)(lVar3 + 0x20));
        cVar6 = (char)uStack0000000000000070;
      }
    }
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | cVar6 << 2;
  }
  return;
}






// 函数: void FUN_1802ebf14(longlong param_1,float param_2,float param_3,float param_4)
void FUN_1802ebf14(longlong param_1,float param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte in_AL;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong unaff_R15;
  float in_XMM0_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  uint uStack0000000000000070;
  
  cVar6 = (param_3 * in_XMM4_Da - in_XMM0_Da) * *(float *)(param_1 + 0x94) +
          (*(float *)(param_1 + 0x74) * param_2 - param_3 * param_4) * *(float *)(param_1 + 0x90) +
          (in_XMM5_Da * param_4 - *(float *)(param_1 + 0x74) * in_XMM4_Da) *
          *(float *)(param_1 + 0x98) < 0.0;
  uStack0000000000000070 = (uint)(byte)cVar6;
  if ((in_AL >> 2 & 1) != cVar6) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
    lVar4 = *(longlong *)(param_1 + 0xf8);
    *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
    *(undefined8 *)(in_R11 + -0x10) = unaff_RDI;
    iVar8 = 0;
    *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
    if (lVar4 - lVar3 >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + lVar3);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
        }
        lVar3 = *(longlong *)(unaff_R15 + 0xf0);
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while ((ulonglong)(longlong)iVar8 <
               (ulonglong)(*(longlong *)(unaff_R15 + 0xf8) - lVar3 >> 3));
    }
    lVar3 = *(longlong *)(unaff_R15 + 0x260);
    if (lVar3 != 0) {
      iVar8 = 0;
      if (*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3 != 0) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
          lVar4 = lVar4 + 8;
          iVar8 = iVar8 + 1;
        } while ((ulonglong)(longlong)iVar8 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3));
      }
      iVar8 = 0;
      if ('\0' < *(char *)(lVar3 + 0x20)) {
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + 0x18);
          iVar5 = 0;
          if (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(longlong **)(lVar7 + *(longlong *)(lVar4 + 0xb0 + lVar2));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
              lVar7 = lVar7 + 8;
              iVar5 = iVar5 + 1;
            } while ((ulonglong)(longlong)iVar5 <
                     (ulonglong)
                     (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3
                     ));
          }
          iVar8 = iVar8 + 1;
          lVar4 = lVar4 + 0x100;
        } while (iVar8 < *(char *)(lVar3 + 0x20));
        cVar6 = (char)uStack0000000000000070;
      }
    }
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | cVar6 << 2;
  }
  return;
}






// 函数: void FUN_1802ebf93(longlong param_1)
void FUN_1802ebf93(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  int iVar5;
  char unaff_SIL;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined1 unaff_R12B;
  undefined8 unaff_R14;
  longlong unaff_R15;
  char in_stack_00000070;
  
  lVar3 = *(longlong *)(param_1 + 0xf0);
  lVar4 = *(longlong *)(param_1 + 0xf8);
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RDI;
  iVar7 = 0;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  if (lVar4 - lVar3 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + lVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
      }
      lVar3 = *(longlong *)(unaff_R15 + 0xf0);
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(*(longlong *)(unaff_R15 + 0xf8) - lVar3 >> 3))
    ;
  }
  lVar3 = *(longlong *)(unaff_R15 + 0x260);
  if (lVar3 != 0) {
    iVar7 = 0;
    if (*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x1a8));
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
        lVar4 = lVar4 + 8;
        iVar7 = iVar7 + 1;
      } while ((ulonglong)(longlong)iVar7 <
               (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3));
    }
    iVar7 = 0;
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + 0x18);
        iVar5 = 0;
        if (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
          lVar6 = 0;
          do {
            plVar1 = *(longlong **)(lVar6 + *(longlong *)(lVar4 + 0xb0 + lVar2));
            (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
            lVar6 = lVar6 + 8;
            iVar5 = iVar5 + 1;
          } while ((ulonglong)(longlong)iVar5 <
                   (ulonglong)
                   (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3))
          ;
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 0x100;
        unaff_SIL = in_stack_00000070;
      } while (iVar7 < *(char *)(lVar3 + 0x20));
    }
  }
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}






// 函数: void FUN_1802ebfa4(undefined8 param_1,longlong param_2)
void FUN_1802ebfa4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char unaff_SIL;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined1 unaff_R12B;
  undefined8 unaff_R14;
  longlong unaff_R15;
  char in_stack_00000070;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RDI;
  iVar7 = 0;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  if (in_RAX >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + param_2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
      }
      param_2 = *(longlong *)(unaff_R15 + 0xf0);
      iVar7 = iVar7 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)(*(longlong *)(unaff_R15 + 0xf8) - param_2 >> 3));
  }
  lVar3 = *(longlong *)(unaff_R15 + 0x260);
  if (lVar3 != 0) {
    iVar7 = 0;
    if (*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x1a8));
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
        lVar4 = lVar4 + 8;
        iVar7 = iVar7 + 1;
      } while ((ulonglong)(longlong)iVar7 <
               (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3));
    }
    iVar7 = 0;
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + 0x18);
        iVar5 = 0;
        if (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
          lVar6 = 0;
          do {
            plVar1 = *(longlong **)(lVar6 + *(longlong *)(lVar4 + 0xb0 + lVar2));
            (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
            lVar6 = lVar6 + 8;
            iVar5 = iVar5 + 1;
          } while ((ulonglong)(longlong)iVar5 <
                   (ulonglong)
                   (*(longlong *)(lVar4 + 0xb8 + lVar2) - *(longlong *)(lVar4 + 0xb0 + lVar2) >> 3))
          ;
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 0x100;
        unaff_SIL = in_stack_00000070;
      } while (iVar7 < *(char *)(lVar3 + 0x20));
    }
  }
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}






// 函数: void FUN_1802ec01d(void)
void FUN_1802ec01d(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  int iVar4;
  char unaff_SIL;
  longlong lVar5;
  int unaff_EDI;
  undefined1 unaff_R12B;
  int iVar6;
  longlong unaff_R14;
  longlong unaff_R15;
  char in_stack_00000070;
  
  if (in_RAX != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(unaff_R14 + 0x1a8));
      (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
      lVar3 = lVar3 + 8;
      unaff_EDI = unaff_EDI + 1;
    } while ((ulonglong)(longlong)unaff_EDI <
             (ulonglong)(*(longlong *)(unaff_R14 + 0x1b0) - *(longlong *)(unaff_R14 + 0x1a8) >> 3));
  }
  iVar6 = 0;
  if ('\0' < *(char *)(unaff_R14 + 0x20)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(unaff_R14 + 0x18);
      iVar4 = 0;
      if (*(longlong *)(lVar3 + 0xb8 + lVar2) - *(longlong *)(lVar3 + 0xb0 + lVar2) >> 3 != 0) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(lVar5 + *(longlong *)(lVar3 + 0xb0 + lVar2));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
          lVar5 = lVar5 + 8;
          iVar4 = iVar4 + 1;
        } while ((ulonglong)(longlong)iVar4 <
                 (ulonglong)
                 (*(longlong *)(lVar3 + 0xb8 + lVar2) - *(longlong *)(lVar3 + 0xb0 + lVar2) >> 3));
      }
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + 0x100;
      unaff_SIL = in_stack_00000070;
    } while (iVar6 < *(char *)(unaff_R14 + 0x20));
  }
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}






// 函数: void FUN_1802ec075(void)
void FUN_1802ec075(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 unaff_R12B;
  int unaff_R13D;
  longlong unaff_R14;
  longlong unaff_R15;
  char in_stack_00000070;
  
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)(unaff_R14 + 0x18);
    iVar4 = 0;
    if (*(longlong *)(lVar3 + 0xb8 + lVar1) - *(longlong *)(lVar3 + 0xb0 + lVar1) >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + *(longlong *)(lVar3 + 0xb0 + lVar1));
        (**(code **)(*plVar2 + 0x1a0))(plVar2,unaff_R12B);
        lVar5 = lVar5 + 8;
        iVar4 = iVar4 + 1;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)
               (*(longlong *)(lVar3 + 0xb8 + lVar1) - *(longlong *)(lVar3 + 0xb0 + lVar1) >> 3));
    }
    unaff_R13D = unaff_R13D + 1;
    lVar3 = lVar3 + 0x100;
  } while (unaff_R13D < *(char *)(unaff_R14 + 0x20));
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | in_stack_00000070 << 2;
  return;
}






// 函数: void FUN_1802ec10b(void)
void FUN_1802ec10b(void)

{
  char unaff_SIL;
  longlong unaff_R15;
  
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}






// 函数: void FUN_1802ec110(void)
void FUN_1802ec110(void)

{
  char unaff_SIL;
  longlong unaff_R15;
  
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}






// 函数: void FUN_1802ec132(void)
void FUN_1802ec132(void)

{
  return;
}






// 函数: void FUN_1802ec13f(void)
void FUN_1802ec13f(void)

{
  return;
}






// 函数: void FUN_1802ec150(longlong param_1,char param_2)
void FUN_1802ec150(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != '\0') {
    FUN_180382d30(param_1 + 0x270,param_1,param_1 + 0x70);
  }
  FUN_1802ebec0(param_1);
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x170), lVar1 != 0)) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x29a8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,param_1 + 0x70);
  }
  if (((*(uint *)(param_1 + 0x2ac) & 0x1000) == 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x168), lVar1 != 0)) {
    *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
    if (*(longlong *)(lVar1 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
  FUN_1802eebe0(param_1);
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xef;
  return;
}






