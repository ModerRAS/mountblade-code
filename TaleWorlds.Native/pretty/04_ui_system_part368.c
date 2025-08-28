#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part368.c - 7 个函数

// 函数: void FUN_180867990(int64_t param_1,int param_2,int64_t param_3)
void FUN_180867990(int64_t param_1,int param_2,int64_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lStackX_8;
  uint64_t uStackX_20;
  int32_t uStack_38;
  int32_t uStack_34;
  int64_t lStack_30;
  int64_t lStack_28;
  
  iVar7 = 0;
  lVar8 = (int64_t)param_2;
  uStackX_20 = 0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar3 = func_0x00018088c590(*(int *)(param_1 + 8),&lStackX_8), iVar3 == 0)) &&
     (((iVar3 = SystemSecurityProcessor(&uStackX_20,lStackX_8), iVar3 == 0 && (-1 < param_2)) &&
      (param_2 <= *(int *)(param_1 + 0x28))))) {
    func_0x0001808674c0(&uStack_38);
    lStack_28 = *(int64_t *)(param_3 + 0x18);
    uStack_34 = *(int32_t *)(lStack_28 + 0x4c);
    lStack_30 = param_3;
    if (param_2 <= *(int *)(param_1 + 0x28)) {
      iVar4 = *(int *)(param_1 + 0x28) + 1;
      uVar5 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      iVar3 = (*(uint *)(param_1 + 0x2c) ^ uVar5) - uVar5;
      if (iVar3 < iVar4) {
        iVar6 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar4;
        if (iVar4 <= iVar6) {
          iVar3 = iVar6;
        }
        if (iVar3 < 2) {
          iVar6 = 2;
        }
        else if (iVar6 < iVar4) {
          iVar6 = iVar4;
        }
        iVar3 = FUN_180868700(param_1 + 0x20,iVar6);
        if (iVar3 != 0) goto LAB_180867b18;
      }
      param_2 = *(int *)(param_1 + 0x28) - param_2;
      if (0 < param_2) {
        lVar8 = *(int64_t *)(param_1 + 0x20) + lVar8 * 0x18;
                    // WARNING: Subroutine does not return
        memmove(lVar8 + 0x18,lVar8,(int64_t)param_2 * 0x18);
      }
      lVar2 = *(int64_t *)(param_1 + 0x20);
      puVar1 = (uint64_t *)(lVar2 + lVar8 * 0x18);
      *puVar1 = CONCAT44(uStack_34,uStack_38);
      puVar1[1] = lStack_30;
      *(int64_t *)(lVar2 + 0x10 + lVar8 * 0x18) = lStack_28;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          iVar3 = func_0x00018088c6e0(*(int64_t *)(param_1 + 0x20) + (int64_t)iVar7 * 0x18);
          if (iVar3 != 0) goto LAB_180867b18;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x28));
      }
      FUN_18088c060(*(int32_t *)(lStackX_8 + 0x18),*(int64_t *)(param_1 + 0x20) + lVar8 * 0x18);
    }
  }
LAB_180867b18:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_20);
}



uint64_t
FUN_180867b40(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4,
             uint64_t *param_5,int32_t *param_6)

{
  uint64_t uVar1;
  void *puStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  if (param_2 != *(int64_t *)(param_1 + 0x10)) {
    return 0x1c;
  }
  if ((*(byte *)(param_1 + 0x74) & 0x80) != 0) {
    uStack_20 = 0;
    uStack_14 = 0;
    if (*(int *)(param_4 + 1) < 1) {
      puStack_28 = &system_buffer_ptr;
    }
    else {
      puStack_28 = (void *)*param_4;
    }
    uStack_18 = 0xffffffff;
    uVar1 = FUN_180867f80(param_1,0x80,&puStack_28);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_5 = uStack_20;
    *param_6 = uStack_18;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180867bc0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&unknown_var_3264_ptr,0x40,0,0,1);
  if (puVar1 == (uint64_t *)0x0) {
    return 0x26;
  }
  *(int32_t *)(puVar1 + 1) = 0;
  *puVar1 = &unknown_var_3216_ptr;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(int32_t *)((int64_t)puVar1 + 0x74) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 2;
  *(int32_t *)(puVar1 + 0x11) = 0xffffffff;
  *(int32_t *)((int64_t)puVar1 + 0x8c) = 0x3f800000;
  *(int32_t *)(puVar1 + 0x12) = 0x3f800000;
  *(int16_t *)((int64_t)puVar1 + 0xbc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3f800000;
  puVar1[0xc] = 0x3f800000;
  *(uint64_t *)((int64_t)puVar1 + 0x94) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x9c) = 0;
  puVar1[0xd] = 0;
  *(int32_t *)(puVar1 + 0xe) = 0;
  *(int32_t *)((int64_t)puVar1 + 0xa4) = 0xbf800000;
  *(int32_t *)(puVar1 + 0x15) = 0xbf800000;
  *(int32_t *)((int64_t)puVar1 + 0xac) = 0xbf800000;
  *(int32_t *)(puVar1 + 0x16) = 0xbf800000;
  *(int32_t *)((int64_t)puVar1 + 0xb4) = 0xbf800000;
  *param_1 = puVar1;
  *(int32_t *)(puVar1 + 0x17) = 0xbf800000;
  return 0;
}



uint64_t
FUN_180867cf0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4,
             uint64_t param_5,int32_t param_6)

{
  uint64_t uVar1;
  void *puStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  if (param_2 != *(int64_t *)(param_1 + 0x10)) {
    return 0x1c;
  }
  if ((*(uint *)(param_1 + 0x74) & 0x100) != 0) {
    uStack_14 = 0;
    if (*(int *)(param_4 + 1) < 1) {
      puStack_28 = &system_buffer_ptr;
    }
    else {
      puStack_28 = (void *)*param_4;
    }
    uStack_20 = param_5;
    uStack_18 = param_6;
    uVar1 = FUN_180867f80(param_1,0x100,&puStack_28);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180867d60(uint64_t *param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  uint64_t uStackX_8;
  int8_t auStackX_10 [8];
  
  if (param_1 == (uint64_t *)0x0) {
    return 0x1c;
  }
  uStackX_8 = 0;
  if (((*(int *)(param_1 + 1) == 0) ||
      ((iVar4 = func_0x00018088c590(*(int *)(param_1 + 1),auStackX_10), iVar4 == 0 &&
       (iVar4 = SystemSecurityProcessor(&uStackX_8), iVar4 == 0)))) && (iVar4 = FUN_18088c620(), iVar4 == 0))
  {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 5)) {
      do {
        iVar5 = FUN_18088c620();
        if (iVar5 != 0) goto LAB_180867f55;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 5));
    }
    if (param_1[3] != 0) {
      lVar2 = *(int64_t *)(param_1[3] + 0xd0);
      iVar5 = 0;
      iVar4 = *(int *)(lVar2 + 0x28);
      if (0 < iVar4) {
        puVar6 = *(uint64_t **)(lVar2 + 0x20);
        lVar7 = 0;
        do {
          if ((uint64_t *)*puVar6 == param_1) break;
          iVar5 = iVar5 + 1;
          lVar7 = lVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 < iVar4);
      }
      uVar3 = *(uint64_t *)(lVar2 + 0x20);
      uVar1 = uVar3 + (int64_t)iVar5 * 8;
      if ((uVar3 <= uVar1) && (uVar1 < uVar3 + (int64_t)iVar4 * 8)) {
        iVar5 = (int)((int64_t)iVar5 * 8 >> 3);
        if ((iVar5 < 0) || (iVar4 <= iVar5)) goto LAB_180867f55;
        iVar9 = (iVar4 - iVar5) + -1;
        if (0 < iVar9) {
          lVar2 = uVar3 + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar2,lVar2 + 8,(int64_t)iVar9 << 3);
        }
        *(int *)(lVar2 + 0x28) = iVar4 + -1;
      }
    }
    lVar2 = param_1[2];
    if (lVar2 == 0) {
LAB_180867ef8:
      *param_1 = &unknown_var_3216_ptr;
      iVar4 = FUN_180868a00(param_1 + 4,0);
      if ((iVar4 == 0) &&
         (uVar8 = (int)*(uint *)((int64_t)param_1 + 0x2c) >> 0x1f,
         *(int *)(param_1 + 5) < (int)((*(uint *)((int64_t)param_1 + 0x2c) ^ uVar8) - uVar8))) {
        FUN_180868700(param_1 + 4,*(int *)(param_1 + 5));
      }
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_3264_ptr,0xa6,1);
    }
    if (((*(byte *)(lVar2 + 0x2d8) & 1) == 0) || (iVar4 = FUN_180863b30(lVar2), iVar4 == 0)) {
      if (*(uint64_t **)(lVar2 + 0x80) == (uint64_t *)0x0) goto LAB_180867ef8;
      if (*(uint64_t **)(lVar2 + 0x80) == param_1) {
        *(uint64_t *)(lVar2 + 0x80) = 0;
        iVar4 = func_0x00018085eef0(lVar2,0);
        if (iVar4 == 0) goto LAB_180867ef8;
      }
    }
  }
LAB_180867f55:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_8);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180867f80(int64_t param_1,uint param_2,uint64_t *param_3)
void FUN_180867f80(int64_t param_1,uint param_2,uint64_t *param_3)

{
  int iVar1;
  int8_t auStack_88 [32];
  int64_t alStack_68 [2];
  int32_t uStack_58;
  uint uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  if ((((*(int64_t *)(param_1 + 0x78) != 0) && ((*(uint *)(param_1 + 0x74) & param_2) != 0)) &&
      (*(int *)(param_1 + 8) != 0)) &&
     ((iVar1 = func_0x00018088c590(*(int *)(param_1 + 8),alStack_68), iVar1 == 0 &&
      (*(int64_t *)(alStack_68[0] + 0x98) != 0)))) {
    if (((*(uint *)(alStack_68[0] + 0x20) >> 3 & 1) == 0) || ((param_2 & 0x41800) == 0)) {
      alStack_68[1] = 0;
      iVar1 = SystemSecurityProcessor(alStack_68 + 1);
      if ((iVar1 == 0) &&
         (iVar1 = func_0x00018088dd50(*(uint64_t *)(alStack_68[0] + 0x98)), iVar1 == 0)) {
        FUN_180868160(param_1,param_2,param_3);
        iVar1 = func_0x00018088e6f0(*(uint64_t *)(alStack_68[0] + 0x98));
        if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
          AdvancedSystemProcessor(alStack_68 + 1);
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_68 + 1);
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_58 = *(int32_t *)(param_1 + 8);
    if (param_2 == 0x800) {
      uStack_50 = *(int32_t *)param_3;
      uStack_4c = *(int32_t *)((int64_t)param_3 + 4);
      uStack_48 = *(int32_t *)(param_3 + 1);
      uStack_44 = *(int32_t *)((int64_t)param_3 + 0xc);
    }
    else if (param_2 == 0x1000) {
      uStack_50 = *(int32_t *)param_3;
      uStack_4c = *(int32_t *)((int64_t)param_3 + 4);
      uStack_48 = *(int32_t *)(param_3 + 1);
      uStack_44 = *(int32_t *)((int64_t)param_3 + 0xc);
      uStack_40 = (int32_t)param_3[2];
      uStack_3c = (int32_t)((uint64_t)param_3[2] >> 0x20);
    }
    else if (param_2 == 0x40000) {
      uStack_50 = (int32_t)*param_3;
      uStack_4c = (int32_t)((uint64_t)*param_3 >> 0x20);
      uStack_48 = (int32_t)param_3[1];
      uStack_44 = (int32_t)((uint64_t)param_3[1] >> 0x20);
      uStack_30 = (int32_t)param_3[4];
      uStack_2c = (int32_t)((uint64_t)param_3[4] >> 0x20);
      uStack_40 = (int32_t)param_3[2];
      uStack_3c = (int32_t)((uint64_t)param_3[2] >> 0x20);
      uStack_38 = (int32_t)param_3[3];
      uStack_34 = (int32_t)((uint64_t)param_3[3] >> 0x20);
    }
    uStack_54 = param_2;
    FUN_18088dbf0(*(int64_t *)(alStack_68[0] + 0x98),&uStack_58);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_88);
}



uint64_t FUN_180868160(int64_t param_1,uint param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  
  if ((*(int64_t *)(param_1 + 0x78) == 0) || ((*(uint *)(param_1 + 0x74) & param_2) == 0)) {
    uVar1 = 0;
  }
  else {
    auStackX_8[0] = 0;
    uVar1 = func_0x00018088c500(param_1 + 8,auStackX_8);
    if ((int)uVar1 == 0) {
      uVar1 = (**(code **)(param_1 + 0x78))(param_2,auStackX_8[0],param_3);
      return uVar1;
    }
  }
  return uVar1;
}



int32_t FUN_1808681d0(int64_t param_1,int *param_2,uint64_t *param_3)

{
  int64_t lVar1;
  int *piVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return 0x1e;
  }
  uVar6 = 0;
  if (0 < *(int *)(lVar1 + 0x98)) {
    piVar2 = *(int **)(lVar1 + 0x90);
    uVar3 = uVar6;
    uVar5 = uVar6;
    while ((iVar4 = (int)uVar5, *piVar2 != *param_2 || (piVar2[1] != param_2[1]))) {
      uVar5 = (uint64_t)(iVar4 + 1);
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
      if ((int64_t)*(int *)(lVar1 + 0x98) <= (int64_t)uVar3) {
        *param_3 = 0;
        return 0;
      }
    }
    if (-1 < iVar4) {
      uVar6 = *(int64_t *)(param_1 + 0x20) + (int64_t)iVar4 * 0x18;
    }
  }
  *param_3 = uVar6;
  return 0;
}



uint64_t FUN_180868210(int *param_1,int64_t param_2,int param_3,int64_t param_4)

{
  int64_t in_RAX;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R10;
  int in_R11D;
  
  while ((*param_1 != in_R11D || (param_1[1] != *(int *)(in_R10 + 4)))) {
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 2;
    if (in_RAX <= param_2) {
      *unaff_RSI = param_4;
      return 0;
    }
  }
  if (-1 < param_3) {
    param_4 = *(int64_t *)(unaff_RDI + 0x20) + (int64_t)param_3 * 0x18;
  }
  *unaff_RSI = param_4;
  return 0;
}



uint64_t FUN_180868246(uint64_t param_1,uint64_t param_2,int param_3,int64_t param_4)

{
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  
  if (-1 < param_3) {
    param_4 = *(int64_t *)(unaff_RDI + 0x20) + (int64_t)param_3 * 0x18;
  }
  *unaff_RSI = param_4;
  return 0;
}



uint64_t FUN_18086825f(void)

{
  uint64_t *unaff_RSI;
  uint64_t in_R9;
  
  *unaff_RSI = in_R9;
  return 0;
}



uint64_t FUN_180868270(int64_t param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x90);
  }
  if (param_3 != (int32_t *)0x0) {
    uVar1 = 0x3f800000;
    if ((*(int64_t *)(param_1 + 0x10) != 0) &&
       (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x2b0) != 0)) {
      uVar1 = func_0x000180851e20();
    }
    *param_3 = uVar1;
  }
  return 0;
}



uint64_t FUN_1808682e0(int64_t param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x8c);
  }
  if (param_3 != (int32_t *)0x0) {
    uVar1 = 0x3f800000;
    if ((*(int64_t *)(param_1 + 0x10) != 0) &&
       (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x2b0) != 0)) {
      uVar1 = func_0x000180851e30();
    }
    *param_3 = uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180868330(int64_t param_1,uint64_t *param_2)
void FUN_180868330(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint uVar8;
  int64_t *plVar9;
  int8_t auStack_78 [32];
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  plVar7 = (int64_t *)0x0;
  plVar6 = plVar7;
  plVar9 = plVar7;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      lVar1 = *(int64_t *)((int64_t)plVar6 + *(int64_t *)(param_1 + 0x20) + 0x10);
      if (lVar1 != 0) {
        plVar5 = param_2 + 0x97;
        if (param_2 == (uint64_t *)0xffffffffffffff08) {
          plVar5 = plVar7;
        }
        if (plVar5 != (int64_t *)0x0) {
          if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
             (iVar2 = *(int *)(*plVar5 +
                              (int64_t)
                              (int)((*(uint *)(lVar1 + 0x1c) ^ *(uint *)(lVar1 + 0x18) ^
                                     *(uint *)(lVar1 + 0x14) ^ *(uint *)(lVar1 + 0x10)) &
                                   (int)plVar5[1] - 1U) * 4), iVar2 != -1)) {
            lVar3 = plVar5[2];
            do {
              lVar4 = (int64_t)iVar2;
              if ((*(int64_t *)(lVar3 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x10)) &&
                 (*(int64_t *)(lVar3 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x18)))
              goto LAB_1808683fc;
              iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
            } while (iVar2 != -1);
          }
          iVar2 = -1;
LAB_1808683fc:
          if (iVar2 != -1) {
            lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x278))
                              ((int64_t *)*param_2,lVar1 + 0x10,1);
            if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
              SystemStateProcessor(lVar1 + 0x10,auStack_58);
            }
            *(int64_t *)((int64_t)plVar6 + *(int64_t *)(param_1 + 0x20) + 0x10) = lVar3;
          }
        }
      }
      uVar8 = (int)plVar9 + 1;
      plVar6 = plVar6 + 3;
      plVar9 = (int64_t *)(uint64_t)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x28));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_78);
}





// 函数: void FUN_180868363(void)
void FUN_180868363(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar6;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint unaff_R12D;
  int32_t unaff_000000a4;
  int unaff_R14D;
  uint64_t *unaff_R15;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  uVar6 = (uint64_t)unaff_R12D;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  do {
    lVar1 = *(int64_t *)(uVar6 + 0x10 + *(int64_t *)(unaff_RBP + 0x20));
    if (lVar1 != 0) {
      plVar5 = unaff_R15 + 0x97;
      if (unaff_R15 == (uint64_t *)0xffffffffffffff08) {
        plVar5 = (int64_t *)CONCAT44(unaff_000000a4,unaff_R12D);
      }
      if (plVar5 != (int64_t *)0x0) {
        if (((*(uint *)((int64_t)plVar5 + 0x24) != unaff_R12D) && ((int)plVar5[1] != 0)) &&
           (iVar2 = *(int *)(*plVar5 +
                            (int64_t)
                            (int)((*(uint *)(lVar1 + 0x1c) ^ *(uint *)(lVar1 + 0x18) ^
                                   *(uint *)(lVar1 + 0x14) ^ *(uint *)(lVar1 + 0x10)) &
                                 (int)plVar5[1] - 1U) * 4), iVar2 != -1)) {
          lVar3 = plVar5[2];
          do {
            lVar4 = (int64_t)iVar2;
            if ((*(int64_t *)(lVar3 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x10)) &&
               (*(int64_t *)(lVar3 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x18)))
            goto LAB_1808683fc;
            iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
          } while (iVar2 != -1);
        }
        iVar2 = -1;
LAB_1808683fc:
        if (iVar2 != -1) {
          lVar3 = (**(code **)(*(int64_t *)*unaff_R15 + 0x278))
                            ((int64_t *)*unaff_R15,lVar1 + 0x10,1);
          if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
            SystemStateProcessor(lVar1 + 0x10,auStackX_20);
          }
          *(int64_t *)(uVar6 + 0x10 + *(int64_t *)(unaff_RBP + 0x20)) = lVar3;
        }
      }
    }
    unaff_R14D = unaff_R14D + 1;
    uVar6 = uVar6 + 0x18;
    if (*(int *)(unaff_RBP + 0x28) <= unaff_R14D) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_180868459(void)
void FUN_180868459(void)

{
  uint64_t in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180868490(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180868490(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int8_t auStack_88 [32];
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(int64_t *)(param_1 + 0x18) = param_3;
    *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(*(int64_t *)(param_3 + 0xd0) + 0x40);
    *(int32_t *)(param_1 + 0x74) = *(int32_t *)(*(int64_t *)(param_3 + 0xd0) + 0x48);
    *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(*(int64_t *)(param_3 + 0xd0) + 0x38);
    iVar1 = FUN_180868a00(param_1 + 0x20,*(int32_t *)(param_3 + 0x88));
    if (iVar1 == 0) {
      uVar4 = 0;
      uVar5 = uVar4;
      for (uVar3 = *(uint64_t *)(param_3 + 0x80);
          (*(uint64_t *)(param_3 + 0x80) <= uVar3 &&
          (uVar3 < (int64_t)*(int *)(param_3 + 0x88) * 0x10 + *(uint64_t *)(param_3 + 0x80)));
          uVar3 = uVar3 + 0x10) {
        lVar2 = (**(code **)(**(int64_t **)(param_2 + 800) + 0x270))
                          (*(int64_t **)(param_2 + 800),uVar3,1);
        if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(uVar3,auStack_68);
        }
        lVar2 = FUN_18083fb90(*(uint64_t *)(param_2 + 800),lVar2 + 0x38);
        if (lVar2 == 0) goto LAB_1808685dc;
        iVar1 = FUN_18088c060(*(int32_t *)(param_2 + 0x18),
                              *(int64_t *)(param_1 + 0x20) + (int64_t)(int)uVar5 * 0x18);
        if (iVar1 != 0) goto LAB_1808685dc;
        uVar5 = (uint64_t)((int)uVar5 + 1);
        *(int64_t *)(uVar4 + 0x10 + *(int64_t *)(param_1 + 0x20)) = lVar2;
        *(int32_t *)(uVar4 + 4 + *(int64_t *)(param_1 + 0x20)) = *(int32_t *)(lVar2 + 0x4c);
        uVar4 = uVar4 + 0x18;
      }
      lVar2 = param_1 + 8;
      if (param_1 == 0) {
        lVar2 = 0;
      }
      FUN_18088c060(*(int32_t *)(param_2 + 0x18),lVar2);
    }
  }
LAB_1808685dc:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_88);
}



uint64_t FUN_180868640(int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_18;
  uint64_t uStack_10;
  
  if (param_2 != *(int64_t *)(param_1 + 0x10)) {
    return 0x1c;
  }
  if ((*(uint *)(param_1 + 0x74) & 0x200) != 0) {
    if (*(int *)(param_3 + 1) < 1) {
      puStack_18 = &system_buffer_ptr;
    }
    else {
      puStack_18 = (void *)*param_3;
    }
    uStack_10 = param_4;
    uVar1 = FUN_180867f80(param_1,0x200,&puStack_18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808686a0(int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_18;
  uint64_t uStack_10;
  
  if (param_2 != *(int64_t *)(param_1 + 0x10)) {
    return 0x1c;
  }
  if ((*(uint *)(param_1 + 0x74) & 0x400) != 0) {
    if (*(int *)(param_3 + 1) < 1) {
      puStack_18 = &system_buffer_ptr;
    }
    else {
      puStack_18 = (void *)*param_3;
    }
    uStack_10 = param_4;
    uVar1 = FUN_180867f80(param_1,0x400,&puStack_18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180868700(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x18 - 1U < 0x3fffffff) {
      lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] * 0x18);
        }
        goto LAB_180868794;
      }
    }
    return 0x26;
  }
LAB_180868794:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180868724(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_180868794:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x18 - 1U < 0x3fffffff) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] * 0x18);
      }
      goto LAB_180868794;
    }
  }
  return 0x26;
}



uint64_t FUN_1808687df(void)

{
  return 0x26;
}





// 函数: void FUN_180868800(int64_t param_1,int64_t param_2)
void FUN_180868800(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uStackX_8;
  uint64_t uStackX_18;
  uint64_t uVar9;
  
  uVar9 = 0;
  uStackX_8 = 0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar3 = func_0x00018088c590(*(int *)(param_1 + 8),&uStackX_18), iVar3 == 0)) &&
     (iVar3 = SystemSecurityProcessor(&uStackX_8,uStackX_18), iVar3 == 0)) {
    iVar3 = *(int *)(param_1 + 0x28);
    uVar7 = uVar9;
    if (0 < iVar3) {
      plVar5 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 8);
      uVar6 = uVar9;
      do {
        if (*plVar5 == param_2) break;
        uVar7 = (uint64_t)((int)uVar7 + 1);
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 3;
      } while ((int64_t)uVar6 < (int64_t)iVar3);
    }
    if ((int)uVar7 < iVar3) {
      lVar1 = (int64_t)(int)uVar7 * 0x18;
      iVar3 = FUN_18088c620(*(int64_t *)(param_1 + 0x20) + lVar1);
      if (iVar3 == 0) {
        iVar3 = (int)(lVar1 / 0x18);
        if ((-1 < iVar3) && (iVar2 = *(int *)(param_1 + 0x28), iVar3 < iVar2)) {
          iVar4 = (iVar2 - iVar3) + -1;
          if (0 < iVar4) {
            lVar1 = *(int64_t *)(param_1 + 0x20) + (int64_t)iVar3 * 0x18;
                    // WARNING: Subroutine does not return
            memmove(lVar1,lVar1 + 0x18,(int64_t)iVar4 * 0x18);
          }
          *(int *)(param_1 + 0x28) = iVar2 + -1;
          if (0 < iVar2 + -1) {
            do {
              iVar3 = func_0x00018088c6e0(*(int64_t *)(param_1 + 0x20) +
                                          (int64_t)(int)uVar9 * 0x18);
              if (iVar3 != 0) break;
              uVar8 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar8;
            } while ((int)uVar8 < *(int *)(param_1 + 0x28));
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_8);
}



uint64_t FUN_180868970(int64_t param_1,int param_2,uint64_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uStackX_8;
  uint64_t uStackX_20;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    uVar2 = 0x1e;
  }
  else {
    uVar2 = func_0x00018088c590(*(int *)(param_1 + 8),&uStackX_20);
    if ((int)uVar2 == 0) {
      uStackX_8 = 0;
      iVar1 = SystemSecurityProcessor(&uStackX_8,uStackX_20);
      if (((iVar1 == 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x28))) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 8 + (int64_t)param_2 * 0x18) = param_3;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&uStackX_8);
    }
  }
  return uVar2;
}





