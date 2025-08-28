#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part320.c - 6 个函数

// 函数: void FUN_18084076d(void)
void FUN_18084076d(void)

{
  uint64_t in_stack_00000068;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (uint64_t)&stack0x00000000);
}



int32_t FUN_180840790(int32_t param_1,int64_t param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  void *puVar4;
  void *puVar5;
  int64_t alStackX_18 [2];
  uint64_t uStack_38;
  uint64_t uStack_30;
  int64_t lStack_28;
  
  if (param_3 == (uint64_t *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    if (param_3 != (uint64_t *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    return 0x1f;
  }
  lStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  iVar3 = func_0x00018088c590(0,&uStack_30);
  if (((iVar3 == 0) && (iVar3 = FUN_18088c740(&uStack_38,uStack_30), iVar3 == 0)) &&
     (iVar3 = func_0x00018088c530(param_1,alStackX_18), iVar3 == 0)) {
    lStack_28 = *(int64_t *)(alStackX_18[0] + 8);
  }
  else if (iVar3 != 0) goto LAB_1808408dd;
  puVar1 = (uint64_t *)(lStack_28 + 0xb0);
  puVar5 = &system_buffer_ptr;
  for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &system_buffer_ptr;
    }
    else {
      puVar4 = (void *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4,param_2);
    if (iVar3 == 0) {
      if (0 < *(int *)(puVar2 + 3)) {
        puVar5 = (void *)puVar2[2];
      }
      *param_3 = puVar5;
      *(int32_t *)(param_3 + 1) = 2;
      *(int32_t *)(param_3 + 2) = *(int32_t *)(puVar2 + 4);
      goto LAB_1808408dd;
    }
    if (puVar2 == puVar1) goto LAB_1808408dd;
  }
  puVar1 = (uint64_t *)(lStack_28 + 0xc0);
  for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &system_buffer_ptr;
    }
    else {
      puVar4 = (void *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4,param_2);
    if (iVar3 == 0) {
      if (*(int *)(puVar2 + 3) < 1) {
        puVar4 = &system_buffer_ptr;
      }
      else {
        puVar4 = (void *)puVar2[2];
      }
      *param_3 = puVar4;
      *(int32_t *)(param_3 + 1) = 3;
      if (0 < *(int *)(puVar2 + 5)) {
        puVar5 = (void *)puVar2[4];
      }
      param_3[2] = puVar5;
      break;
    }
    if (puVar2 == puVar1) break;
  }
LAB_1808408dd:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_38);
}





// 函数: void FUN_1808407ce(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1808407ce(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  void *puVar4;
  uint64_t in_RCX;
  uint64_t *unaff_RBX;
  void *puVar5;
  int32_t unaff_ESI;
  uint64_t in_XMM0_Qb;
  uint64_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  int64_t in_stack_00000070;
  
  lStack0000000000000030 = 0;
  uStack0000000000000028 = in_XMM0_Qb;
  iVar3 = func_0x00018088c590(in_RCX,&stack0x00000028,param_3,param_4,param_1);
  if (((iVar3 == 0) && (iVar3 = FUN_18088c740(&stack0x00000020,uStack0000000000000028), iVar3 == 0))
     && (iVar3 = func_0x00018088c530(unaff_ESI,&stack0x00000070), iVar3 == 0)) {
    lStack0000000000000030 = *(int64_t *)(in_stack_00000070 + 8);
  }
  else if (iVar3 != 0) goto LAB_1808408dd;
  puVar1 = (uint64_t *)(lStack0000000000000030 + 0xb0);
  puVar5 = &system_buffer_ptr;
  for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &system_buffer_ptr;
    }
    else {
      puVar4 = (void *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4);
    if (iVar3 == 0) {
      if (0 < *(int *)(puVar2 + 3)) {
        puVar5 = (void *)puVar2[2];
      }
      *unaff_RBX = puVar5;
      *(int32_t *)(unaff_RBX + 1) = 2;
      *(int32_t *)(unaff_RBX + 2) = *(int32_t *)(puVar2 + 4);
      goto LAB_1808408dd;
    }
    if (puVar2 == puVar1) goto LAB_1808408dd;
  }
  puVar1 = (uint64_t *)(lStack0000000000000030 + 0xc0);
  for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &system_buffer_ptr;
    }
    else {
      puVar4 = (void *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4);
    if (iVar3 == 0) {
      if (*(int *)(puVar2 + 3) < 1) {
        puVar4 = &system_buffer_ptr;
      }
      else {
        puVar4 = (void *)puVar2[2];
      }
      *unaff_RBX = puVar4;
      *(int32_t *)(unaff_RBX + 1) = 3;
      if (0 < *(int *)(puVar2 + 5)) {
        puVar5 = (void *)puVar2[4];
      }
      unaff_RBX[2] = puVar5;
      break;
    }
    if (puVar2 == puVar1) break;
  }
LAB_1808408dd:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000020);
}



int32_t FUN_1808408ec(void)

{
  uint64_t *unaff_RBX;
  int32_t unaff_EDI;
  
  if (unaff_RBX != (uint64_t *)0x0) {
    *unaff_RBX = 0;
    unaff_RBX[1] = 0;
    unaff_RBX[2] = 0;
  }
  return unaff_EDI;
}





// 函数: void FUN_18084090e(void)
void FUN_18084090e(void)

{
  int8_t auStackX_20 [8];
  
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStackX_20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840950(uint64_t param_1,int64_t param_2,int64_t param_3,int *param_4)
void FUN_180840950(uint64_t param_1,int64_t param_2,int64_t param_3,int *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  void *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  int8_t auStack_40 [16];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (param_3 != 0) {
    iVar2 = FUN_18076b6f0(param_3,&unknown_var_368_ptr,10);
    if (iVar2 == 0) {
      iVar2 = FUN_180881fa0(param_1,param_3,auStack_40);
      if (iVar2 == 0) {
        lVar9 = *(int64_t *)(param_2 + 0x18);
        uVar4 = FUN_18084dc20(auStack_40);
        iVar2 = *(int *)(lVar9 + 0x98);
        uVar7 = 0;
        if (0 < iVar2) {
          uStack_48._4_4_ = (int)((uint64_t)uVar4 >> 0x20);
          piVar5 = *(int **)(lVar9 + 0x90);
          uVar8 = uVar7;
          do {
            iVar3 = (int)uVar8;
            if ((*piVar5 == (int)uVar4) && (piVar5[1] == uStack_48._4_4_)) goto LAB_180840a03;
            uVar8 = (uint64_t)(iVar3 + 1);
            uVar7 = uVar7 + 1;
            piVar5 = piVar5 + 2;
          } while ((int64_t)uVar7 < (int64_t)iVar2);
        }
        iVar3 = -1;
LAB_180840a03:
        *param_4 = iVar3;
        uStack_48 = uVar4;
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 0x28)) {
        lVar9 = 0;
        do {
          lVar1 = *(int64_t *)(lVar9 + 0x10 + *(int64_t *)(param_2 + 0x20));
          if (lVar1 == 0) break;
          if (*(int *)(lVar1 + 0x58) < 1) {
            puVar6 = &system_buffer_ptr;
          }
          else {
            puVar6 = *(void **)(lVar1 + 0x50);
          }
          iVar3 = func_0x00018076b630(puVar6,param_3);
          if (iVar3 == 0) {
            *param_4 = iVar2;
            break;
          }
          iVar2 = iVar2 + 1;
          lVar9 = lVar9 + 0x18;
        } while (iVar2 < *(int *)(param_2 + 0x28));
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (uint64_t)auStack_68);
}



uint64_t FUN_180840a90(uint64_t *param_1,int *param_2,int *param_3)

{
  uint64_t uVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    piVar2 = (int *)*param_1;
    lVar4 = 0;
    do {
      if ((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) goto LAB_180840ad5;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (lVar4 < *(int *)(param_1 + 1));
  }
  iVar3 = -1;
LAB_180840ad5:
  *param_3 = iVar3;
  uVar1 = 0x4a;
  if (-1 < iVar3) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840af0(int64_t param_1,int64_t param_2,int *param_3)
void FUN_180840af0(int64_t param_1,int64_t param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  void *puVar4;
  int iVar5;
  int8_t auStack_58 [32];
  int64_t lStack_38;
  int64_t lStack_30;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  if (param_2 != 0) {
    bVar1 = false;
    iVar2 = FUN_18076b6f0(param_2,&unknown_var_368_ptr,10);
    if (iVar2 == 0) {
      iVar2 = FUN_180881fa0(param_1,param_2,&lStack_38);
      if (iVar2 != 0) goto LAB_180840b99;
      bVar1 = true;
    }
    param_1 = param_1 + 0x60;
    if (bVar1) {
      iVar5 = 0;
      iVar2 = func_0x0001808675f0(param_1);
      if (0 < iVar2) {
        do {
          lVar3 = func_0x000180867680(param_1,iVar5);
          if ((*(int64_t *)(lVar3 + 0x10) == lStack_38) &&
             (*(int64_t *)(lVar3 + 0x18) == lStack_30)) goto LAB_180840bf9;
          iVar5 = iVar5 + 1;
          iVar2 = func_0x0001808675f0(param_1);
        } while (iVar5 < iVar2);
      }
    }
    else {
      iVar5 = 0;
      iVar2 = func_0x0001808675f0(param_1);
      if (0 < iVar2) {
        do {
          lVar3 = func_0x000180867680(param_1,iVar5);
          if (*(int *)(lVar3 + 0x58) < 1) {
            puVar4 = &system_buffer_ptr;
          }
          else {
            puVar4 = *(void **)(lVar3 + 0x50);
          }
          iVar2 = func_0x00018076b630(puVar4,param_2);
          if (iVar2 == 0) goto LAB_180840bf9;
          iVar5 = iVar5 + 1;
          iVar2 = func_0x0001808675f0(param_1);
        } while (iVar5 < iVar2);
      }
    }
  }
  goto LAB_180840b99;
LAB_180840bf9:
  *param_3 = iVar5;
LAB_180840b99:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_58);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840c00(uint64_t param_1)
void FUN_180840c00(uint64_t param_1)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int64_t alStack_138 [2];
  uint64_t *apuStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if ((iVar1 == 0) && ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0)) {
    iVar1 = 0x4b;
LAB_180840d1b:
    if (iVar1 == 0) goto LAB_180840cf0;
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_18088e0f0(*(uint64_t *)(alStack_138[0] + 0x98),1);
    if (iVar1 == 0) {
      if (*(int *)(*(int64_t *)(alStack_138[0] + 0x98) + 0x200) != 0) {
        alStack_138[1] = 0;
        iVar1 = FUN_18088c740(alStack_138 + 1);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_138[0] + 0x98),apuStack_128,0x10),
           iVar1 == 0)) {
          *apuStack_128[0] = &unknown_var_3472_ptr;
          *(int32_t *)(apuStack_128[0] + 1) = 0x10;
          func_0x00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
                    // WARNING: Subroutine does not return
          FUN_18088c790(alStack_138 + 1);
        }
                    // WARNING: Subroutine does not return
        FUN_18088c790(alStack_138 + 1);
      }
      goto LAB_180840cf0;
    }
    goto LAB_180840d1b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_148 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_3576_ptr);
  }
LAB_180840cf0:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_168);
}



int FUN_180840d60(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





