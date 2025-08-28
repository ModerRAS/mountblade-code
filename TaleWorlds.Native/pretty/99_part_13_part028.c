
// $fun 的语义化别名
#define $alias_name $fun

/* SystemController - SystemPhysicsEngine 的语义化别名 */
#define SystemController SystemPhysicsEngine


// 99_part_13_part028.c - 10 个函数

// 函数: void FUN_1808b7730(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t param_4,
void FUN_1808b7730(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t param_4,
                  uint64_t *param_5)

{
  int iVar1;
  int64_t lVar2;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uStack_78 = 0;
  lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x288))((int64_t *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_70);
  }
  uStack_88 = (**(code **)(*(int64_t *)(param_4 + 8) + 0x30))(param_4 + 8);
  puStack_80 = &uStack_78;
  iVar1 = FUN_1808b6fd0(param_1,lVar2,param_3,0);
  if (iVar1 == 0) {
    *param_5 = uStack_78;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_a8);
}



int FUN_1808b7800(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lStackX_8;
  int64_t lStackX_10;
  int64_t lStackX_18;
  char acStack_88 [8];
  int64_t lStack_80;
  char cStack_78;
  int64_t lStack_70;
  char cStack_68;
  int64_t lStack_60;
  char cStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  
  if (param_3 != (int64_t *)0x0) {
    *param_3 = 0;
  }
  lStack_48 = *(int64_t *)(param_1 + 8);
  acStack_88[0] = '\0';
  cStack_78 = '\0';
  cStack_68 = '\0';
  *(int *)(lStack_48 + 0x98) = *(int *)(lStack_48 + 0x98) + 1;
  lVar8 = lStack_48 + 0x38;
  *(int *)(lStack_48 + 0x1d0) = *(int *)(lStack_48 + 0x1d0) + 1;
  lVar9 = lStack_48 + 0x170;
  *(int *)(lStack_48 + 0x168) = *(int *)(lStack_48 + 0x168) + 1;
  lVar7 = lStack_48 + 0x108;
  *(int *)(lStack_48 + 0x238) = *(int *)(lStack_48 + 0x238) + 1;
  lVar6 = lStack_48 + 0x1d8;
  cStack_58 = '\0';
  lStackX_8 = 0;
  lStackX_10 = param_2;
  lStack_80 = lVar8;
  lStack_70 = lVar9;
  lStack_60 = lVar7;
  lStack_50 = lVar6;
  if ((*(byte *)(param_2 + 0x34) & 1) == 0) {
    lVar3 = *(int64_t *)(param_1 + 0x18);
    if (lVar3 == 0) {
      lStackX_18 = 0;
    }
    else {
      lStackX_18 = (**(code **)(*(int64_t *)(lVar3 + 8) + 0x38))(lVar3 + 8);
    }
    lVar3 = *(int64_t *)(param_1 + 8);
  }
  else {
    lVar3 = *(int64_t *)(param_1 + 8);
    lStackX_18 = lVar3 + 0x338;
  }
  iVar2 = FUN_1808bdcc0(lVar3,&lStackX_8,lStackX_10,*(int32_t *)(param_1 + 0x10));
  if (iVar2 == 0) {
    plVar4 = (int64_t *)(lStackX_10 + 0x20);
    plVar1 = (int64_t *)*plVar4;
    if ((plVar1 != plVar4) || (*(int64_t **)(lStackX_10 + 0x28) != plVar4)) {
      plVar5 = (int64_t *)0;
      if (plVar1 != plVar4) {
        plVar5 = plVar1;
      }
      iVar2 = FUN_1808b7c00(param_1,plVar5,lStackX_8,lStackX_18,lStackX_8 + 0x38);
      if (iVar2 != 0) goto LAB_1808b7979;
    }
    if (((*(int64_t *)(param_1 + 0x18) != 0) || (iVar2 = FUN_1808d71b0(lStackX_8,1), iVar2 == 0))
       && (iVar2 = FUN_1808b66c0(acStack_88), lVar6 = lStack_50, lVar7 = lStack_60,
          lVar8 = lStack_80, lVar9 = lStack_70, iVar2 == 0)) {
      if (param_3 != (int64_t *)0x0) {
        *param_3 = lStackX_8;
      }
      iVar2 = 0;
    }
  }
LAB_1808b7979:
  if (cStack_58 == '\0') {
    *(int32_t *)(lVar6 + 0x60) = 0;
    RenderingEngine_ShaderProcessor(lVar6 + 0x30);
  }
  if (cStack_68 == '\0') {
    *(int32_t *)(lVar7 + 0x60) = 0;
    SystemCore_CacheManager(lVar7 + 0x30);
  }
  if (cStack_78 == '\0') {
    *(int32_t *)(lVar9 + 0x60) = 0;
    SystemCore_CacheManager(lVar9 + 0x30);
  }
  if (acStack_88[0] == '\0') {
    *(int32_t *)(lVar8 + 0x60) = 0;
    SystemCore_NetworkProcessor(lVar8 + 0x30);
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b79f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1808b79f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  lVar1 = (**(code **)(*(int64_t *)*param_1 + 0x270))((int64_t *)*param_1,param_2,1);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_48);
  }
  FUN_1808b7a70(param_1,lVar1,param_3);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b7a70(uint64_t *param_1,int64_t param_2,int64_t *param_3)
void FUN_1808b7a70(uint64_t *param_1,int64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int8_t auStack_88 [32];
  int64_t lStack_68;
  int64_t lStack_60;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  if ((((*(int *)(param_2 + 0x38) != 0) || (*(int *)(param_2 + 0x3c) != 0)) ||
      (*(int *)(param_2 + 0x40) != 0)) || (*(int *)(param_2 + 0x44) != 0)) {
    lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x278))((int64_t *)*param_1,param_2 + 0x38,1);
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(param_2 + 0x38,auStack_58);
    }
    puVar4 = param_1;
    if ((*(byte *)(lVar2 + 0x34) & 1) != 0) {
      puVar4 = (uint64_t *)(param_1[1] + 0x290);
    }
    lStack_68 = func_0x0001808bfa00(param_1[1],lVar2 + 0x10,*(int32_t *)(puVar4 + 2));
    if ((lStack_68 != 0) || (iVar1 = FUN_1808b7800(puVar4,lVar2,&lStack_68), iVar1 == 0)) {
      lVar2 = lStack_68;
      lStack_60 = 0;
      iVar1 = func_0x0001808bc360(param_1[1],&lStack_60,param_2);
      if (iVar1 == 0) {
        for (uVar3 = *(uint64_t *)(param_2 + 0x28);
            (*(uint64_t *)(param_2 + 0x28) <= uVar3 &&
            (uVar3 < (int64_t)*(int *)(param_2 + 0x30) * 0x10 + *(uint64_t *)(param_2 + 0x28)));
            uVar3 = uVar3 + 0x10) {
          lStack_68 = 0;
          iVar1 = FUN_1808b6c30(param_1,uVar3,0,&lStack_68);
          if ((iVar1 != 0) ||
             ((lStack_68 != 0 && (iVar1 = func_0x0001808b8f10(lStack_60 + 0x40), iVar1 != 0))))
          goto FUN_1808b7bdd;
        }
        iVar1 = func_0x0001808d6cb0(lStack_60,lVar2);
        if (iVar1 == 0) {
          *param_3 = lStack_60;
        }
      }
    }
  }
FUN_1808b7bdd:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_88);
}






// 函数: void FUN_1808b7abf(int64_t *param_1)
void FUN_1808b7abf(int64_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  int64_t lStackX_20;
  int64_t in_stack_00000028;
  uint64_t in_stack_00000058;
  
  lVar2 = (**(code **)(*param_1 + 0x278))();
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(unaff_RDI + 0x38,&stack0x00000030);
  }
  lVar4 = unaff_R14;
  if ((*(byte *)(lVar2 + 0x34) & 1) != 0) {
    lVar4 = *(int64_t *)(unaff_R14 + 8) + 0x290;
  }
  lStackX_20 = func_0x0001808bfa00(*(int64_t *)(unaff_R14 + 8),lVar2 + 0x10,
                                   *(int32_t *)(lVar4 + 0x10));
  if ((lStackX_20 != 0) || (iVar1 = FUN_1808b7800(lVar4,lVar2,&lStackX_20), iVar1 == 0)) {
    lVar2 = lStackX_20;
    in_stack_00000028 = 0;
    iVar1 = func_0x0001808bc360(*(uint64_t *)(unaff_R14 + 8),&stack0x00000028);
    if (iVar1 == 0) {
      for (uVar3 = *(uint64_t *)(unaff_RDI + 0x28);
          (*(uint64_t *)(unaff_RDI + 0x28) <= uVar3 &&
          (uVar3 < (int64_t)*(int *)(unaff_RDI + 0x30) * 0x10 + *(uint64_t *)(unaff_RDI + 0x28)));
          uVar3 = uVar3 + 0x10) {
        lStackX_20 = 0;
        iVar1 = FUN_1808b6c30();
        if ((iVar1 != 0) ||
           ((lStackX_20 != 0 && (iVar1 = func_0x0001808b8f10(in_stack_00000028 + 0x40), iVar1 != 0))
           )) goto LAB_1808b7bd0;
      }
      iVar1 = func_0x0001808d6cb0(in_stack_00000028,lVar2);
      if (iVar1 == 0) {
        *unaff_R15 = in_stack_00000028;
      }
    }
  }
LAB_1808b7bd0:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x0001808b7b9d)




// 函数: void FUN_1808b7af6(int64_t param_1)
void FUN_1808b7af6(int64_t param_1)

{
  int iVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  uint64_t *unaff_R15;
  bool in_ZF;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000058;
  
  if (!in_ZF) {
    unaff_RBX = param_1 + 0x290;
  }
  lVar2 = func_0x0001808bfa00(param_1,in_RAX + 0x10,*(int32_t *)(unaff_RBX + 0x10));
  if ((lVar2 != 0) || (iVar1 = FUN_1808b7800(unaff_RBX), iVar1 == 0)) {
    in_stack_00000028 = 0;
    iVar1 = func_0x0001808bc360(*(uint64_t *)(unaff_R14 + 8),&stack0x00000028);
    if (iVar1 == 0) {
      for (uVar3 = *(uint64_t *)(unaff_RDI + 0x28);
          (*(uint64_t *)(unaff_RDI + 0x28) <= uVar3 &&
          (uVar3 < (int64_t)*(int *)(unaff_RDI + 0x30) * 0x10 + *(uint64_t *)(unaff_RDI + 0x28)));
          uVar3 = uVar3 + 0x10) {
        iVar1 = FUN_1808b6c30();
        if (iVar1 != 0) goto LAB_1808b7bd0;
      }
      iVar1 = func_0x0001808d6cb0(in_stack_00000028,lVar2);
      if (iVar1 == 0) {
        *unaff_R15 = in_stack_00000028;
      }
    }
  }
LAB_1808b7bd0:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808b7bd8(void)
void FUN_1808b7bd8(void)

{
  uint64_t in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808b7bdd(void)
void FUN_1808b7bdd(void)

{
  uint64_t in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b7c00(uint64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4,
void FUN_1808b7c00(uint64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4,
                  int64_t *param_5)

{
  int32_t uVar1;
  uint64_t *puVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int8_t auStack_148 [32];
  uint64_t **ppuStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  int8_t auStack_d8 [8];
  uint64_t *puStack_d0;
  int64_t lStack_c8;
  int32_t uStack_c0;
  ushort uStack_bc;
  ushort uStack_ba;
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  byte bStack_b1;
  int32_t auStack_b0 [2];
  int64_t *plStack_a8;
  int8_t auStack_a0 [80];
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  lVar5 = 0;
  plStack_a8 = param_5;
  puStack_d0 = param_1;
  lStack_c8 = param_4;
  if ((((*(int *)(param_2 + 0x30) != 0) || (*(int *)(param_2 + 0x34) != 0)) ||
      (*(int *)(param_2 + 0x38) != 0)) || (*(int *)(param_2 + 0x3c) != 0)) {
    lVar5 = (**(code **)(*(int64_t *)*param_1 + 0x260))((int64_t *)*param_1,param_2 + 0x30,1);
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(param_2 + 0x30,auStack_a0);
    }
    if (lVar5 == 0) {
      plVar6 = (int64_t *)(**(code **)*param_3)(param_3);
      (**(code **)(*plVar6 + 0x20))(plVar6,&uStack_c0);
      uStack_e0 = (uint)bStack_b1;
      uStack_e8 = (uint)bStack_b2;
      uStack_f0 = (uint)bStack_b3;
      uStack_f8 = (uint)bStack_b4;
      uStack_100 = (uint)bStack_b5;
      uStack_108 = (uint)bStack_b6;
      uStack_110 = (uint)bStack_b7;
      uStack_118 = (uint)bStack_b8;
      uStack_120 = (uint)uStack_ba;
      ppuStack_128 = (uint64_t **)CONCAT44(ppuStack_128._4_4_,(uint)uStack_bc);
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_a0,0x27,&processed_var_8960_ptr,uStack_c0);
    }
  }
  auStack_b0[0] = 0;
  auStack_d8[0] = 0;
  plVar6 = (int64_t *)(**(code **)*param_3)(param_3);
  iVar4 = (**(code **)(*plVar6 + 0x10))
                    (plVar6,*(int32_t *)(param_2 + 0x40),auStack_b0,auStack_d8);
  if (iVar4 != 0) goto LAB_1808b7f0f;
  uStack_118 = CONCAT31(uStack_118._1_3_,1);
  uStack_120 = uStack_120 & 0xffffff00;
  ppuStack_128 = (uint64_t **)((uint64_t)ppuStack_128 & 0xffffffff00000000);
  lVar7 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&rendering_buffer_2288_ptr,0x139);
  if (lVar7 == 0) goto LAB_1808b7f0f;
  lVar7 = FUN_1808b62e0(lVar7,param_2,param_3,auStack_d8[0]);
  iVar4 = func_0x0001808b1cd0(lVar7,lVar5);
  puVar2 = puStack_d0;
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x18) != 0) {
      if (lStack_c8 == 0) goto LAB_1808b7ecd;
      for (uVar10 = *(uint64_t *)(param_2 + 0x10);
          (*(uint64_t *)(param_2 + 0x10) <= uVar10 &&
          (uVar10 < (int64_t)*(int *)(param_2 + 0x18) * 0x10 + *(uint64_t *)(param_2 + 0x10)));
          uVar10 = uVar10 + 0x10) {
        ppuStack_128 = &puStack_d0;
        puStack_d0 = (uint64_t *)0x0;
        iVar4 = FUN_1808b74d0(puVar2,uVar10,param_2,lStack_c8);
        if (iVar4 != 0) goto LAB_1808b7ecd;
        puVar9 = puStack_d0 + 6;
        if (puStack_d0 == (uint64_t *)0x0) {
          puVar9 = (uint64_t *)0x0;
        }
        iVar4 = FUN_1808b1b50(lVar7,puVar9);
        if (iVar4 != 0) goto LAB_1808b7ecd;
      }
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar1 = *(int32_t *)(param_2 + 0x40);
      lStack_c8 = 0;
      uVar8 = (**(code **)*param_3)(param_3);
      iVar4 = FUN_1808b86e0(puVar2,uVar8,uVar1,&lStack_c8);
      if ((iVar4 != 0) || (iVar4 = FUN_1808b3850(lVar7,lStack_c8), iVar4 != 0)) goto LAB_1808b7ecd;
    }
    cVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if ((cVar3 == '\0') || (iVar4 = func_0x0001808d7e70(puVar2[1] + 0x2c8,lVar7), iVar4 == 0)) {
      *plStack_a8 = lVar7;
      goto LAB_1808b7f0f;
    }
  }
LAB_1808b7ecd:
  if (lVar7 != 0) {
    FUN_1808b1880(lVar7);
    ppuStack_128 = (uint64_t **)CONCAT71(ppuStack_128._1_7_,1);
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar7,&rendering_buffer_2144_ptr,0xc6);
  }
LAB_1808b7f0f:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_148);
}



uint64_t FUN_1808b7f30(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar1 = *(int64_t *)(param_2 + 0x1d8);
  for (uVar4 = *(uint64_t *)(lVar1 + 0x38);
      (*(uint64_t *)(lVar1 + 0x38) <= uVar4 &&
      (uVar4 < *(uint64_t *)(lVar1 + 0x38) + (int64_t)*(int *)(lVar1 + 0x40) * 0x18));
      uVar4 = uVar4 + 0x18) {
    uVar3 = FUN_1808c7170();
    uVar3 = FUN_18085ed00(param_2,uVar4,uVar3,0,0,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  for (uVar4 = *(uint64_t *)(lVar1 + 0x48);
      (*(uint64_t *)(lVar1 + 0x48) <= uVar4 &&
      (uVar4 < *(uint64_t *)(lVar1 + 0x48) + (int64_t)*(int *)(lVar1 + 0x50) * 0x18));
      uVar4 = uVar4 + 0x18) {
    uVar3 = FUN_1808c7170();
    uVar3 = FUN_18085ed00(param_2,uVar4,uVar3,0,0,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  puVar2 = *(uint64_t **)(lVar1 + 0x68);
  do {
    if (puVar2 == (uint64_t *)(lVar1 + 0x68)) {
      return 0;
    }
    for (uVar4 = puVar2[0x10];
        ((uint64_t)puVar2[0x10] <= uVar4 &&
        (uVar4 < (uint64_t)(puVar2[0x10] + (int64_t)*(int *)(puVar2 + 0x11) * 0x18)));
        uVar4 = uVar4 + 0x18) {
      uVar3 = FUN_1808c7170();
      uVar3 = FUN_18085ed00(param_2,uVar4,uVar3,1,0,0,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    for (uVar4 = puVar2[0x12];
        ((uint64_t)puVar2[0x12] <= uVar4 &&
        (uVar4 < (uint64_t)(puVar2[0x12] + (int64_t)*(int *)(puVar2 + 0x13) * 0x18)));
        uVar4 = uVar4 + 0x18) {
      uVar3 = FUN_1808c7170();
      uVar3 = FUN_18085ed00(param_2,uVar4,uVar3,0,0,0,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    puVar2 = (uint64_t *)*puVar2;
  } while( true );
}



uint64_t FUN_1808b7ff2(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  puVar1 = *(uint64_t **)(unaff_RDI + 0x68);
  do {
    if (puVar1 == (uint64_t *)(unaff_RDI + 0x68)) {
      return 0;
    }
    for (uVar3 = puVar1[0x10];
        ((uint64_t)puVar1[0x10] <= uVar3 &&
        (uVar3 < (uint64_t)(puVar1[0x10] + (int64_t)*(int *)(puVar1 + 0x11) * 0x18)));
        uVar3 = uVar3 + 0x18) {
      FUN_1808c7170();
      uVar2 = FUN_18085ed00();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    for (uVar3 = puVar1[0x12];
        ((uint64_t)puVar1[0x12] <= uVar3 &&
        (uVar3 < (uint64_t)(puVar1[0x12] + (int64_t)*(int *)(puVar1 + 0x13) * 0x18)));
        uVar3 = uVar3 + 0x18) {
      FUN_1808c7170();
      uVar2 = FUN_18085ed00();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}






// 函数: void FUN_1808b80d3(void)
void FUN_1808b80d3(void)

{
  return;
}



int32_t FUN_1808b80f0(int64_t param_1,int param_2)

{
  int iVar1;
  int32_t auStackX_10 [6];
  
  if (param_2 == *(int *)(param_1 + 0x10)) {
    auStackX_10[0] = 0;
    iVar1 = FUN_1808b05f0(*(uint64_t *)(param_1 + 8),*(int *)(param_1 + 0x10),auStackX_10);
    if (iVar1 == 0) {
      return auStackX_10[0];
    }
  }
  return 0;
}



uint64_t FUN_1808b8130(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t *puVar8;
  
  plVar1 = (int64_t *)(param_1 + 0x50);
  while (plVar3 = (int64_t *)*plVar1, plVar3 != plVar1) {
    iVar7 = 0;
    plVar4 = plVar3;
    do {
      plVar4 = (int64_t *)*plVar4;
      iVar7 = iVar7 + 1;
    } while (plVar4 != plVar1);
    if (iVar7 < 1) break;
    plVar4 = (int64_t *)0x0;
    if (plVar3 != plVar1) {
      plVar4 = plVar3;
    }
    plVar3 = plVar1;
    if (plVar4 != (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    uVar5 = FUN_1808b8130(plVar3[2]);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (param_1 == 0) {
    return 0x1f;
  }
  plVar4 = (int64_t *)0x0;
  plVar1 = (int64_t *)(param_1 + 0xa0);
  plVar3 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar3 = plVar4;
  }
  plVar6 = plVar4;
  if (plVar3 != (int64_t *)0x0) {
    plVar6 = plVar3 + 4;
  }
  while (plVar6 != plVar1) {
    plVar3 = plVar6 + -4;
    if (plVar6 == (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    uVar5 = func_0x0001808b5710(plVar3,param_1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (plVar6 == plVar1) break;
    plVar3 = (int64_t *)(*plVar6 + -0x20);
    if (*plVar6 == 0) {
      plVar3 = plVar4;
    }
    plVar6 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar6 = plVar3 + 4;
    }
  }
  plVar1 = (int64_t *)(param_1 + 0x50);
  while ((plVar3 = (int64_t *)*plVar1, plVar3 != plVar1 ||
         (*(int64_t **)(param_1 + 0x58) != plVar1))) {
    if (plVar3 == plVar1) {
      plVar3 = plVar4;
    }
    plVar6 = plVar1;
    if (plVar3 != (int64_t *)0x0) {
      plVar6 = plVar3;
    }
    FUN_180851840(plVar6[2]);
  }
  uVar5 = FUN_18073cdf0(*(uint64_t *)(param_1 + 0x78),0);
  if ((int)uVar5 == 0) {
    for (puVar8 = *(uint64_t **)(param_1 + 0x80);
        (*(uint64_t **)(param_1 + 0x80) <= puVar8 &&
        (puVar8 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar8 = puVar8 + 1
        ) {
      uVar5 = FUN_1808b4c80(*(int64_t *)(param_2 + 0x378) + 0x388,*puVar8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    for (puVar8 = *(uint64_t **)(param_1 + 0x90);
        (*(uint64_t **)(param_1 + 0x90) <= puVar8 &&
        (puVar8 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar8 = puVar8 + 1
        ) {
      uVar5 = FUN_1808b4c80(*(int64_t *)(param_2 + 0x378) + 0x388,*puVar8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar5 = SystemAnalyzer(param_1 + 0x80);
    if (((int)uVar5 == 0) && (uVar5 = SystemAnalyzer(param_1 + 0x90), (int)uVar5 == 0)) {
      lVar2 = *(int64_t *)(param_1 + 0x60);
      uVar5 = FUN_180851840(param_1);
      if ((((int)uVar5 == 0) &&
          (((lVar2 == 0 ||
            (uVar5 = FUN_1808c19d0(*(uint64_t *)(param_1 + 0x38),lVar2), (int)uVar5 == 0)) &&
           (uVar5 = func_0x0001808c1de0(*(uint64_t *)(param_2 + 0x378),param_1), (int)uVar5 == 0))
          )) && ((uVar5 = func_0x000180853810(*(uint64_t *)(param_2 + 0x378),param_1),
                 (int)uVar5 == 0 &&
                 (uVar5 = FUN_180853560(*(uint64_t *)(param_2 + 0x370),param_1), (int)uVar5 == 0))
                )) {
        plVar1 = (int64_t *)(param_1 + 0xb0);
        while (((int64_t *)*plVar1 != plVar1 || (*(int64_t **)(param_1 + 0xb8) != plVar1))) {
          uVar5 = FUN_1808c4370(((int64_t *)*plVar1)[2],param_1,0);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = FUN_1808c1c20(*(uint64_t *)(param_2 + 0x378));
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        uVar5 = FUN_1808b1f70(param_1);
        if ((int)uVar5 == 0) {
          lVar2 = *(int64_t *)(param_1 + 0x48);
          if (lVar2 != 0) {
            if (*(int64_t *)(lVar2 + 8) != param_1) {
              return 0x1c;
            }
            FUN_18088c9b0(lVar2,0);
          }
          if (((*(short *)(*(int64_t *)(param_1 + 0x40) + 0xc) != 2) ||
              (uVar5 = FUN_180740d90(*(uint64_t *)(param_1 + 0x68)), (int)uVar5 == 0)) &&
             (uVar5 = FUN_18073f710(*(uint64_t *)(param_1 + 0x78)), (int)uVar5 == 0)) {
            func_0x0001808bef10(*(uint64_t *)(param_2 + 0x378),param_1);
            uVar5 = 0;
          }
        }
      }
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b81c0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar1 = NetworkSystem_ProtocolHandler(param_2 + 0x378);
  if (((((int)uVar1 == 0) && (uVar1 = NetworkSystem_ProtocolHandler(param_2 + 0x3f8), (int)uVar1 == 0)) &&
      (uVar1 = thunk_FUN_180865550(param_2), (int)uVar1 == 0)) &&
     (uVar1 = FUN_18085ff70(param_2), (int)uVar1 == 0)) {
    if (*(int64_t *)(param_2 + 0x80) != 0) {
      uVar1 = FUN_180867d60();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int64_t *)(param_2 + 0x80) != 0) {
        return 0x1c;
      }
    }
    if (*(int64_t *)(param_2 + 0x350) != 0) {
      uVar1 = func_0x0001808cd390(*(int64_t *)(param_2 + 0x350),param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(uint64_t *)(param_2 + 0x350) = 0;
    }
    if ((*(int64_t *)(param_2 + 0x2d0) != 0) &&
       (uVar1 = func_0x0001808c16c0(*(int64_t *)(param_2 + 0x2d0),param_2,
                                    *(uint64_t *)(param_1 + 0x10)), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = FUN_1808b83b0(param_1,param_2);
    if ((int)uVar1 == 0) {
      lVar2 = *(int64_t *)(param_2 + 0x2b8);
      if (lVar2 != 0) {
        if ((*(uint *)(param_2 + 0x2d8) >> 6 & 1) != 0) {
          uVar1 = FUN_1808538a0(lVar2,param_2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          *(uint *)(param_2 + 0x2d8) = *(uint *)(param_2 + 0x2d8) & 0xffffffbf;
          lVar2 = *(int64_t *)(param_2 + 0x2b8);
        }
        uVar1 = FUN_1808c19d0(*(uint64_t *)(param_1 + 0x10),lVar2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = FUN_1808b8130(*(uint64_t *)(param_2 + 0x2b0),*(uint64_t *)(param_1 + 0x10));
      if ((int)uVar1 == 0) {
        *(uint64_t *)(param_2 + 0x2b0) = 0;
        uVar1 = FUN_1808b9030(*(uint64_t *)(param_1 + 8),param_2);
        if (((int)uVar1 == 0x1f) || ((int)uVar1 == 0)) {
          FUN_1808559c0(param_2 + 200);
          (**(code **)(*(int64_t *)(param_2 + 8) + 0x28))(param_2 + 8,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&rendering_buffer_2288_ptr,0x4c4,1);
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808b83b0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  plVar8 = (int64_t *)0x0;
  plVar5 = (int64_t *)(param_2 + 0x240);
  plVar3 = (int64_t *)(*plVar5 + -0x18);
  if (*plVar5 == 0) {
    plVar3 = plVar8;
  }
  plVar6 = plVar8;
  if (plVar3 != (int64_t *)0x0) {
    plVar6 = plVar3 + 3;
  }
  while( true ) {
    if (plVar6 == plVar5) {
      lVar1 = *(int64_t *)(param_2 + 0x250);
      plVar5 = (int64_t *)(lVar1 + -8);
      if (lVar1 == 0) {
        plVar5 = plVar8;
      }
      plVar3 = plVar8;
      if (plVar5 != (int64_t *)0x0) {
        plVar3 = plVar5 + 1;
      }
      while( true ) {
        if (plVar3 == (int64_t *)(param_2 + 0x250)) {
          return 0;
        }
        lVar1 = *plVar3;
        plVar5 = plVar3 + -1;
        if (plVar3 == (int64_t *)0x0) {
          plVar5 = plVar8;
        }
        plVar6 = (int64_t *)(lVar1 + -8);
        if (lVar1 == 0) {
          plVar6 = plVar8;
        }
        plVar7 = plVar8;
        if (plVar6 != (int64_t *)0x0) {
          plVar7 = plVar6 + 1;
        }
        *(int64_t *)plVar3[1] = lVar1;
        *(int64_t *)(*plVar3 + 8) = plVar3[1];
        plVar3[1] = (int64_t)plVar3;
        *plVar3 = (int64_t)plVar3;
        if (plVar5 == (int64_t *)0x0) break;
        uVar2 = FUN_1808c1e30(*(uint64_t *)(param_2 + 0x98),plVar5);
        plVar3 = plVar7;
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      return 0x1f;
    }
    plVar3 = plVar6 + -3;
    if (plVar6 == (int64_t *)0x0) {
      plVar3 = plVar8;
    }
    if (plVar6 == plVar5) break;
    lVar1 = *plVar6;
    plVar7 = (int64_t *)(lVar1 + -0x18);
    if (lVar1 == 0) {
      plVar7 = plVar8;
    }
    plVar4 = plVar8;
    if (plVar7 != (int64_t *)0x0) {
      plVar4 = plVar7 + 3;
    }
    *(int64_t *)plVar6[1] = lVar1;
    *(int64_t *)(*plVar6 + 8) = plVar6[1];
    plVar6[1] = (int64_t)plVar6;
    *plVar6 = (int64_t)plVar6;
    FUN_1808bef40(*(uint64_t *)(param_1 + 0x10),plVar3);
    plVar6 = plVar4;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b8520(int64_t param_1,uint64_t param_2)
void FUN_1808b8520(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_1808d9230(*(int64_t *)(param_1 + 8) + 0x2c8);
  if (iVar1 == 0) {
    FUN_1808b1880(param_2);
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&rendering_buffer_2288_ptr,0x161,1);
  }
  return;
}



uint64_t * FUN_1808b8590(uint64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  int64_t lStack_18;
  int64_t lStack_10;
  
  puVar1 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar1 == param_1) {
      return (uint64_t *)0x0;
    }
    (**(code **)(*(int64_t *)puVar1[6] + 0x20))((int64_t *)puVar1[6],&lStack_18);
    if (((lStack_18 == *param_2) && (lStack_10 == param_2[1])) &&
       (*(int *)(puVar1[7] + 0x40) == param_3)) break;
    if (puVar1 == param_1) {
      return (uint64_t *)0x0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




