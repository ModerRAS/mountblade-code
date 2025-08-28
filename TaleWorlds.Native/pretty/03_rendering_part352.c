#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part352.c - 12 个函数

// 函数: void FUN_180459960(ulonglong param_1,uint64_t *param_2,int32_t param_3,uint64_t *param_4,
void FUN_180459960(ulonglong param_1,uint64_t *param_2,int32_t param_3,uint64_t *param_4,
                  int32_t *param_5)

{
  int32_t auStackX_10 [6];
  
  FUN_18015b160(param_1,param_1 & 0xffffffff,*param_2,param_3,*param_4,auStackX_10);
  *param_5 = auStackX_10[0];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1804599a0(int32_t *param_1)

{
  int32_t uVar1;
  longlong *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x8b0,0x10,3,0xfffffffffffffffe);
  FUN_180301040(plVar2);
  *plVar2 = (longlong)&unknown_var_9328_ptr;
  *(int32_t *)((longlong)plVar2 + 0x889) = 0x10000;
  *(int8_t *)((longlong)plVar2 + 0xde) = 1;
  *(int32_t *)(plVar2 + 0x112) = 0;
  *(int8_t *)((longlong)plVar2 + 0xdc) = 0;
  plVar2[0x110] = 0;
  *(int8_t *)(plVar2 + 0x111) = 1;
  *(int8_t *)((longlong)plVar2 + 0x88d) = 0;
  *(int32_t *)((longlong)plVar2 + 0x894) = 0xffffffff;
  *(uint64_t *)((longlong)plVar2 + 0x89c) = 0;
  *(uint64_t *)((longlong)plVar2 + 0x8a4) = 0;
  *(int32_t *)((longlong)plVar2 + 0x8ac) = 0;
  *(int8_t *)(plVar2 + 3) = 1;
  *(int32_t *)(plVar2 + 0x113) = 2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((ulonglong)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180459b92)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180459ae0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plStackX_8;
  uint64_t uVar2;
  int32_t uStack_38;
  int32_t uStack_34;
  void *puStack_30;
  longlong lStack_28;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30);
  FUN_1800b08e0(_DAT_180c86930,&plStackX_8,&puStack_30,1,uVar2);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uStack_38 = 0xffffffff;
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    uStack_38 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *param_1 = plVar1;
  param_1[1] = CONCAT44(uStack_34,uStack_38);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

code * FUN_180459be0(longlong param_1,char param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t auStack_70 [2];
  uint64_t auStack_60 [2];
  uint64_t uStack_50;
  uint64_t uStack_48;
  code *pcStack_40;
  code *pcStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  uint64_t uStack_10;
  
  pcStack_38 = (code *)0xfffffffffffffffe;
  if (param_2 == '\0') {
    uStack_30 = 0;
    uStack_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    auStack_60[0] = 0x180459c30;
    FUN_18023c450(param_1,0,0,&uStack_30);
    if (pcStack_20 != (code *)0x0) {
      auStack_60[0] = 0x180459c47;
      pcStack_20 = (code *)(*pcStack_20)(&uStack_30,0,0);
    }
    return pcStack_20;
  }
  uVar6 = 0xfffffffffffffffe;
  while( true ) {
    *(longlong *)(param_1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    if (*(uint64_t **)(param_1 + 0x1f0) != (uint64_t *)0x0) {
      plVar1 = (longlong *)**(uint64_t **)(param_1 + 0x1f0);
      (**(code **)(*plVar1 + 0xb0))(plVar1,auStack_60);
      puVar2 = *(uint64_t **)(param_1 + 0x1f0);
      *(int32_t *)((longlong)puVar2 + 0x44) = *(int32_t *)(_DAT_180c86890 + 0x2ca8);
      iVar4 = (**(code **)(*(longlong *)*puVar2 + 0xb0))((longlong *)*puVar2,auStack_70);
      uVar5 = (**(code **)(*(longlong *)*puVar2 + 0xa8))();
      *(int32_t *)((longlong)puVar2 + 0x4c) = uVar5;
      if (iVar4 != 0) {
        FUN_180626ee0(&unknown_var_128_ptr,iVar4);
      }
      pcStack_20 = (code *)0x0;
      pcStack_18 = (code *)((ulonglong)pcStack_18 & 0xffffffff00000000);
      uStack_30 = (**(code **)(**(longlong **)(_DAT_180c8a9d0 + 0x260) + 0xc0))
                            (*(longlong **)(_DAT_180c8a9d0 + 0x260),auStack_70[0]);
      uStack_28 = FUN_180179480(_DAT_180c8a9d0 + 0x228,auStack_70[0],auStack_70);
      lVar3 = puVar2[2];
      *(uint64_t *)(lVar3 + 0x170) = uStack_30;
      *(uint64_t *)(lVar3 + 0x178) = uStack_28;
      *(code **)(lVar3 + 0x180) = pcStack_20;
      *(code **)(lVar3 + 0x188) = pcStack_18;
      *(uint64_t *)(lVar3 + 400) = uStack_10;
      lVar3 = puVar2[2];
      *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      LOCK();
      *(int32_t *)(lVar3 + 0x380) = 2;
      UNLOCK();
      LOCK();
      *(int8_t *)(lVar3 + 900) = 1;
      UNLOCK();
    }
    if ((*(longlong *)(param_1 + 0x170) != 0) || (*(longlong *)(param_1 + 0x178) != 0))
    goto LAB_18023ab3f;
    if (*(longlong *)(param_1 + 0xa8) != 0) break;
    if (*(int *)(param_1 + 0x160) == 2) {
      FUN_18023ab60(param_1);
LAB_18023ab3f:
      return (code *)(param_1 + 0x168);
    }
    param_1 = FUN_1800bd410(_DAT_180c86898);
  }
  uStack_50 = 0;
  uStack_48 = 0;
  pcStack_40 = (code *)0x0;
  pcStack_38 = _guard_check_icall;
  FUN_18023c450(param_1,1,0xffffffff,&uStack_50,uVar6);
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&uStack_50,0,0);
  }
  goto LAB_18023ab3f;
}



// WARNING: Removing unreachable block (ram,0x000180459db0)

uint64_t * FUN_180459c50(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plStackX_8;
  longlong *plStack_80;
  uint64_t uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  void *puStack_60;
  longlong *plStack_58;
  int32_t uStack_48;
  void *puStack_40;
  longlong lStack_38;
  
  FUN_180627910(&puStack_40);
  uVar2 = FUN_180627910(&puStack_60,param_3);
  FUN_1800b2cd0(uVar2,&plStackX_8,&puStack_40,&puStack_60);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
    plStack_80 = plStackX_8;
    puStack_60 = &unknown_var_3456_ptr;
    if (plStack_58 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plStack_58 = plStackX_8;
    uStack_48 = 0;
    puStack_60 = &unknown_var_720_ptr;
    puStack_40 = &unknown_var_3456_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    uVar2 = 0xffffffff;
    FUN_1800b4e00(uVar3,plVar1,0xffffffff);
    uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
    plStack_80 = (longlong *)0x0;
    uStack_78 = 0;
    pcStack_70 = (code *)0x0;
    pcStack_68 = _guard_check_icall;
    FUN_1800b6f90(uVar3,plStackX_8,&plStack_80);
    if (pcStack_70 != (code *)0x0) {
      (*pcStack_70)(&plStack_80,0,0);
    }
    plVar1 = plStackX_8;
    if (plStackX_8 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    }
    plStack_80 = plVar1;
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_60 = &unknown_var_3456_ptr;
    if (plStack_58 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plStack_58 = (longlong *)0x0;
    uStack_48 = 0;
    puStack_60 = &unknown_var_720_ptr;
    puStack_40 = &unknown_var_3456_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *param_1 = plStack_80;
  param_1[1] = uStack_78;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180459ee5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180459e30(uint64_t *param_1)

{
  longlong *plStackX_8;
  longlong *plStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  void *puStack_28;
  longlong lStack_20;
  
  FUN_180627910(&puStack_28);
  FUN_1800b08e0(_DAT_180c86930,&plStackX_8,&puStack_28,0);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0xffffffff;
    puStack_28 = &unknown_var_3456_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    uStack_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_28 = &unknown_var_3456_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180459f80(longlong *param_1)
void FUN_180459f80(longlong *param_1)

{
  uint64_t uVar1;
  longlong **pplVar2;
  longlong **pplStackX_8;
  longlong **pplStackX_10;
  longlong ***ppplStackX_18;
  longlong *aplStack_30 [2];
  void *puStack_20;
  code *pcStack_18;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,0xfffffffffffffffe);
  pplStackX_8 = aplStack_30;
  puStack_20 = &unknown_var_7840_ptr;
  pcStack_18 = FUN_18045af40;
  aplStack_30[0] = param_1;
  pplVar2 = (longlong **)FUN_18006b640(uVar1,aplStack_30);
  pplStackX_10 = pplVar2;
  if (pplVar2 != (longlong **)0x0) {
    (*(code *)(*pplVar2)[5])(pplVar2);
  }
  if ((void *)*param_1 == &unknown_var_8720_ptr) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
  uVar1 = _DAT_180c82868;
  ppplStackX_18 = &pplStackX_8;
  pplStackX_8 = pplVar2;
  if (pplVar2 != (longlong **)0x0) {
    (*(code *)(*pplVar2)[5])(pplVar2);
  }
  FUN_18005e300(uVar1,&pplStackX_8);
  if (pplVar2 != (longlong **)0x0) {
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  return;
}



int FUN_18045a070(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x324);
    iVar1 = func_0x000180225d90(iVar2);
    iVar1 = iVar1 * (uint)*(ushort *)(param_1 + 0x330) * (uint)*(ushort *)(param_1 + 0x32e) *
            (uint)*(ushort *)(param_1 + 0x32c);
    if (iVar2 == 0xe) {
      iVar1 = (int)((double)iVar1 * 0.5);
    }
    if (1 < *(byte *)(param_1 + 0x335)) {
      iVar1 = (int)((double)iVar1 * 1.333333);
    }
    return iVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045a100(int32_t *param_1,longlong param_2,int32_t param_3,int32_t param_4,
void FUN_18045a100(int32_t *param_1,longlong param_2,int32_t param_3,int32_t param_4,
                  int8_t param_5,char param_6,int8_t param_7,char param_8)

{
  longlong lVar1;
  longlong *plVar2;
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  uint64_t uStack_124;
  uint64_t uStack_11c;
  int8_t uStack_114;
  int32_t uStack_113;
  int16_t uStack_10f;
  int8_t uStack_10d;
  int8_t uStack_10c;
  int32_t uStack_108;
  int8_t uStack_104;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint64_t uStack_f0;
  longlong *plStack_e8;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  uStack_130 = 1;
  uStack_12c = 1;
  uStack_113 = 1;
  uStack_10f = 0;
  uStack_10d = 0;
  uStack_108 = 0xffffffff;
  uStack_104 = 0;
  uStack_128 = 1;
  uStack_114 = param_5;
  uStack_10c = param_7;
  uStack_124 = 0;
  uStack_11c = 0;
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  uStack_c8 = 0;
  auStack_c0[0] = 0;
  uStack_138 = param_3;
  uStack_134 = param_4;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_c8 = (int32_t)lVar1;
    strcpy_s(auStack_c0,0x80,param_2);
  }
  plVar2 = (longlong *)FUN_1800b1230(_DAT_180c86930,&uStack_100,&puStack_d8,&uStack_138);
  plVar2 = (longlong *)*plVar2;
  plStack_e8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if (uStack_100 != (longlong *)0x0) {
    (**(code **)(*uStack_100 + 0x38))();
  }
  puStack_d8 = &unknown_var_720_ptr;
  if (param_6 != '\0') {
    *(int32_t *)((longlong)plVar2 + 0x36c) = 1;
  }
  if (param_8 != '\0') {
    *(uint *)(plVar2 + 0x65) = *(uint *)(plVar2 + 0x65) | 0x20000000;
  }
  uStack_100 = plVar2;
  uStack_f8 = 0xffffffff;
  if (plVar2 != (longlong *)0x0) {
    uStack_f8 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = (int32_t)uStack_100;
  param_1[1] = uStack_100._4_4_;
  param_1[2] = uStack_f8;
  param_1[3] = uStack_f4;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045a2b0(int32_t *param_1,longlong param_2,int32_t param_3,int32_t param_4)
void FUN_18045a2b0(int32_t *param_1,longlong param_2,int32_t param_3,int32_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int32_t uVar3;
  int8_t auStack_138 [32];
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int32_t uStack_ec;
  uint64_t uStack_e8;
  longlong *plStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_138;
  uStack_110 = 1;
  uStack_104 = 0x101018a;
  uVar3 = 0;
  uStack_108 = 0;
  uStack_100 = 0xffffffff;
  uStack_10c = 0x19;
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  uStack_c8 = 0;
  auStack_c0[0] = 0;
  uStack_118 = param_3;
  uStack_114 = param_4;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_c8 = (int32_t)lVar1;
    uVar3 = strcpy_s(auStack_c0,0x80,param_2);
  }
  plVar2 = (longlong *)FUN_1800b1d80(uVar3,&uStack_f8,&puStack_d8,&uStack_118);
  plVar2 = (longlong *)*plVar2;
  plStack_e0 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if (uStack_f8 != (longlong *)0x0) {
    (**(code **)(*uStack_f8 + 0x38))();
  }
  puStack_d8 = &unknown_var_720_ptr;
  uStack_f8 = plVar2;
  uStack_f0 = 0xffffffff;
  if (plVar2 != (longlong *)0x0) {
    uStack_f0 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = (int32_t)uStack_f8;
  param_1[1] = uStack_f8._4_4_;
  param_1[2] = uStack_f0;
  param_1[3] = uStack_ec;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045a410(longlong *param_1)
void FUN_18045a410(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint uVar6;
  void *puStack_30;
  longlong lStack_28;
  
  FUN_180627910(&puStack_30);
  (**(code **)(param_1[2] + 0x10))();
  uVar6 = 0;
  if ((int)param_1[4] != 0) {
    lVar4 = 0;
    do {
      cVar1 = *(char *)(param_1[3] + lVar4);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        *(char *)(param_1[3] + lVar4) = cVar1 + ' ';
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 1;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  lVar2 = _DAT_180c86930;
  lVar4 = _DAT_180c86930 + 0x770;
  iVar3 = _Mtx_lock(lVar4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  for (puVar5 = *(uint64_t **)(lVar2 + 0x6c0);
      (puVar5 != *(uint64_t **)(lVar2 + 0x6c8) && ((longlong *)*puVar5 != param_1));
      puVar5 = puVar5 + 1) {
  }
  FUN_1800ba050();
  (**(code **)(*param_1 + 0x38))(param_1);
  iVar3 = _Mtx_unlock(lVar4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_1802abe00(lVar2 + 0xa0,param_1);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18045a570(longlong param_1)
void FUN_18045a570(longlong param_1)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x370);
    *(uint64_t *)(param_1 + 0x370) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}





// 函数: void FUN_18045a5b0(longlong param_1,longlong *param_2)
void FUN_18045a5b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x370);
    *(longlong **)(param_1 + 0x370) = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}



int32_t * FUN_18045a610(int32_t *param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_54;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  void *puStack_30;
  longlong lStack_28;
  
  FUN_1800bbc40(&puStack_30);
  uVar2 = FUN_180627910(&puStack_50,param_2 + 0x204);
  FUN_1800b2cd0(uVar2,&plStackX_8,&puStack_50,&puStack_30);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_60 = SUB84(plVar1,0);
  uStack_5c = (int32_t)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_60;
  param_1[1] = uStack_5c;
  param_1[2] = uVar2;
  param_1[3] = uStack_54;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  puStack_50 = &unknown_var_3456_ptr;
  if (lStack_48 == 0) {
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &unknown_var_720_ptr;
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 == 0) {
      return param_1;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045a730(uint64_t param_1,uint64_t *param_2,int16_t param_3,int16_t param_4)
void FUN_18045a730(uint64_t param_1,uint64_t *param_2,int16_t param_3,int16_t param_4)

{
  uint64_t uVar1;
  int8_t auStack_118 [32];
  longlong *plStack_f8;
  uint64_t uStack_c0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int16_t uStack_4c;
  int16_t uStack_4a;
  int16_t uStack_48;
  int32_t uStack_46;
  int8_t uStack_42;
  ulonglong uStack_38;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
  plStack_f8 = (longlong *)FUN_18023a2e0(uVar1,0);
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x28))(plStack_f8);
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  _uStack_4c = CONCAT22(param_4,param_3);
  uStack_46 = 0x1020001;
  uStack_48 = 1;
  uStack_54 = 7;
  FUN_1802a1bc0(&uStack_a8);
                    // WARNING: Subroutine does not return
  memcpy(uStack_a8,*param_2,(longlong)*(int *)(param_2 + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045a910(int32_t *param_1,uint64_t *param_2)
void FUN_18045a910(int32_t *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t auStack_118 [48];
  int32_t uStack_e8;
  longlong *plStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  longlong *plStack_c0;
  longlong **pplStack_b8;
  void *puStack_b0;
  code *pcStack_a8;
  uint64_t uStack_a0;
  uint64_t **ppuStack_98;
  longlong alStack_88 [2];
  int16_t uStack_78;
  int8_t uStack_76;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  uint64_t uStack_3c;
  uint64_t uStack_34;
  int32_t uStack_2c;
  int16_t uStack_28;
  int32_t uStack_26;
  int8_t uStack_22;
  ulonglong uStack_18;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
  plStack_d8 = (longlong *)FUN_18023a2e0(uVar3,0);
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x28))(plStack_d8);
  }
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  uStack_78 = 0;
  uStack_76 = 3;
  uStack_26 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_22 = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_e8 = 0;
  FUN_1802a7bf0(*param_2,*(int32_t *)(param_2 + 1),alStack_88);
  FUN_1802a9200(alStack_88);
  ppuStack_98 = &plStack_c0;
  uStack_d0 = alStack_88;
  uStack_c8 = &plStack_d8;
  puStack_b0 = &unknown_var_7664_ptr;
  pcStack_a8 = FUN_18045ae70;
  plStack_c0 = uStack_d0;
  pplStack_b8 = uStack_c8;
  FUN_18005c650(&plStack_c0);
  plVar1 = plStack_d8;
  if (plStack_d8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStack_d8 + 8))(plStack_d8);
  }
  uStack_d0 = plVar1;
  uStack_c8._0_4_ = uVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int32_t)uStack_d0;
  param_1[1] = uStack_d0._4_4_;
  param_1[2] = (int32_t)uStack_c8;
  param_1[3] = uStack_c8._4_4_;
  if (uStack_78._1_1_ == '\0') {
    if (((char)uStack_78 == '\0') && (alStack_88[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_88[0] = 0;
    alStack_88[1] = 0;
    uStack_78 = 0;
  }
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045aad0(void)
void FUN_18045aad0(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = _DAT_180c86930;
  lVar1 = _DAT_180c86930 + 0x900;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_18005e630(_DAT_180c82868);
  plVar4 = *(longlong **)(lVar5 + 0xa0);
  if (plVar4 != *(longlong **)(lVar5 + 0xa8)) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      if (((int)plVar2[0x70] == 2) && ((*(uint *)(plVar2 + 0x65) & 0x20000000) == 0)) {
        FUN_18023b050(plVar2,0);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != *(longlong **)(lVar5 + 0xa8));
  }
  FUN_18020f150(*(uint64_t *)(*(longlong *)(_DAT_180c82868 + 8) + 8));
  lVar5 = _DAT_180c86938 + 0x20;
  iVar3 = _Mtx_lock(lVar5);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = _Mtx_unlock(lVar5);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



int32_t FUN_18045ac10(void)

{
  int32_t *puVar1;
  
  puVar1 = (int32_t *)FUN_18023ced0();
  return *puVar1;
}



longlong * FUN_18045ac20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x370);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ac90(longlong *param_1,longlong param_2)
void FUN_18045ac90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar3;
  void **ppuVar4;
  void *puVar5;
  int8_t auStack_268 [32];
  void **ppuStack_248;
  void ***pppuStack_240;
  uint64_t uStack_238;
  void **ppuStack_230;
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [128];
  int32_t uStack_190;
  longlong *plStack_188;
  uint64_t uStack_180;
  int32_t uStack_178;
  void *puStack_148;
  void *puStack_140;
  uint uStack_138;
  ulonglong uStack_28;
  longlong lVar2;
  
  uStack_238 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_268;
  FUN_1806240a0();
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((0 < (int)lVar1) && (uStack_138 + (int)lVar1 < 0xff)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_140 + uStack_138,param_2,(longlong)((int)lVar2 + 2));
  }
  ppuStack_248 = &puStack_228;
  puStack_228 = &unknown_var_3432_ptr;
  puStack_220 = auStack_210;
  uStack_218 = 0;
  auStack_210[0] = 0;
  uStack_190 = 0x2d;
  uStack_178 = 3;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  puVar5 = &system_buffer_ptr;
  if (puStack_140 != (void *)0x0) {
    puVar5 = puStack_140;
  }
  uStack_180 = FUN_180627910(uVar3,puVar5);
  plStack_188 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
  ppuVar4 = (void **)FUN_18005ce30(uVar3,&puStack_228);
  ppuStack_230 = ppuVar4;
  if (ppuVar4 != (void **)0x0) {
    (**(code **)(*ppuVar4 + 0x28))(ppuVar4);
  }
  uVar3 = _DAT_180c82868;
  pppuStack_240 = &ppuStack_248;
  ppuStack_248 = ppuVar4;
  if (ppuVar4 != (void **)0x0) {
    (**(code **)(*ppuVar4 + 0x28))(ppuVar4);
  }
  FUN_18005e370(uVar3,&ppuStack_248);
  if (ppuVar4 != (void **)0x0) {
    (**(code **)(*ppuVar4 + 0x38))(ppuVar4);
  }
  pppuStack_240 = (void ***)&puStack_228;
  puStack_228 = &unknown_var_720_ptr;
  puStack_148 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ae70(uint64_t *param_1)
void FUN_18045ae70(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int32_t uVar3;
  int8_t auStack_68 [32];
  int16_t auStack_48 [2];
  int16_t uStack_44;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint uStack_20;
  ulonglong uStack_18;
  int32_t uStack_10;
  
  uStack_10 = 0xffffffff;
  uStack_18 = *(uint64_t *)param_1[1];
  uStack_40 = 0x18045aea3;
  FUN_1800a5810(_DAT_180c86938,*param_1,1);
  lVar2 = *(longlong *)param_1[1];
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(lVar2 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,auStack_48);
    *(int16_t *)(lVar2 + 0x332) = uStack_40._4_2_;
    *(int16_t *)(lVar2 + 0x330) = 1;
    if ((uStack_20 & 4) != 0) {
      *(uint *)(lVar2 + 0x328) = *(uint *)(lVar2 + 0x328) | 0x2000;
    }
    *(byte *)(lVar2 + 0x355) = (byte)uStack_20 & 1;
    uVar3 = func_0x0001800aada0(uStack_38);
    *(int32_t *)(lVar2 + 0x324) = uVar3;
    *(int16_t *)(lVar2 + 0x32e) = uStack_44;
    *(int8_t *)(lVar2 + 0x335) = (int8_t)uStack_40;
    *(int16_t *)(lVar2 + 0x32c) = auStack_48[0];
    *(int8_t *)(lVar2 + 0x334) = 2;
  }
  *(uint *)(lVar2 + 0x35c) = (uint)*(byte *)(lVar2 + 0x335);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}





