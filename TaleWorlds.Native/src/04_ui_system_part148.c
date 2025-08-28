#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part148.c - 9 个函数

// 函数: void FUN_180753880(longlong *param_1,char param_2)
void FUN_180753880(longlong *param_1,char param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int aiStackX_10 [2];
  undefined8 uStackX_18;
  undefined8 *puStackX_20;
  longlong lStack_48;
  ulonglong uStack_40;
  longlong alStack_38 [4];
  
  if (param_2 != '\0') {
    plVar3 = (longlong *)param_1[0x32];
    while (plVar3 != param_1 + 0x32) {
      plVar2 = (longlong *)*plVar3;
      iVar4 = FUN_180753880(plVar3[2],1);
      plVar3 = plVar2;
      if (iVar4 != 0) {
        return;
      }
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,0,0xfffffffffff00000);
  lVar5 = param_1[1];
  uVar8 = 0;
  uVar7 = uVar8;
  uVar9 = uVar8;
  if (param_1 != *(longlong **)(lVar5 + 0x116e0)) {
    do {
      if ((*(longlong *)(param_1[1] + 0x12640 + uVar9) != 0) &&
         (iVar4 = (**(code **)(*param_1 + 0x68))(param_1,uVar7,0), iVar4 != 0)) {
        return;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar9 = uVar9 + 0x18;
    } while ((int)uVar6 < 4);
    lVar5 = param_1[1];
  }
  if ((*(longlong **)(lVar5 + 0x116e0) != (longlong *)0x0) &&
     (param_1 != *(longlong **)(lVar5 + 0x116e0))) {
    plVar3 = param_1 + 0x35;
    plVar2 = (longlong *)*plVar3;
    while (plVar2 != plVar3) {
      func_0x000180756fe0(*(undefined8 *)(*plVar3 + 0x10),*(undefined8 *)(param_1[1] + 0x116e0));
      plVar2 = (longlong *)*plVar3;
    }
  }
  if (*(short *)((longlong)param_1 + 0x1fc) != -1) {
    uStackX_18 = 0;
    iVar4 = (**(code **)(*param_1 + 0x120))(param_1,0xffffffff,&uStackX_18);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = (**(code **)(*(longlong *)param_1[4] + 0x120))
                      ((longlong *)param_1[4],0xfffffffd,alStack_38);
    if (iVar4 != 0) {
      return;
    }
    FUN_18075ec10(uStackX_18,aiStackX_10,0,1);
    if (0 < aiStackX_10[0]) {
      do {
        iVar4 = (int)uVar8;
        FUN_18075ef40(uStackX_18,uVar8,&lStack_48,&puStackX_20,0,1);
        func_0x000180763610(puStackX_20,&uStack_40);
        if (uStack_40 == ((longlong)*(short *)((longlong)param_1 + 0x1fc) | 0xfeed0000U)) {
          FUN_18075dbf0(lStack_48,uStackX_18,puStackX_20,4);
          iVar4 = iVar4 + -1;
          aiStackX_10[0] = aiStackX_10[0] + -1;
        }
        else if ((lStack_48 == alStack_38[0]) && (*(char *)((longlong)param_1 + 0x1fe) == '\0')) {
          FUN_180765c40(puStackX_20,0x3f800000,0,1,0);
        }
        uVar8 = (ulonglong)(iVar4 + 1U);
      } while ((int)(iVar4 + 1U) < aiStackX_10[0]);
    }
    iVar4 = FUN_1807865b0(*(undefined8 *)(param_1[1] + 0x670),
                          (int)*(short *)((longlong)param_1 + 0x1fc));
    if (iVar4 != 0) {
      return;
    }
  }
  plVar3 = param_1 + 0x38;
  *(longlong *)param_1[0x39] = *plVar3;
  *(longlong *)(*plVar3 + 8) = param_1[0x39];
  param_1[0x39] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
  if (param_1[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xe] + 100);
    *puVar1 = *puVar1 & 0xffffffdf;
    UNLOCK();
    LOCK();
    *(uint *)(param_1[0xe] + 100) = *(uint *)(param_1[0xe] + 100) & 0xffffffbf;
    UNLOCK();
    iVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
    if (iVar4 != 0) {
      return;
    }
    param_1[0xe] = 0;
  }
  if (param_1[0x3c] == 0) {
    if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(param_1[1] + 0x10bd0,param_1[8],&DAT_18098bc73,0,1);
    }
    if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(param_1[1] + 0x10848,param_1[2],&DAT_18098bc73,0,1);
    }
    if ((*(longlong **)(param_1[1] + 0x116e0) != (longlong *)0x0) &&
       (param_1 != *(longlong **)(param_1[1] + 0x116e0))) {
      plVar3 = (longlong *)param_1[0x32];
      while (plVar3 != param_1 + 0x32) {
        plVar2 = (longlong *)*plVar3;
        FUN_180752f00(*(undefined8 *)(param_1[1] + 0x116e0),plVar3[2],1,0);
        plVar3 = plVar2;
      }
    }
    plVar3 = param_1 + 0x2f;
    *(longlong *)param_1[0x30] = *plVar3;
    *(longlong *)(*plVar3 + 8) = param_1[0x30];
    param_1[0x30] = (longlong)plVar3;
    *plVar3 = (longlong)plVar3;
    *(undefined4 *)(param_1 + 0x3b) = 0xdeadba11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_180958660,0x1e9,1);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0x3c],&UNK_180958660,0x1c4,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807538ca(void)
void FUN_1807538ca(void)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong in_RAX;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *unaff_RDI;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  longlong in_stack_00000030;
  ulonglong in_stack_00000038;
  longlong in_stack_00000040;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  int in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  (**(code **)(in_RAX + 0x100))();
  lVar7 = unaff_RDI[1];
  uVar10 = 0;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (unaff_RDI != *(longlong **)(lVar7 + 0x116e0)) {
    do {
      if ((*(longlong *)(unaff_RDI[1] + 0x12640 + uVar11) != 0) &&
         (iVar6 = (**(code **)(*unaff_RDI + 0x68))(), iVar6 != 0)) {
        return;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar11 = uVar11 + 0x18;
    } while ((int)uVar8 < 4);
    lVar7 = unaff_RDI[1];
  }
  if ((*(longlong **)(lVar7 + 0x116e0) != (longlong *)0x0) &&
     (unaff_RDI != *(longlong **)(lVar7 + 0x116e0))) {
    plVar2 = unaff_RDI + 0x35;
    plVar3 = (longlong *)*plVar2;
    while (plVar3 != plVar2) {
      func_0x000180756fe0(*(undefined8 *)(*plVar2 + 0x10),*(undefined8 *)(unaff_RDI[1] + 0x116e0));
      plVar3 = (longlong *)*plVar2;
    }
  }
  if (*(short *)((longlong)unaff_RDI + 0x1fc) != -1) {
    in_stack_00000090 = 0;
    iVar6 = (**(code **)(*unaff_RDI + 0x120))();
    if (iVar6 != 0) {
      return;
    }
    iVar6 = (**(code **)(*(longlong *)unaff_RDI[4] + 0x120))
                      ((longlong *)unaff_RDI[4],0xfffffffd,&stack0x00000040);
    if (iVar6 != 0) {
      return;
    }
    FUN_18075ec10(in_stack_00000090,&stack0x00000088,0,1);
    uVar4 = unaff_XMM6_Da;
    uVar5 = unaff_XMM6_Dc;
    if (0 < in_stack_00000088) {
      do {
        in_stack_00000058 = uVar5;
        in_stack_00000050 = uVar4;
        iVar6 = (int)uVar10;
        FUN_18075ef40(in_stack_00000090,uVar10,&stack0x00000030,&stack0x00000098,0);
        func_0x000180763610(in_stack_00000098,&stack0x00000038);
        if (in_stack_00000038 == ((longlong)*(short *)((longlong)unaff_RDI + 0x1fc) | 0xfeed0000U))
        {
          FUN_18075dbf0(in_stack_00000030,in_stack_00000090,in_stack_00000098,4);
          iVar6 = iVar6 + -1;
          in_stack_00000088 = in_stack_00000088 + -1;
        }
        else if ((in_stack_00000030 == in_stack_00000040) &&
                (*(char *)((longlong)unaff_RDI + 0x1fe) == '\0')) {
          FUN_180765c40(in_stack_00000098,0x3f800000,0,1,0);
        }
        uVar10 = (ulonglong)(iVar6 + 1U);
        uVar4 = in_stack_00000050;
        uVar5 = in_stack_00000058;
      } while ((int)(iVar6 + 1U) < in_stack_00000088);
    }
    iVar6 = FUN_1807865b0(*(undefined8 *)(unaff_RDI[1] + 0x670),
                          (int)*(short *)((longlong)unaff_RDI + 0x1fc));
    if (iVar6 != 0) {
      return;
    }
  }
  plVar2 = unaff_RDI + 0x38;
  *(longlong *)unaff_RDI[0x39] = *plVar2;
  *(longlong *)(*plVar2 + 8) = unaff_RDI[0x39];
  unaff_RDI[0x39] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  if (unaff_RDI[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(unaff_RDI[0xe] + 100);
    *puVar1 = *puVar1 & 0xffffffdf;
    UNLOCK();
    LOCK();
    *(uint *)(unaff_RDI[0xe] + 100) = *(uint *)(unaff_RDI[0xe] + 100) & 0xffffffbf;
    UNLOCK();
    iVar6 = (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x10))();
    if (iVar6 != 0) {
      return;
    }
    unaff_RDI[0xe] = 0;
  }
  if (unaff_RDI[0x3c] == 0) {
    if (unaff_RDI[8] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(unaff_RDI[1] + 0x10bd0,unaff_RDI[8],&DAT_18098bc73,0,1);
    }
    if (unaff_RDI[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(unaff_RDI[1] + 0x10848,unaff_RDI[2],&DAT_18098bc73,0,1);
    }
    if ((*(longlong **)(unaff_RDI[1] + 0x116e0) != (longlong *)0x0) &&
       (unaff_RDI != *(longlong **)(unaff_RDI[1] + 0x116e0))) {
      plVar2 = (longlong *)unaff_RDI[0x32];
      while (plVar2 != unaff_RDI + 0x32) {
        plVar3 = (longlong *)*plVar2;
        FUN_180752f00(*(undefined8 *)(unaff_RDI[1] + 0x116e0),plVar2[2],1,0);
        plVar2 = plVar3;
      }
    }
    plVar2 = unaff_RDI + 0x2f;
    *(longlong *)unaff_RDI[0x30] = *plVar2;
    *(longlong *)(*plVar2 + 8) = unaff_RDI[0x30];
    unaff_RDI[0x30] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    *(undefined4 *)(unaff_RDI + 0x3b) = 0xdeadba11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_RDI[0x3c],&UNK_180958660,0x1c4,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807539dc(void)
void FUN_1807539dc(void)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int unaff_EBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined1 uStack0000000000000028;
  longlong in_stack_00000030;
  ulonglong in_stack_00000038;
  longlong in_stack_00000040;
  int in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  do {
    uStack0000000000000028 = 1;
    FUN_18075ef40(in_stack_00000090,unaff_EBX,&stack0x00000030,&stack0x00000098);
    func_0x000180763610(in_stack_00000098,&stack0x00000038);
    if (in_stack_00000038 == ((longlong)*(short *)(unaff_RDI + 0x1fc) | 0xfeed0000U)) {
      FUN_18075dbf0(in_stack_00000030,in_stack_00000090,in_stack_00000098,4);
      unaff_EBX = unaff_EBX + -1;
      in_stack_00000088 = in_stack_00000088 + -1;
    }
    else if ((in_stack_00000030 == in_stack_00000040) &&
            (*(char *)(unaff_RDI + 0x1fe) == (char)unaff_RBP)) {
      FUN_180765c40(in_stack_00000098,0x3f800000,0,1);
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < in_stack_00000088);
  iVar6 = FUN_1807865b0(*(undefined8 *)(*(longlong *)(unaff_RDI + 8) + 0x670),
                        (int)*(short *)(unaff_RDI + 0x1fc));
  if (iVar6 != 0) {
    return;
  }
  plVar2 = (longlong *)(unaff_RDI + 0x1c0);
  **(longlong **)(unaff_RDI + 0x1c8) = *plVar2;
  *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(unaff_RDI + 0x1c8);
  *(longlong **)(unaff_RDI + 0x1c8) = plVar2;
  *plVar2 = (longlong)plVar2;
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x70) + 100);
    *puVar1 = *puVar1 & 0xffffffdf;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x70) + 100);
    *puVar1 = *puVar1 & 0xffffffbf;
    UNLOCK();
    iVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x10))();
    if (iVar6 != 0) {
      return;
    }
    *(undefined8 *)(unaff_RDI + 0x70) = unaff_RBP;
  }
  if (*(longlong *)(unaff_RDI + 0x1e0) == 0) {
    if (*(longlong *)(unaff_RDI + 0x40) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(longlong *)(unaff_RDI + 8) + 0x10bd0,*(longlong *)(unaff_RDI + 0x40),
                    &DAT_18098bc73,0,1);
    }
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 8) + 0x116e0);
      if ((lVar3 != 0) && (unaff_RDI != lVar3)) {
        puVar5 = *(undefined8 **)(unaff_RDI + 400);
        while (puVar5 != (undefined8 *)(unaff_RDI + 400)) {
          puVar4 = (undefined8 *)*puVar5;
          FUN_180752f00(*(undefined8 *)(*(longlong *)(unaff_RDI + 8) + 0x116e0),puVar5[2],1,0);
          puVar5 = puVar4;
        }
      }
      plVar2 = (longlong *)(unaff_RDI + 0x178);
      **(longlong **)(unaff_RDI + 0x180) = *plVar2;
      *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(unaff_RDI + 0x180);
      *(longlong **)(unaff_RDI + 0x180) = plVar2;
      *plVar2 = (longlong)plVar2;
      *(undefined4 *)(unaff_RDI + 0x1d8) = 0xdeadba11;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(longlong *)(unaff_RDI + 8) + 0x10848,*(longlong *)(unaff_RDI + 0x10),
                  &DAT_18098bc73,0,1);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RDI + 0x1e0),
                &UNK_180958660,0x1c4,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180753aa9(void)
void FUN_180753aa9(void)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  
  iVar6 = FUN_1807865b0(*(undefined8 *)(*(longlong *)(unaff_RDI + 8) + 0x670),
                        (int)*(short *)(unaff_RDI + 0x1fc));
  if (iVar6 != 0) {
    return;
  }
  plVar2 = (longlong *)(unaff_RDI + 0x1c0);
  **(longlong **)(unaff_RDI + 0x1c8) = *plVar2;
  *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(unaff_RDI + 0x1c8);
  *(longlong **)(unaff_RDI + 0x1c8) = plVar2;
  *plVar2 = (longlong)plVar2;
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x70) + 100);
    *puVar1 = *puVar1 & 0xffffffdf;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x70) + 100);
    *puVar1 = *puVar1 & 0xffffffbf;
    UNLOCK();
    iVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x10))();
    if (iVar6 != 0) {
      return;
    }
    *(undefined8 *)(unaff_RDI + 0x70) = unaff_RBP;
  }
  if (*(longlong *)(unaff_RDI + 0x1e0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RDI + 0x1e0),
                  &UNK_180958660,0x1c4,1);
  }
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(longlong *)(unaff_RDI + 8) + 0x10bd0,*(longlong *)(unaff_RDI + 0x40),
                  &DAT_18098bc73,0,1);
  }
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 8) + 0x116e0);
    if ((lVar3 != 0) && (unaff_RDI != lVar3)) {
      puVar5 = *(undefined8 **)(unaff_RDI + 400);
      while (puVar5 != (undefined8 *)(unaff_RDI + 400)) {
        puVar4 = (undefined8 *)*puVar5;
        FUN_180752f00(*(undefined8 *)(*(longlong *)(unaff_RDI + 8) + 0x116e0),puVar5[2],1,0);
        puVar5 = puVar4;
      }
    }
    plVar2 = (longlong *)(unaff_RDI + 0x178);
    **(longlong **)(unaff_RDI + 0x180) = *plVar2;
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(unaff_RDI + 0x180);
    *(longlong **)(unaff_RDI + 0x180) = plVar2;
    *plVar2 = (longlong)plVar2;
    *(undefined4 *)(unaff_RDI + 0x1d8) = 0xdeadba11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(longlong *)(unaff_RDI + 8) + 0x10848,*(longlong *)(unaff_RDI + 0x10),
                &DAT_18098bc73,0,1);
}





// 函数: void FUN_180753c54(void)
void FUN_180753c54(void)

{
  return;
}



undefined8 FUN_180753c60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18074cb20();
  if ((int)uVar1 == 0) {
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x248))) {
      *(undefined8 *)(param_1 + 0x248) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_180753d30(longlong param_1,float param_2,float param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  *(float *)(param_1 + 0xc0) = param_2;
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = param_3;
  }
  *(float *)(param_1 + 0xc4) = fVar5;
  if (param_4 != '\0') {
    *(float *)(param_1 + 200) = param_2;
    *(float *)(param_1 + 0xcc) = fVar5;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(lVar1 + 0x1f0);
  }
  *(float *)(param_1 + 0x1f0) = (1.0 - *(float *)(param_1 + 0xd0)) * (1.0 - param_2) * fVar4;
  if (lVar1 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(lVar1 + 500);
  }
  puVar2 = *(undefined8 **)(param_1 + 400);
  *(float *)(param_1 + 500) = (1.0 - *(float *)(param_1 + 0xd4)) * (1.0 - fVar5) * fVar4;
  for (; puVar2 != (undefined8 *)(param_1 + 400); puVar2 = (undefined8 *)*puVar2) {
    plVar3 = (longlong *)puVar2[2];
    (**(code **)(*plVar3 + 0x198))
              (plVar3,(int)plVar3[0x18],*(undefined4 *)((longlong)plVar3 + 0xc4),0);
  }
  return 0;
}





// 函数: void FUN_180753e40(void)
void FUN_180753e40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



undefined8
FUN_180754080(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,char param_6)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) || (*(longlong *)(param_1 + 0x40) != 0)) {
    if ((param_6 != '\0') && (uVar1 = FUN_18074dc70(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = func_0x00018076f5b0(*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_4,param_5,0x40
                                ,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}





// 函数: void FUN_180754120(longlong *param_1,uint param_2)
void FUN_180754120(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uStackX_8;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  iVar2 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&uStackX_8);
  if (iVar2 != 0) {
    return;
  }
  if ((param_2 & 7) != 0) {
    uVar3 = *(uint *)(param_1 + 0x40) & 0xfffffff8;
    *(uint *)(param_1 + 0x40) = uVar3;
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 4) == 0) goto LAB_18075418f;
        uVar3 = uVar3 | 4;
      }
      else {
        uVar3 = uVar3 | 2;
      }
    }
    else {
      uVar3 = uVar3 | 1;
    }
    *(uint *)(param_1 + 0x40) = uVar3;
  }
LAB_18075418f:
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffbffff;
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x80000;
    }
  }
  else {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfff7ffff;
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x40000;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        if ((param_2 >> 0x17 & 1) == 0) {
          if ((param_2 >> 0x1a & 1) != 0) {
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xff0fffff;
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x4000000;
          }
        }
        else {
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfb8fffff;
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x800000;
        }
      }
      else {
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfb4fffff;
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x400000;
      }
    }
    else {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfb2fffff;
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x200000;
    }
  }
  else {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfb1fffff;
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x100000;
  }
  uVar3 = *(uint *)(param_1 + 0x40) | 0x40000000;
  if ((param_2 & 0x40000000) == 0) {
    uVar3 = *(uint *)(param_1 + 0x40) & 0xbfffffff;
  }
  uVar4 = uVar3 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar4 = uVar3 & 0x7fffffff;
  }
  *(uint *)(param_1 + 0x40) = uVar4;
  if ((param_2 & 8) == 0) {
    if ((param_2 & 0x10) == 0) goto LAB_180754300;
    *(uint *)(param_1 + 0x40) = uVar4 & 0xfffffff7 | 0x10;
    iVar2 = FUN_1807621f0(uStackX_8,0,1,2);
  }
  else {
    *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
    *(uint *)(param_1 + 0x40) = uVar4 & 0xffffffef | 8;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
    iVar2 = FUN_1807621f0(uStackX_8,0,0,0);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_180754300:
  if ((((uVar1 & 0x10) == 0) && ((param_2 & 0x10) != 0)) || (((uVar1 ^ param_2) & 0x4f00000) != 0))
  {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
  }
  uVar1 = *(uint *)(param_1 + 0x40) | 0x1000000;
  if ((param_2 & 0x1000000) == 0) {
    uVar1 = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  (**(code **)(*param_1 + 0x208))(param_1);
  return;
}





// 函数: void FUN_180754259(uint param_1,uint param_2)
void FUN_180754259(uint param_1,uint param_2)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  longlong *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  undefined8 in_stack_00000030;
  
  uVar1 = param_2 | 0x40000000;
  if ((param_1 & 0x40000000) == 0) {
    uVar1 = in_EAX & 0xbfffffff;
  }
  uVar3 = uVar1 | 0x80000000;
  if (-1 < (int)unaff_EDI) {
    uVar3 = uVar1 & 0x7fffffff;
  }
  *(uint *)(unaff_RBX + 0x40) = uVar3;
  if ((unaff_EDI & 8) == 0) {
    if ((unaff_EDI & 0x10) == 0) goto LAB_180754300;
    *(uint *)(unaff_RBX + 0x40) = uVar3 & 0xfffffff7 | 0x10;
    iVar2 = FUN_1807621f0(in_stack_00000030,0,1,2);
  }
  else {
    *(undefined4 *)(unaff_RBX + 0xf) = 0x3f800000;
    *(uint *)(unaff_RBX + 0x40) = uVar3 & 0xffffffef | 8;
    *(undefined4 *)(unaff_RBX + 0x18) = 0;
    *(undefined4 *)((longlong)unaff_RBX + 0xa4) = 0x3f800000;
    *(undefined4 *)((longlong)unaff_RBX + 0x7c) = 0x3f800000;
    iVar2 = FUN_1807621f0(in_stack_00000030,0,0,0);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_180754300:
  if ((((unaff_EBP & 0x10) == 0) && ((unaff_EDI & 0x10) != 0)) ||
     (((unaff_EBP ^ unaff_EDI) & 0x4f00000) != 0)) {
    *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) | 4;
  }
  uVar1 = *(uint *)(unaff_RBX + 0x40) | 0x1000000;
  if ((unaff_EDI & 0x1000000) == 0) {
    uVar1 = *(uint *)(unaff_RBX + 0x40) & 0xfeffffff;
  }
  *(uint *)(unaff_RBX + 0x40) = uVar1;
  (**(code **)(*unaff_RBX + 0x208))();
  return;
}





// 函数: void FUN_180754348(void)
void FUN_180754348(void)

{
  return;
}



undefined8 FUN_180754360(longlong *param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  longlong lStackX_8;
  int aiStackX_10 [2];
  undefined8 uStackX_18;
  
  if (param_2 != (*(byte *)(param_1 + 9) & 1)) {
    uVar6 = *(uint *)(param_1 + 9) | 1;
    if (param_2 == 0) {
      uVar6 = *(uint *)(param_1 + 9) & 0xfffffffe;
    }
    bVar1 = 0;
    *(uint *)(param_1 + 9) = uVar6;
    if (param_1[4] != 0) {
      bVar1 = (byte)(*(uint *)(param_1[4] + 0x48) >> 4) & 1;
    }
    uVar2 = FUN_180754520(param_1,bVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((param_2 == 0) && ((*(byte *)(param_1 + 0x40) & 0x10) != 0)) {
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x80000;
      uVar2 = FUN_18074f900(param_1,0,1,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (((*(byte *)(param_1 + 0x40) & 0x10) != 0) &&
         (uVar2 = FUN_18074dfc0(param_1,0,1), (int)uVar2 != 0)) {
        return uVar2;
      }
      uVar2 = (**(code **)(*param_1 + 0x128))(param_1,aiStackX_10);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar5 = 0;
      uVar7 = uVar5;
      if (0 < aiStackX_10[0]) {
        do {
          uVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar7,&lStackX_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if ((lStackX_8 != 0) && (*(int *)(lStackX_8 + 0x100) == 0x23)) {
            if (param_1[4] == 0) {
              uVar8 = 0x3f800000;
            }
            else {
              uVar8 = *(undefined4 *)(param_1[4] + 0x1e8);
            }
            func_0x000180762a70(lStackX_8,8,uVar8);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < aiStackX_10[0]);
      }
      if ((*(uint *)(param_1 + 9) & 4) == 0) {
        lVar4 = (longlong)*(int *)(param_1[1] + 0x11400);
        if (0 < lVar4) {
          pcVar3 = (char *)(param_1[1] + 0x110ec);
          do {
            if (*pcVar3 != '\0') goto LAB_1807544c8;
            uVar5 = uVar5 + 1;
            pcVar3 = pcVar3 + 0x70;
          } while ((longlong)uVar5 < lVar4);
        }
      }
      else {
LAB_1807544c8:
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffb;
      }
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfff7ffff;
    }
    uVar2 = (**(code **)(*param_1 + 0x120))(param_1,0,&uStackX_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762070(uStackX_18,param_2 ^ 1,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_180754520(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined1 auStackX_10 [8];
  
  uVar1 = *(uint *)(param_1 + 0x48);
  puVar2 = *(undefined8 **)(param_1 + 400);
  cVar4 = '\x01';
  if ((uVar1 & 1) == 0) {
    cVar4 = param_2;
  }
  uVar5 = uVar1 | 0x10;
  if (cVar4 == '\0') {
    uVar5 = uVar1 & 0xffffffef;
  }
  *(uint *)(param_1 + 0x48) = uVar5;
  for (; puVar2 != (undefined8 *)(param_1 + 400); puVar2 = (undefined8 *)*puVar2) {
    FUN_180754520(puVar2[2],*(uint *)(param_1 + 0x48) >> 4 & 0xffffff01);
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x1a8); puVar2 != (undefined8 *)(param_1 + 0x1a8);
      puVar2 = (undefined8 *)*puVar2) {
    plVar3 = (longlong *)puVar2[2];
    (**(code **)(*plVar3 + 0x18))(plVar3,auStackX_10);
    (**(code **)(*plVar3 + 0x10))(plVar3,auStackX_10[0]);
  }
  return 0;
}





