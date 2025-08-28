#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part201.c - 8 个函数

// 函数: void FUN_1807863b0(longlong param_1)
void FUN_1807863b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  int32_t auStackX_8 [2];
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x10f88);
  lVar1 = *(longlong *)(param_1 + 0x48) + 0x6e0;
  FUN_180768970(auStackX_8);
  FUN_180772cd0(lVar1);
  puVar6 = (uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x6c0);
  for (puVar4 = (uint64_t *)*puVar6; puVar4 != puVar6; puVar4 = (uint64_t *)*puVar4) {
    if (*(char *)((longlong)puVar4 + 0x5a) != '\0') {
      FUN_1807ef140(puVar4[2],plVar3,0,1);
      *(int8_t *)((longlong)puVar4 + 0x5a) = 0;
    }
  }
  if ((*(int *)((longlong)plVar3 + 0x24) + -1) * *(int *)((longlong)plVar3 + 0xc) <
      (*(int *)((longlong)plVar3 + 0x2c) - (int)plVar3[5]) * (int)plVar3[3]) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    if ((*(code **)(lVar5 + 0x11838) != (code *)0x0) && ((*(uint *)(lVar5 + 0x11840) & 0x2000) != 0)
       ) {
      (**(code **)(lVar5 + 0x11838))(lVar5,0x2000,0,0,*(uint64_t *)(lVar5 + 0x11670));
    }
  }
  else {
    iVar2 = (int)plVar3[1];
    do {
      FUN_180787080(param_1,(longlong)(*(int *)((longlong)plVar3 + 0x1c) * (int)plVar3[3]) + *plVar3
                    ,iVar2);
      iVar2 = (int)plVar3[1];
      *(int *)((longlong)plVar3 + 0x2c) = *(int *)((longlong)plVar3 + 0x2c) + iVar2;
      *(int *)((longlong)plVar3 + 0x1c) =
           (*(int *)((longlong)plVar3 + 0x1c) + iVar2) % (int)plVar3[2];
    } while ((*(int *)((longlong)plVar3 + 0x2c) - (int)plVar3[5]) * (int)plVar3[3] <=
             (*(int *)((longlong)plVar3 + 0x24) + -1) * *(int *)((longlong)plVar3 + 0xc));
  }
  FUN_180772cf0(lVar1,0x5f);
  func_0x0001807688a0(auStackX_8[0]);
  return;
}



uint64_t FUN_1807864f0(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x11418);
  plVar3 = (longlong *)(lVar1 + 0x160);
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != plVar3) goto LAB_180786530;
  if (*(longlong **)(lVar1 + 0x168) != plVar3) {
    for (; plVar2 != plVar3; plVar2 = (longlong *)*plVar2) {
LAB_180786530:
      if (*(code **)(*(longlong *)plVar2[2] + 0xd0) != (code *)0x0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_18 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + 0x116b8);
        lStack_20 = *(longlong *)(param_1 + 0x48) + 0x11848;
        (**(code **)(*(longlong *)plVar2[2] + 0xd0))(&uStack_48,param_2);
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807865b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x6c0);
  plVar1 = (longlong *)*plVar2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0x1e;
    }
    if (*(int *)((longlong)plVar1 + 0x24) == param_2) break;
    plVar1 = (longlong *)*plVar1;
  }
  plVar2 = plVar1 + 5;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 != 0) {
    return 0;
  }
  *(longlong *)plVar1[1] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  if ((*(code **)(param_1 + 0x3b0) != (code *)0x0) &&
     (uVar3 = (**(code **)(param_1 + 0x3b0))(param_1 + 8,*(int32_t *)((longlong)plVar1 + 0x24)),
     (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar3 = FUN_18075d600(plVar1[2],1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = (**(code **)(*(longlong *)plVar1[2] + 0x10))();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (plVar1[7] == 0) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1,&UNK_18095ac80,0x5da,1);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1[7],&UNK_18095ac80,0x5d7,1);
}



int FUN_1807866d0(longlong param_1,int param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int32_t auStackX_8 [2];
  uint in_stack_ffffffffffffffa0;
  ulonglong uStack_38;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  puVar3 = *(uint64_t **)(lVar2 + 0x6c0);
  while( true ) {
    if (puVar3 == (uint64_t *)(lVar2 + 0x6c0)) {
      return 0x1e;
    }
    if (*(int *)((longlong)puVar3 + 0x24) == param_2) break;
    puVar3 = (uint64_t *)*puVar3;
  }
  if (puVar3 == (uint64_t *)0x0) {
    return 0x1e;
  }
  lVar6 = 0;
  iVar1 = *(int *)((longlong)puVar3 + 0x2c);
  uStack_38 = 0;
  uVar7 = param_3;
  if (iVar1 != 5) {
    lVar6 = FUN_180741e10(lVar2 + 0x10bd0,*(int *)(puVar3 + 6) * param_4 * 4 + 0x20,&system_buffer_ptr,0
                          ,0,in_stack_ffffffffffffffa0 & 0xffffff00,1);
    uVar7 = lVar6 + 0x1fU & 0xffffffffffffffe0;
    uStack_38 = uVar7;
    if (uVar7 == 0) {
      iVar5 = 0x26;
      goto LAB_180786862;
    }
  }
  plVar4 = (longlong *)puVar3[10];
  if (plVar4 == (longlong *)0x0) {
    if (puVar3[7] != 0) {
                    // WARNING: Subroutine does not return
      memcpy(param_3,puVar3[7],*(int *)(puVar3 + 6) * param_4 * 4);
    }
    iVar5 = FUN_1807ef110(puVar3[2],uVar7,param_4,*(int32_t *)(puVar3 + 6));
    if (iVar5 != 0) goto LAB_180786862;
  }
  else {
    auStackX_8[0] = *(int32_t *)(puVar3 + 6);
    iVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,uVar7,auStackX_8,param_4);
    if (iVar5 != 0) goto LAB_180786862;
    if (puVar3[7] != 0) {
      puVar3[8] = 0;
    }
  }
  if (iVar1 != 5) {
    iVar5 = FUN_1807edf30(param_3,uVar7,*(int32_t *)((longlong)puVar3 + 0x2c),5,
                          *(int *)(puVar3 + 6) * param_4,1,1,0x3f800000,1);
    if (iVar5 != 0) goto LAB_180786862;
  }
  iVar5 = 0;
LAB_180786862:
  if (uStack_38 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(lVar2 + 0x10bd0,lVar6,&system_buffer_ptr,0,1);
  }
  return iVar5;
}



int FUN_180786716(int32_t param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  int32_t extraout_XMM0_Da;
  ulonglong uStack0000000000000050;
  int32_t in_stack_00000090;
  
  lVar4 = 0;
  iVar1 = *(int *)(unaff_RBX + 0x2c);
  uStack0000000000000050 = 0;
  if (iVar1 != 5) {
    lVar4 = FUN_180741e10(unaff_R13 + 0x10bd0,*(int *)(unaff_RBX + 0x30) * unaff_EBP * 4 + 0x20,
                          &system_buffer_ptr,0,0);
    unaff_R15 = lVar4 + 0x1fU & 0xffffffffffffffe0;
    param_1 = extraout_XMM0_Da;
    uStack0000000000000050 = unaff_R15;
    if (unaff_R15 == 0) {
      iVar3 = 0x26;
      goto LAB_180786862;
    }
  }
  plVar2 = *(longlong **)(unaff_RBX + 0x50);
  if (plVar2 == (longlong *)0x0) {
    if (*(longlong *)(unaff_RBX + 0x38) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(param_1,*(longlong *)(unaff_RBX + 0x38),*(int *)(unaff_RBX + 0x30) * unaff_EBP * 4);
    }
    iVar3 = FUN_1807ef110(*(uint64_t *)(unaff_RBX + 0x10),unaff_R15,unaff_EBP,
                          *(int32_t *)(unaff_RBX + 0x30));
    if (iVar3 != 0) goto LAB_180786862;
  }
  else {
    in_stack_00000090 = *(int32_t *)(unaff_RBX + 0x30);
    iVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,unaff_R15,&stack0x00000090,unaff_EBP);
    if (iVar3 != 0) goto LAB_180786862;
    if (*(longlong *)(unaff_RBX + 0x38) != 0) {
      *(uint64_t *)(unaff_RBX + 0x40) = 0;
    }
  }
  if (iVar1 != 5) {
    iVar3 = FUN_1807edf30(0x3f800000,unaff_R15,*(int32_t *)(unaff_RBX + 0x2c),5,
                          *(int *)(unaff_RBX + 0x30) * unaff_EBP);
    if (iVar3 != 0) goto LAB_180786862;
  }
  iVar3 = 0;
LAB_180786862:
  if (uStack0000000000000050 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(unaff_R13 + 0x10bd0,lVar4,&system_buffer_ptr,0,1);
  }
  return iVar3;
}





// 函数: void FUN_180786877(void)
void FUN_180786877(void)

{
  longlong unaff_R13;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(unaff_R13 + 0x10bd0);
}





// 函数: void FUN_1807868e0(longlong param_1,uint64_t param_2,uint64_t param_3,int *param_4,int *param_5)
void FUN_1807868e0(longlong param_1,uint64_t param_2,uint64_t param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lStackX_8;
  
  lStackX_8 = 0;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x58))(param_1,&lStackX_8);
  if (iVar1 == 0) {
    if (*(longlong *)(lStackX_8 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(param_2,(ulonglong)*(uint *)(lStackX_8 + 0x44) + *(longlong *)(lStackX_8 + 0x38),
             *param_4 * *param_5 * 4);
    }
    FUN_1807ef110(*(uint64_t *)(lStackX_8 + 0x10),param_2,*param_4,
                  *(int32_t *)(lStackX_8 + 0x30));
  }
  return;
}





// 函数: void FUN_180786909(void)
void FUN_180786909(void)

{
  longlong in_stack_00000030;
  
  if (*(longlong *)(in_stack_00000030 + 0x38) == 0) {
    FUN_1807ef110(*(uint64_t *)(in_stack_00000030 + 0x10));
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_18078694f(void)
void FUN_18078694f(void)

{
  longlong unaff_RDI;
  
  FUN_1807ef110(*(uint64_t *)(unaff_RDI + 0x10));
  return;
}





// 函数: void FUN_18078696b(void)
void FUN_18078696b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807869c0(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  
  *(int *)((longlong)param_1 + 0x24) = param_3;
  uVar3 = 0;
  *(int *)(param_1 + 3) = param_4;
  *(int *)(param_1 + 1) = param_2;
  *(uint64_t *)((longlong)param_1 + 0x1c) = 0;
  *(int *)((longlong)param_1 + 0xc) = param_2 * param_4;
  iVar1 = (param_5 + param_3) * param_2;
  iVar4 = param_2 * param_4 * (param_5 + param_3);
  *(int32_t *)(param_1 + 5) = 0;
  *(int *)(param_1 + 2) = iVar1;
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  *(int *)((longlong)param_1 + 0x2c) = iVar1;
  lVar2 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar4,&UNK_18095ac80,0x75b,0);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  return uVar3;
}



int FUN_180786a50(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int aiStackX_8 [2];
  ulonglong uStackX_10;
  int32_t auStackX_20 [2];
  uint in_stack_ffffffffffffff90;
  ulonglong uStack_48;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  aiStackX_8[0] = *(int *)(*(longlong *)(lVar2 + 0x670) + 0x58);
  if ((*(int *)(param_1 + 0x50) == 5) && ((*(byte *)(lVar2 + 0x78) & 8) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar2 = *(longlong *)(lVar2 + 0x10f88);
  uStackX_10 = param_2;
  FUN_180768970(auStackX_20);
  if (lVar2 == 0) {
    FUN_180772cd0(*(longlong *)(param_1 + 0x48) + 0x6e0);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar6 = 0;
  uStack_48 = 0;
  uVar9 = param_2;
  if (bVar4) {
    lVar6 = FUN_180741e10(lVar3 + 0x10bd0,aiStackX_8[0] * param_3 * 4 + 0x20,&system_buffer_ptr,0,0,
                          in_stack_ffffffffffffff90 & 0xffffff00,1);
    uVar9 = lVar6 + 0x1fU & 0xffffffffffffffe0;
    uStack_48 = uVar9;
    if (uVar9 == 0) {
      iVar5 = 0x26;
      goto LAB_180786c1b;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar7 + 0x10f80) == 0) {
    iVar5 = FUN_180786cb0(param_1,uVar9,param_3);
  }
  else {
    plVar1 = (longlong *)(lVar7 + 0x6c0);
    plVar8 = (longlong *)*plVar1;
    if (plVar8 != plVar1) {
      do {
        if (((char)plVar8[0xb] != '\0') && (plVar8[10] != 0)) {
          func_0x0001807e5800(plVar8[10],*(uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x10f80));
        }
        *(int8_t *)(plVar8 + 0xb) = 0;
        plVar8 = (longlong *)*plVar8;
      } while (plVar8 != plVar1);
      lVar7 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = (**(code **)(**(longlong **)(lVar7 + 0x10f80) + 0x48))
                      (*(longlong **)(lVar7 + 0x10f80),uVar9,aiStackX_8,param_3);
    param_2 = uStackX_10;
  }
  if ((iVar5 == 0) &&
     ((!bVar4 ||
      (iVar5 = FUN_1807edf30(param_2,uVar9,*(int32_t *)(param_1 + 0x50),5,aiStackX_8[0] * param_3
                             ,1,1,0x3f800000,1), iVar5 == 0)))) {
    if (lVar2 == 0) {
      FUN_180772cf0(*(longlong *)(param_1 + 0x48) + 0x6e0,0x5f);
    }
    iVar5 = 0;
  }
LAB_180786c1b:
  if (uStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(lVar3 + 0x10bd0,lVar6,&system_buffer_ptr,0,1);
  }
  func_0x0001807688a0(auStackX_20[0]);
  return iVar5;
}



int FUN_180786cb0(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  ulonglong uStackX_8;
  longlong lStackX_20;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar2 + 0x6d4);
  uStackX_8 = 0;
  lStackX_20 = 0;
  uVar8 = param_2;
  if (*(longlong *)(lVar2 + 0x10f78) != 0) {
    lStackX_20 = FUN_180741e10(lVar2 + 0x10bd0,iVar4 * param_3 * 4 + 0x20,&system_buffer_ptr,0,0,0,1);
    uVar8 = lStackX_20 + 0x1fU & 0xffffffffffffffe0;
    uStackX_8 = uVar8;
    if (uVar8 == 0) {
      iVar6 = 0x26;
      goto LAB_180786fc2;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar7 + 0x10f88) != 0) {
    plVar1 = (longlong *)(lVar7 + 0x6c0);
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar1) {
      do {
        if (*(char *)((longlong)plVar5 + 0x59) != '\0') {
          iVar6 = FUN_1807ef140(plVar5[2],*(uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x10f88),1
                                ,0);
          if (iVar6 != 0) goto LAB_180786fc2;
          *(int8_t *)((longlong)plVar5 + 0x59) = 0;
        }
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != plVar1);
      lVar7 = *(longlong *)(param_1 + 0x48);
    }
    plVar1 = *(longlong **)(lVar7 + 0x10f88);
    param_3 = (int)plVar1[3] * param_3;
    if (*(int *)((longlong)plVar1 + 0x14) < param_3) {
                    // WARNING: Subroutine does not return
      memset(uVar8,0,(longlong)param_3);
    }
    if ((*(int *)((longlong)plVar1 + 0x2c) - (int)plVar1[5]) * (int)plVar1[3] < param_3) {
                    // WARNING: Subroutine does not return
      memset(uVar8,0,(longlong)param_3);
    }
    iVar4 = (int)plVar1[4] * (int)plVar1[3];
    if (*(int *)((longlong)plVar1 + 0x14) < iVar4 + param_3) {
                    // WARNING: Subroutine does not return
      memcpy(uVar8,(longlong)iVar4 + *plVar1,(longlong)(*(int *)((longlong)plVar1 + 0x14) - iVar4));
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar8,(longlong)iVar4 + *plVar1,(longlong)param_3);
  }
  iVar6 = FUN_180787080(param_1,uVar8,param_3);
  if ((iVar6 == 0) && (iVar6 = FUN_1807872c0(param_1,uVar8,iVar4,param_3,param_3), iVar6 == 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10f88) != 0) {
      puVar9 = (uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x6c0);
      for (puVar3 = (uint64_t *)*puVar9; puVar3 != puVar9; puVar3 = (uint64_t *)*puVar3) {
        iVar4 = *(int *)(puVar3 + 6) * param_3 * 4;
        if (*(char *)((longlong)puVar3 + 0x5a) != '\0') {
                    // WARNING: Subroutine does not return
          memset((ulonglong)*(uint *)(puVar3 + 8) + puVar3[7],0,iVar4);
        }
        iVar6 = FUN_1807ef110(puVar3[2],(ulonglong)*(uint *)(puVar3 + 8) + puVar3[7],param_3);
        if (iVar6 != 0) goto LAB_180786fc2;
        *(int *)(puVar3 + 8) = *(int *)(puVar3 + 8) + iVar4;
      }
      if ((*(longlong *)(param_1 + 0x198) != 0) && (iVar6 = FUN_180768910(), iVar6 != 0))
      goto LAB_180786fc2;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x10f78);
    if ((plVar1 == (longlong *)0x0) ||
       (iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar8,param_2,param_3), iVar6 == 0)) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x670);
      iVar6 = func_0x0001807eed30(param_2,param_3,*(int32_t *)(lVar7 + 0x58),
                                  *(int32_t *)(lVar7 + 0x5c));
    }
  }
LAB_180786fc2:
  if (uStackX_8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(lVar2 + 0x10bd0,lStackX_20,&system_buffer_ptr,0,1);
  }
  return iVar6;
}



int FUN_180786cc3(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong in_RAX;
  int iVar3;
  uint64_t unaff_RBX;
  longlong *plVar4;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar5;
  longlong lVar6;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t *puVar7;
  longlong lStack0000000000000040;
  ulonglong uStack0000000000000090;
  uint64_t in_stack_00000098;
  longlong lStack00000000000000a8;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  iVar3 = *(int *)(in_RAX + 0x6d4);
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  uStack0000000000000090 = 0;
  lStack00000000000000a8 = 0;
  lStack0000000000000040 = in_RAX;
  if (*(longlong *)(in_RAX + 0x10f78) != 0) {
    *(int8_t *)(in_R11 + -0x60) = 0;
    *(int32_t *)(in_R11 + -0x68) = 0;
    lStack00000000000000a8 =
         FUN_180741e10(in_RAX + 0x10bd0,iVar3 * param_3 * 4 + 0x20,&system_buffer_ptr,0);
    param_2 = lStack00000000000000a8 + 0x1fU & 0xffffffffffffffe0;
    uStack0000000000000090 = param_2;
    if (param_2 == 0) {
      iVar5 = 0x26;
      goto LAB_180786fc2;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar6 + 0x10f88) != 0) {
    plVar1 = (longlong *)(lVar6 + 0x6c0);
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != plVar1) {
      do {
        if (*(char *)((longlong)plVar4 + 0x59) != '\0') {
          iVar5 = FUN_1807ef140(plVar4[2],*(uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x10f88),1
                                ,0);
          if (iVar5 != 0) goto LAB_180786fc2;
          *(int8_t *)((longlong)plVar4 + 0x59) = 0;
        }
        plVar4 = (longlong *)*plVar4;
      } while (plVar4 != plVar1);
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    plVar1 = *(longlong **)(lVar6 + 0x10f88);
    param_3 = (int)plVar1[3] * param_3;
    if (*(int *)((longlong)plVar1 + 0x14) < param_3) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,(longlong)param_3);
    }
    if ((*(int *)((longlong)plVar1 + 0x2c) - (int)plVar1[5]) * (int)plVar1[3] < param_3) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,(longlong)param_3);
    }
    iVar3 = (int)plVar1[4] * (int)plVar1[3];
    if (*(int *)((longlong)plVar1 + 0x14) < iVar3 + param_3) {
                    // WARNING: Subroutine does not return
      memcpy(param_2,(longlong)iVar3 + *plVar1,(longlong)(*(int *)((longlong)plVar1 + 0x14) - iVar3)
            );
    }
                    // WARNING: Subroutine does not return
    memcpy(param_2,(longlong)iVar3 + *plVar1,(longlong)param_3);
  }
  iVar5 = FUN_180787080(param_1,param_2,param_3);
  if ((iVar5 == 0) && (iVar5 = FUN_1807872c0(param_1,param_2,iVar3,param_3,param_3), iVar5 == 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10f88) != 0) {
      puVar7 = (uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x6c0);
      for (puVar2 = (uint64_t *)*puVar7; puVar2 != puVar7; puVar2 = (uint64_t *)*puVar2) {
        iVar3 = *(int *)(puVar2 + 6) * param_3 * 4;
        if (*(char *)((longlong)puVar2 + 0x5a) != '\0') {
                    // WARNING: Subroutine does not return
          memset((ulonglong)*(uint *)(puVar2 + 8) + puVar2[7],0,iVar3);
        }
        iVar5 = FUN_1807ef110(puVar2[2],(ulonglong)*(uint *)(puVar2 + 8) + puVar2[7],param_3);
        if (iVar5 != 0) goto LAB_180786fc2;
        *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + iVar3;
      }
      if ((*(longlong *)(param_1 + 0x198) != 0) && (iVar5 = FUN_180768910(), iVar5 != 0))
      goto LAB_180786fc2;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x10f78);
    if ((plVar1 == (longlong *)0x0) ||
       (iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,in_stack_00000098,param_3), iVar5 == 0)
       ) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x670);
      iVar5 = func_0x0001807eed30(in_stack_00000098,param_3,*(int32_t *)(lVar6 + 0x58),
                                  *(int32_t *)(lVar6 + 0x5c));
    }
  }
LAB_180786fc2:
  if (uStack0000000000000090 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(lStack0000000000000040 + 0x10bd0,lStack00000000000000a8,&system_buffer_ptr,0,1);
  }
  return iVar5;
}





// 函数: void FUN_180786ff3(void)
void FUN_180786ff3(void)

{
  longlong in_stack_00000040;
  uint64_t in_stack_000000a8;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(in_stack_00000040 + 0x10bd0,in_stack_000000a8,&system_buffer_ptr,0,1);
}





// 函数: void FUN_180787030(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_180787030(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)

{
  int iVar1;
  uint64_t uStackX_8;
  
  uStackX_8 = 0;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x58))(param_1,&uStackX_8);
  if (iVar1 == 0) {
    FUN_180786cb0(uStackX_8,param_2,*param_4);
  }
  return;
}



ulonglong FUN_180787080(longlong param_1,uint64_t param_2,int param_3)

{
  int32_t uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  int aiStackX_18 [2];
  longlong lStack_68;
  int32_t uStack_60;
  char cStack_5c;
  longlong lStack_58;
  int32_t uStack_50;
  char cStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  ulonglong uStack_38;
  int32_t uStack_30;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar1 = *(int32_t *)(lVar3 + 0x1193c);
  iVar2 = *(int *)(lVar3 + 0x6d4);
  func_0x000180746360(lVar3,aiStackX_18,0);
  if (param_3 != aiStackX_18[0]) {
    return 0x1c;
  }
  lStack_68 = *(longlong *)(param_1 + 0x48);
  cStack_4c = '\0';
  uStack_50 = 0;
  cStack_5c = '\0';
  uStack_60 = 3;
  lStack_58 = lStack_68;
  uVar6 = FUN_180787e70(param_1,aiStackX_18[0],&lStack_58,&lStack_68);
  lVar4 = lStack_58;
  lVar3 = lStack_68;
  uVar8 = uVar6 & 0xffffffff;
  if ((int)uVar6 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_30 = 0xffffffff;
    uStack_38 = uVar6;
    uVar5 = FUN_18075f4c0(*(uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x107b8),aiStackX_18[0],
                          uVar1,iVar2,&uStack_48);
    uVar8 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      uVar7 = func_0x00018075e4e0(&uStack_48);
                    // WARNING: Subroutine does not return
      memcpy(param_2,uVar7,(ulonglong)(uint)(iVar2 * aiStackX_18[0]) << 2);
    }
    func_0x000180759110(&uStack_48);
  }
  if ((cStack_5c != '\0') && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar3,uStack_60);
  }
  if ((cStack_4c != '\0') && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar4,uStack_50);
  }
  return uVar8;
}



ulonglong FUN_1807870ec(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R15D;
  
  *(int8_t *)(unaff_RBP + -0x2c) = 0;
  *(int32_t *)(unaff_RBP + -0x30) = 0;
  *(int8_t *)(unaff_RBP + -0x3c) = 0;
  *(int32_t *)(unaff_RBP + -0x40) = 3;
  uVar6 = FUN_180787e70();
  lVar2 = *(longlong *)(unaff_RBP + -0x38);
  uVar8 = uVar6 & 0xffffffff;
  lVar3 = *(longlong *)(unaff_RBP + -0x48);
  if ((int)uVar6 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x48);
    *(ulonglong *)(unaff_RBP + -0x18) = uVar6;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(uint64_t *)(unaff_RBP + -0x20) = 0;
    *(int32_t *)(unaff_RBP + -0x10) = 0xffffffff;
    uVar5 = FUN_18075f4c0(*(uint64_t *)(lVar4 + 0x107b8),*(int32_t *)(unaff_RBP + 0x38),
                          *(int32_t *)(unaff_RBP + 0x28),unaff_R15D,unaff_RBP + -0x28);
    uVar8 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      iVar1 = *(int *)(unaff_RBP + 0x38);
      uVar7 = func_0x00018075e4e0(unaff_RBP + -0x28);
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(unaff_RBP + 0x30),uVar7,(ulonglong)(uint)(unaff_R15D * iVar1) << 2);
    }
    func_0x000180759110(unaff_RBP + -0x28);
  }
  if ((*(char *)(unaff_RBP + -0x3c) != '\0') && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar3,*(int32_t *)(unaff_RBP + -0x40));
  }
  if ((*(char *)(unaff_RBP + -0x2c) != '\0') && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,*(int32_t *)(unaff_RBP + -0x30));
  }
  return uVar8;
}



int32_t FUN_180787277(void)

{
  int32_t unaff_EBX;
  longlong unaff_RSI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EBX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



