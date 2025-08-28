#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part134.c - 8 个函数

// 函数: void FUN_180747930(undefined4 param_1,uint param_2,undefined8 param_3)
void FUN_180747930(undefined4 param_1,uint param_2,undefined8 param_3)

{
  FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,param_3,0,param_2 | 0x10,1,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180747970(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180747970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,param_3,0,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807479a0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)
void FUN_1807479a0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  FUN_180742650(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,param_2,param_4,0,param_3 | 0x10);
  return;
}



ulonglong FUN_1807479e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lStackX_10;
  
  lStackX_10 = 0;
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar2 = FUN_18078cde0(param_1,0xffffffff,param_2,&lStackX_10);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_180743ab0(param_1,param_2);
    if ((int)uVar2 == 0) {
      uVar1 = FUN_1807568a0(lStackX_10,param_2,param_3,param_4,1,(char)uVar2);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        uVar2 = FUN_180758960(lStackX_10);
        if ((int)uVar2 == 0) {
          uVar2 = func_0x000180756db0(lStackX_10,1);
          if ((int)uVar2 == 0) {
            if (param_5 != (undefined8 *)0x0) {
              *param_5 = *(undefined8 *)(lStackX_10 + 0x50);
            }
            uVar2 = 0;
          }
        }
      }
      else {
        FUN_180758220(lStackX_10,0x52);
      }
    }
  }
  return uVar2;
}



ulonglong FUN_180747ad0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                       longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float afStackX_10 [2];
  undefined8 uStackX_18;
  undefined1 uStackX_20;
  longlong *aplStack_58 [4];
  
  plVar3 = param_5;
  uVar8 = 0;
  aplStack_58[0] = (longlong *)0x0;
  uVar10 = 0xffffffff;
  if (param_5 != (longlong *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
    uVar5 = 0x1f;
  }
  else if (*(int *)(param_2 + 0x110) == 0) {
    if (*(int *)(param_2 + 0x24) == 0xb) {
      uVar5 = 0x13;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x118);
      uStackX_18 = param_3;
      uStackX_20 = param_4;
      if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 0x68))) {
        uVar5 = FUN_180754fe0(lVar2,&param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(*(longlong *)(param_2 + 0x118) + 0x68) <= (int)param_5) {
          iVar1 = *(int *)(*(longlong *)(param_2 + 0x118) + 0x6c);
          if (iVar1 == 0) {
            return 0x25;
          }
          if (iVar1 == 1) {
            uVar8 = 1;
          }
          else if (iVar1 == 2) {
            puVar9 = (undefined8 *)(param_1 + 0x368);
            puVar6 = (undefined8 *)*puVar9;
            fVar11 = 9999.0;
            if (param_1 == -0x1f0) {
              puVar9 = (undefined8 *)0x0;
            }
            while (param_3 = uStackX_18, param_4 = uStackX_20, puVar6 != puVar9) {
              plVar7 = puVar6 + -0x2f;
              if (puVar6 == (undefined8 *)0x0) {
                plVar7 = (longlong *)0x0;
              }
              if ((((plVar7[0x3b] == 0) || (lVar2 = *(longlong *)(plVar7[0x3b] + 0x28), lVar2 == 0))
                  || (*(longlong *)(lVar2 + 0x118) != *(longlong *)(param_2 + 0x118))) ||
                 ((**(code **)(*plVar7 + 0x40))(plVar7,afStackX_10), fVar11 <= afStackX_10[0])) {
                puVar6 = (undefined8 *)*puVar6;
              }
              else {
                uVar10 = (undefined4)plVar7[0x3a];
                puVar6 = (undefined8 *)*puVar6;
                fVar11 = afStackX_10[0];
                aplStack_58[0] = plVar7;
              }
            }
          }
        }
      }
      uVar5 = FUN_18078cf50(param_1,uVar10,param_2,aplStack_58);
      if ((int)uVar5 == 0) {
        uVar4 = FUN_180756aa0(aplStack_58[0],param_2,param_3,param_4,1,uVar8);
        if (uVar4 != 0) {
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = 0;
          }
          FUN_180758220(aplStack_58[0],0x52);
          return (ulonglong)uVar4;
        }
        uVar5 = FUN_180758960(aplStack_58[0]);
        if (((int)uVar5 == 0) && (uVar5 = func_0x000180756db0(aplStack_58[0],1), (int)uVar5 == 0)) {
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = aplStack_58[0][10];
          }
          return 0;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = 0;
      }
    }
  }
  else {
    uVar5 = 0x2e;
  }
  return uVar5;
}



ulonglong FUN_180747bb5(float param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong in_RAX;
  ulonglong uVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong unaff_R13;
  undefined8 *puVar6;
  undefined4 unaff_R15D;
  float fVar7;
  longlong *in_stack_00000030;
  float in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined1 in_stack_000000a8;
  
  puVar6 = (undefined8 *)(unaff_R13 + 0x368);
  puVar4 = (undefined8 *)*puVar6;
  fVar7 = 9999.0;
  if (in_RAX == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  while (puVar4 != puVar6) {
    plVar5 = puVar4 + -0x2f;
    if (puVar4 == (undefined8 *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if ((((plVar5[0x3b] == 0) || (lVar1 = *(longlong *)(plVar5[0x3b] + 0x28), lVar1 == 0)) ||
        (*(longlong *)(lVar1 + 0x118) != *(longlong *)(unaff_RBP + 0x118))) ||
       ((**(code **)(*plVar5 + 0x40))(plVar5,&stack0x00000098), param_1 = in_stack_00000098,
       fVar7 <= in_stack_00000098)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    else {
      unaff_R15D = (undefined4)plVar5[0x3a];
      puVar4 = (undefined8 *)*puVar4;
      fVar7 = in_stack_00000098;
      in_stack_00000030 = plVar5;
    }
  }
  uVar3 = FUN_18078cf50(param_1,unaff_R15D);
  if ((int)uVar3 == 0) {
    uVar2 = FUN_180756aa0(in_stack_00000030);
    if (uVar2 != 0) {
      if (unaff_RBX != (longlong *)0x0) {
        *unaff_RBX = 0;
      }
      FUN_180758220(in_stack_00000030,0x52);
      return (ulonglong)uVar2;
    }
    uVar3 = FUN_180758960(in_stack_00000030);
    if (((int)uVar3 == 0) && (uVar3 = func_0x000180756db0(in_stack_00000030,1), (int)uVar3 == 0)) {
      if (unaff_RBX != (longlong *)0x0) {
        *unaff_RBX = in_stack_00000030[10];
      }
      return 0;
    }
  }
  if (unaff_RBX != (longlong *)0x0) {
    *unaff_RBX = 0;
  }
  return uVar3;
}



ulonglong thunk_FUN_180747c73(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *unaff_RBX;
  undefined8 unaff_R14;
  longlong in_stack_00000030;
  
  uVar2 = FUN_18078cf50();
  if ((int)uVar2 == 0) {
    uVar1 = FUN_180756aa0(in_stack_00000030);
    if (uVar1 != 0) {
      if (unaff_RBX != (undefined8 *)0x0) {
        *unaff_RBX = unaff_R14;
      }
      FUN_180758220(in_stack_00000030,0x52);
      return (ulonglong)uVar1;
    }
    uVar2 = FUN_180758960(in_stack_00000030);
    if (((int)uVar2 == 0) && (uVar2 = func_0x000180756db0(in_stack_00000030,1), (int)uVar2 == 0)) {
      if (unaff_RBX != (undefined8 *)0x0) {
        *unaff_RBX = *(undefined8 *)(in_stack_00000030 + 0x50);
      }
      return 0;
    }
  }
  if (unaff_RBX != (undefined8 *)0x0) {
    *unaff_RBX = unaff_R14;
  }
  return uVar2;
}



ulonglong FUN_180747c5b(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *unaff_RBX;
  longlong in_stack_00000030;
  
  uVar2 = FUN_18078cf50();
  if ((int)uVar2 == 0) {
    uVar1 = FUN_180756aa0(in_stack_00000030);
    if (uVar1 != 0) {
      if (unaff_RBX != (undefined8 *)0x0) {
        *unaff_RBX = 0;
      }
      FUN_180758220(in_stack_00000030,0x52);
      return (ulonglong)uVar1;
    }
    uVar2 = FUN_180758960(in_stack_00000030);
    if (((int)uVar2 == 0) && (uVar2 = func_0x000180756db0(in_stack_00000030,1), (int)uVar2 == 0)) {
      if (unaff_RBX != (undefined8 *)0x0) {
        *unaff_RBX = *(undefined8 *)(in_stack_00000030 + 0x50);
      }
      return 0;
    }
  }
  if (unaff_RBX != (undefined8 *)0x0) {
    *unaff_RBX = 0;
  }
  return uVar2;
}



ulonglong FUN_180747c73(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *unaff_RBX;
  undefined8 unaff_R14;
  longlong in_stack_00000030;
  
  uVar2 = FUN_18078cf50();
  if ((int)uVar2 == 0) {
    uVar1 = FUN_180756aa0(in_stack_00000030);
    if (uVar1 != 0) {
      if (unaff_RBX != (undefined8 *)0x0) {
        *unaff_RBX = unaff_R14;
      }
      FUN_180758220(in_stack_00000030,0x52);
      return (ulonglong)uVar1;
    }
    uVar2 = FUN_180758960(in_stack_00000030);
    if (((int)uVar2 == 0) && (uVar2 = func_0x000180756db0(in_stack_00000030,1), (int)uVar2 == 0)) {
      if (unaff_RBX != (undefined8 *)0x0) {
        *unaff_RBX = *(undefined8 *)(in_stack_00000030 + 0x50);
      }
      return 0;
    }
  }
  if (unaff_RBX != (undefined8 *)0x0) {
    *unaff_RBX = unaff_R14;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180747d20(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)
void FUN_180747d20(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_180741d10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,param_2,param_3,param_4,0x10,0);
  return;
}



undefined8 FUN_180747d80(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x6dc) / *(uint *)(param_1 + 0x6d8);
  lVar3 = ((longlong)(int)((*(ushort *)(param_1 + 0x127f0) - 1) + uVar4) % (longlong)(int)uVar4 &
          0xffffU) * 0x58 + *param_2;
  puVar2 = (undefined1 *)((ulonglong)*(ushort *)(param_1 + 0x127f0) * 0x58 + *param_2);
  *puVar2 = 1;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar3 + 4);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(lVar3 + 8);
  *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(lVar3 + 0xc);
  *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)(lVar3 + 0x40);
  *(undefined4 *)(puVar2 + 0x48) = *(undefined4 *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(puVar2 + 0x38) = uVar1;
  *param_3 = puVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180747e10(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 4 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&UNK_180957f70,0xf4,
                            0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] << 2);
        }
        goto LAB_180747ea4;
      }
    }
    return 0x26;
  }
LAB_180747ea4:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180747e34(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_180747ea4:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 4 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&UNK_180957f70,0xf4,0)
    ;
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] << 2);
      }
      goto LAB_180747ea4;
    }
  }
  return 0x26;
}



undefined8 FUN_180747eef(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180747f10(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 8 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 8,&UNK_180957f70,0xf4,
                            0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] << 3);
        }
        goto LAB_180747fa4;
      }
    }
    return 0x26;
  }
LAB_180747fa4:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180747f34(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_180747fa4:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 8 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 8,&UNK_180957f70,0xf4,0)
    ;
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] << 3);
      }
      goto LAB_180747fa4;
    }
  }
  return 0x26;
}



undefined8 FUN_180747fef(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180748010(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x10 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,&UNK_180957f70,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] << 4);
        }
        goto LAB_1807480a0;
      }
    }
    return 0x26;
  }
LAB_1807480a0:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180748034(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1807480a0:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x10 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,&UNK_180957f70,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] << 4);
      }
      goto LAB_1807480a0;
    }
  }
  return 0x26;
}



undefined8 FUN_1807480eb(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180748100(longlong param_1,int param_2,longlong param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  uVar6 = FUN_1807499f0();
  if ((int)uVar6 == 0) {
    if ((((param_2 < 0) || (*(int *)(param_1 + 0x694) <= param_2)) || (param_3 == 0)) ||
       (((*(byte *)(param_3 + 0x2c) & 0x80) != 0 || (*(int *)(param_3 + 0x44) == 0)))) {
      uVar6 = 0x1f;
    }
    else {
      lVar8 = (longlong)param_2 * 0x38;
      if ((*(byte *)(*(longlong *)(param_1 + 0x6a0) + 0x18 + lVar8) & 1) == 0) {
        uVar6 = 0x50;
      }
      else {
        uVar6 = FUN_180748290(param_1,param_2);
        if ((int)uVar6 == 0) {
          puVar7 = (undefined4 *)
                   FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x60,&UNK_180958000,0x1432,
                                 0);
          if (puVar7 == (undefined4 *)0x0) {
            uVar6 = 0x26;
          }
          else {
            *puVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x6a0) + 8 + lVar8);
            *(undefined1 *)(puVar7 + 0xc) = param_4;
            *(longlong *)(puVar7 + 0x10) = param_3;
            puVar7[7] = (int)*(float *)(param_3 + 0x6c);
            puVar7[8] = *(undefined4 *)(param_3 + 0x68);
            puVar7[6] = *(undefined4 *)(param_3 + 0x28);
            puVar7[9] = *(undefined4 *)(param_3 + 0x44);
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x6a0) + 0x1c + lVar8);
            uVar2 = puVar1[1];
            uVar3 = puVar1[2];
            uVar4 = puVar1[3];
            puVar7[1] = *puVar1;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
            puVar7[4] = uVar4;
            iVar5 = FUN_1807889e0(*(undefined8 *)(param_1 + 0x670),puVar7);
            if (iVar5 != 0) {
              FUN_180788d20(*(undefined8 *)(param_1 + 0x670),puVar7);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar7,&UNK_180958000,0x1446,1);
            }
            *(undefined4 **)(*(longlong *)(param_1 + 0x6a0) + 0x30 + lVar8) = puVar7;
            uVar6 = 0;
          }
        }
      }
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180748162(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong in_RAX;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong unaff_RBX;
  longlong lVar8;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  undefined1 unaff_R14B;
  
  lVar8 = unaff_RDI * 0x38;
  if ((*(byte *)(in_RAX + 0x18 + lVar8) & 1) == 0) {
    uVar6 = 0x50;
  }
  else {
    uVar6 = FUN_180748290(param_1,unaff_RDI & 0xffffffff);
    if ((int)uVar6 == 0) {
      puVar7 = (undefined4 *)
               FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x60,&UNK_180958000,0x1432,0);
      if (puVar7 == (undefined4 *)0x0) {
        uVar6 = 0x26;
      }
      else {
        *puVar7 = *(undefined4 *)(*(longlong *)(unaff_RBX + 0x6a0) + 8 + lVar8);
        *(undefined1 *)(puVar7 + 0xc) = unaff_R14B;
        *(longlong *)(puVar7 + 0x10) = unaff_RSI;
        puVar7[7] = (int)*(float *)(unaff_RSI + 0x6c);
        puVar7[8] = *(undefined4 *)(unaff_RSI + 0x68);
        puVar7[6] = *(undefined4 *)(unaff_RSI + 0x28);
        puVar7[9] = *(undefined4 *)(unaff_RSI + 0x44);
        puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 0x6a0) + 0x1c + lVar8);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar7[1] = *puVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar7[4] = uVar4;
        iVar5 = FUN_1807889e0(*(undefined8 *)(unaff_RBX + 0x670),puVar7);
        if (iVar5 != 0) {
          FUN_180788d20(*(undefined8 *)(unaff_RBX + 0x670),puVar7);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar7,&UNK_180958000,0x1446,1);
        }
        *(undefined4 **)(*(longlong *)(unaff_RBX + 0x6a0) + 0x30 + lVar8) = puVar7;
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}





// 函数: void FUN_18074817c(void)
void FUN_18074817c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180748192(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined1 unaff_R14B;
  
  uVar6 = FUN_180748290(param_1,unaff_EDI);
  if ((int)uVar6 == 0) {
    puVar7 = (undefined4 *)
             FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x60,&UNK_180958000,0x1432,0);
    if (puVar7 == (undefined4 *)0x0) {
      uVar6 = 0x26;
    }
    else {
      *puVar7 = *(undefined4 *)(*(longlong *)(unaff_RBX + 0x6a0) + 8 + unaff_RBP);
      *(undefined1 *)(puVar7 + 0xc) = unaff_R14B;
      *(longlong *)(puVar7 + 0x10) = unaff_RSI;
      puVar7[7] = (int)*(float *)(unaff_RSI + 0x6c);
      puVar7[8] = *(undefined4 *)(unaff_RSI + 0x68);
      puVar7[6] = *(undefined4 *)(unaff_RSI + 0x28);
      puVar7[9] = *(undefined4 *)(unaff_RSI + 0x44);
      puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 0x6a0) + 0x1c + unaff_RBP);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar7[1] = *puVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar7[4] = uVar4;
      iVar5 = FUN_1807889e0(*(undefined8 *)(unaff_RBX + 0x670),puVar7);
      if (iVar5 != 0) {
        FUN_180788d20(*(undefined8 *)(unaff_RBX + 0x670),puVar7);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar7,&UNK_180958000,0x1446,1);
      }
      *(undefined4 **)(*(longlong *)(unaff_RBX + 0x6a0) + 0x30 + unaff_RBP) = puVar7;
      uVar6 = 0;
    }
  }
  return uVar6;
}



undefined8 FUN_180748279(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180748290(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1807499f0();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x694) <= param_2)) {
    return 0x1f;
  }
  lVar3 = (longlong)param_2 * 0x38;
  if (*(longlong *)(lVar3 + 0x30 + *(longlong *)(param_1 + 0x6a0)) == 0) {
    return 0;
  }
  func_0x000180743c20(param_1,0x10);
  iVar1 = FUN_180788d20(*(undefined8 *)(param_1 + 0x670),
                        *(undefined8 *)(lVar3 + 0x30 + *(longlong *)(param_1 + 0x6a0)));
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,0x10);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                *(undefined8 *)(lVar3 + 0x30 + *(longlong *)(param_1 + 0x6a0)),&UNK_180958000,0x1470
                ,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807482c8(void)

{
  int iVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x30 + in_RAX) == 0) {
    return 0;
  }
  func_0x000180743c20();
  iVar1 = FUN_180788d20(*(undefined8 *)(unaff_RBX + 0x670),
                        *(undefined8 *)(unaff_RDI + 0x30 + *(longlong *)(unaff_RBX + 0x6a0)));
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                *(undefined8 *)(unaff_RDI + 0x30 + *(longlong *)(unaff_RBX + 0x6a0)),&UNK_180958000,
                0x1470,1);
}





// 函数: void FUN_180748318(void)
void FUN_180748318(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180748323(void)
void FUN_180748323(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                *(undefined8 *)(unaff_RDI + 0x30 + *(longlong *)(unaff_RBX + 0x6a0)),&UNK_180958000,
                0x1470,1);
}



undefined8 FUN_180748383(void)

{
  return 0x1f;
}



undefined8 FUN_1807483a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int aiStackX_10 [4];
  undefined4 auStackX_20 [2];
  undefined4 auStack_68 [2];
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if ((*(char *)(param_1 + 9) != '\0') || (uVar2 = FUN_180749060(), (int)uVar2 == 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = func_0x000180771d40(*(undefined8 *)(param_1 + 0x11418),aiStackX_10);
    if ((int)uVar2 == 0) {
      iVar3 = 0;
      if (0 < aiStackX_10[0]) {
        do {
          uVar2 = func_0x000180771cd0(*(undefined8 *)(param_1 + 0x11418),iVar3,auStackX_20);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = func_0x000180771c60(*(undefined8 *)(param_1 + 0x11418),auStackX_20[0],&plStack_60)
          ;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar1 = func_0x00018076b420(*plStack_60 + 4,param_2 + 4);
          if (iVar1 == 0) {
            return 8;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < aiStackX_10[0]);
      }
      uStack_48 = 0x218;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      uVar2 = FUN_180772160(*(undefined8 *)(param_1 + 0x11418),&uStack_58,param_2,auStack_68,0);
      if ((int)uVar2 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = auStack_68[0];
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



undefined8 FUN_180748401(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 in_stack_00000030;
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_000000a8;
  undefined4 in_stack_000000b8;
  
  iVar3 = 0;
  if (0 < in_stack_000000a8) {
    do {
      uVar2 = func_0x000180771cd0(*(undefined8 *)(unaff_RDI + 0x11418),iVar3,&stack0x000000b8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = func_0x000180771c60(*(undefined8 *)(unaff_RDI + 0x11418),in_stack_000000b8,
                                  &stack0x00000038);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar1 = func_0x00018076b420(*in_stack_00000038 + 4,unaff_RBP + 4);
      if (iVar1 == 0) {
        return 8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_000000a8);
  }
  in_stack_00000050 = 0x218;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uVar2 = FUN_180772160(*(undefined8 *)(unaff_RDI + 0x11418),&stack0x00000040);
  if ((int)uVar2 == 0) {
    if (unaff_RSI != (undefined4 *)0x0) {
      *unaff_RSI = in_stack_00000030;
    }
    uVar2 = 0;
  }
  return uVar2;
}





// 函数: void FUN_1807484eb(void)
void FUN_1807484eb(void)

{
  return;
}



undefined8 FUN_1807484f6(void)

{
  return 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



