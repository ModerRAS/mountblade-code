#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part176.c - 7 个函数

// 函数: void FUN_18076deb0(int32_t *param_1,longlong param_2)
void FUN_18076deb0(int32_t *param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(param_2 + 0x10bd0,*(longlong *)(param_1 + 2),&system_buffer_ptr,0,1);
  }
  *param_1 = 0;
  *(uint64_t *)(param_1 + 2) = 0;
  return;
}



int32_t FUN_18076def0(ushort *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = param_4;
  if (param_5 != 0) {
    iVar9 = param_5;
  }
  if (*(longlong *)(param_1 + 4) == 0) {
    return 0x1e;
  }
  if (param_2 == 0) {
    return 0x1f;
  }
  if (((param_3 == (short)param_1[1]) && (iVar9 == param_4)) && (iVar9 == (short)*param_1)) {
                    // WARNING: Subroutine does not return
    memcpy(*(longlong *)(param_1 + 4),param_2,(longlong)(param_3 * param_4) << 2);
  }
  uVar8 = 0;
  uVar3 = uVar8;
  uVar5 = uVar8;
  if (0 < (short)param_1[1]) {
    do {
      uVar1 = (uint)*param_1;
      iVar6 = (int)uVar5;
      if (0 < (short)*param_1) {
        puVar2 = (int32_t *)(param_2 + (longlong)(int)uVar3 * 4);
        uVar5 = uVar8;
        uVar7 = uVar8;
        do {
          iVar4 = (int)uVar5;
          if ((iVar6 < param_3) && ((longlong)uVar7 < (longlong)param_4)) {
            *(int32_t *)
             (*(longlong *)(param_1 + 4) + (longlong)((short)uVar1 * iVar6 + iVar4) * 4) = *puVar2;
          }
          else {
            *(int32_t *)
             (*(longlong *)(param_1 + 4) + (longlong)((short)uVar1 * iVar6 + iVar4) * 4) = 0;
          }
          uVar1 = (uint)(short)*param_1;
          uVar5 = (ulonglong)(iVar4 + 1U);
          uVar7 = uVar7 + 1;
          puVar2 = puVar2 + 1;
        } while ((int)(iVar4 + 1U) < (int)uVar1);
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + iVar9);
      uVar5 = (ulonglong)(iVar6 + 1U);
    } while ((int)(iVar6 + 1U) < (int)(short)param_1[1]);
  }
  return 0;
}



uint64_t FUN_18076df8e(void)

{
  uint uVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  int unaff_EDI;
  int iVar4;
  ulonglong uVar5;
  int in_R9D;
  ushort *in_R10;
  ulonglong uVar6;
  longlong unaff_R12;
  ulonglong unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  
  uVar3 = unaff_R13 & 0xffffffff;
  do {
    uVar1 = (uint)*in_R10;
    uVar5 = unaff_R13 & 0xffffffff;
    if ((short)unaff_R13 < (short)*in_R10) {
      puVar2 = (int32_t *)(unaff_R12 + (longlong)(int)uVar3 * 4);
      uVar6 = unaff_R13;
      do {
        iVar4 = (int)uVar5;
        if ((in_R9D < unaff_EDI) && ((longlong)uVar6 < unaff_R15)) {
          *(int32_t *)(*(longlong *)(in_R10 + 4) + (longlong)((short)uVar1 * in_R9D + iVar4) * 4)
               = *puVar2;
        }
        else {
          *(int *)(*(longlong *)(in_R10 + 4) + (longlong)((short)uVar1 * in_R9D + iVar4) * 4) =
               (int)unaff_R13;
        }
        uVar1 = (uint)(short)*in_R10;
        uVar5 = (ulonglong)(iVar4 + 1U);
        uVar6 = uVar6 + 1;
        puVar2 = puVar2 + 1;
      } while ((int)(iVar4 + 1U) < (int)uVar1);
    }
    in_R9D = in_R9D + 1;
    uVar3 = (ulonglong)(uint)((int)uVar3 + unaff_R14D);
  } while (in_R9D < (short)in_R10[1]);
  return 0;
}



uint64_t FUN_18076e020(void)

{
  return 0;
}





// 函数: void FUN_18076e050(longlong *param_1)
void FUN_18076e050(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  *(uint64_t *)(lVar2 + 0x240) = 0;
  lVar1 = lVar2 + 0x238;
  *(uint64_t *)(lVar2 + 0x248) = 0;
  *(uint64_t *)(lVar2 + 0x250) = 0;
  *(uint64_t *)(lVar2 + 0x250) = 0xffffffffffffffff;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar2 + 0x240) = lVar1;
  *(uint64_t *)(lVar2 + 0x248) = 0;
  iVar3 = FUN_18078a0c0(*(longlong *)(lVar2 + 0xa8) + 0x720,lVar2 + 0x218,1);
  if (iVar3 == 0) {
    *(uint64_t *)(lVar2 + 0x250) = 0xffffffffffffffff;
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(lVar2 + 0x240) = lVar1;
    *(uint64_t *)(lVar2 + 0x248) = 0;
    *(uint64_t *)(lVar2 + 0x298) = 0;
    *(int32_t *)(lVar2 + 0x2a0) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x2a4) = 1;
    *(uint64_t *)(lVar2 + 0x230) = 0x3f800000;
    LOCK();
    *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) | 0x10;
    UNLOCK();
    FUN_18076f280(lVar2,1);
  }
  return;
}



uint64_t
FUN_18076e120(longlong *param_1,int param_2,longlong *param_3,int32_t *param_4,
             int8_t *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  lVar1 = *param_1;
  if (param_2 == 1) {
    if (-80.0 < *(float *)(lVar1 + 0x234)) {
      uVar2 = powf(0x41200000,*(float *)(lVar1 + 0x234) * 0.05);
    }
    else {
      uVar2 = 0;
    }
    *(int32_t *)(lVar1 + 0x2b4) = 0;
    *(int32_t *)(lVar1 + 0x2b0) = uVar2;
    *param_3 = lVar1 + 0x2b0;
    *param_4 = 8;
    if (param_5 != (int8_t *)0x0) {
      *param_5 = 0;
    }
    return 0;
  }
  return 0x1f;
}



uint64_t FUN_18076e1c0(longlong *param_1,int param_2,float *param_3,longlong param_4)

{
  if (param_2 == 0) {
    *param_3 = *(float *)(*param_1 + 0x234);
  }
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)*param_3);
  }
  return 0;
}



uint64_t FUN_18076e220(longlong *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x218) != 0) {
    uVar2 = FUN_18078a340(*(longlong *)(lVar1 + 0xa8) + 0x720,*(longlong *)(lVar1 + 0x218),1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(uint64_t *)(lVar1 + 0x218) = 0;
  }
  return 0;
}





// 函数: void FUN_18076e270(longlong *param_1)
void FUN_18076e270(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(int32_t *)(lVar1 + 0x230) = 0x3f800000;
  FUN_180765990(*(uint64_t *)(lVar1 + 0x218),0,0);
  *(int32_t *)(lVar1 + 0x58) = 0;
  *(int32_t *)(lVar1 + 0x260) = 0;
  *(uint64_t *)(lVar1 + 600) = 0;
  *(int32_t *)(lVar1 + 0x270) = 0;
  *(uint64_t *)(lVar1 + 0x268) = 0;
  *(int32_t *)(lVar1 + 0x280) = 0;
  *(uint64_t *)(lVar1 + 0x278) = 0;
  *(int32_t *)(lVar1 + 0x290) = 0;
  *(uint64_t *)(lVar1 + 0x288) = 0;
  *(uint64_t *)(lVar1 + 0x298) = 1;
  *(int32_t *)(lVar1 + 0x2a0) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x2a4) = 1;
  return;
}



uint64_t FUN_18076e310(longlong *param_1,int param_2,float param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    *(float *)(lVar1 + 0x234) = param_3;
    if (-80.0 < param_3) {
      uVar3 = powf(0x41200000,param_3 * 0.05);
    }
    else {
      uVar3 = 0;
    }
    uVar2 = FUN_180765c40(*(uint64_t *)(lVar1 + 0x218),uVar3,0x40,1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_18076e31f(longlong *param_1,uint64_t param_2,float param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  bool in_CF;
  bool in_ZF;
  int32_t uVar3;
  
  lVar1 = *param_1;
  *(float *)(lVar1 + 0x234) = param_3;
  if (in_CF || in_ZF) {
    uVar3 = 0;
  }
  else {
    uVar3 = powf(0x41200000,param_3 * 0.05);
  }
  uVar2 = FUN_180765c40(*(uint64_t *)(lVar1 + 0x218),uVar3,0x40,1,0);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18076e374(void)

{
  return 0;
}



int FUN_18076e380(longlong param_1,ulonglong param_2,float param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  int32_t uStackX_c;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  lVar5 = lVar1;
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,5);
    lVar5 = *(longlong *)(param_1 + 0xa8);
  }
  plVar7 = *(longlong **)(lVar5 + 0x10810);
  if (plVar7 == (longlong *)(lVar5 + 0x10810)) {
    iVar3 = FUN_180743010();
    if (iVar3 != 0) goto LAB_18076e4f2;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10810);
    plVar7 = (longlong *)*plVar4;
    if (plVar7 == plVar4) {
      iVar3 = 0x1c;
      goto LAB_18076e4f2;
    }
  }
  iVar3 = FUN_18076f100(param_1,param_2,param_2,0);
  if (iVar3 == 0) {
    plVar4 = (longlong *)(param_1 + 0x238);
    if (((longlong *)*plVar4 == plVar4) && (*(longlong **)(param_1 + 0x240) == plVar4)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    iVar3 = 0;
    *(longlong *)plVar7[1] = *plVar7;
    *(longlong *)(*plVar7 + 8) = plVar7[1];
    plVar7[1] = (longlong)plVar7;
    *plVar7 = (longlong)plVar7;
    plVar7[3] = -1;
    plVar7[2] = 0;
    plVar6 = (longlong *)*plVar4;
    do {
      if (param_2 < (ulonglong)plVar6[3]) {
        plVar7[3] = param_2;
        plVar7[1] = plVar6[1];
        *plVar7 = (longlong)plVar6;
        plVar6[1] = (longlong)plVar7;
        goto LAB_18076e4a9;
      }
      plVar6 = (longlong *)*plVar6;
    } while ((longlong *)plVar6[1] != plVar4);
    plVar7[3] = param_2;
    plVar7[1] = *(longlong *)(param_1 + 0x240);
    *plVar7 = (longlong)plVar4;
    *(longlong **)(param_1 + 0x240) = plVar7;
LAB_18076e4a9:
    *(longlong **)plVar7[1] = plVar7;
    plVar7[2] = CONCAT44(uStackX_c,param_3);
    if (bVar2) {
      *(float *)(param_1 + 0x2a0) = param_3;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x2a0);
      if (*(float *)(param_1 + 0x2a0) <= param_3) {
        fVar8 = param_3;
      }
      *(float *)(param_1 + 0x2a0) = fVar8;
    }
    *(int32_t *)(param_1 + 0x298) = 1;
    *(int32_t *)(param_1 + 0x2a4) = 0;
  }
LAB_18076e4f2:
  if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,5);
  }
  return iVar3;
}



int FUN_18076e38d(int32_t param_1,ulonglong param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong in_RCX;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_R14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  uint64_t in_stack_00000050;
  
  lVar4 = unaff_R14;
  if (unaff_R14 != 0) {
    func_0x000180743c20(param_1,5);
    lVar4 = *(longlong *)(in_RCX + 0xa8);
  }
  plVar6 = *(longlong **)(lVar4 + 0x10810);
  if (plVar6 == (longlong *)(lVar4 + 0x10810)) {
    iVar2 = FUN_180743010();
    fVar7 = extraout_XMM0_Da;
    if (iVar2 != 0) goto LAB_18076e4f2;
    plVar3 = (longlong *)(*(longlong *)(in_RCX + 0xa8) + 0x10810);
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == plVar3) {
      iVar2 = 0x1c;
      goto LAB_18076e4f2;
    }
  }
  iVar2 = FUN_18076f100(in_RCX,param_2,param_2,0);
  fVar7 = extraout_XMM0_Da_00;
  if (iVar2 == 0) {
    plVar3 = (longlong *)(in_RCX + 0x238);
    if (((longlong *)*plVar3 == plVar3) && (*(longlong **)(in_RCX + 0x240) == plVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = 0;
    *(longlong *)plVar6[1] = *plVar6;
    *(longlong *)(*plVar6 + 8) = plVar6[1];
    plVar6[1] = (longlong)plVar6;
    *plVar6 = (longlong)plVar6;
    plVar6[3] = -1;
    plVar6[2] = 0;
    plVar5 = (longlong *)*plVar3;
    do {
      if (param_2 < (ulonglong)plVar5[3]) {
        plVar6[3] = param_2;
        plVar6[1] = plVar5[1];
        *plVar6 = (longlong)plVar5;
        plVar5[1] = (longlong)plVar6;
        goto LAB_18076e4a9;
      }
      plVar5 = (longlong *)*plVar5;
    } while ((longlong *)plVar5[1] != plVar3);
    plVar6[3] = param_2;
    plVar6[1] = *(longlong *)(in_RCX + 0x240);
    *plVar6 = (longlong)plVar3;
    *(longlong **)(in_RCX + 0x240) = plVar6;
LAB_18076e4a9:
    *(longlong **)plVar6[1] = plVar6;
    plVar6[2] = CONCAT44(in_stack_00000050._4_4_,param_3);
    if (bVar1) {
      *(float *)(in_RCX + 0x2a0) = param_3;
    }
    else {
      fVar7 = *(float *)(in_RCX + 0x2a0);
      if (*(float *)(in_RCX + 0x2a0) <= param_3) {
        fVar7 = param_3;
      }
      *(float *)(in_RCX + 0x2a0) = fVar7;
    }
    *(int32_t *)(in_RCX + 0x298) = 1;
    *(int32_t *)(in_RCX + 0x2a4) = 0;
  }
LAB_18076e4f2:
  if ((unaff_R14 != 0) && (unaff_R14 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(fVar7,5);
  }
  return iVar2;
}



int32_t FUN_18076e510(void)

{
  int32_t unaff_EDI;
  longlong unaff_R14;
  
  if (unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}



int32_t FUN_18076e620(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int32_t uVar6;
  int32_t uStackX_8;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,5);
  }
  if (param_2 == (uint *)0x0) {
    uVar6 = 0x1f;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x238);
    uVar6 = 0;
    plVar4 = (longlong *)*plVar1;
    uVar3 = 0;
    if (plVar4 != plVar1) {
      do {
        plVar4 = (longlong *)*plVar4;
        uVar3 = uVar3 + 1;
      } while (plVar4 != plVar1);
      plVar4 = (longlong *)*plVar1;
    }
    if ((param_3 == 0) && (param_4 == 0)) {
      *param_2 = uVar3;
    }
    else {
      uVar5 = *param_2;
      if (uVar3 < *param_2) {
        *param_2 = uVar3;
        uVar5 = uVar3;
      }
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          if (param_3 != 0) {
            *(longlong *)(param_3 + (ulonglong)uVar3 * 8) = plVar4[3];
          }
          if (param_4 != 0) {
            uStackX_8 = (int32_t)plVar4[2];
            *(int32_t *)(param_4 + (ulonglong)uVar3 * 4) = uStackX_8;
          }
          plVar4 = (longlong *)*plVar4;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *param_2);
      }
    }
  }
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,5);
  }
  return uVar6;
}





// 函数: void FUN_18076e720(longlong param_1)
void FUN_18076e720(longlong param_1)

{
  int iVar1;
  int8_t *apuStackX_8 [4];
  
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    FUN_18076deb0(*(longlong *)(param_1 + 0x218) + 0x98,*(uint64_t *)(param_1 + 0xa8));
    *(int32_t *)(*(longlong *)(param_1 + 0x218) + 0x94) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218) + 0x90) = 0x3f800000;
    iVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),apuStackX_8,0x18,1);
    if (iVar1 == 0) {
      *apuStackX_8[0] = 0x12;
      *(longlong *)(apuStackX_8[0] + 8) = param_1;
      func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),apuStackX_8[0],1);
    }
    return;
  }
  *(int32_t *)(param_1 + 0x230) = 0x3f800000;
  FUN_180765990(*(uint64_t *)(param_1 + 0x218));
  *(int32_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x260) = 0;
  *(uint64_t *)(param_1 + 600) = 0;
  *(int32_t *)(param_1 + 0x270) = 0;
  *(uint64_t *)(param_1 + 0x268) = 0;
  *(int32_t *)(param_1 + 0x280) = 0;
  *(uint64_t *)(param_1 + 0x278) = 0;
  *(int32_t *)(param_1 + 0x290) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x298) = 1;
  *(int32_t *)(param_1 + 0x2a0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2a4) = 1;
  *(uint64_t *)(param_1 + 0x220) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x2c) = 0x100000;
  *(int32_t *)(param_1 + 0x28) = 0x100000;
  *(int8_t *)(param_1 + 0x50) = 0;
  *(int16_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  return;
}



uint64_t FUN_18076e7d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  int32_t uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,5);
  }
  if (*(char *)(param_1 + 0x2a8) != '\0') {
    func_0x000180765a40(*(uint64_t *)(param_1 + 0x218));
    *(int8_t *)(param_1 + 0x2a8) = 0;
  }
  if ((*(uint *)(param_1 + 100) >> 0x12 & 1) != 0) {
    func_0x000180765bd0(*(uint64_t *)(param_1 + 0x218));
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffbffff;
    UNLOCK();
  }
  lVar4 = *(longlong *)(param_1 + 0x220);
  if (lVar4 == 0) {
    lVar4 = param_1 + 8;
    *(longlong *)(param_1 + 0x220) = lVar4;
  }
  puVar7 = *(ulonglong **)(lVar4 + 0x30);
  *(ulonglong **)(param_1 + 0x228) = puVar7;
  if (puVar7 == (ulonglong *)0x0) {
    puVar7 = *(ulonglong **)(param_1 + 0x38);
    *(ulonglong **)(param_1 + 0x228) = puVar7;
  }
  uVar8 = 1;
  if (*(int *)(param_1 + 0x298) == 0) {
    if (*(int *)(param_1 + 0x29c) < 1) goto LAB_18076e8e3;
    lVar4 = 600;
    if (1 < *(int *)(param_1 + 0x29c)) {
      lVar4 = 0x268;
    }
    uVar6 = *(ulonglong *)(lVar4 + param_1);
    uVar3 = *(uint *)((longlong)puVar7 + 0x24);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    uVar5 = *(ulonglong *)(param_1 + 0x18);
    if (*(ulonglong *)(param_1 + 0x18) <= *puVar7) {
      uVar5 = *puVar7;
    }
    if (uVar6 < uVar5) {
      uVar6 = -((uVar5 - uVar6) / (ulonglong)uVar3);
    }
    else {
      uVar6 = (uVar6 - uVar5) / (ulonglong)uVar3;
    }
    if (-1 < (longlong)uVar6) goto LAB_18076e8e3;
  }
  FUN_18076f660(param_1);
LAB_18076e8e3:
  plVar1 = (longlong *)(param_1 + 0x238);
  if (((longlong *)*plVar1 != plVar1) || (*(longlong **)(param_1 + 0x240) != plVar1)) {
    uVar8 = 0;
  }
  *(int32_t *)(param_1 + 0x2a4) = uVar8;
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,5);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18076e930(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,int param_5
void FUN_18076e930(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,int param_5
                  ,int param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int8_t auStack_108 [64];
  int iStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  ulonglong *puStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  
  uStack_70 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  iStack_c8 = 0;
  uStack_c0 = 0;
  if ((param_3 == 0) || (*(uint64_t **)(param_3 + 0x18) == (uint64_t *)0x0)) {
    uStack_a8 = 0;
  }
  else {
    uStack_a8 = **(uint64_t **)(param_3 + 0x18);
  }
  if ((param_4 == 0) || (*(uint64_t **)(param_4 + 0x18) == (uint64_t *)0x0)) {
    uStack_b0 = 0;
  }
  else {
    uStack_b0 = **(uint64_t **)(param_4 + 0x18);
  }
  lStack_98 = param_3;
  if (param_6 == 1) {
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffbffff;
    UNLOCK();
    lVar2 = *(longlong *)(param_1 + 0x218);
    if (param_5 == 0) {
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        **(int **)(param_4 + 8) = (int)*(short *)(lVar2 + 0x3a);
        *(int32_t *)(param_4 + 0x20) = 0;
      }
      if (((((*(int *)(param_1 + 0x29c) < 1) &&
            (lVar2 = *(longlong *)(param_1 + 0x218), *(float *)(lVar2 + 0x74) == 1.0)) &&
           (*(longlong *)(lVar2 + 0x50) == 0)) &&
          ((*(float *)(lVar2 + 0x80) != 1.0 || (*(float *)(lVar2 + 0x68) != 1.0)))) &&
         ((*(float *)(lVar2 + 0x68) == 0.0 &&
          ((*(int *)(lVar2 + 0x84) == 0 && (*(float *)(lVar2 + 0x80) != 0.0)))))) {
        func_0x000180765bd0();
      }
    }
    else if (*(float *)(lVar2 + 0x68) != *(float *)(lVar2 + 0x80)) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40000;
      UNLOCK();
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_70 ^ (ulonglong)auStack_108);
  }
  if (param_3 == 0) {
    uStack_c4 = 0;
  }
  else {
    uStack_c4 = **(int32_t **)(param_3 + 8);
  }
  if (param_4 != 0) {
    iStack_c8 = **(int **)(param_4 + 8);
  }
  puStack_a0 = *(ulonglong **)(param_1 + 0x228);
  uVar3 = *(ulonglong *)(param_1 + 600);
  uVar1 = *(uint *)((longlong)puStack_a0 + 0x24);
  uVar5 = *(ulonglong *)(param_1 + 0x18);
  if (*(ulonglong *)(param_1 + 0x18) <= *puStack_a0) {
    uVar5 = *puStack_a0;
  }
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar3 < uVar5) {
    uStack_90 = -((uVar5 - uVar3) / (ulonglong)uVar4);
  }
  else {
    uStack_90 = (uVar3 - uVar5) / (ulonglong)uVar4;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x268);
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar3 < uVar5) {
    uStack_88 = -((uVar5 - uVar3) / (ulonglong)uVar4);
  }
  else {
    uStack_88 = (uVar3 - uVar5) / (ulonglong)uVar4;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x278);
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar3 < uVar5) {
    uStack_80 = -((uVar5 - uVar3) / (ulonglong)uVar4);
  }
  else {
    uStack_80 = (uVar3 - uVar5) / (ulonglong)uVar4;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x288);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar3 < uVar5) {
    uStack_78 = -((uVar5 - uVar3) / (ulonglong)uVar1);
  }
  else {
    uStack_78 = (uVar3 - uVar5) / (ulonglong)uVar1;
  }
                    // WARNING: Subroutine does not return
  memset(uStack_b0,0,(ulonglong)*(ushort *)(param_1 + 0x58) * (longlong)iStack_c8 * 4);
}





// 函数: void FUN_18076ea8d(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_18076ea8d(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  longlong unaff_R13;
  int unaff_R15D;
  int iStack0000000000000040;
  int iStack0000000000000044;
  uint64_t in_stack_00000058;
  ulonglong *puStack0000000000000068;
  ulonglong uStack0000000000000078;
  ulonglong uStack0000000000000080;
  ulonglong uStack0000000000000088;
  ulonglong uStack0000000000000090;
  
  iStack0000000000000044 = unaff_R15D;
  if (param_3 != 0) {
    iStack0000000000000044 = **(int **)(param_3 + 8);
  }
  if (unaff_R13 != 0) {
    unaff_R15D = **(int **)(param_4 + 8);
  }
  puStack0000000000000068 = *(ulonglong **)(unaff_RDI + 0x228);
  uVar2 = *(ulonglong *)(unaff_RDI + 600);
  uVar1 = *(uint *)((longlong)puStack0000000000000068 + 0x24);
  uVar4 = *(ulonglong *)(unaff_RDI + 0x18);
  if (*(ulonglong *)(unaff_RDI + 0x18) <= *puStack0000000000000068) {
    uVar4 = *puStack0000000000000068;
  }
  uVar3 = uVar1;
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  if (uVar2 < uVar4) {
    uStack0000000000000078 = -((uVar4 - uVar2) / (ulonglong)uVar3);
  }
  else {
    uStack0000000000000078 = (uVar2 - uVar4) / (ulonglong)uVar3;
  }
  uVar2 = *(ulonglong *)(unaff_RDI + 0x268);
  uVar3 = uVar1;
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  if (uVar2 < uVar4) {
    uStack0000000000000080 = -((uVar4 - uVar2) / (ulonglong)uVar3);
  }
  else {
    uStack0000000000000080 = (uVar2 - uVar4) / (ulonglong)uVar3;
  }
  uVar2 = *(ulonglong *)(unaff_RDI + 0x278);
  uVar3 = uVar1;
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  if (uVar2 < uVar4) {
    uStack0000000000000088 = -((uVar4 - uVar2) / (ulonglong)uVar3);
  }
  else {
    uStack0000000000000088 = (uVar2 - uVar4) / (ulonglong)uVar3;
  }
  uVar2 = *(ulonglong *)(unaff_RDI + 0x288);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar2 < uVar4) {
    uStack0000000000000090 = -((uVar4 - uVar2) / (ulonglong)uVar1);
  }
  else {
    uStack0000000000000090 = (uVar2 - uVar4) / (ulonglong)uVar1;
  }
  iStack0000000000000040 = unaff_R15D;
                    // WARNING: Subroutine does not return
  memset(in_stack_00000058,0,(ulonglong)*(ushort *)(unaff_RDI + 0x58) * (longlong)unaff_R15D * 4);
}





// 函数: void FUN_18076f0d2(void)
void FUN_18076f0d2(void)

{
  ulonglong in_stack_00000098;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000098 ^ (ulonglong)&stack0x00000000);
}



int FUN_18076f100(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  bVar6 = false;
  if ((param_4 != '\0') && (lVar2 != 0)) {
    func_0x000180743c20(lVar2,5);
    bVar6 = true;
  }
  bVar5 = false;
  if (param_3 < param_2) {
    iVar7 = 0x1f;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x238);
    plVar8 = (longlong *)*plVar1;
    if (plVar8 != plVar1) {
      do {
        plVar3 = (longlong *)*plVar8;
        if ((param_2 <= (ulonglong)plVar8[3]) && ((ulonglong)plVar8[3] <= param_3)) {
          *(longlong **)plVar8[1] = plVar3;
          *(longlong *)(*plVar8 + 8) = plVar8[1];
          plVar8[1] = (longlong)plVar8;
          *plVar8 = (longlong)plVar8;
          plVar8[3] = -1;
          plVar8[2] = 0;
          lVar4 = *(longlong *)(param_1 + 0xa8);
          plVar8[1] = *(longlong *)(lVar4 + 0x10818);
          *plVar8 = lVar4 + 0x10810;
          *(longlong **)(lVar4 + 0x10818) = plVar8;
          bVar5 = true;
          *(longlong **)plVar8[1] = plVar8;
        }
        plVar8 = plVar3;
      } while (plVar3 != plVar1);
      if (bVar5) {
        *(int32_t *)(param_1 + 0x298) = 1;
      }
    }
    if (((param_2 == 0) && (param_3 == 0xfffffffffff00000)) && (*(longlong *)(param_1 + 0x218) != 0)
       ) {
      if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
        *(int8_t *)(param_1 + 0x2a8) = 1;
        *(int32_t *)(param_1 + 0x2a0) = 0x3f800000;
      }
      else {
        func_0x000180765a40(*(uint64_t *)(param_1 + 0x218));
        *(int32_t *)(param_1 + 0x2a0) = 0x3f800000;
      }
    }
    else if ((bVar5) && (iVar7 = func_0x00018076f610(param_1), iVar7 != 0)) goto LAB_18076f24a;
    *(int32_t *)(param_1 + 0x2a4) = 0;
    iVar7 = 0;
  }
LAB_18076f24a:
  if ((bVar6) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,5);
  }
  return iVar7;
}



int FUN_18076f111(longlong param_1,ulonglong param_2,uint64_t param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  
  bVar5 = false;
  if ((param_4 != '\0') && (unaff_RBP != 0)) {
    func_0x000180743c20();
    bVar5 = true;
  }
  bVar4 = false;
  if (unaff_RDI < param_2) {
    iVar6 = 0x1f;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x238);
    plVar7 = (longlong *)*plVar1;
    if (plVar7 != plVar1) {
      do {
        plVar2 = (longlong *)*plVar7;
        if ((param_2 <= (ulonglong)plVar7[3]) && ((ulonglong)plVar7[3] <= unaff_RDI)) {
          *(longlong **)plVar7[1] = plVar2;
          *(longlong *)(*plVar7 + 8) = plVar7[1];
          plVar7[1] = (longlong)plVar7;
          *plVar7 = (longlong)plVar7;
          plVar7[3] = -1;
          plVar7[2] = 0;
          lVar3 = *(longlong *)(param_1 + 0xa8);
          plVar7[1] = *(longlong *)(lVar3 + 0x10818);
          *plVar7 = lVar3 + 0x10810;
          *(longlong **)(lVar3 + 0x10818) = plVar7;
          bVar4 = true;
          *(longlong **)plVar7[1] = plVar7;
        }
        plVar7 = plVar2;
      } while (plVar2 != plVar1);
      if (bVar4) {
        *(int32_t *)(param_1 + 0x298) = 1;
      }
    }
    if (((param_2 == 0) && (unaff_RDI == 0xfffffffffff00000)) &&
       (*(longlong *)(param_1 + 0x218) != 0)) {
      if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
        *(int8_t *)(param_1 + 0x2a8) = 1;
        *(int32_t *)(param_1 + 0x2a0) = 0x3f800000;
      }
      else {
        func_0x000180765a40(*(uint64_t *)(param_1 + 0x218));
        *(int32_t *)(param_1 + 0x2a0) = 0x3f800000;
      }
    }
    else if ((bVar4) && (iVar6 = func_0x00018076f610(param_1), iVar6 != 0)) goto LAB_18076f24a;
    *(int32_t *)(param_1 + 0x2a4) = 0;
    iVar6 = 0;
  }
LAB_18076f24a:
  if ((bVar5) && (unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar6;
}



int32_t FUN_18076f263(void)

{
  longlong unaff_RBP;
  int32_t unaff_EDI;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}





