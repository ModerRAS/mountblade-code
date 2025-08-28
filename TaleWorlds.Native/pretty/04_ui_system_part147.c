#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part147.c - 4 个函数

// 函数: void FUN_1807526e0(uint64_t *param_1,longlong param_2)
void FUN_1807526e0(uint64_t *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = 0;
  cVar3 = (**(code **)*param_1)();
  if (cVar3 != '\0') {
    lVar4 = param_1[0x30];
  }
  param_1[0x23] = param_2;
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x118) = param_2;
    param_2 = param_1[0x23];
  }
  if (param_2 == 0) {
    param_1[0x23] = *(uint64_t *)(param_1[0x1b] + 0x11720);
    if (lVar4 != 0) {
      *(uint64_t *)(lVar4 + 0x118) = *(uint64_t *)(param_1[0x1b] + 0x11720);
    }
  }
  FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
  plVar1 = param_1 + 0x24;
  *(longlong *)param_1[0x25] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x25];
  param_1[0x25] = plVar1;
  *plVar1 = (longlong)plVar1;
  lVar4 = param_1[0x23];
  param_1[0x25] = *(uint64_t *)(lVar4 + 0x30);
  *plVar1 = lVar4 + 0x28;
  *(longlong **)(lVar4 + 0x30) = plVar1;
  *(longlong **)param_1[0x25] = plVar1;
  plVar1 = (longlong *)param_1[0x23];
  param_1[0x26] = param_1;
  *(longlong *)plVar1[1] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  lVar4 = param_1[0x1b];
  plVar1 = (longlong *)param_1[0x23];
  lVar2 = *(longlong *)(lVar4 + 0x11728);
  *plVar1 = lVar2;
  plVar1[1] = lVar4 + 0x11728;
  *(longlong **)(lVar2 + 8) = plVar1;
  *(longlong **)plVar1[1] = plVar1;
                    // WARNING: Subroutine does not return
  FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
}



uint64_t FUN_180752820(uint64_t *param_1,int param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  bVar2 = false;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x16) <= param_2)) {
    uVar5 = 0x1f;
  }
  else if ((param_3 == 0) || (*(longlong *)(param_3 + 0xb8) == 0)) {
    if (param_1[0x15] == 0) {
      bVar3 = false;
      cVar4 = (**(code **)*param_1)();
      if (cVar4 != '\0') {
        puVar6 = (uint64_t *)param_1[0x15];
        if ((puVar6 == (uint64_t *)0x0) && (puVar6 = param_1, param_1[0x14] != 0)) {
          puVar6 = *(uint64_t **)(param_1[0x14] + (longlong)*(int *)(param_1 + 0x18) * 8);
        }
        if (((puVar6 != (uint64_t *)0x0) && ((*(uint *)(puVar6 + 0xb) & 4) != 0)) &&
           ((*(uint *)(puVar6 + 0xb) & 8) == 0)) {
          bVar3 = true;
          func_0x000180743c20(param_1[0x1b],9);
        }
      }
      if ((param_4 == '\0') && (*(int *)(param_1 + 5) - 1U < 5)) {
        bVar2 = true;
        func_0x000180743c20(param_1[0x1b],3);
      }
      lVar1 = *(longlong *)((longlong)param_2 * 8 + param_1[0x14]);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xa8) != 0)) {
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        (**(code **)(param_1[0xc] + 0x88))(param_1[0xc],param_2,&uStack_88);
      }
      if (param_3 != 0) {
        *(int *)(param_3 + 0xc0) = param_2;
        *(uint64_t **)(param_3 + 0xb8) = param_1;
        if (*(longlong *)(param_3 + 0xa8) != 0) {
          uStack_50 = 0;
          uStack_48 = 0;
          uStack_40 = 0;
          uStack_38 = 0;
          uStack_30 = 0;
          uStack_28 = 0;
          uStack_20 = 0;
          (**(code **)(*(longlong *)(param_3 + 0x60) + 0x88))(param_1[0xc],param_2,&uStack_50);
        }
      }
      if (lVar1 == 0) {
        if (param_3 != 0) {
          *(int *)((longlong)param_1 + 0xb4) = *(int *)((longlong)param_1 + 0xb4) + 1;
        }
      }
      else {
        cVar4 = (**(code **)*param_1)(param_1);
        if (cVar4 == '\0') {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + 0x60) == *(longlong *)(lVar1 + 0x60)) {
            *(uint64_t *)(lVar1 + 0x60) = 0;
          }
        }
        else if (param_1[0x30] == *(longlong *)(lVar1 + 0x180)) {
          *(uint64_t *)(param_1[0x30] + 0xb8) = 0;
        }
        *(uint64_t *)(lVar1 + 0xb8) = 0;
        if (param_3 == 0) {
          *(int *)((longlong)param_1 + 0xb4) = *(int *)((longlong)param_1 + 0xb4) + -1;
        }
      }
      *(longlong *)((longlong)param_2 * 8 + param_1[0x14]) = param_3;
      *(int32_t *)(param_1 + 10) = *(int32_t *)((longlong)param_1 + 0x44);
      *(int32_t *)((longlong)param_1 + 0x4c) = 0;
      cVar4 = (**(code **)*param_1)(param_1);
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)param_1[0x2f] + 0x88))
                  ((longlong *)param_1[0x2f],0,*(int *)((longlong)param_1 + 0x44) + -1);
      }
      if (bVar2) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(param_1[0x1b],3);
      }
      cVar4 = (**(code **)*param_1)(param_1);
      if (cVar4 != '\0') {
        if (param_3 != 0) {
          LOCK();
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
          UNLOCK();
        }
        if (bVar3) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(param_1[0x1b],9);
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0x3e;
    }
  }
  else {
    uVar5 = 0x3d;
  }
  return uVar5;
}



uint64_t FUN_180752889(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint64_t *in_RAX;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  ulonglong unaff_RBP;
  char unaff_SIL;
  longlong unaff_RDI;
  uint64_t in_R9;
  char unaff_R12B;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  
  bVar2 = false;
  cVar3 = (*(code *)*in_RAX)();
  if (cVar3 != '\0') {
    puVar4 = (uint64_t *)unaff_RBX[0x15];
    if ((puVar4 == (uint64_t *)0x0) && (puVar4 = unaff_RBX, unaff_RBX[0x14] != 0)) {
      puVar4 = *(uint64_t **)(unaff_RBX[0x14] + (longlong)*(int *)(unaff_RBX + 0x18) * 8);
    }
    if (((puVar4 != (uint64_t *)0x0) && ((*(uint *)(puVar4 + 0xb) & 4) != 0)) &&
       ((*(uint *)(puVar4 + 0xb) & 8) == 0)) {
      bVar2 = true;
      func_0x000180743c20(unaff_RBX[0x1b],9);
    }
  }
  if ((unaff_SIL == '\0') && (*(int *)(unaff_RBX + 5) - 1U < 5)) {
    unaff_R12B = '\x01';
    func_0x000180743c20(unaff_RBX[0x1b],3);
  }
  lVar1 = *(longlong *)(unaff_RBP * 8 + unaff_RBX[0x14]);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xa8) != 0)) {
    (**(code **)(unaff_RBX[0xc] + 0x88))
              (unaff_RBX[0xc],unaff_RBP & 0xffffffff,&stack0x00000020,in_R9,0);
  }
  if (unaff_RDI != 0) {
    *(int *)(unaff_RDI + 0xc0) = (int)unaff_RBP;
    *(uint64_t **)(unaff_RDI + 0xb8) = unaff_RBX;
    if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = 0;
      in_stack_00000088 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x60) + 0x88))
                (unaff_RBX[0xc],unaff_RBP & 0xffffffff,&stack0x00000058);
    }
  }
  if (lVar1 == 0) {
    if (unaff_RDI != 0) {
      *(int *)((longlong)unaff_RBX + 0xb4) = *(int *)((longlong)unaff_RBX + 0xb4) + 1;
    }
  }
  else {
    cVar3 = (**(code **)*unaff_RBX)();
    if (cVar3 == '\0') {
      if (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + 0x60) == *(longlong *)(lVar1 + 0x60)) {
        *(uint64_t *)(lVar1 + 0x60) = 0;
      }
    }
    else if (unaff_RBX[0x30] == *(longlong *)(lVar1 + 0x180)) {
      *(uint64_t *)(unaff_RBX[0x30] + 0xb8) = 0;
    }
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    if (unaff_RDI == 0) {
      *(int *)((longlong)unaff_RBX + 0xb4) = *(int *)((longlong)unaff_RBX + 0xb4) + -1;
    }
  }
  *(longlong *)(unaff_RBP * 8 + unaff_RBX[0x14]) = unaff_RDI;
  *(int32_t *)(unaff_RBX + 10) = *(int32_t *)((longlong)unaff_RBX + 0x44);
  *(int32_t *)((longlong)unaff_RBX + 0x4c) = 0;
  cVar3 = (**(code **)*unaff_RBX)();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)unaff_RBX[0x2f] + 0x88))
              ((longlong *)unaff_RBX[0x2f],0,*(int *)((longlong)unaff_RBX + 0x44) + -1);
  }
  if (unaff_R12B == '\0') {
    cVar3 = (**(code **)*unaff_RBX)();
    if (cVar3 != '\0') {
      if (unaff_RDI != 0) {
        LOCK();
        *(uint *)(unaff_RBX + 0xb) = *(uint *)(unaff_RBX + 0xb) | 0x10;
        UNLOCK();
      }
      if (bVar2) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(unaff_RBX[0x1b],9);
      }
    }
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60(unaff_RBX[0x1b],3);
}



uint64_t FUN_180752a56(void)

{
  char cVar1;
  uint64_t *unaff_RBX;
  longlong unaff_RDI;
  char unaff_R12B;
  char unaff_R15B;
  
  (**(code **)(*(longlong *)unaff_RBX[0x2f] + 0x88))
            ((longlong *)unaff_RBX[0x2f],0,*(int *)((longlong)unaff_RBX + 0x44) + -1);
  if (unaff_R12B != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60(unaff_RBX[0x1b],3);
  }
  cVar1 = (**(code **)*unaff_RBX)();
  if (cVar1 != '\0') {
    if (unaff_RDI != 0) {
      LOCK();
      *(uint *)(unaff_RBX + 0xb) = *(uint *)(unaff_RBX + 0xb) | 0x10;
      UNLOCK();
    }
    if (unaff_R15B != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(unaff_RBX[0x1b],9);
    }
  }
  return 0;
}



uint64_t FUN_180752abd(void)

{
  return 0x1f;
}



uint64_t FUN_180752af0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int aiStackX_8 [2];
  longlong lStackX_10;
  
  iVar2 = 0;
  aiStackX_8[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,aiStackX_8);
  if ((iVar1 == 0) && (0 < aiStackX_8[0])) {
    do {
      iVar1 = (**(code **)(*param_1 + 0xf0))(param_1,iVar2,&lStackX_10);
      if (iVar1 == 0) {
        *(short *)(lStackX_10 + 0x36) = (short)iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < aiStackX_8[0]);
  }
  return 0;
}



uint64_t FUN_180752b60(longlong *param_1,uint64_t param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  LOCK();
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffb3;
  UNLOCK();
  if (param_1[0x17] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x17] + 0x58);
    *puVar1 = *puVar1 & 0xffffffb7;
    UNLOCK();
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff8;
    *(uint *)((longlong)param_1 + 0x2c) =
         *(uint *)((longlong)param_1 + 0x2c) | *(uint *)(param_1[0x17] + 0x2c) & 7;
  }
  *(int *)(param_1 + 0x18) = (int)param_2;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar3 = (**(code **)(param_1[0xc] + 0x88))(param_1[0xc],param_2,&lStack_48);
  if ((int)uVar3 == 0) {
    param_1[6] = lStack_48;
    *(int32_t *)(param_1 + 5) = (int32_t)uStack_40;
    *(int32_t *)(param_1 + 0xd) = uStack_40._4_4_;
    *(int *)((longlong)param_1 + 0x4c) = (int)uStack_28;
    *(int32_t *)((longlong)param_1 + 0x13c) = uStack_18._4_4_;
    *(int *)(param_1 + 10) = (uStack_28._4_4_ - (int)uStack_28) + 1;
    *(int32_t *)((longlong)param_1 + 0x44) = (int32_t)uStack_30;
    *(float *)((longlong)param_1 + 0x6c) = (float)(int)uStack_38;
    (**(code **)(*param_1 + 0x138))(param_1,uStack_28 & 0xffffffff,2,uStack_28._4_4_,2);
    lVar2 = param_1[0x30];
    *(int32_t *)(lVar2 + 0x13c) = uStack_18._4_4_;
    *(int32_t *)(lVar2 + 0x68) = uStack_40._4_4_;
    uVar3 = 0;
    *(int *)(lVar2 + 0xc0) = (int)param_2;
  }
  return uVar3;
}



uint64_t FUN_180752c80(ulonglong param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  
  if (param_2 == (ulonglong *)0x0) {
    return 0x1f;
  }
  *param_2 = param_1;
  if (((param_1 == 0) || ((param_1 & 3) != 0)) || (*(int *)(param_1 + 0x20) != -0x533fe522)) {
    return 0x1e;
  }
  if (((param_3 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0xd8), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x78) & 0x100000) == 0)) {
    if (*param_3 != 0) {
      return 0x1c;
    }
    uVar2 = func_0x000180743c20(lVar1,0xc);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *param_3 = lVar1;
  }
  return 0;
}



uint64_t FUN_180752cad(longlong param_1,uint64_t param_2,longlong *param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *unaff_RDI;
  
  if (((unaff_RDI != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0xd8), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x78) & 0x100000) == 0)) {
    if (*param_3 != 0) {
      return 0x1c;
    }
    uVar2 = func_0x000180743c20(lVar1,0xc);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *unaff_RDI = lVar1;
  }
  return 0;
}



uint64_t FUN_180752cf3(void)

{
  return 0x1c;
}



uint64_t FUN_180752d03(void)

{
  return 0x1e;
}



uint64_t FUN_180752eb0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int aiStackX_20 [2];
  
  aiStackX_20[0] = 0;
  uVar1 = FUN_18074bf10();
  if ((int)uVar1 == 0) {
    uVar1 = func_0x00018075f440(param_3,aiStackX_20);
    if ((int)uVar1 == 0) {
      if (aiStackX_20[0] == 0x19) {
        *(uint64_t *)(param_1 + 0x248) = param_3;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



int FUN_180752f00(longlong *param_1,longlong *param_2,char param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lStackX_10;
  longlong lStack_38;
  longlong lStack_30;
  
  if ((param_2 == (longlong *)0x0) || (param_2 == param_1)) {
    return 0x1f;
  }
  if ((longlong *)param_2[4] == param_1) {
    return 0;
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,2);
  }
  plVar1 = param_2 + 0x2f;
  *(longlong *)param_2[0x30] = *plVar1;
  *(longlong *)(*plVar1 + 8) = param_2[0x30];
  param_2[0x30] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  iVar4 = (**(code **)(*param_2 + 0x120))(param_2,0,&lStack_38);
  if (iVar4 == 0) {
    plVar3 = (longlong *)param_2[4];
    if (plVar3 != (longlong *)0x0) {
      lStackX_10 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x120))(plVar3,0xfffffffd,&lStackX_10);
      if (iVar4 != 0) goto LAB_1807530cb;
      if ((*(uint *)(lStackX_10 + 100) >> 10 & 1) == 0) {
        iVar4 = FUN_18075dbf0(lStackX_10,lStack_38,0,0);
        if (iVar4 != 0) goto LAB_1807530cb;
      }
    }
    param_2[0x30] = param_1[0x33];
    *plVar1 = (longlong)(param_1 + 0x32);
    param_1[0x33] = (longlong)plVar1;
    *(longlong **)param_2[0x30] = plVar1;
    param_2[0x31] = (longlong)param_2;
    iVar4 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStack_30);
    if (iVar4 == 0) {
      if (lStack_38 != 0) {
        iVar4 = FUN_180759220(lStack_30,lStack_38,param_4,0,0,0);
        if (iVar4 != 0) goto LAB_1807530cb;
        if (param_3 != '\0') {
          iVar4 = FUN_180754b60(param_2,lStack_30 + 8);
          if (iVar4 != 0) goto LAB_1807530cb;
        }
      }
      param_2[4] = (longlong)param_1;
      iVar4 = FUN_180754520(param_2,*(uint *)(param_1 + 9) >> 4 & 0xffffff01);
      if (iVar4 == 0) {
        iVar4 = FUN_180754850(param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_180754640(param_2);
        }
      }
    }
  }
LAB_1807530cb:
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,2);
  }
  return iVar4;
}



int FUN_180752f3d(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char unaff_R12B;
  longlong in_stack_00000030;
  uint64_t in_stack_00000038;
  longlong in_stack_00000078;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,2);
  }
  plVar1 = unaff_RDI + 0x2f;
  *(longlong *)unaff_RDI[0x30] = *plVar1;
  *(longlong *)(*plVar1 + 8) = unaff_RDI[0x30];
  unaff_RDI[0x30] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  iVar4 = (**(code **)(*unaff_RDI + 0x120))();
  if (iVar4 == 0) {
    plVar3 = (longlong *)unaff_RDI[4];
    if (plVar3 != (longlong *)0x0) {
      in_stack_00000078 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x120))(plVar3,0xfffffffd,&stack0x00000078);
      if (iVar4 != 0) goto LAB_1807530cb;
      if ((*(uint *)(in_stack_00000078 + 100) >> 10 & 1) == 0) {
        iVar4 = FUN_18075dbf0(in_stack_00000078,in_stack_00000030,0,0);
        if (iVar4 != 0) goto LAB_1807530cb;
      }
    }
    unaff_RDI[0x30] = unaff_RSI[0x33];
    *plVar1 = (longlong)(unaff_RSI + 0x32);
    unaff_RSI[0x33] = (longlong)plVar1;
    *(longlong **)unaff_RDI[0x30] = plVar1;
    unaff_RDI[0x31] = (longlong)unaff_RDI;
    iVar4 = (**(code **)(*unaff_RSI + 0x120))();
    if (iVar4 == 0) {
      if (in_stack_00000030 != 0) {
        iVar4 = FUN_180759220(in_stack_00000038);
        if (iVar4 != 0) goto LAB_1807530cb;
        if (unaff_R12B != '\0') {
          iVar4 = FUN_180754b60();
          if (iVar4 != 0) goto LAB_1807530cb;
        }
      }
      unaff_RDI[4] = (longlong)unaff_RSI;
      iVar4 = FUN_180754520();
      if (iVar4 == 0) {
        iVar4 = FUN_180754850();
        if (iVar4 == 0) {
          iVar4 = FUN_180754640();
        }
      }
    }
  }
LAB_1807530cb:
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,2);
  }
  return iVar4;
}



int FUN_180752f4e(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char unaff_R12B;
  longlong in_stack_00000030;
  uint64_t in_stack_00000038;
  longlong in_stack_00000078;
  
  if (unaff_RBP != 0) {
    func_0x000180743c20();
  }
  plVar1 = unaff_RDI + 0x2f;
  *(longlong *)unaff_RDI[0x30] = *plVar1;
  *(longlong *)(*plVar1 + 8) = unaff_RDI[0x30];
  unaff_RDI[0x30] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  iVar3 = (**(code **)(*unaff_RDI + 0x120))();
  if (iVar3 == 0) {
    plVar2 = (longlong *)unaff_RDI[4];
    if (plVar2 != (longlong *)0x0) {
      in_stack_00000078 = 0;
      iVar3 = (**(code **)(*plVar2 + 0x120))(plVar2,0xfffffffd,&stack0x00000078);
      if (iVar3 != 0) goto LAB_1807530cb;
      if ((*(uint *)(in_stack_00000078 + 100) >> 10 & 1) == 0) {
        iVar3 = FUN_18075dbf0(in_stack_00000078,in_stack_00000030,0,0);
        if (iVar3 != 0) goto LAB_1807530cb;
      }
    }
    unaff_RDI[0x30] = unaff_RSI[0x33];
    *plVar1 = (longlong)(unaff_RSI + 0x32);
    unaff_RSI[0x33] = (longlong)plVar1;
    *(longlong **)unaff_RDI[0x30] = plVar1;
    unaff_RDI[0x31] = (longlong)unaff_RDI;
    iVar3 = (**(code **)(*unaff_RSI + 0x120))();
    if (iVar3 == 0) {
      if (in_stack_00000030 != 0) {
        iVar3 = FUN_180759220(in_stack_00000038);
        if (iVar3 != 0) goto LAB_1807530cb;
        if (unaff_R12B != '\0') {
          iVar3 = FUN_180754b60();
          if (iVar3 != 0) goto LAB_1807530cb;
        }
      }
      unaff_RDI[4] = (longlong)unaff_RSI;
      iVar3 = FUN_180754520();
      if (iVar3 == 0) {
        iVar3 = FUN_180754850();
        if (iVar3 == 0) {
          iVar3 = FUN_180754640();
        }
      }
    }
  }
LAB_1807530cb:
  if ((unaff_RBP != 0) && (unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar3;
}



int32_t FUN_1807530dd(void)

{
  int32_t unaff_EBX;
  longlong unaff_RBP;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EBX;
}



uint64_t FUN_180753109(void)

{
  return 0x1f;
}





// 函数: void FUN_180753170(longlong *param_1)
void FUN_180753170(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int aiStackX_8 [2];
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  longlong lStackX_20;
  ulonglong uStack_38;
  longlong alStack_30 [3];
  
  iVar2 = 0;
  uStackX_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xffffffff,&uStackX_10);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*(longlong *)param_1[4] + 0x120))
                        ((longlong *)param_1[4],0xfffffffd,alStack_30), iVar1 == 0)) {
    FUN_18075ec10(uStackX_10,aiStackX_8,0,1);
    if (0 < aiStackX_8[0]) {
      do {
        FUN_18075ef40(uStackX_10,iVar2,&lStackX_20,&uStackX_18,0,1);
        func_0x000180763610(uStackX_18,&uStack_38);
        if (uStack_38 == ((longlong)*(short *)((longlong)param_1 + 0x1fc) | 0xfeed0000U)) {
          FUN_18075dbf0(lStackX_20,uStackX_10,uStackX_18,4);
          iVar2 = iVar2 + -1;
          aiStackX_8[0] = aiStackX_8[0] + -1;
        }
        else if ((lStackX_20 == alStack_30[0]) && (*(char *)((longlong)param_1 + 0x1fe) == '\0')) {
          FUN_180765c40(uStackX_18,0x3f800000,0,1,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < aiStackX_8[0]);
    }
    FUN_1807865b0(*(uint64_t *)(param_1[1] + 0x670),(int)*(short *)((longlong)param_1 + 0x1fc));
  }
  return;
}





// 函数: void FUN_1807531d6(void)
void FUN_1807531d6(void)

{
  int unaff_EBX;
  longlong unaff_RDI;
  int8_t uStack0000000000000028;
  ulonglong in_stack_00000030;
  longlong in_stack_00000038;
  int in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000080;
  longlong in_stack_00000088;
  
  do {
    uStack0000000000000028 = 1;
    FUN_18075ef40(in_stack_00000078,unaff_EBX,&stack0x00000088,&stack0x00000080,0);
    func_0x000180763610(in_stack_00000080,&stack0x00000030);
    if (in_stack_00000030 == ((longlong)*(short *)(unaff_RDI + 0x1fc) | 0xfeed0000U)) {
      FUN_18075dbf0(in_stack_00000088,in_stack_00000078,in_stack_00000080,4);
      unaff_EBX = unaff_EBX + -1;
      in_stack_00000070 = in_stack_00000070 + -1;
    }
    else if ((in_stack_00000088 == in_stack_00000038) && (*(char *)(unaff_RDI + 0x1fe) == '\0')) {
      FUN_180765c40(in_stack_00000080,0x3f800000,0,1,0);
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < in_stack_00000070);
  FUN_1807865b0(*(uint64_t *)(*(longlong *)(unaff_RDI + 8) + 0x670),
                (int)*(short *)(unaff_RDI + 0x1fc));
  return;
}





// 函数: void FUN_1807532ab(void)
void FUN_1807532ab(void)

{
  longlong unaff_RDI;
  
  FUN_1807865b0(*(uint64_t *)(*(longlong *)(unaff_RDI + 8) + 0x670),
                (int)*(short *)(unaff_RDI + 0x1fc));
  return;
}



int32_t FUN_1807532f0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 == (float *)0x0) {
    return 0x1f;
  }
  if ((*(byte *)(param_1 + 0x48) & 0x10) != 0) {
    *param_2 = 0.0;
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0x1ec);
  if ((*(byte *)(param_1 + 0x200) & 0x10) != 0) {
    fVar1 = *(float *)(param_1 + 0xf0);
    fVar4 = 1.0 - *(float *)(param_1 + 0xc0);
    fVar5 = 1.0 - *(float *)(param_1 + 0xd0);
    if (1.0 <= fVar1) {
      fVar5 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x78) * fVar4 * fVar5;
    }
    else {
      fVar3 = 1.0 - fVar1;
      fVar5 = (fVar1 * *(float *)(param_1 + 0xa4) + fVar3) *
              (fVar1 * *(float *)(param_1 + 0x78) + fVar3) * (fVar1 * fVar4 + fVar3) *
              (fVar1 * fVar5 + fVar3);
    }
    fVar2 = fVar2 * fVar5;
  }
  *param_2 = fVar2;
  return 0;
}



uint64_t FUN_18075334a(float param_1,float *param_2,uint64_t param_3,float param_4)

{
  longlong in_RCX;
  bool in_CF;
  float in_XMM1_Da;
  float in_XMM4_Da;
  float fVar1;
  float in_XMM5_Da;
  float fVar2;
  float fVar3;
  
  fVar2 = in_XMM4_Da - *(float *)(in_RCX + 0xc0);
  fVar3 = in_XMM4_Da - *(float *)(in_RCX + 0xd0);
  if (in_CF) {
    fVar1 = in_XMM4_Da - in_XMM5_Da;
    fVar3 = (in_XMM5_Da * param_1 + fVar1) * (in_XMM5_Da * in_XMM1_Da + fVar1) *
            (in_XMM5_Da * fVar2 + fVar1) * (in_XMM5_Da * fVar3 + fVar1);
  }
  else {
    fVar3 = param_1 * in_XMM1_Da * fVar2 * fVar3;
  }
  *param_2 = param_4 * fVar3;
  return 0;
}



uint64_t
FUN_1807533c2(uint64_t param_1,int32_t *param_2,uint64_t param_3,int32_t param_4)

{
  *param_2 = param_4;
  return 0;
}



uint64_t FUN_180753420(longlong *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  longlong lStackX_10;
  
  if (param_2 != (uint64_t *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStackX_10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_2 = *(uint64_t *)(lStackX_10 + 0x10);
  }
  if (param_3 != (uint64_t *)0x0) {
    lStackX_10 = 0;
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStackX_10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = (**(code **)(*(longlong *)param_1[4] + 0x120))();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    *param_3 = *(uint64_t *)(lStackX_10 + 0x10);
  }
  return 0;
}



uint64_t FUN_1807535b0(longlong *param_1,int *param_2)

{
  uint64_t uVar1;
  uint64_t auStackX_8 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,auStackX_8);
  if ((int)uVar1 == 0) {
    uVar1 = func_0x00018075e540(auStackX_8[0],0,param_2,0);
    if ((int)uVar1 == 0) {
      if (*param_2 == 0) {
        *param_2 = 1;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_180753680(longlong param_1,char *param_2)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int iVar6;
  int iVar7;
  longlong *plStackX_10;
  
  *param_2 = '\0';
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x1dc);
  if (0 < iVar7) {
    do {
      puVar1 = *(uint64_t **)(param_1 + 0x1a8);
      iVar4 = 0;
      while( true ) {
        if (puVar1 == (uint64_t *)(param_1 + 0x1a8)) {
          return 0x1f;
        }
        if (iVar4 == iVar6) break;
        puVar1 = (uint64_t *)*puVar1;
        iVar4 = iVar4 + 1;
      }
      FUN_18073cd10();
      if (*param_2 != '\0') {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  puVar1 = (uint64_t *)(param_1 + 400);
  iVar7 = 0;
  for (puVar5 = (uint64_t *)*puVar1; puVar5 != puVar1; puVar5 = (uint64_t *)*puVar5) {
    iVar7 = iVar7 + 1;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      iVar4 = 0;
      for (puVar5 = (uint64_t *)*puVar1; puVar5 != puVar1; puVar5 = (uint64_t *)*puVar5) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar6 < 0) || (iVar4 <= iVar6)) {
        return 0x1f;
      }
      puVar5 = (uint64_t *)*puVar1;
      iVar2 = 0;
      if (0 < iVar4) {
        do {
          if (iVar2 == iVar6) {
            plStackX_10 = (longlong *)puVar5[2];
          }
          puVar5 = (uint64_t *)*puVar5;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      uVar3 = (**(code **)(*plStackX_10 + 0xa8))(plStackX_10,param_2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    } while ((*param_2 == (char)uVar3) && (iVar6 = iVar6 + 1, iVar6 < iVar7));
  }
  return 0;
}



uint64_t FUN_1807537b0(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  
  if (((((*(byte *)(param_1 + 9) & 0x40) == 0) && ((*(byte *)(param_1 + 0x40) & 0x10) == 0)) &&
      (plVar3 = param_1 + 0x22, (longlong *)*plVar3 == plVar3)) &&
     (((longlong *)param_1[0x23] == plVar3 && (*(int *)(param_1[0xe] + 0x2a4) != 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar1 = false;
  if ((*(uint *)(param_1 + 0x40) & 0x1000000) == 0) {
    bVar1 = bVar2;
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0x208))(param_1);
    return 0;
  }
  if ((char)*(uint *)(param_1 + 9) < '\0') {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffff7f;
    return 0;
  }
  plVar3 = param_1 + 0x38;
  *(longlong *)param_1[0x39] = *plVar3;
  *(longlong *)(*plVar3 + 8) = param_1[0x39];
  param_1[0x39] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



