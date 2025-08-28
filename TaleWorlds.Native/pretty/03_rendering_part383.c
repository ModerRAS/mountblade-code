#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part383.c - 21 个函数

// 函数: void FUN_18047a160(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18047a160(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x2c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_180478600(*param_1,0,param_3,param_4,0xfffffffffffffffe);
    }
  }
  *param_1 = 0;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    puVar3 = (uint64_t *)(**(code **)(*(longlong *)param_1[4] + 0x10))();
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018047a1cd. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18047a1e0(longlong *param_1,longlong param_2,int32_t param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int32_t auStackX_18 [2];
  longlong *plStackX_20;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  uint64_t uStack_d0;
  longlong alStack_c8 [3];
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  int32_t uStack_98;
  longlong *plStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  longlong *plStack_80;
  int32_t uStack_78;
  int32_t uStack_68;
  uint64_t uStack_58;
  int8_t auStack_50 [24];
  
  uStack_58 = 0xfffffffffffffffe;
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  plVar1 = param_1 + 1;
  auStackX_18[0] = param_3;
  plStackX_20 = plVar1;
  lVar4 = __Init_locale_std__CAPEAV_Locimp_12__N_Z(1);
  param_1[4] = lVar4;
  lVar4 = FUN_18047aab0(param_1 + 3);
  *plVar1 = lVar4;
  __0_Lockit_std__QEAA_H_Z(auStackX_18,0);
  plStack_108 = _DAT_180d48f10;
  uVar5 = __Bid_locale_std__QEAA_KXZ(_id___ctype_D_std__2V0locale_2_A_exref);
  lVar4 = param_1[4];
  if ((uVar5 < *(ulonglong *)(lVar4 + 0x18)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  goto LAB_18047a2ec;
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_18047a298:
    if (plVar6 != (longlong *)0x0) goto LAB_18047a2ec;
  }
  else {
    lVar4 = __Getgloballocale_locale_std__CAPEAV_Locimp_12_XZ();
    if (uVar5 < *(ulonglong *)(lVar4 + 0x18)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + uVar5 * 8);
      goto LAB_18047a298;
    }
  }
  plVar6 = plStack_108;
  if (plStack_108 == (longlong *)0x0) {
    lVar4 = __Getcat___ctype_D_std__SA_KPEAPEBVfacet_locale_2_PEBV42__Z(&plStack_108,param_1 + 3);
    plVar6 = plStack_108;
    if (lVar4 == -1) {
      FUN_18009f890(auStack_50);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_50,&unknown_var_2464_ptr);
    }
    plStack_100 = plStack_108;
    FUN_1808ffb84(plStack_108);
    (**(code **)(*plVar6 + 8))(plVar6);
    _DAT_180d48f10 = plStack_108;
    plStack_100 = (longlong *)0x0;
    plVar6 = plStack_108;
  }
LAB_18047a2ec:
  __1_Lockit_std__QEAA_XZ(auStackX_18);
  param_1[2] = (longlong)plVar6;
  lStack_d8 = -1;
  do {
    lStack_d8 = lStack_d8 + 1;
  } while (*(char *)(param_2 + lStack_d8) != '\0');
  lStack_d8 = lStack_d8 + param_2;
  uStack_d0 = 0;
  plStack_f8 = alStack_c8;
  plStackX_20 = (longlong *)((ulonglong)plStackX_20 & 0xffffffff00000000);
  lStack_e8 = param_2;
  lStack_e0 = param_2;
  FUN_18047b290(alStack_c8,0,&plStackX_20);
  uStack_b0 = 0;
  plStack_f8 = (longlong *)FUN_1808fc418(0x30);
  *plStack_f8 = (longlong)&unknown_var_6184_ptr;
  plStack_f8[1] = 0x14;
  plStack_f8[2] = 0;
  plStack_f8[3] = 0;
  *plStack_f8 = (longlong)&unknown_var_6136_ptr;
  *(uint64_t *)((longlong)plStack_f8 + 0x24) = 0;
  *(int32_t *)((longlong)plStack_f8 + 0x2c) = 0;
  uStack_98 = 1;
  uStack_88 = 0x100;
  uStack_84 = 4;
  uStack_78 = 1;
  uStack_68 = 0x8775dfb;
  puStack_a8 = plStack_f8;
  puStack_a0 = plStack_f8;
  plStack_90 = plVar1;
  plStack_80 = plVar1;
  FUN_18047b3a0(&lStack_e8);
  lVar4 = FUN_18047afc0(&lStack_e8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + 1;
    UNLOCK();
  }
  if (*param_1 != 0) {
    LOCK();
    piVar2 = (int *)(*param_1 + 0x2c);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FUN_180478600(*param_1,0);
    }
  }
  *param_1 = lVar4;
  plStackX_20 = alStack_c8;
  FUN_180257d60(alStack_c8);
  return param_1;
}



int8_t *
FUN_18047a470(longlong *param_1,int8_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lStack_18;
  longlong lStack_10;
  
  if ((char)param_1[2] == '\0') {
    lStack_18 = 0;
    lStack_10 = 0;
  }
  else {
    lStack_18 = *param_1;
    lStack_10 = param_1[1];
  }
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0xf;
  *param_2 = 0;
  if (lStack_18 != lStack_10) {
    FUN_1800671b0(param_2,lStack_18,lStack_10 - lStack_18,param_4,0,0xfffffffffffffffe);
  }
  return param_2;
}



uint64_t * FUN_18047a520(longlong param_1,uint64_t *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  uVar1 = param_4 - param_3;
  if (uVar1 != 0) {
    uVar4 = param_2[2];
    do {
      if (uVar4 < uVar1) {
        FUN_18047a8c0(param_2,uVar1 - uVar4,0);
      }
      else {
        puVar2 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar2 = (uint64_t *)*param_2;
        }
        param_2[2] = uVar1;
        *(int8_t *)((longlong)puVar2 + uVar1) = 0;
      }
      puVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar2 = (uint64_t *)*param_2;
      }
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (uint64_t *)*param_2;
      }
      uVar1 = _Strxfrm(puVar3,param_2[2] + (longlong)puVar2,param_3,param_4,param_1 + 0x10);
      uVar4 = param_2[2];
    } while ((uVar4 < uVar1) && (uVar1 != 0));
  }
  if ((ulonglong)param_2[2] < uVar1) {
    FUN_18047a8c0(param_2,uVar1 - param_2[2],0);
  }
  else {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (uint64_t *)*param_2;
    }
    param_2[2] = uVar1;
    *(int8_t *)((longlong)puVar2 + uVar1) = 0;
  }
  return param_2;
}



ulonglong FUN_18047a640(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                       uint64_t param_5)

{
  int iVar1;
  
  iVar1 = _Strcoll(param_2,param_3,param_4,param_5,param_1 + 0x10);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (ulonglong)(iVar1 != 0);
}



char * FUN_18047a690(char *param_1,char *param_2)

{
  char cVar1;
  uint64_t uVar2;
  
  if (*param_1 != '\0') {
    FUN_180067070(param_1 + 0x10);
  }
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 != '\0') {
    *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    uVar2 = *(uint64_t *)(param_2 + 0x18);
    *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(param_2 + 0x10);
    *(uint64_t *)(param_1 + 0x18) = uVar2;
    uVar2 = *(uint64_t *)(param_2 + 0x28);
    *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_2 + 0x20);
    *(uint64_t *)(param_1 + 0x28) = uVar2;
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0x28] = '\x0f';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    param_2[0x10] = '\0';
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18047a710(int8_t *param_1,ulonglong *param_2)
void FUN_18047a710(int8_t *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t *puStack_30;
  uint64_t uStack_28;
  int8_t *puStack_20;
  ulonglong *puStack_18;
  ulonglong uStack_10;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_10 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  uStack_58 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  puStack_30 = &uStack_50;
  *param_1 = 1;
  uStack_50._0_4_ = (int32_t)uVar1;
  uStack_50._4_4_ = (int32_t)(uVar1 >> 0x20);
  uStack_48._0_4_ = (int32_t)uVar2;
  uStack_48._4_4_ = (int32_t)(uVar2 >> 0x20);
  *(int32_t *)(param_1 + 8) = (int32_t)uStack_50;
  *(int32_t *)(param_1 + 0xc) = uStack_50._4_4_;
  *(int32_t *)(param_1 + 0x10) = (int32_t)uStack_48;
  *(int32_t *)(param_1 + 0x14) = uStack_48._4_4_;
  uStack_40._0_4_ = (int32_t)uVar3;
  uStack_40._4_4_ = (int32_t)(uVar3 >> 0x20);
  uStack_38._0_4_ = (int32_t)uVar4;
  uStack_38._4_4_ = (int32_t)(uVar4 >> 0x20);
  *(int32_t *)(param_1 + 0x18) = (int32_t)uStack_40;
  *(int32_t *)(param_1 + 0x1c) = uStack_40._4_4_;
  *(int32_t *)(param_1 + 0x20) = (int32_t)uStack_38;
  *(int32_t *)(param_1 + 0x24) = uStack_38._4_4_;
  uStack_40 = 0;
  uStack_38 = 0xf;
  uStack_50 = uVar1 & 0xffffffffffffff00;
  uStack_48 = uVar2;
  puStack_20 = param_1;
  puStack_18 = param_2;
  FUN_180067070(&uStack_50);
  uStack_58 = 1;
  FUN_180067070(param_2);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_78);
}





// 函数: void FUN_18047a7d0(longlong param_1)
void FUN_18047a7d0(longlong param_1)

{
  uint64_t *puVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    puVar1 = (uint64_t *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018047a806. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



uint64_t *
FUN_18047a810(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_5320_ptr;
  free(param_1[3]);
  *param_1 = ___7facet_locale_std__6B__exref;
  *param_1 = ___7_Facet_base_std__6B__exref;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_18047a880(longlong param_1)
void FUN_18047a880(longlong param_1)

{
  uint64_t *puVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    puVar1 = (uint64_t *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018047a8b6. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}





// 函数: void FUN_18047a8c0(uint64_t *param_1,ulonglong param_2,char param_3)
void FUN_18047a8c0(uint64_t *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = param_1[3];
  lVar3 = param_1[2];
  if (param_2 <= uVar2 - lVar3) {
    param_1[2] = lVar3 + param_2;
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
                    // WARNING: Subroutine does not return
    memset((longlong)param_1 + lVar3,(int)param_3,param_2);
  }
  if (param_2 <= 0x7fffffffffffffffU - lVar3) {
    uVar6 = lVar3 + param_2 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    uVar5 = FUN_180067110(uVar7 + 1);
    param_1[2] = lVar3 + param_2;
    param_1[3] = uVar7;
    if (0xf < uVar2) {
                    // WARNING: Subroutine does not return
      memcpy(uVar5,*param_1,lVar3);
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar5,param_1,lVar3);
  }
  FUN_1800670f0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}





// 函数: void FUN_18047a936(uint64_t param_1,longlong param_2)
void FUN_18047a936(uint64_t param_1,longlong param_2)

{
  ulonglong uVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  uint64_t *unaff_RDI;
  longlong unaff_R14;
  
  uVar3 = unaff_R14 + param_2 | 0xf;
  if (((uVar3 <= unaff_RBX) && (unaff_RBP <= unaff_RBX - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, unaff_RBX = uVar3, uVar3 < uVar1)) {
    unaff_RBX = uVar1;
  }
  uVar2 = FUN_180067110(unaff_RBX + 1);
  unaff_RDI[2] = unaff_R14 + param_2;
  unaff_RDI[3] = unaff_RBX;
  if (0xf < unaff_RBP) {
                    // WARNING: Subroutine does not return
    memcpy(uVar2,*unaff_RDI);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}





// 函数: void FUN_18047aa13(void)
void FUN_18047aa13(void)

{
  return;
}



int8_t * FUN_18047aa30(uint64_t param_1,int8_t *param_2)

{
  *param_2 = 0;
  return param_2;
}



int8_t * FUN_18047aa70(uint64_t param_1,int8_t *param_2)

{
  *param_2 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18047aab0(longlong param_1)
void FUN_18047aab0(longlong param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  longlong lVar10;
  int8_t auStack_e8 [32];
  int32_t uStack_c8;
  int8_t auStack_c4 [4];
  longlong *plStack_c0;
  uint64_t uStack_b8;
  int8_t auStack_b0 [16];
  int8_t auStack_a0 [104];
  int8_t uStack_38;
  uint8_t uStack_37;
  uint64_t uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  __0_Lockit_std__QEAA_H_Z(auStack_c4,0);
  plVar6 = _DAT_180d48f08;
  uVar4 = __Bid_locale_std__QEAA_KXZ(_id___collate_D_std__2V0locale_2_A_exref);
  lVar5 = *(longlong *)(param_1 + 8);
  if ((uVar4 < *(ulonglong *)(lVar5 + 0x18)) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar4 * 8) != 0)) goto LAB_18047ac81;
  lVar10 = 0;
  if (*(char *)(lVar5 + 0x24) == '\0') {
LAB_18047ab4b:
    if (lVar10 != 0) goto LAB_18047ac81;
  }
  else {
    lVar5 = __Getgloballocale_locale_std__CAPEAV_Locimp_12_XZ();
    if (uVar4 < *(ulonglong *)(lVar5 + 0x18)) {
      lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar4 * 8);
      goto LAB_18047ab4b;
    }
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_1808fc418(0x20);
    plStack_c0 = plVar6;
    puVar7 = (uint64_t *)FUN_180478410(param_1,&uStack_38);
    uStack_c8 = 1;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (uint64_t *)*puVar7;
    }
    uVar8 = __0_Locinfo_std__QEAA_PEBD_Z(auStack_a0,puVar7);
    uStack_c8 = 3;
    __0facet_locale_std__IEAA__K_Z(plVar6,0);
    *plVar6 = (longlong)&unknown_var_5320_ptr;
    puVar9 = (int32_t *)__Getcoll__Locinfo_std__QEBA_AU_Collvec__XZ(uVar8,auStack_b0);
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *(int32_t *)(plVar6 + 2) = *puVar9;
    *(int32_t *)((longlong)plVar6 + 0x14) = uVar1;
    *(int32_t *)(plVar6 + 3) = uVar2;
    *(int32_t *)((longlong)plVar6 + 0x1c) = uVar3;
    uStack_c8 = 1;
    __1_Locinfo_std__QEAA_XZ(auStack_a0);
    uStack_c8 = 0;
    if (0xf < uStack_20) {
      uVar4 = uStack_20 + 1;
      lVar10 = CONCAT71(uStack_37,uStack_38);
      lVar5 = lVar10;
      if (0xfff < uVar4) {
        uVar4 = uStack_20 + 0x28;
        lVar5 = *(longlong *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar5,uVar4);
    }
    uStack_28 = 0;
    uStack_20 = 0xf;
    uStack_38 = 0;
    plStack_c0 = plVar6;
    FUN_1808ffb84(plVar6);
    (**(code **)(*plVar6 + 8))(plVar6);
    plStack_c0 = (longlong *)0x0;
    _DAT_180d48f08 = plVar6;
  }
LAB_18047ac81:
  __1_Lockit_std__QEAA_XZ(auStack_c4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_e8);
}





// 函数: void FUN_18047acc0(void)
void FUN_18047acc0(void)

{
  FUN_180257d60();
  return;
}





// 函数: void FUN_18047acf0(void)
void FUN_18047acf0(void)

{
  FUN_180257d60();
  return;
}





// 函数: void FUN_18047ad10(void)
void FUN_18047ad10(void)

{
  FUN_180257d60();
  return;
}



int8_t *
FUN_18047ad30(longlong param_1,longlong param_2,uint64_t *param_3,longlong *param_4,
             uint64_t param_5,uint64_t param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int8_t *puVar5;
  uint64_t *puStackX_20;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  longlong lStack_a8;
  uint64_t uStack_a0;
  longlong lStack_98;
  uint64_t uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  int32_t uStack_70;
  uint uStack_6c;
  int8_t uStack_68;
  int32_t uStack_64;
  byte bStack_60;
  longlong *plStack_58;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_78 = *param_4;
  if (lStack_78 == 0) {
    return &stack0x00000000;
  }
  puVar5 = (int8_t *)0x0;
  uStack_70 = *(int32_t *)(lStack_78 + 0x20);
  uStack_64 = *(int32_t *)(lStack_78 + 0x28);
  plStack_58 = param_4 + 1;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  puStackX_20 = &uStack_e8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  bStack_60 = (byte)(*(uint *)(lStack_78 + 0xc) >> 3) & 1;
  lStack_88 = param_2;
  lStack_80 = param_1;
  FUN_18047bea0(&lStack_a8,*(int32_t *)(lStack_78 + 0x24));
  cVar1 = FUN_18047bcd0(&uStack_128,param_3);
  if (cVar1 == '\0') {
    if (param_1 == param_2) goto LAB_18047aef0;
    uStack_6c = uStack_6c & 0xffffdfff | 0x100;
    plVar2 = (longlong *)FUN_18047ba30(&uStack_128,&puStackX_20,param_1 + 1,param_2,0);
    lVar3 = *plVar2;
    while (lVar3 != param_2) {
      lStack_80 = lVar3;
      cVar1 = FUN_18047bcd0(&uStack_128,param_3);
      if (cVar1 != '\0') goto LAB_18047aecf;
      plVar2 = (longlong *)FUN_18047ba30(&uStack_128,&puStackX_20,lVar3 + 1,param_2,0);
      lVar3 = *plVar2;
    }
    lStack_80 = param_2;
    cVar1 = FUN_18047bcd0(&uStack_128,param_3);
    if (cVar1 == '\0') goto LAB_18047aef0;
  }
LAB_18047aecf:
  puVar5 = (int8_t *)0x1;
  if (param_3 != (uint64_t *)0x0) {
    *param_3 = param_6;
    param_3[5] = param_1;
    *(bool *)(param_3 + 7) = param_1 != param_3[6];
  }
LAB_18047aef0:
  if (lStack_a8 != 0) {
    uVar4 = lStack_98 - lStack_a8 & 0xfffffffffffffff0;
    lVar3 = lStack_a8;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      lVar3 = *(longlong *)(lStack_a8 + -8);
      if (0x1f < (lStack_a8 - lVar3) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar3,uVar4);
    lStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
  }
  puStackX_20 = &uStack_e8;
  FUN_18047b1c0(&uStack_c0);
  puStackX_20 = &uStack_e0;
  FUN_180257d60(&uStack_e0);
  puStackX_20 = &uStack_128;
  FUN_18047b1c0(&uStack_100);
  puStackX_20 = &uStack_120;
  FUN_180257d60(&uStack_120);
  return puVar5;
}



longlong FUN_18047afc0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar2 = FUN_18047b990(param_1 + 8,0,param_3,param_4,0xfffffffffffffffe);
  FUN_18047b5a0(param_1);
  if (*param_1 == param_1[2]) {
    FUN_18047b8d0(param_1 + 8,uVar2);
    FUN_18047ce10(param_1 + 8,0x15);
    lVar3 = param_1[8];
    *(int *)(lVar3 + 0x20) = (int)param_1[0xe];
    *(int *)(lVar3 + 0x28) = (int)param_1[3] + 1;
    FUN_1804788c0(lVar3,0,0,lVar3,uVar4,lVar3);
    return lVar3;
  }
  FUN_18047b390(param_1[2],0xe);
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}





// 函数: void FUN_18047b060(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18047b060(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x90) - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *(uint64_t *)(param_1 + 0x80) = 0;
    *(uint64_t *)(param_1 + 0x88) = 0;
    *(uint64_t *)(param_1 + 0x90) = 0;
  }
  FUN_18047b1c0(param_1 + 0x68);
  FUN_180257d60();
  FUN_18047b1c0(param_1 + 0x28);
  FUN_180257d60();
  return;
}





// 函数: void FUN_18047b130(longlong param_1)
void FUN_18047b130(longlong param_1)

{
  FUN_18047b1c0(param_1 + 0x28);
  FUN_180257d60();
  return;
}





// 函数: void FUN_18047b170(void)
void FUN_18047b170(void)

{
  FUN_180257d60();
  return;
}





// 函数: void FUN_18047b1a0(void)
void FUN_18047b1a0(void)

{
  FUN_18047b1c0();
  return;
}





// 函数: void FUN_18047b1c0(longlong *param_1)
void FUN_18047b1c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_18047b220(longlong *param_1,ulonglong param_2)
void FUN_18047b220(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x8000000000000000) {
    lVar3 = *param_1;
    uVar5 = param_2 + 0x1f >> 5;
    if ((uVar5 < (ulonglong)(param_1[1] - lVar3 >> 2)) &&
       (lVar2 = lVar3 + uVar5 * 4, lVar2 != param_1[1])) {
      param_1[1] = lVar2;
    }
    param_1[3] = param_2;
    if ((param_2 & 0x1f) != 0) {
      puVar1 = (uint *)(lVar3 + uVar5 * 4 + -4);
      *puVar1 = *puVar1 & (1 << ((byte)param_2 & 0x1f)) - 1U;
    }
    return;
  }
  FUN_18047b310();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



uint64_t * FUN_18047b290(uint64_t *param_1,longlong param_2,int32_t *param_3)

{
  char cVar1;
  int32_t *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar1 = FUN_18047b330();
  if (cVar1 != '\0') {
    puVar2 = (int32_t *)*param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = puVar2;
  }
  return param_1;
}





// 函数: void FUN_18047b310(void)
void FUN_18047b310(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z(&unknown_var_4976_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint64_t FUN_18047b330(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x3fffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    lVar2 = FUN_180067110(param_2 * 4);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    lVar2 = lVar2 + param_2 * 4;
    param_1[2] = lVar2;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



uint64_t FUN_18047b35a(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong *unaff_RDI;
  
  lVar1 = FUN_180067110(param_2 * 4);
  *unaff_RDI = lVar1;
  unaff_RDI[1] = lVar1;
  lVar1 = lVar1 + param_2 * 4;
  unaff_RDI[2] = lVar1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}





// 函数: void FUN_18047b384(void)
void FUN_18047b384(void)

{
  return;
}





// 函数: void FUN_18047b390(uint64_t param_1,int32_t param_2)
void FUN_18047b390(uint64_t param_1,int32_t param_2)

{
  code *pcVar1;
  
  __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_18047b3a0(longlong *param_1)
void FUN_18047b3a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((char *)*param_1 == (char *)param_1[2]) {
    *(int8_t *)(param_1 + 0xf) = 0xff;
    iVar2 = -1;
  }
  else {
    cVar1 = *(char *)*param_1;
    *(char *)(param_1 + 0xf) = cVar1;
    lVar3 = strchr(&unknown_var_5824_ptr,(int)cVar1);
    if (lVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(char)param_1[0xf];
    }
  }
  *(int *)((longlong)param_1 + 0x7c) = iVar2;
  switch((char)param_1[0xf]) {
  case '\n':
    if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
      return;
    }
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      return;
    }
    *(int32_t *)((longlong)param_1 + 0x7c) = 0x7c;
    return;
  default:
    goto LAB_18047b4f8;
  case '$':
    if ((*(uint *)(param_1 + 0x10) & 0x2000000) == 0) {
      return;
    }
    if ((char *)(*param_1 + 1) == (char *)param_1[2]) {
      return;
    }
    if (*(char *)(*param_1 + 1) == '\n') {
      return;
    }
    *(int32_t *)((longlong)param_1 + 0x7c) = 0;
    return;
  case '(':
  case ')':
    bVar4 = (*(byte *)(param_1 + 0x10) & 8) == 0;
    break;
  case '*':
    if ((*(uint *)(param_1 + 0x10) & 0x4000000) == 0) {
      return;
    }
    cVar1 = func_0x00018047cdd0(param_1 + 8);
    if (cVar1 == '\0') {
      return;
    }
    *(int32_t *)((longlong)param_1 + 0x7c) = 0;
    return;
  case '+':
  case '?':
    bVar4 = (*(byte *)(param_1 + 0x10) & 1) == 0;
    break;
  case '\\':
    cVar1 = func_0x00018047c940(param_1);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *(char *)(*param_1 + 1);
    *(char *)(param_1 + 0xf) = cVar1;
    *(int *)((longlong)param_1 + 0x7c) = (int)cVar1;
    return;
  case '^':
    if ((*(uint *)(param_1 + 0x10) & 0x2000000) == 0) {
      return;
    }
    cVar1 = func_0x00018047cdd0(param_1 + 8);
    bVar4 = cVar1 == '\0';
    break;
  case '{':
  case '}':
    bVar4 = (*(byte *)(param_1 + 0x10) & 0x10) == 0;
    break;
  case '|':
    bVar4 = (*(byte *)(param_1 + 0x10) & 2) == 0;
  }
  if (bVar4) {
    *(int32_t *)((longlong)param_1 + 0x7c) = 0;
  }
LAB_18047b4f8:
  return;
}





