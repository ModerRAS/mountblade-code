#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part410.c - 17 个函数

// 函数: void FUN_1808940f0(longlong param_1,longlong param_2)
void FUN_1808940f0(longlong param_1,longlong param_2)

{
  int8_t auStack_68 [8];
  longlong lStack_60;
  longlong lStack_50;
  longlong lStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lStack_60 = param_2 + 0x60;
  lStack_50 = param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x10) * 8;
  lStack_40 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t FUN_180894300(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  uint uStackX_8;
  int32_t uStackX_c;
  
  uStackX_8 = *(uint *)(param_1 + 0x18);
  if ((uStackX_8 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&uStackX_8);
  if ((int)uVar1 == 0) {
    *(int32_t *)(CONCAT44(uStackX_c,uStackX_8) + 0x18) = *(int32_t *)(param_1 + 0x18);
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return uVar1;
}



int FUN_180894380(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00018074b800(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_2,param_3 - iVar1,*(int32_t *)(param_1 + 0x18));
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b970(iVar1 + param_2,param_3 - iVar1,param_1 + 0x20,
                        *(int32_t *)(param_1 + 0x18));
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bb00(iVar1 + param_2,param_3 - iVar1,
                        param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x18) * 4);
  return iVar2 + iVar1;
}



int FUN_180894460(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00018074b800(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_2,param_3 - iVar1,*(int32_t *)(param_1 + 0x18));
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18088ed70(iVar1 + param_2,param_3 - iVar1,param_1 + 0x20,
                        *(int32_t *)(param_1 + 0x18));
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bb00(iVar1 + param_2,param_3 - iVar1,
                        param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x18) * 8);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074be90(iVar1 + param_2,param_3 - iVar1,*(int8_t *)(param_1 + 0x1c));
  return iVar2 + iVar1;
}



int FUN_180894570(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00018074b7d0(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18088ed70(iVar1 + param_2,param_3 - iVar1,param_1 + 0x18,
                        *(int32_t *)(param_1 + 0x10));
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bb00(iVar1 + param_2,param_3 - iVar1,
                        param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x10) * 8);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074be90(iVar1 + param_2,param_3 - iVar1,*(int8_t *)(param_1 + 0x14));
  return iVar2 + iVar1;
}



int FUN_180894650(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18074b880(param_2,param_3,&UNK_180986298);
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_2,param_3 - iVar1,(int)param_1[3] * 8 + 0x20);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = (**(code **)(*param_1 + 8))(param_1,iVar1 + param_2,param_3 - iVar1);
  return iVar2 + iVar1;
}



int FUN_180894700(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18074b880(param_2,param_3,&UNK_180984010);
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_2,param_3 - iVar1,(int)param_1[3] * 0xc + 0x20);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = (**(code **)(*param_1 + 8))(param_1,iVar1 + param_2,param_3 - iVar1);
  return iVar2 + iVar1;
}



int FUN_1808947b0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18074b880(param_2,param_3,&UNK_180982240);
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_2,param_3 - iVar1,((int)param_1[2] + 2) * 0xc);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_2,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = (**(code **)(*param_1 + 8))(param_1,iVar1 + param_2,param_3 - iVar1);
  return iVar2 + iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180894860(longlong param_1,int32_t *param_2,longlong *param_3)
void FUN_180894860(longlong param_1,int32_t *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  int32_t uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  longlong lStack_48;
  int8_t auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
    uStack_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    lVar3 = (**(code **)(*plVar1 + 0x150))(plVar1,&uStack_58,1);
    if (lVar3 == 0) {
      uStack_80 = uStack_50 >> 0x18;
      uStack_60 = uStack_4c >> 0x18;
      uStack_a0 = uStack_54 >> 0x10;
      uStack_68 = uStack_4c >> 0x10 & 0xff;
      uStack_70 = uStack_4c >> 8 & 0xff;
      uStack_78 = uStack_4c & 0xff;
      uStack_88 = uStack_50 >> 0x10 & 0xff;
      uStack_90 = uStack_50 >> 8 & 0xff;
      uStack_98 = uStack_50 & 0xff;
      uStack_a8 = uStack_54 & 0xffff;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_40,0x27,&UNK_180958180,uStack_58);
    }
    if (((*(byte *)(lVar3 + 0xc4) & 1) != 0) &&
       ((lStack_48 = *(longlong *)(lVar3 + 0x68), lStack_48 != 0 ||
        (iVar2 = FUN_18088c7c0(param_1,lVar3,&lStack_48), iVar2 == 0)))) {
      *param_3 = lStack_48;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_18089492c(void)
void FUN_18089492c(void)

{
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}





// 函数: void FUN_18089494e(void)
void FUN_18089494e(void)

{
  ulonglong in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808949c0(longlong param_1,int32_t *param_2,longlong *param_3)
void FUN_1808949c0(longlong param_1,int32_t *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_50;
  int32_t uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int8_t auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
    uStack_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,&uStack_48,1);
    if (lVar3 == 0) {
      uStack_70 = uStack_40 >> 0x18;
      uStack_50 = uStack_3c >> 0x18;
      uStack_90 = uStack_44 >> 0x10;
      uStack_58 = uStack_3c >> 0x10 & 0xff;
      uStack_60 = uStack_3c >> 8 & 0xff;
      uStack_68 = uStack_3c & 0xff;
      uStack_78 = uStack_40 >> 0x10 & 0xff;
      uStack_80 = uStack_40 >> 8 & 0xff;
      uStack_88 = uStack_40 & 0xff;
      uStack_98 = uStack_44 & 0xffff;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_38,0x27,&UNK_180958180,uStack_48);
    }
    if ((**(int **)(lVar3 + 0xd0) != 0) ||
       (iVar2 = FUN_18088c060(*(int32_t *)(param_1 + 0x18)), iVar2 == 0)) {
      *param_3 = lVar3;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_b8);
}





// 函数: void FUN_180894a07(ulonglong param_1)
void FUN_180894a07(ulonglong param_1)

{
  int iVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uStack0000000000000070;
  ulonglong in_stack_000000a8;
  
  uStack0000000000000070 = param_1;
  lVar2 = (**(code **)(in_RAX + 0x288))();
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(&stack0x00000080,0x27,&UNK_180958180,uStack0000000000000070 & 0xffffffff,
                  uStack0000000000000070._4_2_);
  }
  if (**(int **)(lVar2 + 0xd0) == 0) {
    iVar1 = FUN_18088c060(*(int32_t *)(unaff_RDI + 0x18));
    if (iVar1 != 0) goto LAB_180894aca;
  }
  *unaff_RSI = lVar2;
LAB_180894aca:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a8 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180894ad2(void)
void FUN_180894ad2(void)

{
  ulonglong in_stack_000000a8;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a8 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180894b00(longlong param_1,int32_t *param_2,longlong *param_3)
void FUN_180894b00(longlong param_1,int32_t *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  int32_t uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  longlong lStack_48;
  int8_t auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
    uStack_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    lVar3 = (**(code **)(*plVar1 + 0x2f8))(plVar1,&uStack_58,1);
    if (lVar3 == 0) {
      uStack_80 = uStack_50 >> 0x18;
      uStack_60 = uStack_4c >> 0x18;
      uStack_a0 = uStack_54 >> 0x10;
      uStack_68 = uStack_4c >> 0x10 & 0xff;
      uStack_70 = uStack_4c >> 8 & 0xff;
      uStack_78 = uStack_4c & 0xff;
      uStack_88 = uStack_50 >> 0x10 & 0xff;
      uStack_90 = uStack_50 >> 8 & 0xff;
      uStack_98 = uStack_50 & 0xff;
      uStack_a8 = uStack_54 & 0xffff;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_40,0x27,&UNK_180958180,uStack_58);
    }
    lStack_48 = *(longlong *)(lVar3 + 0x48);
    if ((lStack_48 != 0) || (iVar2 = FUN_18088ca20(param_1,lVar3,&lStack_48), iVar2 == 0)) {
      *param_3 = lStack_48;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_180894bcc(void)
void FUN_180894bcc(void)

{
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}





// 函数: void FUN_180894bf5(void)
void FUN_180894bf5(void)

{
  int iVar1;
  longlong in_RAX;
  longlong *unaff_RDI;
  longlong lStack0000000000000080;
  ulonglong in_stack_000000b0;
  
  lStack0000000000000080 = *(longlong *)(in_RAX + 0x48);
  if ((lStack0000000000000080 != 0) || (iVar1 = FUN_18088ca20(), iVar1 == 0)) {
    *unaff_RDI = lStack0000000000000080;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180894c70(longlong param_1,uint64_t param_2)
void FUN_180894c70(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (((iVar1 == 0) && (iVar1 = FUN_18088ee20(param_2,param_1 + 0x18), iVar1 == 0)) &&
     (iVar1 = FUN_18088f530(param_2,param_1 + 0x20,*(int32_t *)(param_1 + 0x18)), iVar1 == 0)) {
    FUN_18088f5c0(param_2,param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x18) * 4);
  }
  return;
}





// 函数: void FUN_180894c94(void)
void FUN_180894c94(void)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20();
  if (iVar1 == 0) {
    iVar1 = FUN_18088f530();
    if (iVar1 == 0) {
      FUN_18088f5c0();
    }
  }
  return;
}





// 函数: void FUN_180894cd2(void)
void FUN_180894cd2(void)

{
  return;
}





// 函数: void FUN_180894ce0(longlong param_1,uint64_t param_2)
void FUN_180894ce0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if ((((iVar1 == 0) && (iVar1 = FUN_18088ee20(param_2,param_1 + 0x18), iVar1 == 0)) &&
      (iVar1 = FUN_18088f620(param_2,param_1 + 0x20,*(int32_t *)(param_1 + 0x18)), iVar1 == 0))
     && (iVar1 = FUN_18088f5c0(param_2,param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x18) * 8),
        iVar1 == 0)) {
    FUN_18088f470(param_2,param_1 + 0x1c);
  }
  return;
}





// 函数: void FUN_180894d04(void)
void FUN_180894d04(void)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20();
  if (iVar1 == 0) {
    iVar1 = FUN_18088f620();
    if (iVar1 == 0) {
      iVar1 = FUN_18088f5c0();
      if (iVar1 == 0) {
        FUN_18088f470();
      }
    }
  }
  return;
}





// 函数: void FUN_180894d52(void)
void FUN_180894d52(void)

{
  return;
}





// 函数: void FUN_180894d60(longlong param_1,uint64_t param_2)
void FUN_180894d60(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f620(param_2,param_1 + 0x18,*(int32_t *)(param_1 + 0x10));
    if (iVar1 == 0) {
      iVar1 = FUN_18088f5c0(param_2,param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x10) * 8);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x14);
      }
    }
  }
  return;
}



int32_t FUN_180894dd0(longlong param_1,uint64_t param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint64_t uStackX_20;
  uint64_t auStack_28 [2];
  
  if (param_4 == 0) {
    return 0x1f;
  }
  iVar5 = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  auStack_28[0] = 0;
  iVar3 = FUN_18088c740(auStack_28,param_1);
  if (iVar3 == 0) {
    uStackX_20 = 0;
    uVar6 = param_3 | 0x10000000;
    if ((uVar2 & 1) == 0) {
      uVar6 = param_3;
    }
    iVar3 = func_0x0001808757f0(param_1,param_2,uVar6,&uStackX_20);
    if ((iVar3 == 0) && (plVar1 = (longlong *)(param_4 + 8), plVar1 != (longlong *)0x0)) {
      plVar4 = (longlong *)*plVar1;
      if (plVar4 != plVar1) {
        do {
          plVar4 = (longlong *)*plVar4;
          iVar5 = iVar5 + 1;
        } while (plVar4 != plVar1);
        if (iVar5 != 0) goto LAB_180894ebf;
      }
      *(uint64_t *)(param_4 + 0x10) = *(uint64_t *)(param_1 + 0x58);
      *plVar1 = param_1 + 0x50;
      *(longlong **)(param_1 + 0x58) = plVar1;
      **(longlong **)(param_4 + 0x10) = (longlong)plVar1;
      func_0x0001808ded80(param_4,uStackX_20);
      FUN_180882c20(param_1,uStackX_20);
    }
  }
LAB_180894ebf:
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStack_28);
}



// WARNING: Removing unreachable block (ram,0x000180895f53)
// WARNING: Removing unreachable block (ram,0x000180895f67)
// WARNING: Removing unreachable block (ram,0x000180895fa1)
// WARNING: Removing unreachable block (ram,0x000180895fa9)
// WARNING: Removing unreachable block (ram,0x000180895fb1)
// WARNING: Removing unreachable block (ram,0x000180895fc0)
// WARNING: Removing unreachable block (ram,0x000180896027)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180894ef0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset(*param_1 + (longlong)iVar1 * 0xc,0,(ulonglong)(uint)-iVar1 * 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180894fb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  
  FUN_18088c620();
  FUN_180840270(param_1 + 0xd8);
  iVar2 = FUN_180744cc0(param_1 + 0x70);
  if ((iVar2 == 0) && (iVar2 = FUN_180895130(param_1 + 0x80), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x90) = 0xffffffff;
    *(int32_t *)(param_1 + 0x94) = 0;
  }
  FUN_180895130(param_1 + 0x80);
  FUN_180744cc0(param_1 + 0x70);
  iVar2 = FUN_180744cc0(param_1 + 0x28);
  if ((iVar2 == 0) && (iVar2 = FUN_180895070(param_1 + 0x38), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x48) = 0xffffffff;
    *(int32_t *)(param_1 + 0x4c) = 0;
  }
  FUN_180895070(param_1 + 0x38);
  FUN_180744cc0(param_1 + 0x28);
  FUN_180894ef0(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*plVar1,&UNK_180957f70,0x100,1);
    }
    *plVar1 = 0;
    uVar4 = 0;
    *(int32_t *)(param_1 + 0x14) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar2 + *plVar1,0,(longlong)-iVar2);
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  if ((0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) &&
     (uVar3 = FUN_180849030(plVar1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180895070(longlong *param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (longlong)iVar1 * 0xc,0,(longlong)-iVar1 * 0xc);
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180896040(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180895130(longlong *param_1)

{
  int iVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
    uVar5 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar4 = (longlong)-iVar1;
    if (iVar1 < 0) {
      puVar2 = (int32_t *)((longlong)iVar1 * 0x10 + *param_1 + 4);
      do {
        puVar2[-1] = 0;
        *puVar2 = 0xffffffff;
        *(uint64_t *)(puVar2 + 1) = 0;
        puVar2 = puVar2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar5 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) &&
     (uVar3 = FUN_1807d3f50(param_1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



uint64_t FUN_180895210(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar8 = *(int *)((longlong)param_1 + 0x24);
  if (iVar8 == -1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[1];
  if (iVar8 == iVar1) {
    iVar8 = iVar8 * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= iVar1) || ((int)param_1[3] != iVar1)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar6 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar6) - uVar6) < iVar8) &&
       (uVar3 = FUN_1807d3f50(param_1 + 2,iVar8), (int)uVar3 != 0)) {
      return uVar3;
    }
    uVar3 = FUN_1807703c0(param_1,iVar8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar9 = 0;
    uVar4 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*param_1 + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar8);
    }
    lVar2 = param_1[3];
    uVar4 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar2) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar5 = (longlong)(int)(*(uint *)(uVar4 + param_1[2]) & (int)param_1[1] - 1U);
        piVar7 = (int *)(*param_1 + lVar5 * 4);
        iVar8 = *(int *)(*param_1 + lVar5 * 4);
        while (iVar8 != -1) {
          piVar7 = (int *)(param_1[2] + 4 + (longlong)iVar8 * 0x10);
          iVar8 = *piVar7;
        }
        *piVar7 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(int32_t *)(param_1[2] + 4 + uVar4) = 0xffffffff;
        uVar4 = uVar4 + 0x10;
      } while ((longlong)uVar10 < (longlong)(int)lVar2);
    }
  }
  return 0;
}



uint64_t FUN_180895236(void)

{
  longlong lVar1;
  int in_EAX;
  uint64_t uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (unaff_EDI == in_EAX) {
    iVar7 = unaff_EDI * 2;
    if (iVar7 < 4) {
      iVar7 = 4;
    }
    if (((iVar7 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar5 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar5) - uVar5) < iVar7) &&
       (uVar2 = FUN_1807d3f50(unaff_RBX + 2,iVar7), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar2 = FUN_1807703c0();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar8 = 0;
    uVar3 = uVar8;
    if (0 < iVar7) {
      do {
        *(int32_t *)(*unaff_RBX + uVar3 * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar7);
    }
    lVar1 = unaff_RBX[3];
    uVar3 = uVar8;
    uVar9 = uVar8;
    if (0 < (int)lVar1) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar4 = (longlong)(int)(*(uint *)(uVar3 + unaff_RBX[2]) & (int)unaff_RBX[1] - 1U);
        piVar6 = (int *)(*unaff_RBX + lVar4 * 4);
        iVar7 = *(int *)(*unaff_RBX + lVar4 * 4);
        while (iVar7 != -1) {
          piVar6 = (int *)(unaff_RBX[2] + 4 + (longlong)iVar7 * 0x10);
          iVar7 = *piVar6;
        }
        *piVar6 = (int)uVar8;
        uVar9 = uVar9 + 1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        *(int32_t *)(unaff_RBX[2] + 4 + uVar3) = 0xffffffff;
        uVar3 = uVar3 + 0x10;
      } while ((longlong)uVar9 < (longlong)(int)lVar1);
    }
  }
  return 0;
}



uint64_t FUN_180895345(void)

{
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



