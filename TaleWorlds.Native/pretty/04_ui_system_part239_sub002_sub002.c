#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part239_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808043c0(undefined8 param_1,longlong param_2,undefined4 *param_3)
void FUN_1808043c0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  uStack_38 = *(ulonglong *)(param_2 + 0x24);
  uStack_30 = *(undefined8 *)(param_2 + 0x2c);
  uStack_28 = 0;
  uVar3 = wcstoul(&uStack_38,0,0x10);
  uStack_30 = 0;
  *param_3 = uVar3;
  uStack_38 = *(ulonglong *)(param_2 + 0x36);
  uStack_28 = 0;
  uVar2 = wcstoul(&uStack_38,0,0x10);
  uStack_30 = 0;
  *(undefined2 *)(param_3 + 1) = uVar2;
  uStack_38 = *(ulonglong *)(param_2 + 0x40);
  uStack_28 = 0;
  uVar2 = wcstoul(&uStack_38,0,0x10);
  *(undefined2 *)((longlong)param_3 + 6) = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = (ulonglong)*(uint *)(param_2 + 0x4a);
  uVar1 = wcstoul(&uStack_38,0,0x10);
  *(undefined1 *)(param_3 + 2) = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = (ulonglong)*(uint *)(param_2 + 0x4e);
  uVar1 = wcstoul(&uStack_38,0,0x10);
  *(undefined1 *)((longlong)param_3 + 9) = uVar1;
  puVar5 = (uint *)(param_2 + 0x54);
  lVar4 = 2;
  do {
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = (ulonglong)*puVar5;
    uVar1 = wcstoul(&uStack_38,0,0x10);
    *(undefined1 *)((longlong)(param_3 + 2) + lVar4) = uVar1;
    puVar5 = puVar5 + 1;
    lVar4 = lVar4 + 1;
  } while (lVar4 < 8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804500(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int aiStackX_8 [2];
  undefined8 uStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong *aplStack_38 [3];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x760)) {
    plVar4 = (longlong *)(param_1 + 0x770);
    iVar2 = iVar3;
    do {
      CoTaskMemFree(plVar4[-1]);
      plVar4[-1] = 0;
      if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar4,&UNK_18097ed60,0x10f,1);
      }
      plVar4[1] = 0;
      iVar2 = iVar2 + 1;
      plVar4 = plVar4 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x760));
  }
  *(undefined4 *)(param_1 + 0x760) = 0;
  aplStack_38[0] = (longlong *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x20))
                    (*(longlong **)(param_1 + 0x720),1,0,aplStack_38);
  if (iVar2 != -0x7ff8fb70) {
    if (iVar2 < 0) {
      return 0x39;
    }
    uVar1 = FUN_180804c50(param_1,aplStack_38[0],
                          param_1 + ((longlong)*(int *)(param_1 + 0x760) + 0x4f) * 0x18,0,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + 1;
    (**(code **)(*aplStack_38[0] + 0x10))();
  }
  plStackX_20 = (longlong *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x18))
                    (*(longlong **)(param_1 + 0x720),2,1,&plStackX_20);
  if (-1 < iVar2) {
    aiStackX_8[0] = 0;
    iVar2 = (**(code **)(*plStackX_20 + 0x18))(plStackX_20,aiStackX_8);
    if (-1 < iVar2) {
      if (0 < aiStackX_8[0]) {
        do {
          plStackX_18 = (longlong *)0x0;
          iVar2 = (**(code **)(*plStackX_20 + 0x20))(plStackX_20,iVar3,&plStackX_18);
          if (iVar2 < 0) {
            return 0x39;
          }
          uStackX_10 = 0;
          iVar2 = (**(code **)(*plStackX_18 + 0x28))(plStackX_18,&uStackX_10);
          if (iVar2 < 0) {
            return 0x39;
          }
          if ((*(int *)(param_1 + 0x760) < 0x20) &&
             ((*(longlong *)(param_1 + 0x768) == 0 ||
              (iVar2 = func_0x0001807f7d80(uStackX_10), iVar2 != 0)))) {
            uVar1 = FUN_180804c50(param_1,plStackX_18,
                                  param_1 + ((longlong)*(int *)(param_1 + 0x760) + 0x4f) * 0x18,
                                  uStackX_10,1);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + 1;
          }
          else {
            CoTaskMemFree(uStackX_10);
          }
          (**(code **)(*plStackX_18 + 0x10))();
          iVar3 = iVar3 + 1;
        } while (iVar3 < aiStackX_8[0]);
      }
      (**(code **)(*plStackX_20 + 0x10))();
      return 0;
    }
  }
  return 0x39;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18080450a(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *unaff_RBP;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *in_stack_00000030;
  int in_stack_00000070;
  longlong *in_stack_00000078;
  longlong *in_stack_00000080;
  longlong *in_stack_00000088;
  
  iVar2 = (int)unaff_RBP;
  uVar5 = (ulonglong)unaff_RBP & 0xffffffff;
  if (iVar2 < *(int *)(param_1 + 0x760)) {
    plVar6 = (longlong *)(param_1 + 0x770);
    do {
      CoTaskMemFree(plVar6[-1]);
      plVar6[-1] = (longlong)unaff_RBP;
      if (*plVar6 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar6,&UNK_18097ed60,0x10f,1);
      }
      plVar6[1] = (longlong)unaff_RBP;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      plVar6 = plVar6 + 3;
    } while ((int)uVar4 < *(int *)(param_1 + 0x760));
  }
  *(int *)(param_1 + 0x760) = iVar2;
  in_stack_00000030 = unaff_RBP;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x20))
                    (*(longlong **)(param_1 + 0x720),1,0,&stack0x00000030);
  if (iVar1 != -0x7ff8fb70) {
    if (iVar1 < 0) {
      return 0x39;
    }
    uVar3 = FUN_180804c50(param_1,in_stack_00000030,
                          param_1 + ((longlong)*(int *)(param_1 + 0x760) + 0x4f) * 0x18,0,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + 1;
    (**(code **)(*in_stack_00000030 + 0x10))();
  }
  in_stack_00000088 = unaff_RBP;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x18))
                    (*(longlong **)(param_1 + 0x720),2,1,&stack0x00000088);
  if ((iVar1 < 0) ||
     (in_stack_00000070 = iVar2,
     iVar1 = (**(code **)(*in_stack_00000088 + 0x18))(in_stack_00000088,&stack0x00000070), iVar1 < 0
     )) {
    return 0x39;
  }
  uVar5 = (ulonglong)unaff_RBP & 0xffffffff;
  if (iVar2 < in_stack_00000070) {
    do {
      in_stack_00000080 = unaff_RBP;
      iVar2 = (**(code **)(*in_stack_00000088 + 0x20))(in_stack_00000088,uVar5,&stack0x00000080);
      if (iVar2 < 0) {
        return 0x39;
      }
      in_stack_00000078 = unaff_RBP;
      iVar2 = (**(code **)(*in_stack_00000080 + 0x28))(in_stack_00000080,&stack0x00000078);
      if (iVar2 < 0) {
        return 0x39;
      }
      if ((*(int *)(param_1 + 0x760) < 0x20) &&
         ((*(longlong *)(param_1 + 0x768) == 0 ||
          (iVar2 = func_0x0001807f7d80(in_stack_00000078), iVar2 != 0)))) {
        uVar3 = FUN_180804c50(param_1,in_stack_00000080,
                              param_1 + ((longlong)*(int *)(param_1 + 0x760) + 0x4f) * 0x18,
                              in_stack_00000078,1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + 1;
      }
      else {
        CoTaskMemFree(in_stack_00000078);
      }
      (**(code **)(*in_stack_00000080 + 0x10))();
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < in_stack_00000070);
  }
  (**(code **)(*in_stack_00000088 + 0x10))();
  return 0;
}



undefined8 FUN_1808045a3(void)

{
  int in_EAX;
  int iVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  longlong *unaff_RBP;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong *in_stack_00000030;
  int in_stack_00000070;
  longlong *in_stack_00000078;
  longlong *in_stack_00000080;
  longlong *in_stack_00000088;
  
  if (-1 < in_EAX) {
    uVar5 = 1;
    uVar2 = FUN_180804c50();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int *)(unaff_RBX + 0x760) = *(int *)(unaff_RBX + 0x760) + 1;
    (**(code **)(*in_stack_00000030 + 0x10))();
    in_stack_00000088 = unaff_RBP;
    iVar1 = (**(code **)(**(longlong **)(unaff_RBX + 0x720) + 0x18))
                      (*(longlong **)(unaff_RBX + 0x720),2,1,&stack0x00000088,uVar5);
    if (-1 < iVar1) {
      in_stack_00000070 = (int)unaff_RBP;
      iVar1 = (**(code **)(*in_stack_00000088 + 0x18))(in_stack_00000088,&stack0x00000070);
      if (-1 < iVar1) {
        uVar4 = (ulonglong)unaff_RBP & 0xffffffff;
        if ((int)unaff_RBP < in_stack_00000070) {
          do {
            in_stack_00000080 = unaff_RBP;
            iVar1 = (**(code **)(*in_stack_00000088 + 0x20))
                              (in_stack_00000088,uVar4,&stack0x00000080);
            if (iVar1 < 0) {
              return 0x39;
            }
            in_stack_00000078 = unaff_RBP;
            iVar1 = (**(code **)(*in_stack_00000080 + 0x28))(in_stack_00000080,&stack0x00000078);
            if (iVar1 < 0) {
              return 0x39;
            }
            if ((*(int *)(unaff_RBX + 0x760) < 0x20) &&
               ((*(longlong *)(unaff_RBX + 0x768) == 0 ||
                (iVar1 = func_0x0001807f7d80(in_stack_00000078), iVar1 != 0)))) {
              uVar2 = FUN_180804c50();
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              *(int *)(unaff_RBX + 0x760) = *(int *)(unaff_RBX + 0x760) + 1;
            }
            else {
              CoTaskMemFree(in_stack_00000078);
            }
            (**(code **)(*in_stack_00000080 + 0x10))();
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while ((int)uVar3 < in_stack_00000070);
        }
        (**(code **)(*in_stack_00000088 + 0x10))();
        return 0;
      }
    }
  }
  return 0x39;
}



undefined8
FUN_180804740(longlong param_1,int param_2,longlong param_3,int param_4,longlong param_5,
             undefined4 *param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  lVar2 = param_1 + -8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  if ((param_3 != 0) && (0 < param_4)) {
    func_0x00018076b450(param_3,*(undefined8 *)(lVar2 + 0x770 + lVar3 * 0x18),param_4);
  }
  if ((param_5 != 0) &&
     (uVar1 = FUN_1808043c0(lVar2,*(undefined8 *)(lVar2 + 0x768 + lVar3 * 0x18)), (int)uVar1 != 0))
  {
    return uVar1;
  }
  lVar2 = lVar2 + lVar3 * 0x18;
  *param_8 = *(undefined4 *)(lVar2 + 0x778);
  *param_6 = *(undefined4 *)(lVar2 + 0x77c);
  return 0;
}



undefined8 FUN_1808047e0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int aiStackX_8 [2];
  
  lVar3 = param_1 + -8;
  if (param_1 == 0) {
    lVar3 = 0;
  }
  lVar1 = *(longlong *)(lVar3 + 0x758);
  if (*(int *)(lVar1 + 8) != 0) {
    aiStackX_8[0] = 0;
    FUN_180768b70(aiStackX_8);
    if (1000 < (uint)(aiStackX_8[0] - *(int *)(lVar1 + 8))) {
      *(undefined4 *)(lVar1 + 8) = 0;
      *param_3 = 1;
      uVar2 = FUN_180804500(lVar3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_180804846;
    }
  }
  *param_3 = 0;
LAB_180804846:
  *param_2 = *(undefined4 *)(lVar3 + 0x760);
  return 0;
}



undefined8 FUN_180804870(undefined8 param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x28) + 0x30))();
  if (iVar1 < 0) {
    return 0x31;
  }
  *param_3 = *(uint *)(param_2 + 0x14) % *(uint *)(param_2 + 0x24);
  return 0;
}



undefined8
FUN_1808048d0(ulonglong param_1,longlong param_2,undefined8 param_3,uint param_4,longlong *param_5,
             undefined8 param_6,uint *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uStackX_8;
  longlong lStackX_10;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar3 = 0;
  lStackX_10 = 0;
  uStackX_8 = param_1 & 0xffffffff00000000;
  iVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))
                    (*(longlong **)(lVar1 + 8),&lStackX_10,lVar1 + 0x10,&uStackX_8,0,0);
  if (iVar2 < 0) {
    uVar3 = 0x31;
  }
  else {
    uVar4 = *(int *)(param_2 + 0x20) * *(int *)(lVar1 + 0x10) * 4 - *(uint *)(lVar1 + 0x14);
    *param_5 = (ulonglong)*(uint *)(lVar1 + 0x14) + lStackX_10;
    if (param_4 < uVar4) {
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + param_4;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      uVar4 = param_4;
    }
    else {
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    *param_7 = uVar4;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_180804980(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  ulonglong in_stack_ffffffffffffffa8;
  longlong lStack_38;
  longlong *plStack_30;
  longlong *aplStack_28 [2];
  
  uVar3 = 0;
  aplStack_28[0] = (longlong *)0x0;
  lStack_38 = 0;
  plStack_30 = (longlong *)0x0;
  puVar2 = (undefined8 *)
           FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_18097ed60,0x312,
                         in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0x26;
  }
  else {
    *(undefined8 **)(param_2 + 10) = puVar2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x28))
                      (*(longlong **)(param_1 + 0x720),
                       *(undefined8 *)(param_1 + ((longlong)*param_2 + 0x4f) * 0x18),aplStack_28);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*aplStack_28[0] + 0x18))(aplStack_28[0],&UNK_18097ed30,0x17,0,puVar2);
      if (-1 < iVar1) {
        iVar1 = (**(code **)*aplStack_28[0])(aplStack_28[0],&UNK_18097ee30,&plStack_30);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*plStack_30 + 0x18))(plStack_30,aiStackX_18);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*(longlong *)*puVar2 + 0x40))((longlong *)*puVar2,&lStack_38);
            if (-1 < iVar1) {
              uVar4 = uVar3;
              if (aiStackX_18[0] == 0) {
                uVar4 = 0x20000;
              }
              iVar1 = (**(code **)(*(longlong *)*puVar2 + 0x18))
                                ((longlong *)*puVar2,0,uVar4,800000,0,lStack_38,0);
              if (-1 < iVar1) {
                iVar1 = (**(code **)(*(longlong *)*puVar2 + 0x70))
                                  ((longlong *)*puVar2,&UNK_18097ee08,puVar2 + 1);
                if (-1 < iVar1) {
                  iVar1 = (**(code **)(*(longlong *)*puVar2 + 0x50))();
                  if (-1 < iVar1) {
                    iVar1 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                                      ((longlong *)*puVar2,aiStackX_20);
                    if (-1 < iVar1) {
                      param_2[7] = *(int *)(lStack_38 + 4);
                      param_2[8] = (uint)*(ushort *)(lStack_38 + 2);
                      param_2[6] = 5;
                      param_2[9] = aiStackX_20[0] * 2;
                      goto LAB_180804b26;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 0x39;
  }
LAB_180804b26:
  if (lStack_38 != 0) {
    CoTaskMemFree();
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x10))();
  }
  if (aplStack_28[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_28[0] + 0x10))();
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804b90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x58))();
    }
    if ((longlong *)plVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    if (*(longlong *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_2 + 0x28),
                    &UNK_18097ed60,0x370,1);
    }
  }
  return 0;
}



undefined8 FUN_180804c20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 8);
  iVar2 = (**(code **)(*plVar1 + 0x20))
                    (plVar1,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x10));
  uVar3 = 0;
  if (iVar2 < 0) {
    uVar3 = 0x31;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180804c50(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int aiStackX_20 [2];
  ulonglong uVar6;
  uint uVar7;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    iVar3 = (**(code **)(*param_2 + 0x28))(param_2,param_3);
    if (iVar3 < 0) {
      return 0x33;
    }
  }
  else {
    *param_3 = param_4;
  }
  iVar3 = 0;
  bVar1 = false;
  if (param_5 != '\0') {
    plStack_68 = (longlong *)0x0;
    iVar2 = (**(code **)*param_2)(param_2,&UNK_18097ee30,&plStack_68);
    if ((iVar2 < 0) ||
       (iVar2 = (**(code **)(*plStack_68 + 0x18))(plStack_68,aiStackX_20), iVar2 < 0)) {
      return 0x39;
    }
    (**(code **)(*plStack_68 + 0x10))();
    bVar1 = false;
    if (aiStackX_20[0] == 0) {
      bVar1 = true;
    }
  }
  plStack_60 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_2 + 0x20))(param_2,0,&plStack_60);
  if (-1 < iVar2) {
    uStack_48 = 0;
    puStack_40 = (undefined *)0x0;
    uStack_38 = 0;
    iVar2 = (**(code **)(*plStack_60 + 0x28))(plStack_60,&UNK_18098b9b8,&uStack_48);
    if (-1 < iVar2) {
      puVar5 = &UNK_18097ed50;
      if ((short)uStack_48 == 0x1f) {
        puVar5 = puStack_40;
      }
      if (bVar1) {
        iVar3 = func_0x00018076b690(&UNK_18097ed40);
      }
      uVar7 = 0;
      uVar6 = 0;
      iVar2 = WideCharToMultiByte(0xfde9,0,puVar5,0xffffffff,0,0,0,0);
      iVar3 = iVar3 + iVar2;
      lVar4 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar3,&UNK_18097ed60,0xe2,
                            uVar6 & 0xffffffff00000000,uVar7 & 0xffffff00,1);
      param_3[1] = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      WideCharToMultiByte(0xfde9,0,puVar5,0xffffffff,lVar4,iVar3,0,0);
      if (bVar1) {
        FUN_18076b3b0(param_3[1],&UNK_18097ed40,iVar3);
      }
      iVar3 = PropVariantClear(&uStack_48);
      if (-1 < iVar3) {
        (**(code **)(*plStack_60 + 0x10))();
        plStack_58 = (longlong *)0x0;
        iVar3 = (**(code **)(*param_2 + 0x18))(param_2,&UNK_18097ed30,0x17,0,&plStack_58);
        if (-1 < iVar3) {
          lStack_50 = 0;
          iVar3 = (**(code **)(*plStack_58 + 0x40))(plStack_58,&lStack_50);
          if (-1 < iVar3) {
            *(uint *)(param_3 + 2) = (uint)*(ushort *)(lStack_50 + 2);
            *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(lStack_50 + 4);
          }
          CoTaskMemFree();
          (**(code **)(*plStack_58 + 0x10))();
          return 0;
        }
      }
    }
  }
  return 0x33;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804d3d(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  bool in_ZF;
  
  if (in_ZF) {
    unaff_R14 = *(undefined8 *)(unaff_RBP + -0x18);
  }
  iVar1 = (int)unaff_R13;
  if (unaff_SIL != '\0') {
    iVar1 = func_0x00018076b690(&UNK_18097ed40);
  }
  iVar2 = WideCharToMultiByte(0xfde9,0,unaff_R14,0xffffffff);
  lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar1 + iVar2,&UNK_18097ed60,0xe2,
                        unaff_R13 & 0xffffffff);
  *(longlong *)(unaff_RDI + 8) = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0x26;
  }
  else {
    WideCharToMultiByte(0xfde9,0,unaff_R14,0xffffffff,lVar3);
    if (unaff_SIL != '\0') {
      FUN_18076b3b0(*(undefined8 *)(unaff_RDI + 8),&UNK_18097ed40,iVar1 + iVar2);
    }
    iVar1 = PropVariantClear(unaff_RBP + -0x20);
    if (-1 < iVar1) {
      (**(code **)(**(longlong **)(unaff_RBP + -0x38) + 0x10))();
      lVar3 = *unaff_RBX;
      *(ulonglong *)(unaff_RBP + -0x30) = unaff_R13;
      iVar1 = (**(code **)(lVar3 + 0x18))();
      if (-1 < iVar1) {
        *(ulonglong *)(unaff_RBP + -0x28) = unaff_R13;
        iVar1 = (**(code **)(**(longlong **)(unaff_RBP + -0x30) + 0x40))
                          (*(longlong **)(unaff_RBP + -0x30),unaff_RBP + -0x28);
        lVar3 = *(longlong *)(unaff_RBP + -0x28);
        if (-1 < iVar1) {
          *(uint *)(unaff_RDI + 0x10) = (uint)*(ushort *)(lVar3 + 2);
          *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(lVar3 + 4);
        }
        CoTaskMemFree();
        (**(code **)(**(longlong **)(unaff_RBP + -0x30) + 0x10))();
        return 0;
      }
    }
    uVar4 = 0x33;
  }
  return uVar4;
}



undefined8 FUN_180804d60(void)

{
  return 0x39;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804d6a(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  int iStack0000000000000028;
  
  iStack0000000000000028 = (int)unaff_R13;
  iVar1 = WideCharToMultiByte(0xfde9,0);
  iStack0000000000000028 = CONCAT31(iStack0000000000000028._1_3_,(char)unaff_R13);
  iVar1 = (int)unaff_R13 + iVar1;
  lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar1,&UNK_18097ed60,0xe2,
                        unaff_R13 & 0xffffffff);
  *(longlong *)(unaff_RDI + 8) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    iStack0000000000000028 = iVar1;
    WideCharToMultiByte(0xfde9,0);
    if (unaff_SIL != '\0') {
      FUN_18076b3b0(*(undefined8 *)(unaff_RDI + 8),&UNK_18097ed40,iVar1);
    }
    iVar1 = PropVariantClear(unaff_RBP + -0x20);
    if (-1 < iVar1) {
      (**(code **)(**(longlong **)(unaff_RBP + -0x38) + 0x10))();
      lVar2 = *unaff_RBX;
      *(ulonglong *)(unaff_RBP + -0x30) = unaff_R13;
      iVar1 = (**(code **)(lVar2 + 0x18))();
      if (-1 < iVar1) {
        *(ulonglong *)(unaff_RBP + -0x28) = unaff_R13;
        iVar1 = (**(code **)(**(longlong **)(unaff_RBP + -0x30) + 0x40))
                          (*(longlong **)(unaff_RBP + -0x30),unaff_RBP + -0x28);
        lVar2 = *(longlong *)(unaff_RBP + -0x28);
        if (-1 < iVar1) {
          *(uint *)(unaff_RDI + 0x10) = (uint)*(ushort *)(lVar2 + 2);
          *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(lVar2 + 4);
        }
        CoTaskMemFree();
        (**(code **)(**(longlong **)(unaff_RBP + -0x30) + 0x10))();
        return 0;
      }
    }
    uVar3 = 0x33;
  }
  return uVar3;
}



undefined8 FUN_180804dde(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804ed0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = 0;
  if (0 < *(int *)(lVar1 + 0x2b8)) {
    plVar2 = (longlong *)(lVar1 + 0xc0);
    do {
      if (plVar2[-1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2[-1],&UNK_18097ee40,0x7a,1);
      }
      if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar2,&UNK_18097ee40,0x7b,1);
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 2;
    } while (iVar3 < *(int *)(lVar1 + 0x2b8));
  }
  *(undefined4 *)(lVar1 + 0x2b8) = 0;
  *(undefined1 *)(lVar1 + 0xb0) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804ef2(void)

{
  longlong *plVar1;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  int unaff_EDI;
  
  plVar1 = (longlong *)(unaff_RSI + 0xc0);
  while( true ) {
    if (plVar1[-1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar1[-1],&UNK_18097ee40,0x7a,1);
    }
    if (*plVar1 != 0) break;
    unaff_EDI = unaff_EDI + 1;
    plVar1 = plVar1 + 2;
    if (*(int *)(unaff_RSI + 0x2b8) <= unaff_EDI) {
      *(undefined4 *)(unaff_RSI + 0x2b8) = unaff_EBP;
      *(char *)(unaff_RSI + 0xb0) = (char)unaff_EBP;
      return 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar1,&UNK_18097ee40,0x7b,1);
}



undefined8 FUN_180804f75(void)

{
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  
  *(undefined4 *)(unaff_RSI + 0x2b8) = unaff_EBP;
  *(char *)(unaff_RSI + 0xb0) = (char)unaff_EBP;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180804fa0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    iVar3 = 0;
    if (plVar1[0x59] != 0) {
      (**(code **)(*(longlong *)plVar1[0x58] + 0x38))();
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar1[0x59],&UNK_18097ee40,0x32a,1);
    }
    if (0 < (int)plVar1[0x5a]) {
      plVar5 = plVar1 + 0x5b;
      do {
        CoTaskMemFree(*plVar5);
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)plVar1[0x5a]);
    }
    *(undefined4 *)(plVar1 + 0x5a) = 0;
    if ((longlong *)plVar1[0x58] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x58] + 0x10))();
      plVar1[0x58] = 0;
    }
    uVar2 = FUN_180804ed0(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*plVar1 != 0) {
      (*(code *)param_1[3])(*plVar1,&UNK_18097ee40,0x341);
      *plVar1 = 0;
    }
    if (plVar1[1] != 0) {
      (*(code *)param_1[3])(plVar1[1],&UNK_18097ee40,0x347);
      plVar1[1] = 0;
    }
    plVar5 = plVar1 + 7;
    lVar4 = 0xc;
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x10))();
        *plVar5 = 0;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    plVar5 = plVar1 + 0x13;
    lVar4 = 2;
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x10))();
        *plVar5 = 0;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if ((longlong *)plVar1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[6] + 0x10))();
      plVar1[6] = 0;
    }
    if ((longlong *)plVar1[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[5] + 0x10))();
      plVar1[5] = 0;
    }
    if (plVar1[3] != 0) {
      CloseHandle();
      plVar1[3] = 0;
    }
    if (plVar1[2] != 0) {
      CloseHandle();
      plVar1[2] = 0;
    }
    if ((longlong *)plVar1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[4] + 0x10))();
      plVar1[4] = 0;
    }
    (*(code *)param_1[3])(*param_1,&UNK_18097ee40,0x37b);
    *param_1 = 0;
  }
  return 0;
}



undefined8 FUN_1808051c0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar9;
  uint auStackX_8 [2];
  longlong *plStackX_10;
  longlong *plStackX_18;
  undefined8 uStackX_20;
  longlong *plStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  uVar3 = FUN_180804ed0();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  plVar9 = (longlong *)(lVar1 + 0x2c0);
  if (*plVar9 == 0) {
    iVar2 = CoCreateInstance(&UNK_180958b00,0,0x17,&UNK_180958b10,plVar9);
    if (iVar2 == -0x7ffbfe10) {
      iVar2 = CoInitializeEx(0,2);
      if (iVar2 < 0) {
        return 0x33;
      }
      iVar2 = CoCreateInstance(&UNK_180958b00,0,0x17,&UNK_180958b10,plVar9);
    }
    if (iVar2 < 0) {
      return 0x33;
    }
  }
  uVar8 = 0;
  plStackX_10 = (longlong *)0x0;
  iVar2 = (**(code **)(*(longlong *)*plVar9 + 0x20))((longlong *)*plVar9,0,0,&plStackX_10);
  if (((iVar2 + 0x80000000U & 0x80000000) != 0) || (iVar2 == -0x7ff8fb70)) {
    lStack_60 = 0;
    if (iVar2 != -0x7ff8fb70) {
      iVar2 = (**(code **)(*plStackX_10 + 0x28))(plStackX_10,&lStack_60);
      if (iVar2 < 0) {
        return 0x31;
      }
      (**(code **)(*plStackX_10 + 0x10))();
    }
    plStackX_18 = (longlong *)0x0;
    iVar2 = (**(code **)(*(longlong *)*plVar9 + 0x18))((longlong *)*plVar9,0,1,&plStackX_18);
    if (-1 < iVar2) {
      auStackX_8[0] = 0;
      iVar2 = (**(code **)(*plStackX_18 + 0x18))(plStackX_18,auStackX_8);
      if (-1 < iVar2) {
        uVar7 = 0x20;
        if (auStackX_8[0] < 0x20) {
          uVar7 = auStackX_8[0];
        }
        auStackX_8[0] = uVar7;
        if (uVar7 != 0) {
          do {
            iVar2 = (**(code **)(*plStackX_18 + 0x20))(plStackX_18,uVar8,&plStackX_10);
            if (iVar2 < 0) {
              return 0x31;
            }
            uStackX_20 = 0;
            iVar2 = (**(code **)(*plStackX_10 + 0x28))(plStackX_10,&uStackX_20);
            if (iVar2 < 0) {
              return 0x31;
            }
            lVar4 = FUN_1807f7db0(uStackX_20);
            lVar6 = uVar8 * 0x10 + lVar1;
            *(longlong *)(lVar6 + 0xb8) = lVar4;
            if (lVar4 == 0) {
              return 0x26;
            }
            CoTaskMemFree(uStackX_20);
            plStack_68 = (longlong *)0x0;
            plVar9 = (longlong *)((uVar8 + 0xc) * 0x10 + lVar1);
            iVar2 = (**(code **)(*plStackX_10 + 0x20))(plStackX_10,0,&plStack_68);
            if (-1 < iVar2) {
              uStack_58 = 0;
              puStack_50 = (undefined *)0x0;
              uStack_48 = 0;
              iVar2 = (**(code **)(*plStack_68 + 0x28))(plStack_68,&UNK_18098b9b8,&uStack_58);
              if (-1 < iVar2) {
                puVar5 = &UNK_18097ed50;
                if ((short)uStack_58 == 0x1f) {
                  puVar5 = puStack_50;
                }
                lVar4 = FUN_1807f7db0(puVar5);
                *plVar9 = lVar4;
                if ((lVar4 != 0) && (iVar2 = PropVariantClear(&uStack_58), -1 < iVar2)) {
                  (**(code **)(*plStack_68 + 0x10))();
                }
              }
            }
            if (*plVar9 == 0) {
              return 0x26;
            }
            (**(code **)(*plStackX_10 + 0x10))();
            if (((lStack_60 != 0) && ((int)uVar8 != 0)) &&
               (iVar2 = func_0x0001807f7d80(lStack_60,*(undefined8 *)(lVar6 + 0xb8)), iVar2 == 0)) {
              uVar3 = *(undefined8 *)(lVar1 + 0xb8);
              *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar6 + 0xb8);
              lVar4 = *plVar9;
              *(undefined8 *)(lVar6 + 0xb8) = uVar3;
              lVar6 = *(longlong *)(lVar1 + 0xc0);
              *(longlong *)(lVar1 + 0xc0) = lVar4;
              *plVar9 = lVar6;
            }
            *(int *)(lVar1 + 0x2b8) = *(int *)(lVar1 + 0x2b8) + 1;
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < auStackX_8[0]);
        }
        CoTaskMemFree(lStack_60);
        (**(code **)(*plStackX_18 + 0x10))();
        *(undefined1 *)(lVar1 + 0xb0) = 1;
        return 0;
      }
    }
  }
  return 0x31;
}



undefined8 FUN_1808051df(void)

{
  undefined8 uVar1;
  int in_EAX;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar5;
  uint uVar6;
  longlong *plVar8;
  ulonglong uVar7;
  
  plVar8 = (longlong *)(unaff_RBX + 0x2c0);
  if (*plVar8 == 0) {
    iVar2 = CoCreateInstance(&UNK_180958b00,0,in_EAX + 0x17,&UNK_180958b10,plVar8);
    if (iVar2 == -0x7ffbfe10) {
      iVar2 = CoInitializeEx(0,2);
      if (iVar2 < 0) {
        return 0x33;
      }
      iVar2 = CoCreateInstance(&UNK_180958b00,0,0x17,&UNK_180958b10,plVar8);
    }
    if (iVar2 < 0) {
      return 0x33;
    }
  }
  uVar7 = 0;
  *(undefined8 *)(unaff_RBP + 0x6f) = 0;
  iVar2 = (**(code **)(*(longlong *)*plVar8 + 0x20))((longlong *)*plVar8,0,0,unaff_RBP + 0x6f);
  if (((iVar2 + 0x80000000U & 0x80000000) != 0) || (iVar2 == -0x7ff8fb70)) {
    *(undefined8 *)(unaff_RBP + -1) = 0;
    if (iVar2 != -0x7ff8fb70) {
      iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x28))
                        (*(longlong **)(unaff_RBP + 0x6f),unaff_RBP + -1);
      if (iVar2 < 0) {
        return 0x31;
      }
      (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x10))();
    }
    *(undefined8 *)(unaff_RBP + 0x77) = 0;
    iVar2 = (**(code **)(*(longlong *)*plVar8 + 0x18))((longlong *)*plVar8,0,1,unaff_RBP + 0x77);
    if (-1 < iVar2) {
      *(undefined4 *)(unaff_RBP + 0x67) = 0;
      iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x77) + 0x18))
                        (*(longlong **)(unaff_RBP + 0x77),unaff_RBP + 0x67);
      if (-1 < iVar2) {
        iVar2 = 0x20;
        if (*(uint *)(unaff_RBP + 0x67) < 0x20) {
          iVar2 = *(int *)(unaff_RBP + 0x67);
        }
        *(int *)(unaff_RBP + 0x67) = iVar2;
        if (iVar2 != 0) {
          do {
            iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x77) + 0x20))
                              (*(longlong **)(unaff_RBP + 0x77),uVar7,unaff_RBP + 0x6f);
            if (iVar2 < 0) {
              return 0x31;
            }
            *(undefined8 *)(unaff_RBP + 0x7f) = 0;
            iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x28))
                              (*(longlong **)(unaff_RBP + 0x6f),unaff_RBP + 0x7f);
            if (iVar2 < 0) {
              return 0x31;
            }
            lVar3 = FUN_1807f7db0(*(undefined8 *)(unaff_RBP + 0x7f));
            lVar5 = uVar7 * 0x10 + unaff_RBX;
            *(longlong *)(lVar5 + 0xb8) = lVar3;
            if (lVar3 == 0) {
              return 0x26;
            }
            CoTaskMemFree(*(undefined8 *)(unaff_RBP + 0x7f));
            *(undefined8 *)(unaff_RBP + -9) = 0;
            plVar8 = (longlong *)((uVar7 + 0xc) * 0x10 + unaff_RBX);
            iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x20))
                              (*(longlong **)(unaff_RBP + 0x6f),0,unaff_RBP + -9);
            if (-1 < iVar2) {
              *(undefined8 *)(unaff_RBP + 7) = 0;
              *(undefined8 *)(unaff_RBP + 0xf) = 0;
              *(undefined8 *)(unaff_RBP + 0x17) = 0;
              iVar2 = (**(code **)(**(longlong **)(unaff_RBP + -9) + 0x28))
                                (*(longlong **)(unaff_RBP + -9),&UNK_18098b9b8,unaff_RBP + 7);
              if (-1 < iVar2) {
                puVar4 = &UNK_18097ed50;
                if (*(short *)(unaff_RBP + 7) == 0x1f) {
                  puVar4 = *(undefined **)(unaff_RBP + 0xf);
                }
                lVar3 = FUN_1807f7db0(puVar4);
                *plVar8 = lVar3;
                if ((lVar3 != 0) && (iVar2 = PropVariantClear(unaff_RBP + 7), -1 < iVar2)) {
                  (**(code **)(**(longlong **)(unaff_RBP + -9) + 0x10))();
                }
              }
            }
            if (*plVar8 == 0) {
              return 0x26;
            }
            (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x10))();
            if (((*(longlong *)(unaff_RBP + -1) != 0) && ((int)uVar7 != 0)) &&
               (iVar2 = func_0x0001807f7d80(*(longlong *)(unaff_RBP + -1),
                                            *(undefined8 *)(lVar5 + 0xb8)), iVar2 == 0)) {
              uVar1 = *(undefined8 *)(unaff_RBX + 0xb8);
              *(undefined8 *)(unaff_RBX + 0xb8) = *(undefined8 *)(lVar5 + 0xb8);
              lVar3 = *plVar8;
              *(undefined8 *)(lVar5 + 0xb8) = uVar1;
              lVar5 = *(longlong *)(unaff_RBX + 0xc0);
              *(longlong *)(unaff_RBX + 0xc0) = lVar3;
              *plVar8 = lVar5;
            }
            *(int *)(unaff_RBX + 0x2b8) = *(int *)(unaff_RBX + 0x2b8) + 1;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < *(uint *)(unaff_RBP + 0x67));
        }
        CoTaskMemFree(*(undefined8 *)(unaff_RBP + -1));
        (**(code **)(**(longlong **)(unaff_RBP + 0x77) + 0x10))();
        *(undefined1 *)(unaff_RBX + 0xb0) = 1;
        return 0;
      }
    }
  }
  return 0x31;
}



undefined8 FUN_18080525f(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar5;
  uint uVar6;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  ulonglong uVar7;
  
  uVar7 = 0;
  *(undefined8 *)(unaff_RBP + 0x6f) = 0;
  iVar2 = (**(code **)(*(longlong *)*unaff_RDI + 0x20))((longlong *)*unaff_RDI,0,0,unaff_RBP + 0x6f)
  ;
  if (((iVar2 + 0x80000000U & 0x80000000) != 0) || (iVar2 == -0x7ff8fb70)) {
    *(undefined8 *)(unaff_RBP + -1) = 0;
    if (iVar2 != -0x7ff8fb70) {
      iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x28))
                        (*(longlong **)(unaff_RBP + 0x6f),unaff_RBP + -1);
      if (iVar2 < 0) {
        return 0x31;
      }
      (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x10))();
    }
    *(undefined8 *)(unaff_RBP + 0x77) = 0;
    iVar2 = (**(code **)(*(longlong *)*unaff_RDI + 0x18))
                      ((longlong *)*unaff_RDI,0,1,unaff_RBP + 0x77);
    if (-1 < iVar2) {
      *(undefined4 *)(unaff_RBP + 0x67) = 0;
      iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x77) + 0x18))
                        (*(longlong **)(unaff_RBP + 0x77),unaff_RBP + 0x67);
      if (-1 < iVar2) {
        iVar2 = 0x20;
        if (*(uint *)(unaff_RBP + 0x67) < 0x20) {
          iVar2 = *(int *)(unaff_RBP + 0x67);
        }
        *(int *)(unaff_RBP + 0x67) = iVar2;
        if (iVar2 != 0) {
          do {
            iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x77) + 0x20))
                              (*(longlong **)(unaff_RBP + 0x77),uVar7,unaff_RBP + 0x6f);
            if (iVar2 < 0) {
              return 0x31;
            }
            *(undefined8 *)(unaff_RBP + 0x7f) = 0;
            iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x28))
                              (*(longlong **)(unaff_RBP + 0x6f),unaff_RBP + 0x7f);
            if (iVar2 < 0) {
              return 0x31;
            }
            lVar3 = FUN_1807f7db0(*(undefined8 *)(unaff_RBP + 0x7f));
            lVar5 = uVar7 * 0x10 + unaff_RBX;
            *(longlong *)(lVar5 + 0xb8) = lVar3;
            if (lVar3 == 0) {
              return 0x26;
            }
            CoTaskMemFree(*(undefined8 *)(unaff_RBP + 0x7f));
            *(undefined8 *)(unaff_RBP + -9) = 0;
            plVar8 = (longlong *)((uVar7 + 0xc) * 0x10 + unaff_RBX);
            iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x20))
                              (*(longlong **)(unaff_RBP + 0x6f),0,unaff_RBP + -9);
            if (-1 < iVar2) {
              *(undefined8 *)(unaff_RBP + 7) = 0;
              *(undefined8 *)(unaff_RBP + 0xf) = 0;
              *(undefined8 *)(unaff_RBP + 0x17) = 0;
              iVar2 = (**(code **)(**(longlong **)(unaff_RBP + -9) + 0x28))
                                (*(longlong **)(unaff_RBP + -9),&UNK_18098b9b8,unaff_RBP + 7);
              if (-1 < iVar2) {
                puVar4 = &UNK_18097ed50;
                if (*(short *)(unaff_RBP + 7) == 0x1f) {
                  puVar4 = *(undefined **)(unaff_RBP + 0xf);
                }
                lVar3 = FUN_1807f7db0(puVar4);
                *plVar8 = lVar3;
                if ((lVar3 != 0) && (iVar2 = PropVariantClear(unaff_RBP + 7), -1 < iVar2)) {
                  (**(code **)(**(longlong **)(unaff_RBP + -9) + 0x10))();
                }
              }
            }
            if (*plVar8 == 0) {
              return 0x26;
            }
            (**(code **)(**(longlong **)(unaff_RBP + 0x6f) + 0x10))();
            if (((*(longlong *)(unaff_RBP + -1) != 0) && ((int)uVar7 != 0)) &&
               (iVar2 = func_0x0001807f7d80(*(longlong *)(unaff_RBP + -1),
                                            *(undefined8 *)(lVar5 + 0xb8)), iVar2 == 0)) {
              uVar1 = *(undefined8 *)(unaff_RBX + 0xb8);
              *(undefined8 *)(unaff_RBX + 0xb8) = *(undefined8 *)(lVar5 + 0xb8);
              lVar3 = *plVar8;
              *(undefined8 *)(lVar5 + 0xb8) = uVar1;
              lVar5 = *(longlong *)(unaff_RBX + 0xc0);
              *(longlong *)(unaff_RBX + 0xc0) = lVar3;
              *plVar8 = lVar5;
            }
            *(int *)(unaff_RBX + 0x2b8) = *(int *)(unaff_RBX + 0x2b8) + 1;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < *(uint *)(unaff_RBP + 0x67));
        }
        CoTaskMemFree(*(undefined8 *)(unaff_RBP + -1));
        (**(code **)(**(longlong **)(unaff_RBP + 0x77) + 0x10))();
        *(undefined1 *)(unaff_RBX + 0xb0) = 1;
        return 0;
      }
    }
  }
  return 0x31;
}







