#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part056.c - 5 个函数

// 函数: void FUN_1808ccd80(void)
void FUN_1808ccd80(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t unaff_R13;
  uint64_t *unaff_R14;
  int64_t *plVar9;
  int32_t extraout_XMM0_Da;
  int64_t in_stack_00000030;
  int64_t in_stack_00000038;
  int64_t in_stack_00000040;
  int64_t in_stack_00000048;
  int32_t in_stack_00000050;
  uint64_t in_stack_00000098;
  
  plVar7 = (int64_t *)0x0;
  for (plVar9 = *(int64_t **)(unaff_R13 + 0xd8);
      (uVar2 = in_stack_00000098, *(int64_t **)(unaff_R13 + 0xd8) <= plVar9 &&
      (plVar9 < (int64_t *)
                ((int64_t)*(int64_t **)(unaff_R13 + 0xd8) +
                (int64_t)*(int *)(unaff_R13 + 0xe0) * 0x14)));
      plVar9 = (int64_t *)((int64_t)plVar9 + 0x14)) {
    lVar4 = (**(code **)*unaff_R14)();
    if (0 < *(int *)(lVar4 + 0xe0)) {
      plVar6 = plVar7;
      do {
        in_stack_00000040 = *plVar9;
        in_stack_00000048 = plVar9[1];
        iVar3 = (int)plVar6;
        in_stack_00000050 = 0x3f800000;
        if ((*(int64_t *)(*(int64_t *)(lVar4 + 0xd8) + (int64_t)iVar3 * 0x14) ==
             in_stack_00000040) &&
           (*(int64_t *)(*(int64_t *)(lVar4 + 0xd8) + 8 + (int64_t)iVar3 * 0x14) ==
            in_stack_00000048)) goto LAB_1808ccf2c;
        plVar6 = (int64_t *)(uint64_t)(iVar3 + 1U);
      } while ((int)(iVar3 + 1U) < *(int *)(lVar4 + 0xe0));
    }
    plVar6 = unaff_R14 + 0x24;
    plVar8 = (int64_t *)(*plVar6 + -0x20);
    if (*plVar6 == 0) {
      plVar8 = plVar7;
    }
    plVar1 = plVar7;
    if (plVar8 != (int64_t *)0x0) {
      plVar1 = plVar8 + 4;
    }
    while (plVar1 != plVar6) {
      plVar8 = plVar1 + -4;
      if (plVar1 == (int64_t *)0x0) {
        plVar8 = plVar7;
      }
      plVar5 = (int64_t *)(**(code **)*plVar8)(plVar8);
      (**(code **)(*plVar5 + 0x30))(plVar5,&stack0x00000030);
      if ((in_stack_00000030 == *plVar9) && (in_stack_00000038 == plVar9[1])) {
        if (plVar1 != plVar6) {
          *(int64_t *)plVar1[1] = *plVar1;
          *(int64_t *)(*plVar1 + 8) = plVar1[1];
          plVar1[1] = (int64_t)plVar1;
          *plVar1 = (int64_t)plVar1;
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,&unknown_var_5904_ptr,0xec9,1);
        }
        break;
      }
      if (plVar1 == plVar6) break;
      plVar8 = (int64_t *)(*plVar1 + -0x20);
      if (*plVar1 == 0) {
        plVar8 = plVar7;
      }
      plVar1 = plVar7;
      if (plVar8 != (int64_t *)0x0) {
        plVar1 = plVar8 + 4;
      }
    }
LAB_1808ccf2c:
  }
  plVar6 = (int64_t *)0x0;
  FUN_1808c8f30(in_stack_00000098,unaff_R14 + 0x30);
  plVar9 = unaff_R14 + 0x24;
  plVar7 = (int64_t *)(*plVar9 + -0x20);
  if (*plVar9 == 0) {
    plVar7 = plVar6;
  }
  plVar8 = plVar6;
  if (plVar7 != (int64_t *)0x0) {
    plVar8 = plVar7 + 4;
  }
  while (plVar8 != plVar9) {
    plVar7 = plVar8 + -4;
    if (plVar8 == (int64_t *)0x0) {
      plVar7 = plVar6;
    }
    iVar3 = (**(code **)(*plVar7 + 0xb0))(plVar7,uVar2);
    if (iVar3 != 0) {
      return;
    }
    if (plVar8 == plVar9) break;
    plVar7 = (int64_t *)(*plVar8 + -0x20);
    if (*plVar8 == 0) {
      plVar7 = plVar6;
    }
    plVar8 = plVar6;
    if (plVar7 != (int64_t *)0x0) {
      plVar8 = plVar7 + 4;
    }
  }
  iVar3 = FUN_1808cad80(unaff_R14 + 0x23,unaff_R14 + 0x3a,unaff_R14 + 0x37);
  if (iVar3 == 0) {
    FUN_1808cc510(extraout_XMM0_Da,uVar2);
  }
  return;
}






// 函数: void FUN_1808ccf47(void)
void FUN_1808ccf47(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *unaff_RBP;
  int64_t unaff_R14;
  
  FUN_1808c8f30();
  plVar1 = (int64_t *)(unaff_R14 + 0x120);
  plVar4 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar4 = unaff_RBP;
  }
  plVar2 = unaff_RBP;
  if (plVar4 != (int64_t *)0x0) {
    plVar2 = plVar4 + 4;
  }
  while (plVar2 != plVar1) {
    plVar4 = plVar2 + -4;
    if (plVar2 == (int64_t *)0x0) {
      plVar4 = unaff_RBP;
    }
    iVar3 = (**(code **)(*plVar4 + 0xb0))();
    if (iVar3 != 0) {
      return;
    }
    if (plVar2 == plVar1) break;
    plVar4 = (int64_t *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar4 = unaff_RBP;
    }
    plVar2 = unaff_RBP;
    if (plVar4 != (int64_t *)0x0) {
      plVar2 = plVar4 + 4;
    }
  }
  iVar3 = FUN_1808cad80(unaff_R14 + 0x118,unaff_R14 + 0x1d0,unaff_R14 + 0x1b8);
  if (iVar3 == 0) {
    FUN_1808cc510();
  }
  return;
}






// 函数: void FUN_1808ccf78(void)
void FUN_1808ccf78(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  
  plVar1 = (int64_t *)(unaff_RBX + 0x20);
  while (plVar1 != unaff_RDI) {
    plVar3 = plVar1 + -4;
    if (plVar1 == (int64_t *)0x0) {
      plVar3 = unaff_RBP;
    }
    iVar2 = (**(code **)(*plVar3 + 0xb0))();
    if (iVar2 != 0) {
      return;
    }
    if (plVar1 == unaff_RDI) break;
    plVar3 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar3 = unaff_RBP;
    }
    plVar1 = unaff_RBP;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 4;
    }
  }
  iVar2 = FUN_1808cad80(unaff_R14 + 0x118,unaff_R14 + 0x1d0,unaff_R14 + 0x1b8);
  if (iVar2 == 0) {
    FUN_1808cc510();
  }
  return;
}



uint64_t FUN_1808cd010(int64_t *param_1,uint *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  
  uVar5 = FUN_1808cabf0();
  if ((int)uVar5 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar8 = (int64_t)
            (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar13 = (int *)(*param_1 + lVar8 * 4);
    iVar3 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar3 != -1) {
      lVar8 = param_1[2];
      do {
        lVar9 = (int64_t)iVar3 * 0x1c;
        if ((*(int64_t *)(lVar9 + lVar8) == *(int64_t *)param_2) &&
           (*(int64_t *)(lVar9 + 8 + lVar8) == *(int64_t *)(param_2 + 2))) {
          return 0x1c;
        }
        piVar13 = (int *)(lVar8 + 0x10 + lVar9);
        iVar3 = *piVar13;
      } while (iVar3 != -1);
    }
    iVar3 = (int)param_1[4];
    if (iVar3 == -1) {
      iVar3 = (int)param_1[3];
      uVar11 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      uVar1 = *(uint64_t *)param_2;
      uVar2 = *(uint64_t *)(param_2 + 2);
      uVar5 = *param_3;
      iVar4 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar11) - uVar11;
      iVar7 = iVar3 + 1;
      if (iVar4 < iVar7) {
        iVar12 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar7;
        if (iVar7 <= iVar12) {
          iVar4 = iVar12;
        }
        if (iVar4 < 2) {
          iVar12 = 2;
        }
        else if (iVar12 < iVar7) {
          iVar12 = iVar7;
        }
        uVar6 = FUN_180859470(param_1 + 2,iVar12);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      puVar10 = (uint64_t *)((int64_t)(int)param_1[3] * 0x1c + param_1[2]);
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      *(int32_t *)(puVar10 + 2) = 0xffffffff;
      *(uint64_t *)((int64_t)puVar10 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar10 = (uint64_t *)((int64_t)iVar3 * 0x1c + param_1[2]);
      *(int32_t *)(param_1 + 4) = *(int32_t *)(puVar10 + 2);
      *(int32_t *)(puVar10 + 2) = 0xffffffff;
      uVar5 = *(uint64_t *)(param_2 + 2);
      *puVar10 = *(uint64_t *)param_2;
      puVar10[1] = uVar5;
      *(uint64_t *)((int64_t)puVar10 + 0x14) = *param_3;
    }
    *piVar13 = iVar3;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_1808cd032(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint uVar11;
  int iVar12;
  uint *unaff_RBX;
  int64_t *unaff_RSI;
  int *piVar13;
  uint64_t *unaff_R15;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar8 = (int64_t)(int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) & in_EAX - 1U);
  piVar13 = (int *)(*unaff_RSI + lVar8 * 4);
  iVar4 = *(int *)(*unaff_RSI + lVar8 * 4);
  if (iVar4 != -1) {
    lVar8 = unaff_RSI[2];
    do {
      lVar9 = (int64_t)iVar4 * 0x1c;
      if ((*(int64_t *)(lVar9 + lVar8) == *(int64_t *)unaff_RBX) &&
         (*(int64_t *)(lVar9 + 8 + lVar8) == *(int64_t *)(unaff_RBX + 2))) {
        return 0x1c;
      }
      piVar13 = (int *)(lVar8 + 0x10 + lVar9);
      iVar4 = *piVar13;
    } while (iVar4 != -1);
  }
  iVar4 = (int)unaff_RSI[4];
  if (iVar4 == -1) {
    iVar4 = (int)unaff_RSI[3];
    uVar11 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    uVar2 = *(uint64_t *)unaff_RBX;
    uVar3 = *(uint64_t *)(unaff_RBX + 2);
    uVar1 = *unaff_R15;
    iVar5 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar11) - uVar11;
    iVar7 = iVar4 + 1;
    if (iVar5 < iVar7) {
      iVar12 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar7;
      if (iVar7 <= iVar12) {
        iVar5 = iVar12;
      }
      if (iVar5 < 2) {
        iVar12 = 2;
      }
      else if (iVar12 < iVar7) {
        iVar12 = iVar7;
      }
      uVar6 = FUN_180859470(unaff_RSI + 2,iVar12);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar10 = (uint64_t *)((int64_t)(int)unaff_RSI[3] * 0x1c + unaff_RSI[2]);
    *puVar10 = uVar2;
    puVar10[1] = uVar3;
    *(int32_t *)(puVar10 + 2) = 0xffffffff;
    *(uint64_t *)((int64_t)puVar10 + 0x14) = uVar1;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    puVar10 = (uint64_t *)((int64_t)iVar4 * 0x1c + unaff_RSI[2]);
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(puVar10 + 2);
    *(int32_t *)(puVar10 + 2) = 0xffffffff;
    uVar1 = *(uint64_t *)(unaff_RBX + 2);
    *puVar10 = *(uint64_t *)unaff_RBX;
    puVar10[1] = uVar1;
    *(uint64_t *)((int64_t)puVar10 + 0x14) = *unaff_R15;
  }
  *piVar13 = iVar4;
  *(int *)((int64_t)unaff_RSI + 0x24) = *(int *)((int64_t)unaff_RSI + 0x24) + 1;
  return 0;
}






// 函数: void FUN_1808cd165(void)
void FUN_1808cd165(void)

{
  return;
}



uint64_t FUN_1808cd16e(void)

{
  return 0x1c;
}



uint64_t FUN_1808cd190(void)

{
  uint64_t uVar1;
  uint64_t in_R9;
  int64_t *in_stack_00000028;
  uint64_t in_stack_00000030;
  
  uVar1 = FUN_1808bdc00();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*in_stack_00000028 != 0) {
    uVar1 = FUN_18073d8a0(*(uint64_t *)(*(int64_t *)(*in_stack_00000028 + 0x2b0) + 0x78),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_18073f130(in_R9,*(uint64_t *)(*(int64_t *)(*in_stack_00000028 + 0x2b0) + 0x78),1,
                          in_stack_00000030);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    FUN_18085ff30(*in_stack_00000028);
  }
  return 0;
}



uint64_t FUN_1808cd2e0(int64_t param_1,int8_t *param_2)

{
  uint64_t uVar1;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    *param_2 = 1;
    return 0;
  }
  if (*(int64_t *)(param_1 + 0xf8) == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = FUN_18073cd10();
    if (0x1e < (uint)uVar1) {
      return uVar1;
    }
    if ((0x40000009U >> ((uint)uVar1 & 0x1f) & 1) == 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808cd360(int64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  
  lVar3 = *(int64_t *)(param_1 + 0xf8);
  if (lVar3 == 0) {
    return 1;
  }
  lVar3 = (**(code **)(*(int64_t *)(lVar3 + 8) + 0x38))(lVar3 + 8);
  plVar5 = (int64_t *)0x0;
  plVar4 = (int64_t *)(*(int64_t *)(lVar3 + 0x20) + -8);
  if (*(int64_t *)(lVar3 + 0x20) == 0) {
    plVar4 = plVar5;
  }
  plVar1 = plVar5;
  if (plVar4 != (int64_t *)0x0) {
    plVar1 = plVar4 + 1;
  }
  while( true ) {
    if (plVar1 == (int64_t *)(lVar3 + 0x20)) {
      return 1;
    }
    plVar4 = plVar1 + -1;
    if (plVar1 == (int64_t *)0x0) {
      plVar4 = plVar5;
    }
    cVar2 = (**(code **)(*plVar4 + 0x20))();
    if (cVar2 == '\0') break;
    if (plVar1 == (int64_t *)(lVar3 + 0x20)) {
      return 1;
    }
    plVar4 = (int64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar4 = plVar5;
    }
    plVar1 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar1 = plVar4 + 1;
    }
  }
  return 0;
}



uint64_t FUN_1808cd3c0(int64_t *param_1,int param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int64_t lVar4;
  int iVar5;
  int32_t uVar6;
  int32_t in_XMM2_Dc;
  int32_t in_XMM2_Dd;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  uint64_t uStack_28;
  uint64_t uStack_20;
  int8_t auVar9 [16];
  
  uVar6 = (int32_t)((uint64_t)param_3 >> 0x20);
  auVar7._8_4_ = in_XMM2_Dc;
  auVar7._0_8_ = param_3;
  auVar7._12_4_ = in_XMM2_Dd;
  if (param_2 == 2) {
    lVar4 = (**(code **)*param_1)();
    if (*(int *)(lVar4 + 0xd8) - 2U < 2) {
      uStack_28 = *(uint64_t *)(lVar4 + 0xdc);
      uStack_20 = *(uint64_t *)(lVar4 + 0xe4);
      lVar4 = (**(code **)(*param_1 + 0x30))(param_1);
      lVar4 = FUN_18085fdf0(*(uint64_t *)(lVar4 + 0x18),&uStack_28);
      if (lVar4 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x18);
        uVar3 = *(uint *)(lVar4 + 0x34) >> 3;
        if ((uVar3 & 1) != 0) {
          fVar1 = *(float *)(lVar4 + 0x38);
          fVar2 = *(float *)(lVar4 + 0x3c);
          auVar7._0_4_ = (((float)param_3 - fVar1) / (fVar2 - fVar1)) * ((fVar2 - fVar1) + 1.0) +
                         fVar1;
          iVar5 = (int)auVar7._0_4_;
          if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar7._0_4_)) {
            auVar9._0_8_ = auVar7._0_8_;
            auVar9._8_4_ = uVar6;
            auVar9._12_4_ = uVar6;
            auVar8._8_8_ = auVar9._8_8_;
            auVar8._4_4_ = auVar7._0_4_;
            auVar8._0_4_ = auVar7._0_4_;
            uVar3 = movmskps(uVar3,auVar8);
            auVar7 = ZEXT416((uint)(float)(int)(iVar5 - (uVar3 & 1)));
          }
          if (fVar2 <= auVar7._0_4_) {
            auVar7._0_4_ = fVar2;
          }
        }
      }
    }
    *(int *)(param_1 + 0x13) = auVar7._0_4_;
  }
  return 0;
}



uint64_t FUN_1808cd4a0(int64_t *param_1,int32_t param_2,float param_3,int64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    uVar2 = func_0x0001808b2ef0(param_3);
    *(int32_t *)((int64_t)param_1 + 0xc4) = uVar2;
    goto code_r0x0001808cd4e0;
  case 1:
    fVar3 = (float)powf(0x40000000);
    *(float *)(param_1 + 0x1a) = fVar3;
    if (fVar3 < 0.0) {
      return 0x1c;
    }
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    break;
  default:
    uVar1 = (**(code **)(*param_1 + 0x140))(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    break;
  case 4:
    if (param_3 != 1.0) {
      *(int8_t *)((int64_t)param_1 + 0xc1) = 1;
    }
    *(float *)(param_1 + 0x19) = param_3;
code_r0x0001808cd4e0:
    param_1[0x17] = param_4;
    uVar1 = (**(code **)(*param_1 + 0x118))(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    break;
  case 8:
    break;
  case 9:
    *(float *)(param_1 + 0x1b) = param_3;
    return 0;
  case 0xb:
    *(float *)((int64_t)param_1 + 0xdc) = param_3;
    return 0;
  }
  return 0;
}



uint64_t FUN_1808cd610(int64_t param_1,uint param_2,int32_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar3 = *(int64_t *)(param_1 + 0xf8);
  if (lVar3 != 0) {
    if (param_2 != 3) {
      if (999 < param_2) {
        puVar2 = (uint64_t *)(*(int64_t *)(param_1 + 0xe8) + 0xe8);
        for (puVar1 = (uint64_t *)*puVar2; puVar1 != puVar2; puVar1 = (uint64_t *)*puVar1) {
          if (param_2 == *(uint *)((int64_t)puVar1 + 0x24)) {
            lVar3 = func_0x00018085fd70(lVar3,puVar1 + 2);
            if (lVar3 == 0) {
              return 0;
            }
            if (*(int64_t *)(lVar3 + 0x40) != 0) {
              return 0;
            }
            uVar4 = FUN_1808d73b0(lVar3,param_3,0);
            if ((int)uVar4 == 0) {
              return 0;
            }
            return uVar4;
          }
          if (puVar1 == puVar2) {
            return 0x1c;
          }
        }
      }
      return 0x1c;
    }
    if ((*(int64_t *)(lVar3 + 0x478) != 0) &&
       (uVar4 = FUN_1808d9460(*(int64_t *)(lVar3 + 0x478),param_3), (int)uVar4 != 0)) {
      return uVar4;
    }
  }
  return 0;
}



uint64_t FUN_1808cd6d0(int64_t param_1,int param_2,int32_t param_3)

{
  uint64_t uVar1;
  
  if (param_2 == 5) {
    *(int32_t *)(param_1 + 0x220) = param_3;
    uVar1 = FUN_1808cd900();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else if (param_2 == 6) {
    *(int32_t *)(param_1 + 0x224) = param_3;
    uVar1 = FUN_1808cd900();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    if (param_2 != 7) {
      return 0x1c;
    }
    *(int32_t *)(param_1 + 0x228) = param_3;
    uVar1 = FUN_1808cd900();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808cd780(int64_t *param_1,int64_t param_2,uint64_t *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  float fVar9;
  int aiStackX_8 [2];
  
  uVar7 = 0;
  if (0.0 < *(float *)(param_1 + 0x2b)) {
    aiStackX_8[0] = 0;
    uVar6 = FUN_18073a840(param_1[0x14],aiStackX_8,0,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    fVar9 = (float)(**(code **)(*param_1 + 0xc0))(param_1);
    if (fVar9 < 0.0) {
      return 0x1c;
    }
    if (fVar9 != 0.0) {
      iVar1 = *(int *)((int64_t)param_1 + 0x15c);
      if (iVar1 != 0) {
        uVar7 = (uint64_t)*(uint *)(param_1 + 0x25);
        uVar4 = (uint)*(float *)(param_1 + 0x2b);
        if (uVar4 != 48000) {
          uVar7 = (uVar7 * uVar4) / 48000;
        }
        iVar2 = (int)param_1[0x26];
        uVar4 = (uint)uVar7;
        if (iVar2 == 0) {
          uVar7 = uVar7 & 0xffffffff;
          if (iVar1 - 1U <= uVar4) {
            uVar7 = (uint64_t)(iVar1 - 1U);
          }
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x2c);
          if (uVar3 < uVar4) {
            uVar8 = (*(int *)((int64_t)param_1 + 0x164) - uVar3) + 1;
            if ((iVar2 == -1) || (uVar5 = (iVar2 + 1) * uVar8 + uVar3, uVar4 <= uVar5)) {
              uVar7 = (uint64_t)((uVar4 - uVar3) % uVar8 + uVar3);
            }
            else {
              uVar4 = (*(int *)((int64_t)param_1 + 0x164) - uVar5) + uVar4;
              if (iVar1 - 1U <= uVar4) {
                uVar4 = iVar1 - 1U;
              }
              uVar7 = (uint64_t)uVar4;
            }
          }
        }
      }
      uVar7 = ((int64_t)((*(float *)(param_1 + 0x2b) / (float)aiStackX_8[0]) * fVar9 * 1048576.0) &
              0xffffffffU) * param_2 + (uVar7 & 0xffffffff) * 0x100000 >> 0x14;
    }
  }
  *param_3 = uVar7;
  return 0;
}



uint64_t FUN_1808cd80d(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t unaff_RBX;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint uVar6;
  int in_R11D;
  int64_t unaff_R14;
  
  if (in_R11D == 0) {
    uVar5 = unaff_RBX & 0xffffffff;
  }
  else {
    uVar5 = (uint64_t)*(uint *)(unaff_RDI + 0x128);
    if ((int)param_4 != 48000) {
      uVar5 = (uVar5 * (uint)(int)param_4) / 48000;
    }
    iVar1 = *(int *)(unaff_RDI + 0x130);
    uVar4 = (uint)uVar5;
    if (iVar1 == 0) {
      uVar5 = uVar5 & 0xffffffff;
      if (in_R11D - 1U <= uVar4) {
        uVar5 = (uint64_t)(in_R11D - 1U);
      }
    }
    else {
      uVar2 = *(uint *)(unaff_RDI + 0x160);
      if (uVar2 < uVar4) {
        uVar6 = (*(int *)(unaff_RDI + 0x164) - uVar2) + 1;
        if ((iVar1 == -1) || (uVar3 = (iVar1 + 1) * uVar6 + uVar2, uVar4 <= uVar3)) {
          uVar5 = (uint64_t)((uVar4 - uVar2) % uVar6 + uVar2);
        }
        else {
          uVar4 = (*(int *)(unaff_RDI + 0x164) - uVar3) + uVar4;
          if (in_R11D - 1U <= uVar4) {
            uVar4 = in_R11D - 1U;
          }
          uVar5 = (uint64_t)uVar4;
        }
      }
    }
  }
  *unaff_RSI = ((int64_t)((param_2 / (float)param_1) * param_3 * 1048576.0) & 0xffffffffU) *
               unaff_R14 + (uVar5 & 0xffffffff) * 0x100000 >> 0x14;
  return 0;
}



uint64_t FUN_1808cd8dc(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_RSI;
  
  *unaff_RSI = unaff_RBX;
  return 0;
}



uint64_t FUN_1808cd900(int64_t param_1)

{
  if (*(char *)(param_1 + 0xc0) != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(float *)(param_1 + 0x224) * 0.017453292);
  }
  return 0;
}






// 函数: void FUN_1808cd926(uint64_t param_1,int32_t param_2)
void FUN_1808cd926(uint64_t param_1,int32_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}



uint64_t FUN_1808cd9d4(void)

{
  return 0;
}



uint64_t FUN_1808cd9e0(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  
  *(int32_t *)((int64_t)param_1 + 0xd4) = 0x3f800000;
  lVar1 = (**(code **)*param_1)();
  if ((((*(int *)(lVar1 + 0x70) != 0) || (*(int *)(lVar1 + 0x74) != 0)) ||
      (*(int *)(lVar1 + 0x78) != 0)) || (*(int *)(lVar1 + 0x7c) != 0)) {
    lVar1 = (**(code **)*param_1)(param_1);
    fVar4 = *(float *)(lVar1 + 0xac);
    lVar1 = (**(code **)*param_1)(param_1);
    fVar3 = *(float *)(lVar1 + 0xa8) - *(float *)((int64_t)param_1 + 0xe4);
    if (fVar3 == 0.0) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = ((*(float *)(param_1 + 0x1c) - *(float *)((int64_t)param_1 + 0xe4)) / fVar3) *
              (1.0 - fVar4) + fVar4;
    }
    *(float *)((int64_t)param_1 + 0xd4) = fVar4;
    if (fVar4 < 0.0) {
      return 0x1c;
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808cdaa3. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (**(code **)(*param_1 + 0x110))(param_1);
  return uVar2;
}



uint64_t FUN_1808cda1a(void)

{
  uint64_t *in_RAX;
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  float fVar3;
  float fVar4;
  
  lVar1 = (*(code *)*in_RAX)();
  fVar4 = *(float *)(lVar1 + 0xac);
  lVar1 = (**(code **)*unaff_RBX)();
  fVar3 = *(float *)(lVar1 + 0xa8) - *(float *)((int64_t)unaff_RBX + 0xe4);
  if (fVar3 == 0.0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = ((*(float *)(unaff_RBX + 0x1c) - *(float *)((int64_t)unaff_RBX + 0xe4)) / fVar3) *
            (1.0 - fVar4) + fVar4;
  }
  *(float *)((int64_t)unaff_RBX + 0xd4) = fVar4;
  if (fVar4 < 0.0) {
    return 0x1c;
  }
                    // WARNING: Could not recover jumptable at 0x0001808cdaa3. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (**(code **)(*unaff_RBX + 0x110))();
  return uVar2;
}



uint64_t FUN_1808cda8d(void)

{
  return 0x1c;
}



uint64_t FUN_1808cdab0(int64_t param_1)

{
  uint64_t uVar1;
  
  if ((*(int64_t *)(param_1 + 0xf8) != 0) &&
     (uVar1 = func_0x000180862c30(*(int64_t *)(param_1 + 0xf8),
                                  *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xd0)),
     (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808cdb10(int64_t param_1)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0xf8) != 0) {
    uVar1 = FUN_18073d980(*(int64_t *)(param_1 + 0xf8),
                          *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xd0));
    if (0x1e < (uint)uVar1) {
      return uVar1;
    }
    if ((0x40000009U >> ((uint)uVar1 & 0x1f) & 1) == 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808cdb50(int64_t param_1)

{
  uint64_t uVar1;
  
  if ((*(int64_t *)(param_1 + 0xf8) != 0) &&
     (uVar1 = func_0x000180862c40(*(int64_t *)(param_1 + 0xf8),
                                  *(float *)(param_1 + 200) * *(float *)(param_1 + 0xc4) *
                                  *(float *)(param_1 + 0xcc)), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}






