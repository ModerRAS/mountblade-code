#include "TaleWorlds.Native.Split.h"

// 03_rendering_part195.c - 14 个函数

// 函数: void FUN_18037fb10(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)
void FUN_18037fb10(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_3 != param_4) {
    uVar8 = (longlong)param_4 - (longlong)param_3 >> 3;
    plVar4 = (longlong *)param_1[1];
    if ((ulonglong)(param_1[2] - (longlong)plVar4 >> 3) < uVar8) {
      plVar3 = (longlong *)*param_1;
      lVar7 = (longlong)plVar4 - (longlong)plVar3 >> 3;
      uVar6 = lVar7 * 2;
      if (lVar7 == 0) {
        uVar6 = 1;
      }
      if (uVar6 <= lVar7 + uVar8) {
        uVar6 = lVar7 + uVar8;
      }
      plVar4 = (longlong *)0x0;
      plVar2 = plVar4;
      if (uVar6 != 0) {
        plVar4 = (longlong *)
                 FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,*(undefined1 *)(param_1 + 3),param_4,
                               0xfffffffffffffffe);
        plVar3 = (longlong *)*param_1;
        plVar2 = plVar4;
      }
      for (; plVar3 != param_2; plVar3 = plVar3 + 1) {
        *plVar4 = *plVar3;
        *plVar3 = 0;
        plVar4 = plVar4 + 1;
      }
      do {
        plVar3 = (longlong *)*param_3;
        *plVar4 = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))();
        }
        param_3 = param_3 + 1;
        plVar4 = plVar4 + 1;
      } while (param_3 != param_4);
      plVar3 = (longlong *)param_1[1];
      if (param_2 != plVar3) {
        do {
          *plVar4 = *param_2;
          *param_2 = 0;
          param_2 = param_2 + 1;
          plVar4 = plVar4 + 1;
        } while (param_2 != plVar3);
        plVar3 = (longlong *)param_1[1];
      }
      plVar5 = (longlong *)*param_1;
      if (plVar5 != plVar3) {
        do {
          if ((longlong *)*plVar5 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar5 + 0x38))();
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar3);
        plVar5 = (longlong *)*param_1;
      }
      if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar5);
      }
      *param_1 = plVar2;
      param_1[1] = plVar4;
      param_1[2] = plVar2 + uVar6;
    }
    else {
      uVar6 = (longlong)plVar4 - (longlong)param_2 >> 3;
      if (uVar8 < uVar6) {
        plVar2 = plVar4 + -uVar8;
        plVar3 = plVar4;
        if (plVar2 != plVar4) {
          do {
            *plVar3 = *plVar2;
            *plVar2 = 0;
            plVar2 = plVar2 + 1;
            plVar3 = plVar3 + 1;
          } while (plVar2 != plVar4);
          plVar4 = (longlong *)param_1[1];
        }
        for (lVar7 = (longlong)((longlong)plVar4 + (uVar8 * -8 - (longlong)param_2)) >> 3; 0 < lVar7
            ; lVar7 = lVar7 + -1) {
          plVar4 = plVar4 + -1;
          lVar1 = plVar4[-uVar8];
          plVar4[-uVar8] = 0;
          plVar3 = (longlong *)*plVar4;
          *plVar4 = lVar1;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        if (0 < (longlong)uVar8) {
          lVar7 = (longlong)param_3 - (longlong)param_2;
          uVar6 = uVar8;
          do {
            plVar4 = *(longlong **)(lVar7 + (longlong)param_2);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plVar3 = (longlong *)*param_2;
            *param_2 = (longlong)plVar4;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            uVar6 = uVar6 - 1;
            param_2 = param_2 + 1;
          } while (0 < (longlong)uVar6);
          param_1[1] = param_1[1] + uVar8 * 8;
          return;
        }
      }
      else {
        FUN_18017b680(param_3 + uVar6,param_4,plVar4);
        plVar4 = (longlong *)param_1[1];
        if (param_2 != plVar4) {
          plVar3 = param_2;
          do {
            *(longlong *)
             ((longlong)plVar4 + ((uVar8 - uVar6) * 8 - (longlong)param_2) + (longlong)plVar3) =
                 *plVar3;
            *plVar3 = 0;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar4);
        }
        param_2 = param_2 + uVar6;
        if (0 < (longlong)uVar6) {
          lVar7 = (longlong)(param_3 + uVar6) - (longlong)param_2;
          do {
            param_2 = param_2 + -1;
            plVar4 = *(longlong **)(lVar7 + (longlong)param_2);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plVar3 = (longlong *)*param_2;
            *param_2 = (longlong)plVar4;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            uVar6 = uVar6 - 1;
          } while (0 < (longlong)uVar6);
        }
      }
      param_1[1] = param_1[1] + uVar8 * 8;
    }
  }
  return;
}





// 函数: void FUN_18037fe30(longlong param_1,longlong param_2,code *param_3)
void FUN_18037fe30(longlong param_1,longlong param_2,code *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (param_1 != param_2) {
    for (lVar4 = param_1 + 0x28; lVar4 != param_2; lVar4 = lVar4 + 0x28) {
      puStack_60 = &UNK_180a3c3e0;
      uStack_50 = *(undefined4 *)(lVar4 + 0x10);
      lStack_58 = *(longlong *)(lVar4 + 8);
      uStack_48 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      uStack_40 = *(undefined4 *)(lVar4 + 0x20);
      lVar5 = lVar4;
      lVar1 = lVar4;
      while (lVar1 != param_1) {
        lVar3 = lVar1 + -0x28;
        cVar2 = (*param_3)(&puStack_60,lVar3);
        if (cVar2 == '\0') break;
        FUN_18005d190(lVar5,lVar3);
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar1 + -8);
        lVar5 = lVar5 + -0x28;
        lVar1 = lVar3;
      }
      FUN_18005d190(lVar5,&puStack_60);
      *(undefined4 *)(lVar5 + 0x20) = uStack_40;
      puStack_60 = &UNK_180a3c3e0;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803800d0(int param_1,int param_2,longlong *param_3)
void FUN_1803800d0(int param_1,int param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  longlong alStack_50 [3];
  undefined4 uStack_38;
  
  puVar2 = (undefined8 *)*param_3;
  lVar9 = (longlong)param_1;
  while( true ) {
    if (param_2 <= lVar9) {
      return;
    }
    uVar3 = *puVar2;
    uVar1 = *(undefined4 *)puVar2[2];
    uVar4 = *(undefined8 *)puVar2[1];
    alStack_50[0] = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
    uStack_38 = 3;
    uVar11 = FUN_180378550(uVar3,alStack_50,uVar1,*(undefined4 *)puVar2[3]);
    lVar6 = alStack_50[0];
    plVar5 = *(longlong **)(alStack_50[0] + lVar9 * 8);
    piVar10 = (int *)plVar5[1];
    if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
      *(undefined8 *)(*plVar5 + 0x88) = *(undefined8 *)(*plVar5 + 0x80);
    }
    else {
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x150,8,3);
        lVar8 = FUN_180372600(uVar7,uVar3);
        *plVar5 = lVar8;
        piVar10 = (int *)plVar5[1];
        uVar11 = extraout_XMM0_Da;
      }
      FUN_180376ab0(uVar11,lVar8,piVar10,uVar4,uVar1);
    }
    FUN_180374e60(uVar3);
    if (lVar6 != 0) break;
    lVar9 = lVar9 + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180380200(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06060;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803802e0(int param_1,int param_2,longlong *param_3)
void FUN_1803802e0(int param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  param_3 = (longlong *)*param_3;
  for (lVar9 = (longlong)param_1; lVar9 < param_2; lVar9 = lVar9 + 1) {
    lVar2 = *param_3;
    lVar3 = **(longlong **)
              (*(longlong *)(((longlong)*(int *)param_3[1] + 0x10b) * 0x20 + lVar2) + lVar9 * 8);
    if (*(int *)(lVar3 + 0x54) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x2154);
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x2148) + 0x3054);
      *(undefined8 *)(lVar3 + 0x54) = uVar6;
      iVar5 = (int)((ulonglong)uVar6 >> 0x20);
      iVar8 = (int)(((int)uVar6 >> 0x1f & 3U) + (int)uVar6) >> 2;
      *(int *)(lVar3 + 0x5c) = iVar8;
      iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      *(int *)(lVar3 + 0x60) = iVar5;
      uVar6 = FUN_18037f230((longlong)(iVar5 * iVar8));
      iVar5 = *(int *)(lVar3 + 0x50);
      *(undefined8 *)(lVar3 + 0x138) = uVar6;
      if (-1 < iVar5) {
        lVar4 = *(longlong *)(_DAT_180c86978 + 200);
        lVar7 = *(longlong *)(_DAT_180c86978 + 0xd0) - lVar4 >> 3;
        iVar8 = (int)lVar7 + -1;
        if (iVar5 != lVar7) {
          iVar8 = iVar5;
        }
        if (*(longlong *)(lVar4 + (longlong)iVar8 * 8) != *(longlong *)(_DAT_180c86978 + 0xe8)) {
          lVar7 = *(longlong *)(_DAT_180c86978 + 0xd0) - lVar4 >> 3;
          if (iVar5 == lVar7) {
            iVar5 = (int)lVar7 + -1;
          }
          FUN_180372ae0(lVar3,lVar2,
                        *(undefined8 *)
                         (*(longlong *)(lVar4 + (longlong)iVar5 * 8) + 0x68 + (longlong)iVar1 * 8));
          FUN_1803748a0(lVar2,lVar3);
        }
      }
      *(int *)param_3[2] = *(int *)param_3[2] + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803802fb(void)
void FUN_1803802fb(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R14;
  
  do {
    lVar2 = *unaff_R14;
    lVar3 = **(longlong **)
              (*(longlong *)(((longlong)*(int *)unaff_R14[1] + 0x10b) * 0x20 + lVar2) +
              unaff_RBX * 8);
    if (*(int *)(lVar3 + 0x54) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x2154);
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x2148) + 0x3054);
      *(undefined8 *)(lVar3 + 0x54) = uVar6;
      iVar5 = (int)((ulonglong)uVar6 >> 0x20);
      iVar8 = (int)(((int)uVar6 >> 0x1f & 3U) + (int)uVar6) >> 2;
      *(int *)(lVar3 + 0x5c) = iVar8;
      iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      *(int *)(lVar3 + 0x60) = iVar5;
      uVar6 = FUN_18037f230((longlong)(iVar5 * iVar8));
      iVar5 = *(int *)(lVar3 + 0x50);
      *(undefined8 *)(lVar3 + 0x138) = uVar6;
      if (-1 < iVar5) {
        lVar4 = *(longlong *)(_DAT_180c86978 + 200);
        lVar7 = *(longlong *)(_DAT_180c86978 + 0xd0) - lVar4 >> 3;
        iVar8 = (int)lVar7 + -1;
        if (iVar5 != lVar7) {
          iVar8 = iVar5;
        }
        if (*(longlong *)(lVar4 + (longlong)iVar8 * 8) != *(longlong *)(_DAT_180c86978 + 0xe8)) {
          lVar7 = *(longlong *)(_DAT_180c86978 + 0xd0) - lVar4 >> 3;
          if (iVar5 == lVar7) {
            iVar5 = (int)lVar7 + -1;
          }
          FUN_180372ae0(lVar3,lVar2,
                        *(undefined8 *)
                         (*(longlong *)(lVar4 + (longlong)iVar5 * 8) + 0x68 + (longlong)iVar1 * 8));
          FUN_1803748a0(lVar2,lVar3);
        }
      }
      *(int *)unaff_R14[2] = *(int *)unaff_R14[2] + 1;
    }
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < unaff_RBP);
  return;
}





// 函数: void FUN_18038041e(void)
void FUN_18038041e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180380430(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c05f60;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180380510(int param_1,int param_2,longlong *param_3)
void FUN_180380510(int param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)*param_3;
  for (lVar4 = (longlong)param_1; lVar4 < param_2; lVar4 = lVar4 + 1) {
    puVar3 = *(undefined8 **)(*(longlong *)*puVar2 + lVar4 * 8);
    iVar1 = *(int *)(puVar3 + 6);
    if ((iVar1 == -1) ||
       (*(char *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(puVar2[1] + 0x2148) + 0x60b80) + 0x80 +
                   (longlong)iVar1 * 8) + 0x152) != '\0')) {
      FUN_180375760(puVar2[1],*(undefined8 *)puVar2[2],*puVar3,
                    *(undefined8 *)(*(longlong *)puVar2[3] + lVar4 * 8));
    }
    LOCK();
    *(undefined1 *)(*(longlong *)(*(longlong *)puVar2[3] + lVar4 * 8) + 8) = 1;
    UNLOCK();
    FUN_180375260(puVar2[1],*(undefined8 *)puVar2[2],
                  *(undefined8 *)(*(longlong *)puVar2[3] + lVar4 * 8));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803805e0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c05fa0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_1803806c0(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_1803806c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180380710(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180380710(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_3 == param_4) {
    return;
  }
  lVar1 = param_1[1];
  uVar2 = (param_4 - param_3) / 0x28;
  if (uVar2 <= (ulonglong)((param_1[2] - lVar1) / 0x28)) {
    uVar5 = (lVar1 - param_2) / 0x28;
    if (uVar2 < uVar5) {
      FUN_1803806c0(lVar1 + uVar2 * -0x28,lVar1,lVar1);
                    // WARNING: Subroutine does not return
      memmove(param_1[1] + ((longlong)((param_1[1] + uVar2 * -0x28) - param_2) / 0x28) * -0x28,
              param_2);
    }
    lVar4 = uVar5 * 0x28 + param_3;
    FUN_1803806c0(lVar4,param_4,lVar1);
    FUN_1803806c0(param_2,param_1[1],param_1[1] + (uVar2 - uVar5) * 0x28);
    lVar4 = lVar4 - param_3;
                    // WARNING: Subroutine does not return
    memmove(param_2 + (uVar5 - lVar4 / 0x28) * 0x28,param_3,lVar4);
  }
  lVar4 = *param_1;
  lVar1 = (lVar1 - lVar4) / 0x28;
  uVar5 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  if (uVar5 <= lVar1 + uVar2) {
    uVar5 = lVar1 + uVar2;
  }
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x28,(char)param_1[3]);
    lVar4 = *param_1;
  }
  if (lVar4 == param_2) {
                    // WARNING: Subroutine does not return
    memmove(uVar3,param_3,param_4 - param_3);
  }
                    // WARNING: Subroutine does not return
  memmove(uVar3,lVar4,param_2 - lVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180380722(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180380722(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lStack0000000000000058;
  
  lVar5 = param_4 - param_3;
  lVar1 = param_1[1];
  uVar2 = lVar5 / 0x28;
  lStack0000000000000058 = lVar5;
  if (uVar2 <= (ulonglong)((param_1[2] - lVar1) / 0x28)) {
    uVar6 = (lVar1 - param_2) / 0x28;
    if (uVar2 < uVar6) {
      FUN_1803806c0(lVar1 + uVar2 * -0x28,lVar1,lVar1);
                    // WARNING: Subroutine does not return
      memmove(param_1[1] + ((longlong)((param_1[1] + uVar2 * -0x28) - param_2) / 0x28) * -0x28,
              param_2);
    }
    lVar5 = uVar6 * 0x28 + param_3;
    FUN_1803806c0(lVar5,param_4,lVar1);
    FUN_1803806c0(param_2,param_1[1],param_1[1] + (uVar2 - uVar6) * 0x28);
    lVar5 = lVar5 - param_3;
                    // WARNING: Subroutine does not return
    memmove(param_2 + (uVar6 - lVar5 / 0x28) * 0x28,param_3,lVar5);
  }
  lVar4 = *param_1;
  lVar1 = (lVar1 - lVar4) / 0x28;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 <= lVar1 + uVar2) {
    uVar6 = lVar1 + uVar2;
  }
  if (uVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x28,(char)param_1[3]);
    lVar4 = *param_1;
  }
  if (lVar4 == param_2) {
                    // WARNING: Subroutine does not return
    memmove(uVar3,param_3,lVar5);
  }
                    // WARNING: Subroutine does not return
  memmove(uVar3,lVar4,param_2 - lVar4);
}





// 函数: void FUN_1803809bc(void)
void FUN_1803809bc(void)

{
  return;
}





// 函数: void FUN_1803809c0(ulonglong param_1,ulonglong param_2,longlong param_3,code *param_4)
void FUN_1803809c0(ulonglong param_1,ulonglong param_2,longlong param_3,code *param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined *puStack_68;
  longlong lStack_60;
  undefined4 uStack_50;
  undefined4 uStack_48;
  
  uVar6 = 0xfffffffffffffffe;
  lVar2 = param_2 - param_1;
  do {
    if ((lVar2 < 0x488) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_180380c60(param_1,param_2,param_2,param_4,uVar6);
      }
      return;
    }
    uVar4 = param_2 - 0x28;
    uVar5 = param_1 + ((longlong)(param_2 - param_1) / 0x50) * 0x28;
    cVar1 = (*param_4)(param_1,uVar5);
    if (cVar1 == '\0') {
      cVar1 = (*param_4)(param_1,uVar4);
      uVar3 = param_1;
      if (cVar1 == '\0') {
        cVar1 = (*param_4)(uVar5,uVar4);
        goto LAB_180380a8a;
      }
    }
    else {
      cVar1 = (*param_4)(uVar5);
      uVar3 = uVar5;
      if (cVar1 == '\0') {
        cVar1 = (*param_4)(param_1,uVar4);
        uVar5 = param_1;
LAB_180380a8a:
        uVar3 = uVar5;
        if (cVar1 != '\0') {
          uVar3 = uVar4;
        }
      }
    }
    FUN_180627ae0(&puStack_68,uVar3);
    uStack_48 = *(undefined4 *)(uVar3 + 0x20);
    uVar4 = param_2;
    uVar5 = param_1;
    while( true ) {
      while (cVar1 = (*param_4)(uVar5,&puStack_68), cVar1 != '\0') {
        uVar5 = uVar5 + 0x28;
      }
      uVar4 = uVar4 - 0x28;
      cVar1 = (*param_4)(&puStack_68,uVar4);
      while (cVar1 != '\0') {
        uVar4 = uVar4 - 0x28;
        cVar1 = (*param_4)(&puStack_68,uVar4);
      }
      if (uVar4 <= uVar5) break;
      puStack_90 = &UNK_180a3c3e0;
      uStack_80 = *(undefined4 *)(uVar5 + 0x10);
      lStack_88 = *(longlong *)(uVar5 + 8);
      uStack_78._4_4_ = *(uint *)(uVar5 + 0x1c);
      uStack_78._0_4_ = *(undefined4 *)(uVar5 + 0x18);
      *(undefined4 *)(uVar5 + 0x10) = 0;
      *(undefined8 *)(uVar5 + 8) = 0;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      uStack_70 = *(undefined4 *)(uVar5 + 0x20);
      FUN_18005d190(uVar5,uVar4);
      *(undefined4 *)(uVar5 + 0x20) = *(undefined4 *)(uVar4 + 0x20);
      FUN_18005d190(uVar4,&puStack_90);
      *(undefined4 *)(uVar4 + 0x20) = uStack_70;
      puStack_90 = &UNK_180a3c3e0;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_88 = 0;
      uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
      puStack_90 = &UNK_18098bcb0;
      uVar5 = uVar5 + 0x28;
    }
    puStack_68 = &UNK_180a3c3e0;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &UNK_18098bcb0;
    param_3 = param_3 + -1;
    FUN_1803809c0(uVar5,param_2,param_3,param_4);
    lVar2 = uVar5 - param_1;
    param_2 = uVar5;
  } while( true );
}





// 函数: void FUN_180380c60(longlong param_1,longlong *param_2,longlong *param_3,code *param_4)
void FUN_180380c60(longlong param_1,longlong *param_2,longlong *param_3,code *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar6 = 0xfffffffffffffffe;
  lVar2 = ((longlong)param_2 - param_1) / 0x28;
  if (1 < lVar2) {
    lVar5 = (lVar2 + -2 >> 1) + 1;
    plVar4 = (longlong *)(param_1 + (lVar5 * 5 + 1) * 8);
    do {
      lVar5 = lVar5 + -1;
      plVar1 = plVar4 + -5;
      puStack_68 = &UNK_180a3c3e0;
      uStack_58 = (undefined4)plVar4[-4];
      lStack_60 = *plVar1;
      uStack_50._4_4_ = *(uint *)((longlong)plVar4 + -0x14);
      uStack_50._0_4_ = (undefined4)plVar4[-3];
      *(undefined4 *)(plVar4 + -4) = 0;
      *plVar1 = 0;
      plVar4[-3] = 0;
      uStack_48 = (undefined4)plVar4[-2];
      FUN_180380ff0(param_1,lVar5,lVar2,lVar5,&puStack_68,param_4,uVar6);
      puStack_68 = &UNK_180a3c3e0;
      if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_60 = 0;
      uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
      puStack_68 = &UNK_18098bcb0;
      plVar4 = plVar1;
    } while (lVar5 != 0);
  }
  if (param_2 < param_3) {
    plVar4 = param_2 + 1;
    do {
      cVar3 = (*param_4)(plVar4 + -1,param_1);
      if (cVar3 != '\0') {
        puStack_68 = &UNK_180a3c3e0;
        uStack_58 = (undefined4)plVar4[1];
        lStack_60 = *plVar4;
        uStack_50._4_4_ = *(uint *)((longlong)plVar4 + 0x14);
        uStack_50._0_4_ = (undefined4)plVar4[2];
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = 0;
        plVar4[2] = 0;
        uStack_48 = (undefined4)plVar4[3];
        FUN_18005d190(plVar4 + -1,param_1);
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(param_1 + 0x20);
        FUN_180380ff0(param_1,0,lVar2,0,&puStack_68,param_4);
        puStack_68 = &UNK_180a3c3e0;
        if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_60 = 0;
        uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
        puStack_68 = &UNK_18098bcb0;
      }
      plVar1 = plVar4 + 4;
      plVar4 = plVar4 + 5;
    } while (plVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -3;
    do {
      puStack_68 = &UNK_180a3c3e0;
      uStack_58 = (undefined4)*param_2;
      lStack_60 = param_2[-1];
      uStack_50 = param_2[1];
      *(undefined4 *)param_2 = 0;
      param_2[-1] = 0;
      param_2[1] = 0;
      uStack_48 = (undefined4)param_2[2];
      FUN_18005d190(param_2 + -2,param_1);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x20);
      FUN_180380ff0(param_1,0,((0x18 - param_1) + (longlong)param_2) / 0x28 + -1,0,&puStack_68,
                    param_4,uVar6);
      puStack_68 = &UNK_180a3c3e0;
      if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_2 = param_2 + -5;
    } while (0x4f < (0x18 - param_1) + (longlong)param_2);
  }
  return;
}



undefined8 * FUN_180380fc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xe;
  return param_1;
}





// 函数: void FUN_180380ff0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180380ff0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,code *param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = param_4 * 2;
  while (lVar4 = lVar2 + 2, lVar4 < param_3) {
    lVar1 = param_1 + lVar4 * 0x28;
    cVar3 = (*param_6)(lVar1,lVar1 + -0x28);
    if (cVar3 != '\0') {
      lVar4 = lVar2 + 1;
    }
    lVar2 = param_1 + lVar4 * 0x28;
    lVar1 = param_1 + param_4 * 0x28;
    FUN_18005d190(lVar1,lVar2);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
    param_4 = lVar4;
    lVar2 = lVar4 * 2;
  }
  if (lVar4 == param_3) {
    lVar4 = param_1 + lVar4 * 0x28;
    lVar1 = param_1 + param_4 * 0x28;
    FUN_18005d190(lVar1,lVar4 + -0x28);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar4 + -8);
    param_4 = lVar2 + 1;
  }
  while (param_2 < param_4) {
    lVar4 = param_4 + -1 >> 1;
    lVar2 = param_1 + lVar4 * 0x28;
    cVar3 = (*param_6)(lVar2,param_5);
    if (cVar3 == '\0') break;
    lVar1 = param_1 + param_4 * 0x28;
    FUN_18005d190(lVar1,lVar2);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
    param_4 = lVar4;
  }
  param_1 = param_1 + param_4 * 0x28;
  FUN_18005d190(param_1,param_5);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_5 + 0x20);
  return;
}



ulonglong FUN_180381130(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
                       undefined8 param_5,undefined8 param_6,ulonglong *param_7)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong *puStack_18;
  
  lVar2 = *(longlong *)(param_1 + 8);
  for (puStack_18 = *(ulonglong **)
                     (lVar2 + ((param_2[1] ^ *param_2) % (ulonglong)*(uint *)(param_1 + 0x10)) * 8);
      puStack_18 != (ulonglong *)0x0; puStack_18 = (ulonglong *)puStack_18[3]) {
    if ((*param_2 == *puStack_18) && (param_2[1] == puStack_18[1])) goto LAB_180381183;
  }
  puStack_18 = (ulonglong *)0x0;
LAB_180381183:
  if (puStack_18 == (ulonglong *)0x0) {
    puStack_18 = *(ulonglong **)(lVar2 + *(longlong *)(param_1 + 0x10) * 8);
  }
  if (puStack_18 != *(ulonglong **)(lVar2 + *(longlong *)(param_1 + 0x10) * 8)) {
    iVar4 = (int)puStack_18[2];
    puVar1 = (uint *)((longlong)puStack_18 + 0x14);
    puStack_18 = (ulonglong *)(ulonglong)*puVar1;
    iVar5 = iVar4 + *puVar1;
    if (iVar4 < iVar5) {
      do {
        puStack_18 = (ulonglong *)((longlong)iVar4 * 0x90 + *(longlong *)(param_1 + 0x30));
        if ((((puStack_18[4] == *param_3) && (puStack_18[5] == param_3[1])) &&
            (*puStack_18 == *param_4)) && (puStack_18[1] == param_4[1])) {
          if (param_7 != (ulonglong *)0x0) {
            uVar3 = puStack_18[1];
            *param_7 = *puStack_18;
            param_7[1] = uVar3;
            uVar3 = puStack_18[3];
            param_7[2] = puStack_18[2];
            param_7[3] = uVar3;
            uVar3 = puStack_18[5];
            param_7[4] = puStack_18[4];
            param_7[5] = uVar3;
            uVar3 = puStack_18[7];
            param_7[6] = puStack_18[6];
            param_7[7] = uVar3;
            uVar3 = puStack_18[9];
            param_7[8] = puStack_18[8];
            param_7[9] = uVar3;
            uVar3 = puStack_18[0xb];
            param_7[10] = puStack_18[10];
            param_7[0xb] = uVar3;
            uVar3 = puStack_18[0xd];
            param_7[0xc] = puStack_18[0xc];
            param_7[0xd] = uVar3;
            uVar3 = puStack_18[0xf];
            param_7[0xe] = puStack_18[0xe];
            param_7[0xf] = uVar3;
            uVar3 = puStack_18[0x11];
            param_7[0x10] = puStack_18[0x10];
            param_7[0x11] = uVar3;
          }
          return CONCAT71((int7)((ulonglong)puStack_18 >> 8),1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
  }
  return (ulonglong)puStack_18 & 0xffffffffffffff00;
}





