#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part144.c - 2 个函数

// 函数: void FUN_18075027d(void)
void FUN_18075027d(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong *plVar2;
  longlong unaff_RBX;
  
  FUN_180768360(*(uint64_t *)(*(longlong *)(in_RAX + 0x10) + 0x168));
  lVar1 = *(longlong *)(unaff_RBX + 0x108);
  plVar2 = (longlong *)(lVar1 + 0x18);
  **(longlong **)(lVar1 + 0x20) = *plVar2;
  *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(lVar1 + 0x20);
  *(longlong **)(lVar1 + 0x20) = plVar2;
  *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
  FUN_180768400(*(uint64_t *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x108) + 0x10) + 0x168));
}



uint64_t FUN_1807502f0(void)

{
  longlong unaff_RBX;
  
  while (((*(int *)(unaff_RBX + 0x110) != 0 && (*(int *)(unaff_RBX + 0x110) != 2)) ||
         (*(char *)(unaff_RBX + 0x5c) != '\0'))) {
    FUN_180768bf0(2);
  }
  return 0;
}



uint64_t FUN_1807503a0(longlong param_1,int32_t *param_2)

{
  uint64_t uVar1;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x88))
                    (*(longlong *)(param_1 + 0x60),*(int32_t *)(param_1 + 0xc0),&uStack_48);
  if ((int)uVar1 == 0) {
    *param_2 = uStack_40._4_4_;
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1807505d0(longlong param_1,int *param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((((param_3 - 1U & 0xfffffffc) != 0) || (param_3 == 3)) || ((param_5 - 1U & 0xfffffffc) != 0))
     || (param_5 == 3)) {
    return 0x13;
  }
  lVar4 = 0x20;
  if (param_2 != (int *)0x0) {
    if (param_3 == 2) {
      iVar1 = *(int *)(param_1 + 0x4c);
LAB_1807506d6:
      *param_2 = iVar1;
    }
    else if (param_3 == 4) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 1) {
LAB_1807506ae:
        *param_2 = *(uint *)(param_1 + 0x4c) * *(int *)(param_1 + 0x68);
      }
      else if (iVar1 == 2) {
        *param_2 = (int)(uVar3 * 0x10 >> 3) * *(int *)(param_1 + 0x68);
      }
      else if (iVar1 == 3) {
        *param_2 = (int)(uVar3 * 0x18 >> 3) * *(int *)(param_1 + 0x68);
      }
      else {
        if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_1807506ae;
        *param_2 = (int)(uVar3 * 0x20 >> 3) * *(int *)(param_1 + 0x68);
      }
    }
    else if (param_3 == 1) {
      iVar1 = (int)(longlong)
                   (((float)*(uint *)(param_1 + 0x4c) * 1000.0) / *(float *)(param_1 + 0x6c));
      goto LAB_1807506d6;
    }
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *(int *)(param_1 + 0x4c) + -1 + *(int *)(param_1 + 0x50);
  if (param_5 == 2) goto LAB_180750737;
  if (param_5 != 4) {
    if (param_5 != 1) {
      return 0;
    }
    *param_4 = (uint)(longlong)(((float)uVar2 * 1000.0) / *(float *)(param_1 + 0x6c));
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 1) {
    lVar4 = 8;
LAB_18075072a:
    uVar2 = (uint)((ulonglong)uVar2 * lVar4 >> 3);
  }
  else {
    if (iVar1 == 2) {
      lVar4 = 0x10;
      goto LAB_18075072a;
    }
    if (iVar1 == 3) {
      lVar4 = 0x18;
      goto LAB_18075072a;
    }
    if ((iVar1 == 4) || (iVar1 == 5)) goto LAB_18075072a;
  }
  uVar2 = uVar2 * *(int *)(param_1 + 0x68);
LAB_180750737:
  *param_4 = uVar2;
  return 0;
}



uint64_t FUN_180750820(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *puVar2;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  iVar1 = 0x100;
  if (param_3 < 0x101) {
    iVar1 = param_3;
  }
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    puVar2 = *(void **)(param_1 + 0x30);
  }
  func_0x00018076b450(param_2,puVar2,iVar1);
  return 0;
}



uint FUN_180750950(uint64_t *param_1,int *param_2,int32_t *param_3,byte *param_4,byte *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bStackX_8;
  
  uVar5 = 0;
  uVar6 = 0;
  if ((param_2 == (int *)0x0) ||
     (*param_2 = *(int *)(param_1 + 0x22), uVar6 = uVar5, (*(uint *)(param_1 + 0xb) & 4) == 0))
  goto LAB_180750aab;
  cVar2 = (**(code **)*param_1)();
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x27) == 0) {
      iVar4 = *(int *)(param_1[0x1b] + 0x116e8) - *(int *)(param_1 + 0x28);
LAB_180750aa0:
      uVar6 = uVar5;
      if (1 < iVar4) goto LAB_180750aab;
    }
  }
  else {
    if ((*param_2 != 0) || (param_1[0xc] == 0)) goto LAB_180750aab;
    lVar1 = *(longlong *)(param_1[0xc] + 0x170);
    bStackX_8 = 0;
    if (lVar1 != 0) {
      bStackX_8 = (byte)(*(uint *)(lVar1 + 0x194) >> 3) & 1;
      uVar6 = *(uint *)(*(longlong *)(param_1[0xc] + 0x170) + 0x180);
      if ((uVar6 & 0xffffffef) != 0) {
        *param_2 = 2;
        if (param_1[0x21] != 0) {
          *(uint *)(param_1[0x21] + 0x124) = uVar6;
        }
        goto LAB_180750aab;
      }
    }
    if (((*(uint *)(param_1 + 0xb) & 0x40) != 0) && (bStackX_8 == 0)) {
      lVar1 = param_1[0x15];
      if (lVar1 == 0) {
        if ((param_1[0x14] == 0) ||
           (lVar1 = *(longlong *)(param_1[0x14] + (longlong)*(int *)(param_1 + 0x18) * 8),
           lVar1 == 0)) {
          iVar4 = *(int *)(param_1 + 0x28);
          iVar3 = *(int *)(param_1 + 0x27);
        }
        else {
          iVar4 = *(int *)(lVar1 + 0x140);
          iVar3 = *(int *)(lVar1 + 0x138);
        }
      }
      else {
        iVar4 = *(int *)(lVar1 + 0x140);
        iVar3 = *(int *)(lVar1 + 0x138);
      }
      if (iVar3 == 0) {
        iVar4 = *(int *)(param_1[0x1b] + 0x116e8) - iVar4;
        goto LAB_180750aa0;
      }
    }
  }
  *param_2 = 6;
  uVar6 = uVar5;
LAB_180750aab:
  if (param_3 != (int32_t *)0x0) {
    if (((param_1[0xc] == 0) || (*(longlong *)(param_1[0xc] + 0x170) == 0)) ||
       ((*(int *)(param_1 + 0x22) != 4 && (*(int *)(param_1 + 0x22) != 0)))) {
      *param_3 = 0;
    }
    else {
      *param_3 = *(int32_t *)(*(longlong *)(param_1[0xc] + 0x170) + 0x17c);
    }
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = 0;
    if ((param_1[0xc] != 0) && (lVar1 = *(longlong *)(param_1[0xc] + 0x170), lVar1 != 0)) {
      *param_4 = (byte)(*(uint *)(lVar1 + 0x194) >> 4) & 1;
    }
  }
  if (((param_5 != (byte *)0x0) && (param_1[0xc] != 0)) &&
     (lVar1 = *(longlong *)(param_1[0xc] + 0x170), lVar1 != 0)) {
    *param_5 = (byte)(*(uint *)(lVar1 + 0x194) >> 3) & 1;
  }
  if (param_1[0x21] != 0) {
    uVar6 = *(uint *)(param_1[0x21] + 0x124);
  }
  return uVar6;
}



uint64_t FUN_180750bc0(longlong param_1,int param_2,uint64_t *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  longlong *plVar7;
  longlong lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  if (((param_3 == (uint64_t *)0x0) || (param_2 < 0)) || (*(int *)(param_1 + 0xb0) <= param_2)) {
    return 0x1f;
  }
  *param_3 = 0;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)param_2 * 8);
  if ((plVar7 != (longlong *)0x0) && (plVar7[0x15] != 0)) {
    if (((*(uint *)(plVar7 + 0xb) & 4) != 0) && ((*(uint *)(plVar7 + 0xb) & 0x40) == 0)) {
      return 0x2e;
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x10000) == 0) {
      LOCK();
      *(uint *)(plVar7 + 0xb) = *(uint *)(plVar7 + 0xb) & 0xffffffb3;
      UNLOCK();
      if (plVar7[0x17] != 0) {
        LOCK();
        puVar1 = (uint *)(plVar7[0x17] + 0x58);
        *puVar1 = *puVar1 & 0xffffffb7;
        UNLOCK();
        *(uint *)((longlong)plVar7 + 0x2c) = *(uint *)((longlong)plVar7 + 0x2c) & 0xfffffff8;
        *(uint *)((longlong)plVar7 + 0x2c) =
             *(uint *)((longlong)plVar7 + 0x2c) | *(uint *)(plVar7[0x17] + 0x2c) & 7;
      }
      *(int *)(plVar7 + 0x18) = param_2;
      lStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uVar6 = (**(code **)(plVar7[0xc] + 0x88))(plVar7[0xc],param_2,&lStack_58);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      plVar7[6] = lStack_58;
      *(int32_t *)(plVar7 + 5) = (int32_t)uStack_50;
      *(int32_t *)(plVar7 + 0xd) = uStack_50._4_4_;
      *(int *)((longlong)plVar7 + 0x4c) = (int)uStack_38;
      *(int32_t *)((longlong)plVar7 + 0x13c) = uStack_28._4_4_;
      *(int *)(plVar7 + 10) = (uStack_38._4_4_ - (int)uStack_38) + 1;
      *(int32_t *)((longlong)plVar7 + 0x44) = (int32_t)uStack_40;
      *(float *)((longlong)plVar7 + 0x6c) = (float)(int)uStack_48;
      (**(code **)(*plVar7 + 0x138))(plVar7,uStack_38 & 0xffffffff,2,uStack_38._4_4_,2);
      lVar2 = plVar7[0x30];
      *(int32_t *)(lVar2 + 0x13c) = uStack_28._4_4_;
      *(int32_t *)(lVar2 + 0x68) = uStack_50._4_4_;
      *(int *)(lVar2 + 0xc0) = param_2;
      if (((int)plVar7[0x18] != *(int *)(plVar7[0xc] + 0x11c)) &&
         (iVar5 = FUN_180774090(plVar7,0,2), iVar5 == 0)) {
        FUN_180773eb0(plVar7);
      }
    }
    else {
      if ((int)plVar7[0x22] == 5) {
        return 0x2e;
      }
      if ((int)plVar7[0x22] == 7) {
        return 0x2e;
      }
      uVar4 = *(uint *)((longlong)plVar7 + 0x44);
      if (*(uint *)(plVar7[0x30] + 0x44) <= *(uint *)((longlong)plVar7 + 0x44)) {
        uVar4 = *(uint *)(plVar7[0x30] + 0x44);
      }
      if (((param_2 != *(int *)(plVar7[0x17] + 0xc0)) ||
          ((int)plVar7[8] != uVar4 + *(int *)(plVar7[0x17] + 0x194))) ||
         ((*(uint *)(plVar7 + 0xb) >> 4 & 1) != 0)) {
        lVar2 = *(longlong *)(plVar7[0x21] + 0x10);
        uVar6 = *(uint64_t *)(lVar2 + 0x168);
        FUN_180768360(uVar6);
        *(int *)(plVar7 + 0x18) = param_2;
        LOCK();
        *(int32_t *)(plVar7 + 0x22) = 5;
        UNLOCK();
        LOCK();
        *(int32_t *)(param_1 + 0x110) = 5;
        UNLOCK();
        *(longlong **)(plVar7[0x21] + 0x28) = plVar7;
        lVar3 = plVar7[0x21];
        plVar7 = (longlong *)(lVar3 + 0x18);
        *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)(lVar2 + 0x158);
        *plVar7 = lVar2 + 0x150;
        *(longlong **)(lVar2 + 0x158) = plVar7;
        **(uint64_t **)(lVar3 + 0x20) = plVar7;
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar6);
      }
    }
  }
  *param_3 = *(uint64_t *)(*(longlong *)(param_1 + 0xa0) + (longlong)param_2 * 8);
  return 0;
}



uint64_t
FUN_180750bf2(longlong param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
             uint64_t param_5,longlong param_6,uint64_t param_7,uint64_t param_8,
             uint64_t param_9,ulonglong param_10,uint64_t param_11,uint64_t param_12)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong in_RAX;
  uint64_t uVar6;
  ulonglong unaff_RBP;
  uint64_t unaff_RSI;
  longlong *plVar7;
  uint64_t unaff_R12;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *param_3 = 0;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + unaff_RBP * 8);
  if ((plVar7 != (longlong *)0x0) && (plVar7[0x15] != 0)) {
    if (((*(uint *)(plVar7 + 0xb) & 4) != 0) && ((*(uint *)(plVar7 + 0xb) & 0x40) == 0)) {
      return 0x2e;
    }
    iVar5 = (int)unaff_RBP;
    if ((*(uint *)(param_1 + 0x2c) & 0x10000) == 0) {
      LOCK();
      *(uint *)(plVar7 + 0xb) = *(uint *)(plVar7 + 0xb) & 0xffffffb3;
      UNLOCK();
      if (plVar7[0x17] != 0) {
        LOCK();
        puVar1 = (uint *)(plVar7[0x17] + 0x58);
        *puVar1 = *puVar1 & 0xffffffb7;
        UNLOCK();
        *(uint *)((longlong)plVar7 + 0x2c) = *(uint *)((longlong)plVar7 + 0x2c) & 0xfffffff8;
        *(uint *)((longlong)plVar7 + 0x2c) =
             *(uint *)((longlong)plVar7 + 0x2c) | *(uint *)(plVar7[0x17] + 0x2c) & 7;
      }
      *(int *)(plVar7 + 0x18) = iVar5;
      param_6 = 0;
      param_7 = 0;
      param_8 = 0;
      param_9 = 0;
      param_10 = 0;
      param_11 = 0;
      param_12 = 0;
      uVar6 = (**(code **)(plVar7[0xc] + 0x88))(plVar7[0xc],unaff_RBP & 0xffffffff,&param_6);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      plVar7[6] = param_6;
      *(int32_t *)(plVar7 + 5) = (int32_t)param_7;
      *(int32_t *)(plVar7 + 0xd) = param_7._4_4_;
      *(int *)((longlong)plVar7 + 0x4c) = (int)param_10;
      *(int32_t *)((longlong)plVar7 + 0x13c) = param_12._4_4_;
      *(int *)(plVar7 + 10) = (param_10._4_4_ - (int)param_10) + 1;
      *(int32_t *)((longlong)plVar7 + 0x44) = (int32_t)param_9;
      *(float *)((longlong)plVar7 + 0x6c) = (float)(int)param_8;
      (**(code **)(*plVar7 + 0x138))(plVar7,param_10 & 0xffffffff,2,param_10._4_4_,2);
      lVar2 = plVar7[0x30];
      *(int32_t *)(lVar2 + 0x13c) = param_12._4_4_;
      *(int32_t *)(lVar2 + 0x68) = param_7._4_4_;
      *(int *)(lVar2 + 0xc0) = iVar5;
      if (((int)plVar7[0x18] != *(int *)(plVar7[0xc] + 0x11c)) &&
         (iVar5 = FUN_180774090(plVar7,0,2), iVar5 == 0)) {
        FUN_180773eb0(plVar7);
      }
    }
    else {
      if ((int)plVar7[0x22] == 5) {
        return 0x2e;
      }
      if ((int)plVar7[0x22] == 7) {
        return 0x2e;
      }
      uVar4 = *(uint *)((longlong)plVar7 + 0x44);
      if (*(uint *)(plVar7[0x30] + 0x44) <= *(uint *)((longlong)plVar7 + 0x44)) {
        uVar4 = *(uint *)(plVar7[0x30] + 0x44);
      }
      if (((iVar5 != *(int *)(plVar7[0x17] + 0xc0)) ||
          ((int)plVar7[8] != uVar4 + *(int *)(plVar7[0x17] + 0x194))) ||
         ((*(uint *)(plVar7 + 0xb) >> 4 & 1) != 0)) {
        lVar2 = *(longlong *)(plVar7[0x21] + 0x10);
        uVar6 = *(uint64_t *)(lVar2 + 0x168);
        FUN_180768360(uVar6);
        *(int *)(plVar7 + 0x18) = iVar5;
        LOCK();
        *(int32_t *)(plVar7 + 0x22) = 5;
        UNLOCK();
        LOCK();
        *(int32_t *)(unaff_R14 + 0x110) = 5;
        UNLOCK();
        *(longlong **)(plVar7[0x21] + 0x28) = plVar7;
        lVar3 = plVar7[0x21];
        plVar7 = (longlong *)(lVar3 + 0x18);
        *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)(lVar2 + 0x158);
        *plVar7 = lVar2 + 0x150;
        *(longlong **)(lVar2 + 0x158) = plVar7;
        **(uint64_t **)(lVar3 + 0x20) = plVar7;
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar6);
      }
    }
  }
  *unaff_R15 = *(uint64_t *)(*(longlong *)(unaff_R14 + 0xa0) + unaff_RBP * 8);
  return 0;
}





// 函数: void FUN_180750caa(void)
void FUN_180750caa(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong in_RAX;
  int32_t unaff_EBP;
  longlong unaff_RSI;
  longlong *plVar4;
  longlong unaff_R14;
  
  lVar1 = *(longlong *)(in_RAX + 0x10);
  uVar2 = *(uint64_t *)(lVar1 + 0x168);
  FUN_180768360(uVar2);
  *(int32_t *)(unaff_RSI + 0xc0) = unaff_EBP;
  LOCK();
  *(int32_t *)(unaff_RSI + 0x110) = 5;
  UNLOCK();
  LOCK();
  *(int32_t *)(unaff_R14 + 0x110) = 5;
  UNLOCK();
  *(longlong *)(*(longlong *)(unaff_RSI + 0x108) + 0x28) = unaff_RSI;
  lVar3 = *(longlong *)(unaff_RSI + 0x108);
  plVar4 = (longlong *)(lVar3 + 0x18);
  *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)(lVar1 + 0x158);
  *plVar4 = lVar1 + 0x150;
  *(longlong **)(lVar1 + 0x158) = plVar4;
  **(uint64_t **)(lVar3 + 0x20) = plVar4;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



uint64_t FUN_180750d42(void)

{
  longlong unaff_RBP;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  
  FUN_180768910();
  *unaff_R15 = *(uint64_t *)(*(longlong *)(unaff_R14 + 0xa0) + unaff_RBP * 8);
  return 0;
}



uint64_t FUN_180750d6b(void)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  longlong lStack0000000000000030;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  int iStack0000000000000040;
  int32_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  
  LOCK();
  *(uint *)(unaff_RSI + 0xb) = *(uint *)(unaff_RSI + 0xb) & 0xffffffb3;
  UNLOCK();
  if (unaff_RSI[0x17] != 0) {
    LOCK();
    puVar1 = (uint *)(unaff_RSI[0x17] + 0x58);
    *puVar1 = *puVar1 & 0xffffffb7;
    UNLOCK();
    *(uint *)((longlong)unaff_RSI + 0x2c) = *(uint *)((longlong)unaff_RSI + 0x2c) & 0xfffffff8;
    *(uint *)((longlong)unaff_RSI + 0x2c) =
         *(uint *)((longlong)unaff_RSI + 0x2c) | *(uint *)(unaff_RSI[0x17] + 0x2c) & 7;
  }
  *(int *)(unaff_RSI + 0x18) = (int)unaff_RBP;
  lStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  _iStack0000000000000040 = 0;
  _uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  uVar4 = (**(code **)(unaff_RSI[0xc] + 0x88))
                    (unaff_RSI[0xc],unaff_RBP & 0xffffffff,&stack0x00000030);
  if ((int)uVar4 == 0) {
    unaff_RSI[6] = lStack0000000000000030;
    *(int32_t *)(unaff_RSI + 5) = uStack0000000000000038;
    *(int32_t *)(unaff_RSI + 0xd) = uStack000000000000003c;
    *(int *)((longlong)unaff_RSI + 0x4c) = (int)uStack0000000000000050;
    *(int32_t *)((longlong)unaff_RSI + 0x13c) = uStack0000000000000060._4_4_;
    *(int *)(unaff_RSI + 10) = (uStack0000000000000050._4_4_ - (int)uStack0000000000000050) + 1;
    *(int32_t *)((longlong)unaff_RSI + 0x44) = uStack0000000000000048;
    *(float *)((longlong)unaff_RSI + 0x6c) = (float)iStack0000000000000040;
    (**(code **)(*unaff_RSI + 0x138))();
    lVar2 = unaff_RSI[0x30];
    *(int32_t *)(lVar2 + 0x13c) = uStack0000000000000060._4_4_;
    *(int32_t *)(lVar2 + 0x68) = uStack000000000000003c;
    *(int *)(lVar2 + 0xc0) = (int)unaff_RBP;
    if ((int)unaff_RSI[0x18] != *(int *)(unaff_RSI[0xc] + 0x11c)) {
      iVar3 = FUN_180774090();
      if (iVar3 == 0) {
        FUN_180773eb0();
      }
    }
    uVar4 = 0;
    *unaff_R15 = *(uint64_t *)(*(longlong *)(unaff_R14 + 0xa0) + unaff_RBP * 8);
  }
  return uVar4;
}



uint64_t FUN_180750eac(void)

{
  return 0x1f;
}



uint64_t FUN_180750ee0(longlong *param_1,int param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  longlong *plVar2;
  int iVar3;
  int iStackX_8;
  
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  if ((int)uVar1 == 0) {
    if (((-1 < param_2) && (param_2 < iStackX_8)) && (param_3 != (uint64_t *)0x0)) {
      iVar3 = 0;
      plVar2 = *(longlong **)param_1[0x1e];
      if (plVar2 == (longlong *)param_1[0x1f]) {
        return 0;
      }
      do {
        if ((param_1[0x15] == 0) ||
           ((uint)*(ushort *)((longlong)plVar2 + 0x34) == *(uint *)(param_1 + 0x18))) {
          if (param_2 <= iVar3) {
            *param_3 = plVar2;
            return 0;
          }
          iVar3 = iVar3 + 1;
        }
        plVar2 = (longlong *)*plVar2;
      } while (plVar2 != (longlong *)param_1[0x1f]);
      return 0;
    }
    uVar1 = 0x1f;
  }
  return uVar1;
}



uint64_t
FUN_180750fa0(longlong param_1,longlong param_2,longlong param_3,int32_t param_4,int *param_5,
             int param_6)

{
  int iVar1;
  void *puVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_3 == 0) {
    if (param_5 == (int *)0x0) {
      return 0x1f;
    }
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x20) != (void *)0x0) {
      puVar2 = *(void **)(param_2 + 0x20);
    }
    func_0x00018076b450(param_3,puVar2,param_4);
    if (param_5 == (int *)0x0) {
      return 0;
    }
  }
  if (param_6 == 2) {
    *param_5 = *(int *)(param_2 + 0x30);
    return 0;
  }
  if (param_6 != 4) {
    if (param_6 == 1) {
      *param_5 = (int)(longlong)
                      (((float)*(uint *)(param_2 + 0x30) * 1000.0) / *(float *)(param_1 + 0x6c));
    }
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x30);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      *param_5 = (int)(uVar3 * 0x10 >> 3) * *(int *)(param_1 + 0x68);
      return 0;
    }
    if (iVar1 == 3) {
      *param_5 = (int)(uVar3 * 0x18 >> 3) * *(int *)(param_1 + 0x68);
      return 0;
    }
    if ((iVar1 == 4) || (iVar1 == 5)) {
      *param_5 = (int)(uVar3 * 0x20 >> 3) * *(int *)(param_1 + 0x68);
      return 0;
    }
  }
  *param_5 = *(uint *)(param_2 + 0x30) * *(int *)(param_1 + 0x68);
  return 0;
}



ulonglong FUN_180751170(longlong param_1,ulonglong param_2,uint param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lStackX_8;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  lStackX_8 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    return 0x1e;
  }
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xb0) <= (int)param_2)) {
    uVar2 = 0x1f;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x88))
                      (*(longlong *)(param_1 + 0x60),param_2,&uStack_48);
    if (((int)uVar2 == 0) &&
       (uVar2 = FUN_18078df30(*(uint64_t *)(param_1 + 0xd8),param_3,&uStack_48,&lStackX_8),
       (int)uVar2 == 0)) {
      *(int32_t *)(lStackX_8 + 0x24) = *(int32_t *)(param_1 + 0x24);
      *(uint64_t *)(lStackX_8 + 0x60) = *(uint64_t *)(param_1 + 0x60);
      pcVar1 = *(code **)(*(longlong *)(param_1 + 0x60) + 0x80);
      if ((pcVar1 != (code *)0x0) &&
         (uVar2 = (*pcVar1)(*(longlong *)(param_1 + 0x60),param_2 & 0xffffffff,lStackX_8),
         (int)uVar2 != 0)) {
        return uVar2;
      }
      FUN_180751ff0(*(uint64_t *)(param_1 + 0x60));
      uVar2 = FUN_180773610(*(uint64_t *)(param_1 + 0x60),param_2 & 0xffffffff,0,2);
      if ((int)uVar2 == 0) {
        if (*(code **)(param_1 + 0x150) != (code *)0x0) {
          (**(code **)(param_1 + 0x150))(*(uint64_t *)(param_1 + 0x158),param_2 & 0xffffffff,0,2);
        }
        if (((param_3 >> 0xd & 1) == 0) &&
           (uVar2 = FUN_180751310(lStackX_8,0,*(int32_t *)(lStackX_8 + 0x44),0),
           (uVar2 & 0xffffffef) != 0)) {
          return uVar2;
        }
        uVar2 = FUN_180752820(param_1,param_2 & 0xffffffff,lStackX_8,0);
        if ((int)uVar2 == 0) {
          *(int32_t *)(lStackX_8 + 0x40) = 0;
          return 0;
        }
      }
    }
  }
  return uVar2;
}



ulonglong FUN_180751310(longlong *param_1,int param_2,int param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int aiStackX_8 [2];
  int aiStackX_10 [2];
  int aiStackX_18 [2];
  uint *puStackX_20;
  longlong *plVar10;
  int32_t uVar11;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  uVar7 = 1;
  if ((*(uint *)((longlong)param_1 + 0x2c) & 0x200) == 0) {
    iVar5 = (int)param_1[5];
    if (iVar5 == 1) {
      uVar7 = 1;
    }
    else if (iVar5 == 2) {
      uVar7 = 2;
    }
    else if (iVar5 == 3) {
      uVar7 = 3;
    }
    else if ((iVar5 == 4) || (iVar5 == 5)) {
      uVar7 = 4;
    }
    uVar7 = uVar7 * (int)param_1[0xd];
  }
  *(int *)(param_1 + 8) = param_2;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar1 = param_1[0xc];
  puStackX_20 = param_4;
  uVar3 = (**(code **)(lVar1 + 0x88))(lVar1,*(int32_t *)(lVar1 + 0x11c),&lStack_80);
  if ((int)uVar3 == 0) {
    uVar6 = 0;
    uVar8 = uVar7 * param_3;
    param_2 = uVar7 * param_2;
    uVar9 = uVar8;
    uVar3 = uVar3 & 0xffffffff;
    do {
      if (uVar9 == 0) break;
      uVar2 = uVar9;
      if (uVar8 < uVar9) {
        uVar2 = uVar8;
      }
      plVar10 = &lStack_88;
      uVar4 = (**(code **)(*param_1 + 0x28))
                        (param_1,param_2,uVar2,&lStack_90,plVar10,aiStackX_18,aiStackX_10);
      uVar11 = (int32_t)((ulonglong)plVar10 >> 0x20);
      uVar3 = uVar4 & 0xffffffff;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if ((aiStackX_18[0] == 0) && (aiStackX_10[0] == 0)) {
        (**(code **)(*param_1 + 0x30))
                  (param_1,lStack_90,lStack_88,0,(ulonglong)plVar10 & 0xffffffff00000000);
        return 0xd;
      }
      iVar5 = 0;
      if ((lStack_90 != 0) && (aiStackX_18[0] != 0)) {
        aiStackX_8[0] = 0;
        uVar2 = (**(code **)(*param_1 + 200))(param_1,lStack_90,aiStackX_18[0],aiStackX_8);
        uVar3 = (ulonglong)uVar2;
        iVar5 = aiStackX_8[0];
        if ((uVar2 & 0xffffffef) != 0) goto LAB_180751529;
      }
      if ((lStack_88 != 0) && (aiStackX_10[0] != 0)) {
        aiStackX_8[0] = 0;
        uVar2 = (**(code **)(*param_1 + 200))(param_1,lStack_88,aiStackX_10[0],aiStackX_8);
        uVar3 = (ulonglong)uVar2;
        if ((uVar2 & 0xffffffef) != 0) {
LAB_180751529:
          (**(code **)(*param_1 + 0x30))
                    (param_1,lStack_90,lStack_88,aiStackX_18[0],CONCAT44(uVar11,aiStackX_10[0]));
          return uVar3;
        }
        iVar5 = iVar5 + aiStackX_8[0];
      }
      uVar4 = (**(code **)(*param_1 + 0x30))
                        (param_1,lStack_90,lStack_88,aiStackX_18[0],CONCAT44(uVar11,aiStackX_10[0]))
      ;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      param_2 = param_2 + iVar5;
      uVar6 = uVar6 + iVar5;
      uVar9 = uVar9 - iVar5;
    } while ((int)uVar3 != 0x10);
    if (puStackX_20 != (uint *)0x0) {
      *puStackX_20 = uVar6 / uVar7;
    }
  }
  return uVar3;
}



ulonglong FUN_1807513d1(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  int iVar4;
  int iVar5;
  int unaff_R12D;
  uint uVar6;
  uint unaff_R14D;
  int iVar7;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  
  uVar6 = 0;
  iVar7 = unaff_R14D * unaff_R12D;
  *(int *)(unaff_RBP + -0x39) = iVar7;
  do {
    if (iVar7 == 0) break;
    iVar4 = 0;
    lStack0000000000000030 = unaff_RBP + 0x6f;
    lStack0000000000000028 = unaff_RBP + 0x77;
    uVar3 = (**(code **)(*unaff_RBX + 0x28))();
    unaff_RSI = uVar3 & 0xffffffff;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    iVar5 = *(int *)(unaff_RBP + 0x6f);
    if ((*(int *)(unaff_RBP + 0x77) == 0) && (iVar5 == 0)) {
      (**(code **)(*unaff_RBX + 0x30))();
      return 0xd;
    }
    if ((*(longlong *)(unaff_RBP + -0x31) != 0) && (*(int *)(unaff_RBP + 0x77) != 0)) {
      lVar1 = *unaff_RBX;
      *(int32_t *)(unaff_RBP + 0x67) = 0;
      uVar2 = (**(code **)(lVar1 + 200))();
      unaff_RSI = (ulonglong)uVar2;
      if ((uVar2 & 0xffffffef) == 0) {
        iVar4 = *(int *)(unaff_RBP + 0x67);
        iVar5 = *(int *)(unaff_RBP + 0x6f);
        goto LAB_180751494;
      }
LAB_180751529:
      (**(code **)(*unaff_RBX + 0x30))();
      goto LAB_180751557;
    }
LAB_180751494:
    if ((*(longlong *)(unaff_RBP + -0x29) != 0) && (iVar5 != 0)) {
      lVar1 = *unaff_RBX;
      *(int32_t *)(unaff_RBP + 0x67) = 0;
      uVar2 = (**(code **)(lVar1 + 200))();
      unaff_RSI = (ulonglong)uVar2;
      if ((uVar2 & 0xffffffef) != 0) goto LAB_180751529;
      iVar4 = iVar4 + *(int *)(unaff_RBP + 0x67);
    }
    uVar3 = (**(code **)(*unaff_RBX + 0x30))();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar6 = uVar6 + iVar4;
    iVar7 = iVar7 - iVar4;
  } while ((int)unaff_RSI != 0x10);
  if (*(uint **)(unaff_RBP + 0x7f) != (uint *)0x0) {
    **(uint **)(unaff_RBP + 0x7f) = uVar6 / unaff_R14D;
  }
LAB_180751557:
  return unaff_RSI & 0xffffffff;
}





