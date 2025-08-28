#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part543.c - 12 个函数

// 函数: void FUN_1805655d2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805655d2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t in_RAX;
  uint64_t *puVar6;
  int32_t uVar7;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar8;
  uint64_t unaff_RDI;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t *unaff_R12;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t lVar11;
  int64_t unaff_R15;
  float fVar12;
  int32_t unaff_XMM6_Da;
  float fVar13;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x70) = 0;
  *(int32_t *)(in_RAX + -0x6c) = 0x7f7fffff;
  lVar11 = unaff_R15 * 0xc;
  do {
    lVar8 = 0;
    fVar13 = 3.4028235e+38;
    cVar1 = *(char *)unaff_R12[3];
    uVar2 = *(uint *)unaff_R12[2];
    lVar3 = *(int64_t *)*unaff_R12;
    lVar9 = lVar8;
    if (*(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0) {
      puVar6 = (uint64_t *)
               func_0x000180388c90(lVar3 + 0x28c8,&stack0x00000020,param_3,param_4,
                                   *(int32_t *)(*(int64_t *)unaff_R12[1] + unaff_R15 * 8));
      plVar4 = (int64_t *)puVar6[1];
      for (plVar10 = (int64_t *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1) {
        lVar9 = *plVar10;
        if (((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
             ((*(uint *)(lVar9 + 0x134) & 1) != 0)) && ((*(byte *)(lVar9 + 0x139) & 1) != 0)) &&
           (((*(byte *)(lVar9 + 0x139) & 2) == 0 &&
            (cVar5 = FUN_18038d0a0(lVar9,&stack0x00000020), cVar5 != '\0')))) {
          if (cVar1 != '\0') break;
          fVar12 = (float)func_0x00018038d2f0(lVar9,&stack0x00000020);
          fVar12 = ABS(fVar12);
          if ((fVar12 < 100.0) && (fVar12 < fVar13)) {
            lVar8 = lVar9;
            fVar13 = fVar12;
          }
        }
      }
    }
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 300);
    }
    *(int32_t *)(lVar11 + *(int64_t *)unaff_R12[4]) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x130);
    }
    *(int32_t *)(*(int64_t *)unaff_R12[4] + 4 + lVar11) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x128);
    }
    unaff_R15 = unaff_R15 + 1;
    *(int32_t *)(*(int64_t *)unaff_R12[4] + 8 + lVar11) = uVar7;
    lVar11 = lVar11 + 0xc;
    if (unaff_R13 <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1805657c1(void)
void FUN_1805657c1(void)

{
  return;
}





// 函数: void FUN_1805657d0(uint64_t *param_1,int param_2,int param_3)
void FUN_1805657d0(uint64_t *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  
  lVar12 = (int64_t)param_2;
  if (lVar12 < param_3) {
    uStack_70 = 0;
    uStack_6c = 0x7f7fffff;
    lVar11 = lVar12 * 0xc;
    do {
      lVar8 = 0;
      fVar14 = 3.4028235e+38;
      cVar1 = *(char *)param_1[3];
      uStack_78 = *(int32_t *)(*(int64_t *)param_1[1] + lVar12 * 8);
      uVar2 = *(uint *)param_1[2];
      uStack_74 = *(int32_t *)(*(int64_t *)param_1[1] + 4 + lVar12 * 8);
      lVar3 = *(int64_t *)*param_1;
      lVar9 = lVar8;
      if (*(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0) {
        puVar6 = (uint64_t *)func_0x000180388c90(lVar3 + 0x28c8,&uStack_78);
        plVar4 = (int64_t *)puVar6[1];
        for (plVar10 = (int64_t *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1)
        {
          lVar9 = *plVar10;
          if ((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
              ((*(uint *)(lVar9 + 0x134) & 1) != 0)) &&
             (cVar5 = FUN_18038d0a0(lVar9,&uStack_78), cVar5 != '\0')) {
            if (cVar1 != '\0') break;
            fVar13 = (float)func_0x00018038d2f0(lVar9,&uStack_78);
            fVar13 = ABS(fVar13);
            if ((fVar13 < 100.0) && (fVar13 < fVar14)) {
              lVar8 = lVar9;
              fVar14 = fVar13;
            }
          }
        }
      }
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 300);
      }
      *(int32_t *)(lVar11 + *(int64_t *)param_1[4]) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 0x130);
      }
      *(int32_t *)(*(int64_t *)param_1[4] + 4 + lVar11) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 0x128);
      }
      lVar12 = lVar12 + 1;
      *(int32_t *)(*(int64_t *)param_1[4] + 8 + lVar11) = uVar7;
      lVar11 = lVar11 + 0xc;
    } while (lVar12 < param_3);
  }
  return;
}





// 函数: void FUN_1805657f2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805657f2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t in_RAX;
  uint64_t *puVar6;
  int32_t uVar7;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar8;
  uint64_t unaff_RDI;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t *unaff_R12;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t lVar11;
  int64_t unaff_R15;
  float fVar12;
  int32_t unaff_XMM6_Da;
  float fVar13;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x70) = 0;
  *(int32_t *)(in_RAX + -0x6c) = 0x7f7fffff;
  lVar11 = unaff_R15 * 0xc;
  do {
    lVar8 = 0;
    fVar13 = 3.4028235e+38;
    cVar1 = *(char *)unaff_R12[3];
    uVar2 = *(uint *)unaff_R12[2];
    lVar3 = *(int64_t *)*unaff_R12;
    lVar9 = lVar8;
    if (*(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0) {
      puVar6 = (uint64_t *)
               func_0x000180388c90(lVar3 + 0x28c8,&stack0x00000020,param_3,param_4,
                                   *(int32_t *)(*(int64_t *)unaff_R12[1] + unaff_R15 * 8));
      plVar4 = (int64_t *)puVar6[1];
      for (plVar10 = (int64_t *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1) {
        lVar9 = *plVar10;
        if ((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
            ((*(uint *)(lVar9 + 0x134) & 1) != 0)) &&
           (cVar5 = FUN_18038d0a0(lVar9,&stack0x00000020), cVar5 != '\0')) {
          if (cVar1 != '\0') break;
          fVar12 = (float)func_0x00018038d2f0(lVar9,&stack0x00000020);
          fVar12 = ABS(fVar12);
          if ((fVar12 < 100.0) && (fVar12 < fVar13)) {
            lVar8 = lVar9;
            fVar13 = fVar12;
          }
        }
      }
    }
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 300);
    }
    *(int32_t *)(lVar11 + *(int64_t *)unaff_R12[4]) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x130);
    }
    *(int32_t *)(*(int64_t *)unaff_R12[4] + 4 + lVar11) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x128);
    }
    unaff_R15 = unaff_R15 + 1;
    *(int32_t *)(*(int64_t *)unaff_R12[4] + 8 + lVar11) = uVar7;
    lVar11 = lVar11 + 0xc;
    if (unaff_R13 <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1805659d1(void)
void FUN_1805659d1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805659e0(int64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
void FUN_1805659e0(int64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  float fVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  
  if (param_1 != 0) {
    *(int8_t *)(param_1 + 0x60c60) = 0;
    FUN_180199500(param_1,render_system_control_memory,1);
    FUN_1800b5ac0(system_error_code % 1000000000,&plStackX_8,
                  (float)(system_error_code % 1000000000) * 0.00012);
    if (0 < param_4) {
      lVar5 = 0;
      do {
        plVar4 = plStackX_8;
        fVar3 = render_system_control_memory;
        lVar1 = *(int64_t *)(param_3 + lVar5 * 8);
        *(float *)(lVar1 + 0x2a8) =
             render_system_control_memory * *(float *)(lVar1 + 0x2b0) + *(float *)(lVar1 + 0x2a8);
        *(float *)(lVar1 + 0x2ac) = fVar3 * *(float *)(lVar1 + 0x2b4) + *(float *)(lVar1 + 0x2ac);
        lVar1 = *(int64_t *)(lVar1 + 0x1b8);
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
        }
        plVar2 = *(int64_t **)(lVar1 + 200);
        *(int64_t **)(lVar1 + 200) = plVar4;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        FUN_18022ce40(lVar1);
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_4);
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565b70(int64_t param_1,int param_2)
void FUN_180565b70(int64_t param_1,int param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t *puVar5;
  int64_t *plStackX_18;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(render_system_memory + 0x10 + (int64_t)param_2 * 0x14), iVar1 != render_system_memory))
  {
    if ((render_system_memory != (int64_t *)0x0) &&
       ((cVar4 = (**(code **)(*render_system_memory + 0xd8))(), cVar4 != '\0' &&
        (cVar4 = (**(code **)(*render_system_memory + 0x80))(), cVar4 != '\0')))) {
      (**(code **)(*render_system_memory + 0x68))();
    }
    puVar5 = (uint64_t *)FUN_180157b70();
    plVar2 = (int64_t *)*puVar5;
    *puVar5 = 0;
    if (render_system_memory != (int64_t *)0x0) {
      lVar3 = *render_system_memory;
      render_system_memory = plVar2;
      (**(code **)(lVar3 + 0x38))();
      plVar2 = render_system_memory;
    }
    render_system_memory = plVar2;
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    (**(code **)(*render_system_memory + 0x60))();
    render_system_memory = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565c60(int param_1,byte param_2)
void FUN_180565c60(int param_1,byte param_2)

{
  int aiStack_28 [10];
  
  aiStack_28[2] = 0;
  aiStack_28[3] = 0;
  if (param_1 == 0) {
    aiStack_28[1] = 0xe0;
  }
  else if (param_1 == 1) {
    aiStack_28[1] = 0xe1;
  }
  else if (param_1 == 2) {
    aiStack_28[1] = 0xe2;
  }
  aiStack_28[0] = (param_2 ^ 1) + 1;
  FUN_180567600(system_operation_state + 0x10,aiStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565cc0(int param_1,int param_2)
void FUN_180565cc0(int param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint uVar10;
  uint uVar11;
  int64_t *plStackX_20;
  uint64_t uStack_28;
  int64_t *plStack_20;
  uint64_t uStack_18;
  
  plStack_20 = (int64_t *)0x0;
  uStack_28 = uStack_28 & 0xffffffff00000000;
  uStack_18 = (int64_t *)
              CONCAT44((int)((float)param_2 -
                            *(float *)(system_operation_state + 0x17f0) *
                            *(float *)(system_operation_state + 0x17e4)),
                       (int)((float)param_1 -
                            *(float *)(system_operation_state + 0x17ec) *
                            *(float *)(system_operation_state + 0x17e0)));
  FUN_180567600(system_operation_state + 0x10,&uStack_28);
  uStack_28 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(system_main_module_state + 8);
  uVar7 = (uint64_t)(*(uint *)(lVar1 + 0x13c) & 1);
  lVar2 = *(int64_t *)(system_main_module_state + 8);
  uVar8 = (uint64_t)(*(uint *)(lVar2 + 0x13c) & 1);
  uVar5 = param_1 - (*(int *)(lVar1 + 0xc0 + uVar7 * 0x48) - *(int *)(lVar2 + 0xec + uVar8 * 0x48));
  uVar10 = (int)uVar5 >> 0x1f;
  uVar6 = param_2 - (*(int *)(lVar1 + 0xc4 + uVar7 * 0x48) - *(int *)(lVar2 + 0xf0 + uVar8 * 0x48));
  uVar11 = (int)uVar6 >> 0x1f;
  if ((0 < (int)((uVar5 ^ uVar10) - uVar10)) || (0 < (int)((uVar6 ^ uVar11) - uVar11))) {
    lVar2 = *(int64_t *)(system_main_module_state + 8);
    plVar9 = (int64_t *)
             FUN_18062b1e0(system_memory_pool_ptr,0x48,8,CONCAT71((int7)((uint64_t)lVar1 >> 8),3));
    *plVar9 = (int64_t)&system_handler1_ptr;
    *plVar9 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar9 + 1) = 0;
    *plVar9 = (int64_t)&unknown_var_1000_ptr;
    LOCK();
    *(int8_t *)(plVar9 + 2) = 0;
    UNLOCK();
    plVar9[3] = -1;
    *plVar9 = (int64_t)&unknown_var_2640_ptr;
    *(int32_t *)(plVar9 + 5) = 5;
    plVar9[4] = lVar2;
    plStack_20 = plVar9;
    uStack_18 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    plVar9[6] = CONCAT44(param_2,param_1);
    puVar3 = *(uint64_t **)(lVar2 + 0x140);
    pcVar4 = *(code **)*puVar3;
    plStackX_20 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    (*pcVar4)(puVar3,&plStackX_20);
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565d50(int64_t param_1,int64_t *param_2,int64_t param_3)
void FUN_180565d50(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  char cVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int8_t *puVar9;
  int8_t auStack_158 [32];
  uint64_t **ppuStack_138;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t **pplStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t **pplStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  uint64_t uStack_e8;
  int64_t alStack_d8 [2];
  int16_t uStack_c8;
  int8_t uStack_c6;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  int32_t uStack_7c;
  int16_t uStack_78;
  int32_t uStack_76;
  int8_t uStack_72;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  if (param_1 == 0) {
    return;
  }
  uStack_e8 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lVar8 = 0;
  alStack_d8[0] = 0;
  alStack_d8[1] = 0;
  uStack_c8 = 0;
  uStack_c6 = 3;
  uStack_76 = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_72 = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  plStack_128 = (int64_t *)0x0;
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  uStack_58 = 0;
  auStack_50[0] = 0;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_58 = (int32_t)lVar2;
    strcpy_s(auStack_50,0x20);
  }
  plVar3 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_120,&puStack_68,1);
  plVar3 = (int64_t *)*plVar3;
  if (plVar3 != (int64_t *)0x0) {
    plStack_110 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStack_110 = plStack_128;
  if (plStack_128 != (int64_t *)0x0) {
    lVar2 = *plStack_128;
    plStack_128 = plVar3;
    (**(code **)(lVar2 + 0x38))();
    plVar3 = plStack_128;
  }
  plStack_128 = plVar3;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  puStack_68 = &system_state_ptr;
  plStack_120 = alStack_d8;
  pplStack_118 = &plStack_128;
  pcStack_f8 = (code *)&unknown_var_7792_ptr;
  pcStack_f0 = FUN_180567730;
  ppuStack_138 = &plStack_108;
  plStack_108 = plStack_120;
  pplStack_100 = pplStack_118;
  cVar1 = (**(code **)(**(int64_t **)(plStack_128[0x15] + 0x88) + 0x60))
                    (*(int64_t **)(plStack_128[0x15] + 0x88),&system_data_1050,plStack_128[0x15] + 0xc
                     ,0);
  if (pcStack_f8 != (code *)0x0) {
    (*pcStack_f8)(&plStack_108,0,0);
  }
  if (cVar1 != '\0') {
    if (uStack_7c._2_2_ != 0) {
      puVar9 = (int8_t *)
               (alStack_d8[0] + (int64_t)(int)((uStack_7c._2_2_ - 1) * (uStack_7c & 0xffff)) * 4);
      uVar6 = (uint64_t)uStack_7c._2_2_;
      do {
        if ((uStack_7c & 0xffff) != 0) {
          puVar5 = (int8_t *)(*param_2 + lVar8);
          puVar4 = puVar9;
          uVar7 = (uint64_t)(ushort)uStack_7c;
          do {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar8 = lVar8 + (int)(uStack_7c & 0xffff);
        puVar9 = puVar9 + (int64_t)(int)-(uStack_7c & 0xffff) * 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (uStack_c8._1_1_ == '\0') {
    if (((char)uStack_c8 == '\0') && (alStack_d8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_d8[0] = 0;
    uStack_c8 = 0;
    alStack_d8[1] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180566010(int64_t param_1,uint *param_2,uint *param_3)
void FUN_180566010(int64_t param_1,uint *param_2,uint *param_3)

{
  int64_t *plVar1;
  int8_t auStack_138 [32];
  int64_t *plStack_118;
  int64_t *plStack_110;
  int64_t *aplStack_108 [2];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  ushort uStack_e8;
  int8_t uStack_e6;
  uint64_t uStack_e4;
  uint64_t uStack_dc;
  uint64_t uStack_d4;
  uint64_t uStack_cc;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  int32_t uStack_9c;
  int16_t uStack_98;
  int32_t uStack_96;
  int8_t uStack_92;
  uint64_t uStack_88;
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  
  if (param_1 == 0) {
    return;
  }
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e6 = 3;
  uStack_96 = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_92 = 0;
  uStack_e4 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  plStack_110 = (int64_t *)0x0;
  puStack_80 = &unknown_var_672_ptr;
  puStack_78 = auStack_68;
  auStack_68[0] = 0;
  uStack_70 = 0x1a;
  strcpy_s(auStack_68,0x20,&unknown_var_8592_ptr);
  plVar1 = (int64_t *)FUN_1800b08e0(system_resource_state,aplStack_108,&puStack_80,1);
  plVar1 = (int64_t *)*plVar1;
  if (plVar1 != (int64_t *)0x0) {
    plStack_118 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStack_118 = (int64_t *)0x0;
  plStack_110 = plVar1;
  if (aplStack_108[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_108[0] + 0x38))();
  }
  puStack_80 = &system_state_ptr;
  *param_2 = (uint)*(ushort *)((int64_t)plVar1 + 0x32c);
  *param_3 = (uint)*(ushort *)((int64_t)plVar1 + 0x32e);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = uStack_e8 & 0xff00;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805661a0(int64_t param_1,int64_t *param_2)
void FUN_1805661a0(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int8_t *puVar9;
  int8_t auStack_118 [32];
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  uint64_t uStack_e0;
  int64_t lStack_d8;
  uint64_t uStack_d0;
  int16_t uStack_c8;
  int8_t uStack_c6;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  int32_t uStack_7c;
  int16_t uStack_78;
  int32_t uStack_76;
  char cStack_72;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  if (param_1 == 0) {
    return;
  }
  uStack_e0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  lVar8 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c6 = 3;
  uStack_76 = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  cStack_72 = '\0';
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  plStack_f0 = (int64_t *)0x0;
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x1a;
  strcpy_s(auStack_50,0x20,&unknown_var_8592_ptr);
  plVar2 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_e8,&puStack_68,1);
  plVar2 = (int64_t *)*plVar2;
  if (plVar2 != (int64_t *)0x0) {
    plStack_f8 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_f8 = (int64_t *)0x0;
  plStack_f0 = plVar2;
  if (plStack_e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  puStack_68 = &system_state_ptr;
  cVar1 = FUN_18023cbe0(plVar2,&lStack_d8);
  if (cVar1 != '\0') {
    if ((cStack_72 == '\0') && ((char)uStack_c8 != '\0')) {
      uVar3 = FUN_18062b420(system_memory_pool_ptr,uStack_d0,3);
                    // WARNING: Subroutine does not return
      memcpy(uVar3,lStack_d8,uStack_d0);
    }
    if (uStack_7c._2_2_ != 0) {
      puVar9 = (int8_t *)
               (lStack_d8 + (int64_t)(int)((uStack_7c._2_2_ - 1) * (uStack_7c & 0xffff)) * 4);
      uVar6 = (uint64_t)uStack_7c._2_2_;
      do {
        if ((uStack_7c & 0xffff) != 0) {
          puVar5 = (int8_t *)(*param_2 + lVar8);
          puVar4 = puVar9;
          uVar7 = (uint64_t)(ushort)uStack_7c;
          do {
            *puVar5 = *puVar4;
            puVar5[1] = puVar4[1];
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 2;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar8 = lVar8 + (int64_t)(int)(uStack_7c & 0xffff) * 2;
        puVar9 = puVar9 + (int64_t)(int)-(uStack_7c & 0xffff) * 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if (uStack_c8._1_1_ == '\0') {
    if (((char)uStack_c8 == '\0') && (lStack_d8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_d8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



