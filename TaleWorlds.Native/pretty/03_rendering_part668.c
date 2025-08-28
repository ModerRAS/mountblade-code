#include "TaleWorlds.Native.Split.h"

// 03_rendering_part668.c - 12 个函数

// 函数: void FUN_18064cf3c(longlong param_1)
void FUN_18064cf3c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined *in_RAX;
  ulonglong uVar3;
  longlong unaff_RBX;
  undefined *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  char cVar7;
  byte bVar8;
  longlong in_R10;
  ulonglong uVar9;
  longlong in_R11;
  ulonglong uVar10;
  
  puVar4 = &UNK_1809fb2d0;
  if (in_RAX != (undefined *)0x0) {
    puVar4 = in_RAX;
  }
  uVar10 = in_R11 + 7U >> 3;
  if (*(undefined **)(param_1 + 8 + uVar10 * 8) != puVar4) {
    if (uVar10 < 2) {
      uVar9 = 0;
    }
    else {
      if (uVar10 < 9) {
        bVar8 = (char)uVar10 + 1U & 0xfe;
      }
      else if (uVar10 < 0x801) {
        uVar9 = uVar10 - 1;
        if (uVar9 == 0) {
          cVar7 = '\0';
        }
        else {
          lVar1 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          cVar7 = '?' - ('?' - (char)lVar1);
        }
        bVar8 = (((byte)(uVar9 >> (cVar7 - 2U & 0x3f)) & 3) - 3) + cVar7 * '\x04';
      }
      else {
        bVar8 = 0x49;
      }
      uVar9 = in_R10 - 0x18;
      while( true ) {
        uVar5 = *(longlong *)(uVar9 + 0x10) + 7U >> 3;
        if (uVar5 < 2) {
          bVar2 = 1;
        }
        else if (uVar5 < 9) {
          bVar2 = (char)uVar5 + 1U & 0xfe;
        }
        else if (uVar5 < 0x801) {
          uVar3 = uVar5 - 1;
          if (uVar3 == 0) {
            cVar7 = '\0';
          }
          else {
            lVar1 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            cVar7 = '?' - ('?' - (char)lVar1);
          }
          bVar2 = (((byte)(uVar3 >> (cVar7 - 2U & 0x3f)) & 3) - 3) + cVar7 * '\x04';
        }
        else {
          bVar2 = 0x49;
        }
        if ((bVar8 != bVar2) || (uVar9 <= unaff_RBX + 0x410U)) break;
        uVar9 = uVar9 - 0x18;
      }
      uVar9 = uVar5 + 1;
      if (uVar10 < uVar5 + 1) {
        uVar9 = uVar10;
      }
    }
    puVar6 = (undefined8 *)(param_1 + 8 + uVar9 * 8);
    for (uVar10 = (uVar10 - uVar9) * 8 + 8 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}





// 函数: void FUN_18064cf6a(void)
void FUN_18064cf6a(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  longlong in_R10;
  ulonglong uVar8;
  ulonglong in_R11;
  longlong unaff_R14;
  
  if (in_R11 < 2) {
    uVar8 = 0;
  }
  else {
    if (in_R11 < 9) {
      bVar7 = (char)in_R11 + 1U & 0xfe;
    }
    else if (in_R11 < 0x801) {
      uVar8 = in_R11 - 1;
      if (uVar8 == 0) {
        cVar6 = '\0';
      }
      else {
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        cVar6 = '?' - ('?' - (char)lVar1);
      }
      bVar7 = (((byte)(uVar8 >> (cVar6 - 2U & 0x3f)) & 3) - 3) + cVar6 * '\x04';
    }
    else {
      bVar7 = 0x49;
    }
    uVar8 = in_R10 - 0x18;
    while( true ) {
      uVar4 = *(longlong *)(uVar8 + 0x10) + 7U >> 3;
      if (uVar4 < 2) {
        bVar2 = 1;
      }
      else if (uVar4 < 9) {
        bVar2 = (char)uVar4 + 1U & 0xfe;
      }
      else if (uVar4 < 0x801) {
        uVar3 = uVar4 - 1;
        if (uVar3 == 0) {
          cVar6 = '\0';
        }
        else {
          lVar1 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          cVar6 = '?' - ('?' - (char)lVar1);
        }
        bVar2 = (((byte)(uVar3 >> (cVar6 - 2U & 0x3f)) & 3) - 3) + cVar6 * '\x04';
      }
      else {
        bVar2 = 0x49;
      }
      if ((bVar7 != bVar2) || (uVar8 <= unaff_RBX + 0x410U)) break;
      uVar8 = uVar8 - 0x18;
    }
    uVar8 = uVar4 + 1;
    if (in_R11 < uVar4 + 1) {
      uVar8 = in_R11;
    }
  }
  puVar5 = (undefined8 *)(unaff_R14 + uVar8 * 8);
  for (uVar4 = (in_R11 - uVar8) * 8 + 8 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = unaff_RSI;
    puVar5 = puVar5 + 1;
  }
  return;
}





// 函数: void FUN_18064d084(void)
void FUN_18064d084(void)

{
  return;
}





// 函数: void FUN_18064d08e(void)
void FUN_18064d08e(void)

{
  return;
}





// 函数: void FUN_18064d090(longlong *param_1,longlong param_2)
void FUN_18064d090(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x40) = *(undefined8 *)(param_2 + 0x40);
  }
  if (param_2 == param_1[1]) {
    param_1[1] = *(longlong *)(param_2 + 0x40);
  }
  if (param_2 == *param_1) {
    *param_1 = *(longlong *)(param_2 + 0x38);
    FUN_18064cf20(lVar2,param_1);
  }
  plVar1 = (longlong *)(lVar2 + 0xbc8);
  *plVar1 = *plVar1 + -1;
  *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xfe;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}





// 函数: void FUN_18064d110(longlong param_1,longlong *param_2,longlong param_3)
void FUN_18064d110(longlong param_1,longlong *param_2,longlong param_3)

{
  *(byte *)(param_3 + 0xe) = param_2[2] == 0x4010 | *(byte *)(param_3 + 0xe) & 0xfe;
  *(longlong *)(param_3 + 0x38) = *param_2;
  *(undefined8 *)(param_3 + 0x40) = 0;
  if (*param_2 == 0) {
    param_2[1] = param_3;
  }
  else {
    *(longlong *)(*param_2 + 0x40) = param_3;
  }
  *param_2 = param_3;
  FUN_18064cf20();
  *(longlong *)(param_1 + 0xbc8) = *(longlong *)(param_1 + 0xbc8) + 1;
  return;
}





// 函数: void FUN_18064d170(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_18064d170(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  if (*(longlong *)(param_3 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x38) = *(undefined8 *)(param_3 + 0x38);
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    *(undefined8 *)(*(longlong *)(param_3 + 0x38) + 0x40) = *(undefined8 *)(param_3 + 0x40);
  }
  if (param_3 == param_2[1]) {
    param_2[1] = *(longlong *)(param_3 + 0x40);
  }
  if (param_3 == *param_2) {
    *param_2 = *(longlong *)(param_3 + 0x38);
    FUN_18064cf20(uVar1);
  }
  *(longlong *)(param_3 + 0x40) = param_1[1];
  *(undefined8 *)(param_3 + 0x38) = 0;
  if (param_1[1] == 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    FUN_18064cf20(uVar1,param_1);
  }
  else {
    *(longlong *)(param_1[1] + 0x38) = param_3;
    param_1[1] = param_3;
  }
  *(byte *)(param_3 + 0xe) = param_1[2] == 0x4010 | *(byte *)(param_3 + 0xe) & 0xfe;
  return;
}





// 函数: void FUN_18064d230(longlong param_1,char param_2)
void FUN_18064d230(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  if ((param_2 != '\0') || ((*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffc) != 0)) {
    uVar5 = *(ulonglong *)(param_1 + 0x28);
    do {
      puVar8 = (undefined8 *)(uVar5 & 0xfffffffffffffffc);
      LOCK();
      uVar6 = *(ulonglong *)(param_1 + 0x28);
      bVar9 = uVar5 == uVar6;
      if (bVar9) {
        *(ulonglong *)(param_1 + 0x28) = (ulonglong)((uint)uVar5 & 3);
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar9);
    if (puVar8 != (undefined8 *)0x0) {
      uVar7 = 1;
      puVar2 = puVar8;
      for (puVar3 = (undefined8 *)*puVar8; puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        if (*(ushort *)(param_1 + 10) < uVar7) goto LAB_18064d2a7;
        uVar7 = uVar7 + 1;
        puVar2 = puVar3;
      }
      if (*(ushort *)(param_1 + 10) < uVar7) {
LAB_18064d2a7:
        FUN_1806503d0(0xe,&UNK_180a3d8d0);
      }
      else {
        *puVar2 = *(undefined8 *)(param_1 + 0x20);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar7;
        *(undefined8 **)(param_1 + 0x20) = puVar8;
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *(longlong **)(param_1 + 0x10) = plVar1;
    }
    else {
      if (param_2 == '\0') {
        return;
      }
      for (plVar4 = (longlong *)*plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)*plVar4) {
        plVar1 = plVar4;
      }
      *plVar1 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    }
    *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018064d392)

uint * FUN_18064d320(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint *puVar3;
  
  if ((param_3 < 0x4001) || (param_3 < 0x200001)) {
    puVar3 = (uint *)FUN_18064cc40(param_1,param_2,param_3,param_3,*param_1 + 0x20);
    if (puVar3 != (uint *)0x0) {
      *(longlong **)(puVar3 + 0xc) = param_1;
      uVar2 = 0x4000000;
      if (param_3 < 0x4000000) {
        uVar2 = (uint)param_3;
      }
      *(byte *)((longlong)puVar3 + 0xf) = *(byte *)((longlong)puVar3 + 0xf) & 0xfe;
      puVar3[7] = uVar2;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3;
      *(short *)(puVar3 + 3) = SUB162((ZEXT416(*puVar3) << 0x10) / auVar1,0);
      *(byte *)((longlong)puVar3 + 0xf) =
           *(byte *)((longlong)puVar3 + 0xf) | (byte)puVar3[2] >> 2 & 1;
      FUN_18064d880();
      func_0x000180646ff0(*param_1 + 0x3f8,1);
      if (param_2 == 0) {
        return puVar3;
      }
      FUN_18064d110(param_1,param_2,puVar3);
      return puVar3;
    }
  }
  else {
    FUN_18064bae0(0);
  }
  return (uint *)0x0;
}





// 函数: void FUN_18064d420(longlong param_1)
void FUN_18064d420(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar4 = *(longlong **)(param_1 + 0xb18);
  do {
    plVar9 = plVar4;
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = *(longlong **)(param_1 + 0xb18);
    bVar10 = plVar9 == plVar4;
    if (bVar10) {
      *(longlong *)(param_1 + 0xb18) = 0;
      plVar4 = plVar9;
    }
    UNLOCK();
  } while (!bVar10);
  do {
    plVar4 = (longlong *)*plVar9;
    lVar8 = ((longlong)plVar9 - ((ulonglong)plVar9 & 0xffffffffffc00000) >> 0x10) * 0x50 + 0x80 +
            ((ulonglong)plVar9 & 0xffffffffffc00000);
    lVar8 = lVar8 - (ulonglong)*(uint *)(lVar8 + 4);
    do {
      while( true ) {
        uVar5 = *(ulonglong *)(lVar8 + 0x28);
        uVar3 = (uint)uVar5 & 3;
        if (uVar3 != 1) break;
        _Thrd_yield();
      }
      if (((uVar5 & 3) == 0) || (uVar3 == 3)) break;
      LOCK();
      bVar10 = uVar5 == *(ulonglong *)(lVar8 + 0x28);
      if (bVar10) {
        *(ulonglong *)(lVar8 + 0x28) = uVar5 & 0xfffffffffffffffc;
      }
      UNLOCK();
    } while (!bVar10);
    if ((*(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc) != 0) {
      uVar5 = *(ulonglong *)(lVar8 + 0x28);
      do {
        puVar7 = (undefined8 *)(uVar5 & 0xfffffffffffffffc);
        LOCK();
        uVar6 = *(ulonglong *)(lVar8 + 0x28);
        bVar10 = uVar5 == uVar6;
        if (bVar10) {
          *(ulonglong *)(lVar8 + 0x28) = (ulonglong)((uint)uVar5 & 3);
          uVar6 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar6;
      } while (!bVar10);
      if (puVar7 != (undefined8 *)0x0) {
        uVar3 = 1;
        puVar1 = puVar7;
        for (puVar2 = (undefined8 *)*puVar7; puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          if (*(ushort *)(lVar8 + 10) < uVar3) goto LAB_18064d517;
          uVar3 = uVar3 + 1;
          puVar1 = puVar2;
        }
        if (*(ushort *)(lVar8 + 10) < uVar3) {
LAB_18064d517:
          FUN_1806503d0(0xe,&UNK_180a3d8d0);
        }
        else {
          *puVar1 = *(undefined8 *)(lVar8 + 0x20);
          *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar3;
          *(undefined8 **)(lVar8 + 0x20) = puVar7;
        }
      }
    }
    if ((*(longlong *)(lVar8 + 0x20) != 0) && (*(longlong *)(lVar8 + 0x10) == 0)) {
      *(byte *)(lVar8 + 0xf) = *(byte *)(lVar8 + 0xf) & 0xfe;
      *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x20);
      *(undefined8 *)(lVar8 + 0x20) = 0;
    }
    FUN_18064e790(lVar8,1,plVar9);
    plVar9 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18064d44f(void)
void FUN_18064d44f(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  bool bVar9;
  
  do {
    plVar1 = (longlong *)*unaff_RDI;
    lVar8 = ((longlong)unaff_RDI - ((ulonglong)unaff_RDI & 0xffffffffffc00000) >> 0x10) * 0x50 +
            0x80 + ((ulonglong)unaff_RDI & 0xffffffffffc00000);
    lVar8 = lVar8 - (ulonglong)*(uint *)(lVar8 + 4);
    do {
      while( true ) {
        uVar5 = *(ulonglong *)(lVar8 + 0x28);
        uVar4 = (uint)uVar5 & 3;
        if (uVar4 != 1) break;
        _Thrd_yield();
      }
      if (((uVar5 & 3) == 0) || (uVar4 == 3)) break;
      LOCK();
      bVar9 = uVar5 == *(ulonglong *)(lVar8 + 0x28);
      if (bVar9) {
        *(ulonglong *)(lVar8 + 0x28) = uVar5 & 0xfffffffffffffffc;
      }
      UNLOCK();
    } while (!bVar9);
    if ((*(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc) != 0) {
      uVar5 = *(ulonglong *)(lVar8 + 0x28);
      do {
        puVar7 = (undefined8 *)(uVar5 & 0xfffffffffffffffc);
        LOCK();
        uVar6 = *(ulonglong *)(lVar8 + 0x28);
        bVar9 = uVar5 == uVar6;
        if (bVar9) {
          *(ulonglong *)(lVar8 + 0x28) = (ulonglong)((uint)uVar5 & 3);
          uVar6 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar6;
      } while (!bVar9);
      if (puVar7 != (undefined8 *)0x0) {
        uVar4 = 1;
        puVar2 = puVar7;
        for (puVar3 = (undefined8 *)*puVar7; puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          if (*(ushort *)(lVar8 + 10) < uVar4) goto LAB_18064d517;
          uVar4 = uVar4 + 1;
          puVar2 = puVar3;
        }
        if (*(ushort *)(lVar8 + 10) < uVar4) {
LAB_18064d517:
          FUN_1806503d0(0xe,&UNK_180a3d8d0);
        }
        else {
          *puVar2 = *(undefined8 *)(lVar8 + 0x20);
          *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar4;
          *(undefined8 **)(lVar8 + 0x20) = puVar7;
        }
      }
    }
    if ((*(longlong *)(lVar8 + 0x20) != 0) && (*(longlong *)(lVar8 + 0x10) == unaff_RBP)) {
      *(byte *)(lVar8 + 0xf) = *(byte *)(lVar8 + 0xf) & 0xfe;
      *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x20);
      *(longlong *)(lVar8 + 0x20) = unaff_RBP;
    }
    FUN_18064e790(lVar8,1,unaff_RDI);
    unaff_RDI = plVar1;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18064d576(void)
void FUN_18064d576(void)

{
  return;
}



// WARNING: Possible PIC construction at 0x00018064d5f0: Changing call to branch
// WARNING: Possible PIC construction at 0x00018064c06c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018064c071)
// WARNING: Removing unreachable block (ram,0x00018064c07a)
// WARNING: Removing unreachable block (ram,0x00018064c085)
// WARNING: Removing unreachable block (ram,0x00018064c08e)
// WARNING: Removing unreachable block (ram,0x00018064c09a)
// WARNING: Removing unreachable block (ram,0x00018064c0b1)
// WARNING: Removing unreachable block (ram,0x00018064c12e)
// WARNING: Removing unreachable block (ram,0x00018064c131)
// WARNING: Removing unreachable block (ram,0x00018064c137)
// WARNING: Removing unreachable block (ram,0x00018064c150)
// WARNING: Removing unreachable block (ram,0x00018064c160)
// WARNING: Removing unreachable block (ram,0x00018064c18d)
// WARNING: Removing unreachable block (ram,0x00018064c1c0)
// WARNING: Removing unreachable block (ram,0x00018064c1ce)
// WARNING: Removing unreachable block (ram,0x00018064c1d2)
// WARNING: Removing unreachable block (ram,0x00018064c192)
// WARNING: Removing unreachable block (ram,0x00018064c1a6)
// WARNING: Removing unreachable block (ram,0x00018064c1ab)
// WARNING: Removing unreachable block (ram,0x00018064c1b3)
// WARNING: Removing unreachable block (ram,0x00018064c1d6)
// WARNING: Removing unreachable block (ram,0x00018064c1e1)
// WARNING: Removing unreachable block (ram,0x00018064c1f1)
// WARNING: Removing unreachable block (ram,0x00018064c1fb)
// WARNING: Removing unreachable block (ram,0x00018064aeb0)
// WARNING: Removing unreachable block (ram,0x00018064aee9)
// WARNING: Removing unreachable block (ram,0x00018064af00)
// WARNING: Removing unreachable block (ram,0x00018064af10)
// WARNING: Removing unreachable block (ram,0x00018064af17)
// WARNING: Removing unreachable block (ram,0x00018064af1f)
// WARNING: Removing unreachable block (ram,0x00018064af40)
// WARNING: Removing unreachable block (ram,0x00018064af6a)
// WARNING: Removing unreachable block (ram,0x00018064af79)
// WARNING: Removing unreachable block (ram,0x00018064af80)
// WARNING: Removing unreachable block (ram,0x00018064af8a)
// WARNING: Removing unreachable block (ram,0x00018064af8e)
// WARNING: Removing unreachable block (ram,0x00018064af9a)
// WARNING: Removing unreachable block (ram,0x00018064afa2)
// WARNING: Removing unreachable block (ram,0x00018064afa7)
// WARNING: Removing unreachable block (ram,0x00018064afad)
// WARNING: Removing unreachable block (ram,0x00018064afb2)
// WARNING: Removing unreachable block (ram,0x00018064afc8)
// WARNING: Removing unreachable block (ram,0x00018064afcd)
// WARNING: Removing unreachable block (ram,0x00018064afd8)
// WARNING: Removing unreachable block (ram,0x00018064afe8)
// WARNING: Removing unreachable block (ram,0x00018064afdd)
// WARNING: Removing unreachable block (ram,0x00018064aff4)
// WARNING: Removing unreachable block (ram,0x00018064b008)
// WARNING: Removing unreachable block (ram,0x00018064b01c)
// WARNING: Removing unreachable block (ram,0x00018064b036)
// WARNING: Removing unreachable block (ram,0x00018064b079)
// WARNING: Removing unreachable block (ram,0x00018064b0a4)
// WARNING: Removing unreachable block (ram,0x00018064b0aa)
// WARNING: Removing unreachable block (ram,0x00018064b0c8)
// WARNING: Removing unreachable block (ram,0x00018064b0db)
// WARNING: Removing unreachable block (ram,0x00018064b086)
// WARNING: Removing unreachable block (ram,0x00018064b05d)
// WARNING: Removing unreachable block (ram,0x00018064b0f2)
// WARNING: Removing unreachable block (ram,0x00018064b021)
// WARNING: Removing unreachable block (ram,0x00018064b0f7)
// WARNING: Removing unreachable block (ram,0x00018064b000)
// WARNING: Removing unreachable block (ram,0x00018064c0c4)



// 函数: void FUN_18064d590(uint *param_1,undefined8 param_2)
void FUN_18064d590(uint *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  *(byte *)((longlong)param_1 + 0xe) = *(byte *)((longlong)param_1 + 0xe) & 0xfd;
  uVar7 = (ulonglong)param_1[7];
  if (0x3ffffff < uVar7) {
    uVar7 = (ulonglong)*param_1 << 0x10;
  }
  if (uVar7 < 0x4001) {
    lVar3 = **(longlong **)(param_1 + 0xc);
    FUN_18064d090(param_2,param_1);
    lVar9 = lVar3 + 0x20;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uVar7 = (ulonglong)param_1 & 0xffffffffffc00000;
    FUN_18064c220(param_1,lVar9);
    if (*(longlong *)(uVar7 + 0x48) != 0) {
      if (*(longlong *)(uVar7 + 0x48) == *(longlong *)(uVar7 + 0x38)) {
        FUN_18064c570(uVar7,lVar9);
      }
      return;
    }
    lVar4 = *(longlong *)(uVar7 + 0x78);
    for (puVar6 = (uint *)(uVar7 + 0x80); puVar6 < (uint *)(uVar7 + 0x80 + lVar4 * 0x50);
        puVar6 = puVar6 + (ulonglong)*puVar6 * 0x14) {
      if ((puVar6[7] == 0) && (*(int *)(uVar7 + 0x68) != 1)) {
        uVar11 = (ulonglong)*puVar6;
        if (1 < uVar11) {
          uVar10 = uVar11 - 1;
          if (uVar10 == 0) {
            uVar12 = 0x40;
          }
          else {
            lVar5 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar12 = 0x3f - (ulonglong)(0x3f - (int)lVar5);
            if (uVar12 < 3) goto LAB_18064bfea;
          }
          uVar11 = ((ulonglong)((uint)(uVar10 >> ((char)uVar12 - 2U & 0x3f)) & 3) | uVar12 * 4) - 4;
        }
LAB_18064bfea:
        puVar2 = (undefined8 *)(lVar9 + uVar11 * 0x18);
        if (*(longlong *)(puVar6 + 0x10) != 0) {
          *(undefined8 *)(*(longlong *)(puVar6 + 0x10) + 0x38) = *(undefined8 *)(puVar6 + 0xe);
        }
        if (puVar6 == (uint *)*puVar2) {
          *puVar2 = *(undefined8 *)(puVar6 + 0xe);
        }
        if (*(longlong *)(puVar6 + 0xe) != 0) {
          *(undefined8 *)(*(longlong *)(puVar6 + 0xe) + 0x40) = *(undefined8 *)(puVar6 + 0x10);
        }
        if (puVar6 == (uint *)puVar2[1]) {
          puVar2[1] = *(undefined8 *)(puVar6 + 0x10);
        }
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[7] = 1;
      }
    }
    lVar9 = *(longlong *)(uVar7 + 0x60) * -0x10000;
    plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x3b8) + 0xa0);
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0xc);
    lVar9 = -uVar7;
    if (uVar7 < 0x200001) {
      plVar8 = (longlong *)(lVar3 + 0x538);
    }
    else {
      plVar8 = (longlong *)(lVar3 + 0x518);
    }
  }
  if (lVar9 != 0) {
    if (((longlong *)0x180c8ed7f < plVar8) && (plVar8 < &DAT_180c8efc0)) {
      LOCK();
      plVar1 = plVar8 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + lVar9;
      UNLOCK();
      lVar4 = plVar8[2];
      do {
        if (lVar3 + lVar9 <= lVar4) break;
        LOCK();
        lVar5 = plVar8[2];
        bVar13 = lVar4 == lVar5;
        if (bVar13) {
          plVar8[2] = lVar3 + lVar9;
          lVar5 = lVar4;
        }
        UNLOCK();
        lVar4 = lVar5;
      } while (!bVar13);
      if (lVar9 < 1) {
        plVar8 = plVar8 + 1;
        lVar9 = -lVar9;
      }
      LOCK();
      *plVar8 = *plVar8 + lVar9;
      UNLOCK();
      return;
    }
    plVar8[3] = plVar8[3] + lVar9;
    if (plVar8[2] < plVar8[3]) {
      plVar8[2] = plVar8[3];
    }
    if (0 < lVar9) {
      *plVar8 = *plVar8 + lVar9;
      return;
    }
    plVar8[1] = plVar8[1] - lVar9;
  }
  return;
}



// WARNING: Possible PIC construction at 0x00018064d5f0: Changing call to branch
// WARNING: Possible PIC construction at 0x00018064c06c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018064c071)
// WARNING: Removing unreachable block (ram,0x00018064c07a)
// WARNING: Removing unreachable block (ram,0x00018064c085)
// WARNING: Removing unreachable block (ram,0x00018064c08e)
// WARNING: Removing unreachable block (ram,0x00018064c09a)
// WARNING: Removing unreachable block (ram,0x00018064c0b1)
// WARNING: Removing unreachable block (ram,0x00018064c12e)
// WARNING: Removing unreachable block (ram,0x00018064c131)
// WARNING: Removing unreachable block (ram,0x00018064c137)
// WARNING: Removing unreachable block (ram,0x00018064c150)
// WARNING: Removing unreachable block (ram,0x00018064c160)
// WARNING: Removing unreachable block (ram,0x00018064c18d)
// WARNING: Removing unreachable block (ram,0x00018064c1c0)
// WARNING: Removing unreachable block (ram,0x00018064c1ce)
// WARNING: Removing unreachable block (ram,0x00018064c1d2)
// WARNING: Removing unreachable block (ram,0x00018064c192)
// WARNING: Removing unreachable block (ram,0x00018064c1a6)
// WARNING: Removing unreachable block (ram,0x00018064c1ab)
// WARNING: Removing unreachable block (ram,0x00018064c1b3)
// WARNING: Removing unreachable block (ram,0x00018064c1d6)
// WARNING: Removing unreachable block (ram,0x00018064c1e1)
// WARNING: Removing unreachable block (ram,0x00018064c1f1)
// WARNING: Removing unreachable block (ram,0x00018064c1fb)
// WARNING: Removing unreachable block (ram,0x00018064aeb0)
// WARNING: Removing unreachable block (ram,0x00018064aee9)
// WARNING: Removing unreachable block (ram,0x00018064af00)
// WARNING: Removing unreachable block (ram,0x00018064af10)
// WARNING: Removing unreachable block (ram,0x00018064af17)
// WARNING: Removing unreachable block (ram,0x00018064af1f)
// WARNING: Removing unreachable block (ram,0x00018064af40)
// WARNING: Removing unreachable block (ram,0x00018064af6a)
// WARNING: Removing unreachable block (ram,0x00018064af79)
// WARNING: Removing unreachable block (ram,0x00018064af80)
// WARNING: Removing unreachable block (ram,0x00018064af8a)
// WARNING: Removing unreachable block (ram,0x00018064af8e)
// WARNING: Removing unreachable block (ram,0x00018064af9a)
// WARNING: Removing unreachable block (ram,0x00018064afa2)
// WARNING: Removing unreachable block (ram,0x00018064afa7)
// WARNING: Removing unreachable block (ram,0x00018064afad)
// WARNING: Removing unreachable block (ram,0x00018064afb2)
// WARNING: Removing unreachable block (ram,0x00018064afc8)
// WARNING: Removing unreachable block (ram,0x00018064afcd)
// WARNING: Removing unreachable block (ram,0x00018064afd8)
// WARNING: Removing unreachable block (ram,0x00018064afe8)
// WARNING: Removing unreachable block (ram,0x00018064afdd)
// WARNING: Removing unreachable block (ram,0x00018064aff4)
// WARNING: Removing unreachable block (ram,0x00018064b008)
// WARNING: Removing unreachable block (ram,0x00018064b01c)
// WARNING: Removing unreachable block (ram,0x00018064b036)
// WARNING: Removing unreachable block (ram,0x00018064b079)
// WARNING: Removing unreachable block (ram,0x00018064b0a4)
// WARNING: Removing unreachable block (ram,0x00018064b0aa)
// WARNING: Removing unreachable block (ram,0x00018064b0c8)
// WARNING: Removing unreachable block (ram,0x00018064b0db)
// WARNING: Removing unreachable block (ram,0x00018064b086)
// WARNING: Removing unreachable block (ram,0x00018064b05d)
// WARNING: Removing unreachable block (ram,0x00018064b0f2)
// WARNING: Removing unreachable block (ram,0x00018064b021)
// WARNING: Removing unreachable block (ram,0x00018064b0f7)
// WARNING: Removing unreachable block (ram,0x00018064b000)
// WARNING: Removing unreachable block (ram,0x00018064c0c4)



