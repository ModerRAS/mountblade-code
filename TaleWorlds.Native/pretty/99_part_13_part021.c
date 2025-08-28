/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
#include "SystemDataAdvancedController_definition.h"
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part021.c - 4 个函数
// 函数: void NetworkProtocol_b2530(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4,
void NetworkProtocol_b2530(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4,
                  uint64_t param_5)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int8_t stack_array_c8 [32];
  int64_t *plStack_a8;
  int64_t lStack_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int8_t stack_array_78 [40];
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_80 = param_5;
  iVar2 = *(int *)(param_1[4] + 0x40);
  lStack_98 = param_4;
  local_var_90 = param_2;
  lVar3 = (**(code **)*param_2)(param_2);
  plVar13 = *(int64_t **)(lVar3 + 0x20);
  plVar4 = (int64_t *)(lVar3 + 0x20);
  if (plVar13 != plVar4) {
    while ((int)plVar13[8] != iVar2) {
      if ((plVar13 == plVar4) || (plVar13 = (int64_t *)*plVar13, plVar13 == plVar4))
      goto LAB_1808b25af;
    }
    if (plVar13 != (int64_t *)0x0) {
      plVar4 = (int64_t *)param_1[4];
      plVar8 = (int64_t *)0x0;
      if (plVar4 == plVar13) goto LAB_1808b2880;
      plVar1 = param_1 + 7;
      param_1[4] = (int64_t)plVar13;
      plVar14 = (int64_t *)(*plVar1 + -8);
      if (*plVar1 == 0) {
        plVar14 = plVar8;
      }
      plVar12 = plVar8;
      if (plVar14 != (int64_t *)0x0) {
        plVar12 = plVar14 + 1;
      }
      if (plVar12 == plVar1) goto LAB_1808b26f1;
      goto LAB_1808b2611;
    }
  }
  goto LAB_1808b25af;
LAB_1808b2611:
  do {
    plVar14 = plVar12 + -1;
    if (plVar12 == (int64_t *)0x0) {
      plVar14 = plVar8;
    }
    lVar3 = (**(code **)*plVar14)(plVar14);
    if (0 < (int)plVar13[3]) {
      plVar11 = plVar8;
      do {
        iVar2 = (int)plVar11;
        if ((*(int64_t *)(plVar13[2] + (int64_t)iVar2 * 0x10) == *(int64_t *)(lVar3 + 0x10)) &&
           (*(int64_t *)(plVar13[2] + 8 + (int64_t)iVar2 * 0x10) == *(int64_t *)(lVar3 + 0x18)))
        {
          iVar2 = (**(code **)(*plVar14 + 0x20))(plVar14,param_3);
          if (iVar2 != 0) goto LAB_1808b25af;
          param_4 = lStack_98;
          if (plVar12 == plVar1) goto LAB_1808b26f1;
          plVar14 = (int64_t *)(*plVar12 + -8);
          if (*plVar12 == 0) {
            plVar14 = plVar8;
          }
          plVar12 = plVar8;
          if (plVar14 != (int64_t *)0x0) {
            plVar12 = plVar14 + 1;
          }
          goto LAB_1808b26e3;
        }
        plVar11 = (int64_t *)(uint64_t)(iVar2 + 1U);
      } while ((int)(iVar2 + 1U) < (int)plVar13[3]);
    }
    if (plVar12 == plVar1) goto LAB_1808b25af;
    lVar3 = *plVar12;
    plVar11 = (int64_t *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar11 = plVar8;
    }
    plVar5 = plVar8;
    if (plVar11 != (int64_t *)0x0) {
      plVar5 = plVar11 + 1;
    }
    *(int64_t *)plVar12[1] = lVar3;
    *(int64_t *)(*plVar12 + 8) = plVar12[1];
    plVar12[1] = (int64_t)plVar12;
    *plVar12 = (int64_t)plVar12;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plVar12 = plVar5;
LAB_1808b26e3:
    param_4 = lStack_98;
  } while (plVar12 != plVar1);
LAB_1808b26f1:
  for (plVar14 = (int64_t *)plVar13[2];
      ((int64_t *)plVar13[2] <= plVar14 &&
      (plVar14 < (int64_t *)plVar13[2] + (int64_t)(int)plVar13[3] * 2)); plVar14 = plVar14 + 2) {
    if (0 < (int)plVar4[3]) {
      plVar12 = plVar8;
      do {
        iVar2 = (int)plVar12;
        if ((*(int64_t *)(plVar4[2] + (int64_t)iVar2 * 0x10) == *plVar14) &&
           (*(int64_t *)(plVar4[2] + 8 + (int64_t)iVar2 * 0x10) == plVar14[1]))
        goto LAB_1808b27f7;
        plVar12 = (int64_t *)(uint64_t)(iVar2 + 1U);
      } while ((int)(iVar2 + 1U) < (int)plVar4[3]);
    }
    plStack_a8 = &lStack_98;
    lStack_98 = 0;
    iVar2 = NetworkProtocol_b74d0(param_4,plVar14,plVar13,local_var_80);
    if (iVar2 != 0) goto LAB_1808b25af;
    plVar12 = (int64_t *)(lStack_98 + 0x30);
    if (lStack_98 == 0) {
      plVar12 = plVar8;
    }
    plVar11 = plVar12 + 1;
    if (plVar12 == (int64_t *)0x0) {
      plVar11 = plVar8;
    }
    if (plVar11 == (int64_t *)0x0) goto LAB_1808b25af;
    plVar5 = (int64_t *)*plVar11;
    plVar10 = plVar8;
    if (plVar5 != plVar11) {
      do {
        plVar5 = (int64_t *)*plVar5;
        uVar9 = (int)plVar10 + 1;
        plVar10 = (int64_t *)(uint64_t)uVar9;
      } while (plVar5 != plVar11);
      if (uVar9 != 0) goto LAB_1808b25af;
    }
    plVar11[1] = param_1[8];
    *plVar11 = (int64_t)plVar1;
    param_1[8] = (int64_t)plVar11;
    *(int64_t **)plVar11[1] = plVar11;
    (**(code **)(*plVar12 + 0x10))(plVar12,param_1);
    iVar2 = NetworkProtocol_b3060(param_1,0);
    if (iVar2 != 0) goto LAB_1808b25af;
LAB_1808b27f7:
  }
  if (*(int *)(param_1[4] + 0x28) == 0) {
    if (param_1[9] != 0) {
      *(int64_t *)param_1[1] = *param_1;
      *(int64_t *)(*param_1 + 8) = param_1[1];
      param_1[1] = (int64_t)param_1;
      *param_1 = (int64_t)param_1;
      NetworkProtocol_b22c0();
      param_1[9] = 0;
    }
  }
  else if (param_1[9] == 0) {
    lVar3 = plVar13[8];
    lStack_98 = 0;
    uVar6 = (**(code **)*local_var_90)();
    iVar2 = thunk_NetworkProtocol_b86e0(param_4,uVar6,(int)lVar3,&lStack_98);
    if ((iVar2 != 0) || (iVar2 = NetworkProtocol_b3850(param_1,lStack_98), iVar2 != 0)) goto LAB_1808b25af;
  }
LAB_1808b2880:
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    puVar7 = (int32_t *)SystemCoreProcessor();
    uVar15 = *puVar7;
    uVar16 = puVar7[1];
    uVar17 = puVar7[2];
    uVar18 = puVar7[3];
  }
  else {
    uVar15 = *(int32_t *)(lVar3 + 0x10);
    uVar16 = *(int32_t *)(lVar3 + 0x14);
    uVar17 = *(int32_t *)(lVar3 + 0x18);
    uVar18 = *(int32_t *)(lVar3 + 0x1c);
  }
  lVar3 = param_1[4];
  local_var_90 = (uint64_t *)CONCAT44(uVar16,uVar15);
  local_var_88 = CONCAT44(uVar18,uVar17);
  if ((local_var_90 == *(uint64_t **)(lVar3 + 0x30)) && (local_var_88 == *(int64_t *)(lVar3 + 0x38))) {
    if (param_1[6] == 0) goto LAB_1808b25af;
    lVar3 = param_1[6] + 0x10;
    plVar8 = (int64_t *)(**(code **)(*(int64_t *)*param_3 + 0x260))((int64_t *)*param_3,lVar3,1);
    if (plVar8 == (int64_t *)0x0) {
// WARNING: Subroutine does not return
      SystemController(lVar3,stack_array_78);
    }
  }
  else if (((*(int *)(lVar3 + 0x30) != 0) ||
           (((*(int *)(lVar3 + 0x34) != 0 || (*(int *)(lVar3 + 0x38) != 0)) ||
            (*(int *)(lVar3 + 0x3c) != 0)))) &&
          (plVar8 = (int64_t *)
                    (**(code **)(*(int64_t *)*param_3 + 0x260))
                              ((int64_t *)*param_3,lVar3 + 0x30,1), plVar8 == (int64_t *)0x0)) {
// WARNING: Subroutine does not return
    SystemController(lVar3 + 0x30,stack_array_78);
  }
  param_1[6] = (int64_t)plVar8;
LAB_1808b25af:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_c8);
}
uint64_t NetworkProtocol_b2950(int64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  uint uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t stack_special_x_8;
  uVar12 = 0;
  uVar14 = uVar12;
  if (0 < (int)param_1[3]) {
    do {
      lVar7 = *(int64_t *)(uVar14 + param_1[2]);
      iVar3 = *(int *)(*(int64_t *)(lVar7 + 0x20) + 0x40);
      lVar4 = (**(code **)*param_1)(param_1);
      plVar11 = *(int64_t **)(lVar4 + 0x20);
      plVar5 = (int64_t *)(lVar4 + 0x20);
      if (plVar11 != plVar5) {
        while ((int)plVar11[8] != iVar3) {
          if ((plVar11 == plVar5) || (plVar11 = (int64_t *)*plVar11, plVar11 == plVar5))
          goto LAB_1808b29bf;
        }
        if (plVar11 != (int64_t *)0x0) {
          uVar6 = (**(code **)(*param_1 + 0x38))(param_1);
          uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
          uVar6 = NetworkProtocol_b2530(lVar7,param_1,param_2,uVar8,uVar6);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar12 = (uint64_t)((int)uVar12 + 1);
          uVar14 = uVar14 + 8;
          goto LAB_1808b2aa8;
        }
      }
LAB_1808b29bf:
      plVar5 = (int64_t *)param_1[2];
      plVar11 = plVar5;
      while( true ) {
        if ((plVar11 < plVar5) || (iVar3 = (int)param_1[3], plVar5 + iVar3 <= plVar11))
        goto LAB_1808b2aa8;
        lVar4 = *plVar11;
        if (*(int *)(*(int64_t *)(lVar4 + 0x20) + 0x40) ==
            *(int *)(*(int64_t *)(lVar7 + 0x20) + 0x40)) break;
        plVar11 = plVar11 + 1;
      }
      iVar9 = (int)((int64_t)plVar11 - (int64_t)plVar5 >> 3);
      if ((iVar9 < 0) || (iVar3 <= iVar9)) {
        return 0x1c;
      }
      iVar13 = (iVar3 - iVar9) + -1;
      if (0 < iVar13) {
// WARNING: Subroutine does not return
        memmove(plVar5 + iVar9,plVar5 + iVar9 + 1,(int64_t)iVar13 << 3);
      }
      *(int *)(param_1 + 3) = iVar3 + -1;
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar6 = NetworkProtocol_b8520(uVar6,lVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
LAB_1808b2aa8:
    } while ((int)uVar12 < (int)param_1[3]);
  }
  uVar6 = (**(code **)*param_1)(param_1);
  cVar2 = Function_e72eee49(param_2,uVar6);
  if (cVar2 != '\0') {
    lVar7 = (**(code **)*param_1)(param_1);
    for (puVar1 = *(uint64_t **)(lVar7 + 0x20); puVar1 != (uint64_t *)(lVar7 + 0x20);
        puVar1 = (uint64_t *)*puVar1) {
      plVar5 = (int64_t *)param_1[2];
      plVar11 = plVar5;
      while( true ) {
        if ((plVar11 < plVar5) || (plVar5 + (int)param_1[3] <= plVar11)) goto LAB_1808b2b4b;
        if (*(int *)(*(int64_t *)(*plVar11 + 0x20) + 0x40) == *(int *)(puVar1 + 8)) break;
        plVar11 = plVar11 + 1;
      }
      if (*plVar11 != 0) goto LAB_1808b2c12;
LAB_1808b2b4b:
      stack_special_x_8 = 0;
      uVar6 = (**(code **)(*param_1 + 0x38))(param_1);
      uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar8 = NetworkProtocol_b7c00(uVar8,puVar1,param_1,uVar6,&stack_special_x_8);
      uVar6 = stack_special_x_8;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar10 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar10) - uVar10;
      iVar9 = (int)param_1[3] + 1;
      if (iVar3 < iVar9) {
        iVar13 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar9;
        if (iVar9 <= iVar13) {
          iVar3 = iVar13;
        }
        if (iVar3 < 8) {
          iVar13 = 8;
        }
        else if (iVar13 < iVar9) {
          iVar13 = iVar9;
        }
        uVar8 = RenderingTextureManager0(param_1 + 2,iVar13);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      *(uint64_t *)(param_1[2] + (int64_t)(int)param_1[3] * 8) = uVar6;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      uVar8 = NetworkProtocol_b3060(uVar6,0);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar6 = NetworkProtocol_d8e90(param_1[1],uVar6);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
LAB_1808b2c12:
      if (puVar1 == (uint64_t *)(lVar7 + 0x20)) {
        return 0;
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b2ab8(void)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint64_t *in_RAX;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint64_t unaff_RBX;
  int64_t *unaff_RSI;
  int64_t *plVar10;
  uint64_t extraout_XMM0_Qa;
  uVar5 = (*(code *)*in_RAX)();
  cVar3 = Function_e72eee49(extraout_XMM0_Qa,uVar5);
  if (cVar3 != '\0') {
    lVar6 = (**(code **)*unaff_RSI)();
    for (puVar1 = *(uint64_t **)(lVar6 + 0x20); puVar1 != (uint64_t *)(lVar6 + 0x20);
        puVar1 = (uint64_t *)*puVar1) {
      plVar2 = (int64_t *)unaff_RSI[2];
      plVar10 = plVar2;
      while( true ) {
        if ((plVar10 < plVar2) || (plVar2 + (int)unaff_RSI[3] <= plVar10)) goto LAB_1808b2b4b;
        if (*(int *)(*(int64_t *)(*plVar10 + 0x20) + 0x40) == *(int *)(puVar1 + 8)) break;
        plVar10 = plVar10 + 1;
      }
      if (*plVar10 != 0) goto LAB_1808b2c12;
LAB_1808b2b4b:
      (**(code **)(*unaff_RSI + 0x38))();
      uVar5 = (**(code **)(*unaff_RSI + 0x30))();
      uVar5 = NetworkProtocol_b7c00(uVar5,puVar1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar8 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
      iVar4 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar8) - uVar8;
      iVar7 = (int)unaff_RSI[3] + 1;
      if (iVar4 < iVar7) {
        iVar9 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar7;
        if (iVar7 <= iVar9) {
          iVar4 = iVar9;
        }
        if (iVar4 < 8) {
          iVar9 = 8;
        }
        else if (iVar9 < iVar7) {
          iVar9 = iVar7;
        }
        uVar5 = RenderingTextureManager0(unaff_RSI + 2,iVar9);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      *(uint64_t *)(unaff_RSI[2] + (int64_t)(int)unaff_RSI[3] * 8) = unaff_RBX;
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
      uVar5 = NetworkProtocol_b3060(unaff_RBX);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = NetworkProtocol_d8e90(unaff_RSI[1],unaff_RBX);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
LAB_1808b2c12:
      if (puVar1 == (uint64_t *)(lVar6 + 0x20)) {
        return 0;
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b2b38(void)
{
  return 0x1c;
}
uint64_t NetworkProtocol_b2b42(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint64_t unaff_RBX;
  int64_t *unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *plVar7;
  int64_t *unaff_R15;
  float unaff_XMM6_Da;
code_r0x0001808b2b42:
  if (param_1 != 0) goto LAB_1808b2c12;
  do {
    (**(code **)(*unaff_RSI + 0x38))();
    uVar3 = (**(code **)(*unaff_RSI + 0x30))();
    uVar3 = NetworkProtocol_b7c00(uVar3,unaff_R15);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar5 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    iVar2 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar5) - uVar5;
    iVar4 = (int)unaff_RSI[3] + 1;
    if (iVar2 < iVar4) {
      iVar6 = (int)((float)iVar2 * unaff_XMM6_Da);
      iVar2 = iVar4;
      if (iVar4 <= iVar6) {
        iVar2 = iVar6;
      }
      if (iVar2 < 8) {
        iVar6 = 8;
      }
      else if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      uVar3 = RenderingTextureManager0(unaff_RSI + 2,iVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    *(uint64_t *)(unaff_RSI[2] + (int64_t)(int)unaff_RSI[3] * 8) = unaff_RBX;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
    uVar3 = NetworkProtocol_b3060(unaff_RBX);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = NetworkProtocol_d8e90(unaff_RSI[1],unaff_RBX);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
LAB_1808b2c12:
    if ((unaff_R15 == unaff_RBP) || (unaff_R15 = (int64_t *)*unaff_R15, unaff_R15 == unaff_RBP)) {
      return 0;
    }
    plVar1 = (int64_t *)unaff_RSI[2];
    for (plVar7 = plVar1; (plVar1 <= plVar7 && (plVar7 < plVar1 + (int)unaff_RSI[3]));
        plVar7 = plVar7 + 1) {
      param_1 = *plVar7;
      if (*(int *)(*(int64_t *)(param_1 + 0x20) + 0x40) == *(int *)(unaff_R15 + 8))
      goto code_r0x0001808b2b42;
    }
  } while( true );
}
// 函数: void NetworkProtocol_b2c2a(void)
void NetworkProtocol_b2c2a(void)
{
  return;
}
uint64_t NetworkProtocol_b2c50(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  plVar4 = (int64_t *)(param_1 + 0x38);
  if (((int64_t *)*plVar4 != plVar4) || (*(int64_t **)(param_1 + 0x40) != plVar4)) {
    return 1;
  }
  lVar1 = *(int64_t *)(param_1 + 0x48);
  if (lVar1 != 0) {
    plVar5 = (int64_t *)0x0;
    plVar4 = (int64_t *)(*(int64_t *)(lVar1 + 0x10) + -8);
    if (*(int64_t *)(lVar1 + 0x10) == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar2 = plVar4 + 1;
    }
    while (plVar2 != (int64_t *)(lVar1 + 0x10)) {
      plVar4 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar4 = plVar5;
      }
      cVar3 = (**(code **)(*plVar4 + 8))();
      if (cVar3 != '\0') {
        return 1;
      }
      if (plVar2 == (int64_t *)(lVar1 + 0x10)) {
        return 0;
      }
      plVar4 = (int64_t *)(*plVar2 + -8);
      if (*plVar2 == 0) {
        plVar4 = plVar5;
      }
      plVar2 = plVar5;
      if (plVar4 != (int64_t *)0x0) {
        plVar2 = plVar4 + 1;
      }
    }
  }
  return 0;
}
// 函数: void NetworkProtocol_b2d20(int64_t param_1)
void NetworkProtocol_b2d20(int64_t param_1)
{
  int32_t uVar1;
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    *(int32_t *)(param_1 + 0x58) = *(int32_t *)(param_1 + 0x54);
    if (*(int64_t *)(param_1 + 0x30) != 0) {
      uVar1 = Function_95f8394e();
      *(int32_t *)(param_1 + 0x58) = uVar1;
    }
  }
  return;
}
uint64_t NetworkProtocol_b2d60(int32_t *param_1,float param_2,float *param_3)
{
  int iVar1;
  float fVar2;
  switch(*param_1) {
  case 0:
    fVar2 = *param_3;
    if (param_2 <= *param_3) {
      fVar2 = param_2;
    }
    *param_3 = fVar2;
    return 0;
  case 1:
    fVar2 = *param_3;
    if (*param_3 <= param_2) {
      fVar2 = param_2;
    }
    *param_3 = fVar2;
    return 0;
  case 2:
    break;
  case 3:
    *param_3 = param_2 + *param_3;
    return 0;
  case 4:
    param_2 = param_2 * *param_3;
  case 5:
    *param_3 = param_2;
    return 0;
  default:
    return 0x1c;
  }
  iVar1 = param_1[1];
  if (iVar1 != 1) {
    if (*(int64_t *)(param_1 + 0xc) == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)Function_95f8394e(*(int64_t *)(param_1 + 0xc),0);
      iVar1 = param_1[1];
    }
    param_2 = param_2 - fVar2;
  }
  if ((iVar1 == 1) && ((*param_3 == -3.4028235e+38 || (param_2 <= -80.0)))) {
    *param_3 = -3.4028235e+38;
    return 0;
  }
  *param_3 = *param_3 + param_2;
  return 0;
}
uint64_t SystemDataFlowProcessor(int64_t *param_1,int param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int32_t astack_special_x_8 [2];
  plVar1 = (int64_t *)param_1[2];
  plVar5 = plVar1;
  while( true ) {
    if ((plVar5 < plVar1) || (plVar1 + (int)param_1[3] <= plVar5)) goto LAB_1808b2faa;
    lVar2 = *plVar5;
    if (*(int *)(*(int64_t *)(lVar2 + 0x20) + 0x40) == param_2) break;
    plVar5 = plVar5 + 1;
  }
  if (lVar2 != 0) {
    uVar4 = NetworkProtocol_b3060(lVar2,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = NetworkProtocol_d8e90(param_1[1],lVar2);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    goto NetworkProtocol_b2ff2;
  }
LAB_1808b2faa:
  astack_special_x_8[0] = 0;
  uVar4 = (**(code **)*param_1)();
  iVar3 = NetworkProtocol_b05f0(uVar4,param_2,astack_special_x_8);
  uVar6 = 0;
  if (iVar3 == 0) {
    uVar6 = astack_special_x_8[0];
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,param_2,uVar6,0);
  if ((int)uVar4 == 0) {
NetworkProtocol_b2ff2:
    uVar4 = 0;
  }
  return uVar4;
}
uint64_t NetworkProtocol_b2fad(void)
{
  uint64_t *in_RAX;
  uint64_t uVar1;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  int32_t local_var_40;
  local_var_40 = 0;
  uVar1 = (*(code *)*in_RAX)();
  NetworkProtocol_b05f0(uVar1,unaff_ESI,&local_buffer_00000040);
  uVar1 = (**(code **)(*unaff_RDI + 8))();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_b2ff2(void)
{
  return 0;
}
uint64_t NetworkProtocol_b3010(int64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  while( true ) {
    if (puVar1 == (uint64_t *)(param_1 + 0x20)) {
      return 0;
    }
    uVar2 = NetworkProtocol_b3060(puVar1,param_2);
    if ((int)uVar2 != 0) break;
    if (puVar1 == (uint64_t *)(param_1 + 0x20)) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_b3060(int64_t param_1,uint64_t param_2)
void NetworkProtocol_b3060(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  ushort uVar2;
  ushort uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t uVar17;
  float fVar18;
  int8_t stack_array_138 [32];
  uint local_var_118;
  uint64_t local_var_110;
  int64_t lStack_108;
  uint local_var_100;
  uint local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  float fStack_e0;
  float fStack_dc;
  int iStack_d8;
  int64_t lStack_d0;
  uint64_t local_var_c8;
  local_var_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  local_var_110 = param_2;
  lStack_108 = param_1;
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    lVar4 = *(int64_t *)(param_1 + 0x30);
    uVar2 = *(ushort *)(*(int64_t *)(param_1 + 0x20) + 0x4a);
    uVar12 = (uint)uVar2;
    local_var_118 = uVar12;
    local_var_f8 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x18))
                          (*(int64_t **)(param_1 + 0x28),
                           *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x40));
    plVar11 = (int64_t *)0x0;
    uVar17 = 0;
    uVar3 = *(ushort *)(*(int64_t *)(param_1 + 0x20) + 0x48);
    local_var_100 = (uint)uVar3;
    local_var_f4 = 0;
    fStack_e0 = 0.0;
    fStack_dc = 1.0;
    iStack_d8 = 0;
    if ((uVar2 == 0) || (uVar2 == 1)) {
      local_var_f0 = 0;
      local_var_e8 = 0;
      switch(uVar3) {
      case 0:
        uVar17 = 0x7f7fffff;
        local_var_f4 = 0x7f7fffff;
        break;
      case 1:
        local_var_f4 = 0xff7fffff;
        uVar17 = 0xff7fffff;
        break;
      case 4:
        local_var_f4 = 0x3f800000;
        uVar17 = 0x3f800000;
      }
    }
    local_var_fc = uVar12;
    lStack_d0 = lVar4;
    if (*(int64_t *)(param_1 + 0x48) != 0) {
      iVar8 = NetworkProtocol_b35b0(*(int64_t *)(param_1 + 0x48),&local_var_100);
      if (iVar8 != 0) goto LAB_1808b342e;
      local_var_118 = local_var_fc;
      uVar17 = local_var_f4;
    }
    lVar4 = lStack_d0;
    uVar6 = local_var_100;
    uVar12 = local_var_118;
    plVar1 = (int64_t *)(param_1 + 0x38);
    plVar10 = (int64_t *)(*(int64_t *)(param_1 + 0x38) + -8);
    if (*(int64_t *)(param_1 + 0x38) == 0) {
      plVar10 = plVar11;
    }
    plVar5 = plVar11;
    fVar16 = fStack_e0;
    fVar18 = fStack_dc;
    if (plVar10 != (int64_t *)0x0) {
      plVar5 = plVar10 + 1;
    }
    while (plVar5 != plVar1) {
      plVar10 = plVar5 + -1;
      if (plVar5 == (int64_t *)0x0) {
        plVar10 = plVar11;
      }
      fVar13 = (float)(**(code **)(*plVar10 + 8))(plVar10);
      if (uVar12 == 0) {
        lVar9 = (**(code **)*plVar10)(plVar10);
        iVar8 = *(int *)(lVar9 + 0x48);
        if (lVar4 == 0) {
          fVar14 = 100.0;
        }
        else {
          fVar14 = (float)TimeSystem_GetCurrentTime(lVar4);
        }
        fVar13 = fVar13 * fVar14 * 0.01;
        if ((iVar8 == 0) && (uVar6 == 4)) {
          fVar18 = fVar18 * fVar13;
        }
        else {
LAB_1808b32c9:
          fVar16 = fVar16 + fVar13;
          fStack_e0 = fVar16;
        }
      }
      else if (uVar12 == 1) {
        if (lVar4 != 0) {
          fVar13 = (float)MathSystem_ScaleFactor(lVar4,fVar13);
        }
        if ((fVar16 != -3.4028235e+38) && (-80.0 < fVar13)) goto LAB_1808b32c9;
        fVar16 = -3.4028235e+38;
        fStack_e0 = fVar16;
      }
      param_2 = local_var_110;
      param_1 = lStack_108;
      if (plVar5 == plVar1) break;
      plVar10 = (int64_t *)(*plVar5 + -8);
      if (*plVar5 == 0) {
        plVar10 = plVar11;
      }
      plVar5 = plVar11;
      if (plVar10 != (int64_t *)0x0) {
        plVar5 = plVar10 + 1;
      }
    }
    fStack_dc = fVar18;
    iVar8 = iStack_d8;
    fVar18 = fStack_dc;
    uVar12 = local_var_118;
    fVar13 = (float)NetworkProtocol_b3770(&local_var_100,uVar17,iStack_d8);
    do {
      fVar14 = *(float *)((int64_t)&local_var_e8 + (int64_t)plVar11 * 4);
      if (fVar14 != 0.0) {
        fVar15 = (float)NetworkProtocol_b3770(&local_var_100,
                                      *(int32_t *)((int64_t)&local_var_f0 + (int64_t)plVar11 * 4),
                                      iVar8 + 1);
        fVar13 = fVar13 + (fVar15 - fVar13) * fVar14;
      }
      plVar11 = (int64_t *)((int64_t)plVar11 + 1);
    } while ((int64_t)plVar11 < 2);
    if (uVar12 == 1) {
      if (-80.0 < fVar13) {
        if ((fVar13 == -3.4028235e+38) || (fVar16 <= -80.0)) {
          fVar13 = -3.4028235e+38;
        }
        else {
          fVar13 = fVar13 + fVar16;
        }
      }
    }
    else {
      fVar13 = (fVar16 + fVar13) * fVar18;
      if ((uVar12 == 0) && (lVar4 != 0)) {
        fVar13 = (float)MathSystem_ScaleFactor(lVar4,fVar13);
      }
    }
    if ((fVar13 != *(float *)(param_1 + 0x54)) ||
       (cVar7 = NetworkProtocol_b3900(param_1,param_2), cVar7 != '\0')) {
      *(float *)(param_1 + 0x54) = fVar13;
      if ((*(uint *)(param_1 + 0x5c) >> 3 & 1) == 0) {
        NetworkProtocol_b20c0(param_1,fVar13,param_2);
      }
      else {
        (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x10))
                  (*(int64_t **)(param_1 + 0x28),param_1);
      }
    }
  }
LAB_1808b342e:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_c8 ^ (uint64_t)stack_array_138);
}