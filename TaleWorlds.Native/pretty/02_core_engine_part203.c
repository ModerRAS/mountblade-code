/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "CoreSystem_DatabaseHandler0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part203.c - 11 个函数
// 函数: void function_184da0(uint64_t param_1,int param_2,int64_t *param_3,int64_t *param_4)
void function_184da0(uint64_t param_1,int param_2,int64_t *param_3,int64_t *param_4)
{
  int64_t *plVar1;
  code *pcVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t stack_array_b8 [32];
  int aiStack_98 [2];
  uint *plocal_var_90;
  int64_t *plStack_88;
  uint *plocal_var_80;
  uint *plocal_var_78;
  uint *plocal_var_70;
  uint **pplocal_var_68;
  uint64_t local_var_60;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int8_t local_var_38;
  uint64_t local_var_30;
  local_var_60 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  plVar1 = (int64_t *)param_4[7];
  uVar4 = 0;
  plStack_88 = param_4;
  if (plVar1 != (int64_t *)0x0) {
    aiStack_98[0] = param_2;
    if (param_2 < 0) {
      pplocal_var_68 = (uint **)param_4[8];
      plocal_var_90 = (uint *)0x0;
      if (plVar1 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,aiStack_98,&plocal_var_90,&pplocal_var_68);
    }
    else {
      plocal_var_80 = (uint *)0x0;
      plocal_var_78 = (uint *)0x0;
      plocal_var_70 = (uint *)0x0;
      uVar7 = uVar4;
      if (param_3[1] != 0) {
        do {
          local_var_48 = 0;
          local_var_40 = 0xf;
          local_var_58 = local_var_58 & 0xffffff00;
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (*(char *)(*(int64_t *)(uVar4 + *param_3) + lVar6) != '\0');
          MathCoreCalculator0(&local_var_58);
          local_var_38 = *(int8_t *)(*param_3 + 8 + uVar4);
          if (plocal_var_70 == plocal_var_78) {
            function_188d20(&plocal_var_80,plocal_var_78,&local_var_58);
          }
          else {
            plocal_var_90 = plocal_var_78;
            plocal_var_78[4] = 0;
            plocal_var_78[5] = 0;
            plocal_var_78[6] = 0;
            plocal_var_78[7] = 0;
            *plocal_var_78 = local_var_58;
            plocal_var_78[1] = local_var_54;
            plocal_var_78[2] = local_var_50;
            plocal_var_78[3] = local_var_4c;
            *(uint64_t *)(plocal_var_78 + 4) = local_var_48;
            *(uint64_t *)(plocal_var_78 + 6) = local_var_40;
            local_var_48 = 0;
            local_var_40 = 0xf;
            local_var_58 = local_var_58 & 0xffffff00;
            *(int8_t *)(plocal_var_78 + 8) = local_var_38;
            plocal_var_78 = plocal_var_78 + 10;
          }
          SystemPerformanceOptimizer(&local_var_58);
          uVar7 = uVar7 + 1;
          uVar4 = uVar4 + 0x10;
        } while (uVar7 < (uint64_t)param_3[1]);
      }
      plocal_var_90 = (uint *)param_4[8];
      pplocal_var_68 = &plocal_var_80;
      plVar1 = (int64_t *)param_4[7];
      if (plVar1 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,aiStack_98,&pplocal_var_68,&plocal_var_90);
      puVar3 = plocal_var_78;
      puVar5 = plocal_var_80;
      if (plocal_var_80 != (uint *)0x0) {
        for (; plocal_var_90 = puVar5, puVar5 != puVar3; puVar5 = puVar5 + 10) {
          SystemPerformanceOptimizer(puVar5);
        }
        uVar4 = (((int64_t)plocal_var_70 - (int64_t)plocal_var_80) / 0x28) * 0x28;
        puVar5 = plocal_var_80;
        if (0xfff < uVar4) {
          uVar4 = uVar4 + 0x27;
          puVar5 = *(uint **)(plocal_var_80 + -2);
          if (0x1f < (uint64_t)((int64_t)plocal_var_80 + (-8 - (int64_t)puVar5))) {
// WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(puVar5,uVar4);
        plocal_var_80 = (uint *)0x0;
        plocal_var_78 = (uint *)0x0;
        plocal_var_70 = (uint *)0x0;
      }
    }
  }
  plVar1 = (int64_t *)param_4[7];
  plStack_88 = param_4;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_4);
    param_4[7] = 0;
  }
  free(param_4,0x48);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
// 函数: void function_185040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_185040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uVar4 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        SystemPerformanceOptimizer(lVar2);
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    uVar1 = ((param_1[2] - lVar2) / 0x28) * 0x28;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(param_1[2] - lVar2,uVar1 + 0x27,param_3,param_4,uVar4);
      }
    }
    free(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_185120(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void function_185120(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  char cVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  int8_t stack_array_128 [32];
  int32_t local_var_108;
  int64_t lStack_100;
  int32_t *plocal_var_f8;
  int32_t *plocal_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t *plocal_var_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t local_var_c0;
  int64_t *plStack_b8;
  int64_t lStack_b0;
  int64_t alStack_a8 [7];
  int64_t *plStack_70;
  uint64_t local_var_68;
  uint64_t local_var_58;
  local_var_c0 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  puVar9 = (int32_t *)0x0;
  local_var_108 = 0;
  lStack_100 = 0;
  plocal_var_f8 = (int32_t *)0x0;
  plocal_var_f0 = (int32_t *)0x0;
  plVar8 = *(int64_t **)param_2[4];
  plStack_b8 = param_3;
  if (plVar8 != (int64_t *)param_2[4]) {
    do {
      local_var_e8 = plVar8 + 4;
      if (0xf < (uint64_t)plVar8[7]) {
        local_var_e8 = (int64_t *)*local_var_e8;
      }
      plVar5 = plVar8 + 8;
      if (0xf < (uint64_t)plVar8[0xb]) {
        plVar5 = (int64_t *)*plVar5;
      }
      local_var_e0 = (int64_t)plVar5;
      if (puVar9 == plocal_var_f8) {
        function_1887a0(&lStack_100,plocal_var_f8,&local_var_e8);
        puVar9 = plocal_var_f0;
      }
      else {
        local_var_e8._4_4_ = (int32_t)((uint64_t)local_var_e8 >> 0x20);
        local_var_e0._0_4_ = SUB84(plVar5,0);
        local_var_e0._4_4_ = (int32_t)((uint64_t)plVar5 >> 0x20);
        *plocal_var_f8 = (int32_t)local_var_e8;
        plocal_var_f8[1] = local_var_e8._4_4_;
        plocal_var_f8[2] = (int32_t)local_var_e0;
        plocal_var_f8[3] = local_var_e0._4_4_;
        plocal_var_f8 = plocal_var_f8 + 4;
      }
      plVar5 = (int64_t *)plVar8[2];
      if (*(char *)((int64_t)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar8 = plVar5;
        plVar5 = (int64_t *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar8 = plVar5;
          plVar5 = (int64_t *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar4 = (int64_t *)plVar8[1];
        plVar5 = plVar8;
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar5 == (int64_t *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (int64_t *)plVar8[1];
          plVar5 = plVar8;
        }
      }
    } while (plVar8 != (int64_t *)param_2[4]);
  }
  lVar3 = lStack_100;
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lStack_d0 = lStack_100;
  lStack_c8 = (int64_t)plocal_var_f8 - lStack_100 >> 4;
  plocal_var_d8 = param_2;
  lVar6 = SystemRenderer(0x48);
  plStack_70 = (int64_t *)0x0;
  puVar2 = (uint64_t *)param_3[7];
  lStack_b0 = lVar6;
  if (puVar2 != (uint64_t *)0x0) {
    plStack_70 = (int64_t *)(**(code **)*puVar2)(puVar2,alStack_a8);
  }
  local_var_108 = 3;
  *(uint64_t *)(lVar6 + 0x38) = 0;
  local_var_e8 = (int64_t *)lVar6;
  local_var_68 = param_4;
  if (plStack_70 != (int64_t *)0x0) {
    if (plStack_70 == alStack_a8) {
      uVar7 = (**(code **)(*plStack_70 + 8))(plStack_70,lVar6);
      *(uint64_t *)(lVar6 + 0x38) = uVar7;
      if (plStack_70 == (int64_t *)0x0) goto LAB_1801852f0;
      (**(code **)(*plStack_70 + 0x20))
                (plStack_70,CONCAT71((int7)((uint64_t)alStack_a8 >> 8),plStack_70 != alStack_a8));
    }
    else {
      *(int64_t **)(lVar6 + 0x38) = plStack_70;
    }
    plStack_70 = (int64_t *)0x0;
  }
LAB_1801852f0:
  *(uint64_t *)(lVar6 + 0x40) = local_var_68;
  NVGSDK_Highlights_OpenGroupAsync(*(uint64_t *)(param_1 + 8),&plocal_var_d8,function_1842a0,lVar6);
  local_var_108 = 1;
  local_var_e8 = alStack_a8;
  if (plStack_70 != (int64_t *)0x0) {
    (**(code **)(*plStack_70 + 0x20))
              (plStack_70,CONCAT71((int7)((uint64_t)alStack_a8 >> 8),plStack_70 != alStack_a8));
    plStack_70 = (int64_t *)0x0;
  }
  if (lVar3 != 0) {
    uVar10 = (int64_t)puVar9 - lVar3 & 0xfffffffffffffff0;
    lVar6 = lVar3;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar6 = *(int64_t *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar6,uVar10);
    lStack_100 = 0;
    plocal_var_f8 = (int32_t *)0x0;
    plocal_var_f0 = (int32_t *)0x0;
  }
  plVar8 = (int64_t *)param_3[7];
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != param_3);
    param_3[7] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1853d0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void function_1853d0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  int64_t *plStack_d0;
  uint64_t *plocal_var_c8;
  int8_t local_var_c0;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_d8 = 0;
  plocal_var_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    plocal_var_c8 = (uint64_t *)*param_2;
  }
  local_var_c0 = *(int8_t *)(param_2 + 4);
  plStack_b0 = param_3;
  lVar3 = SystemRenderer(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  local_var_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  local_var_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_1801854b6;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1801854b6:
  *(uint64_t *)(lVar3 + 0x40) = local_var_58;
  NVGSDK_Highlights_CloseGroupAsync(*(uint64_t *)(param_1 + 8),&plocal_var_c8,function_1842a0,lVar3);
  local_var_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_185540(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void function_185540(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  int64_t *plStack_d0;
  uint64_t *plocal_var_c8;
  int64_t lStack_c0;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_d8 = 0;
  plocal_var_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    plocal_var_c8 = (uint64_t *)*param_2;
  }
  lStack_c0 = (int64_t)(param_2 + 4);
  if (0xf < (uint64_t)param_2[7]) {
    lStack_c0 = *(int64_t *)lStack_c0;
  }
  plStack_b0 = param_3;
  lVar3 = SystemRenderer(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  local_var_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  local_var_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_180185631;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_180185631:
  *(uint64_t *)(lVar3 + 0x40) = local_var_58;
  NVGSDK_Highlights_SetScreenshotHighlightAsync
            (*(uint64_t *)(param_1 + 8),&plocal_var_c8,function_1842a0,lVar3);
  local_var_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1856c0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void function_1856c0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  int64_t *plStack_d0;
  uint64_t *plocal_var_c8;
  int64_t lStack_c0;
  int32_t local_var_b8;
  int32_t local_var_b4;
  uint64_t local_var_b0;
  int64_t *plStack_a8;
  int64_t lStack_a0;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_d8 = 0;
  plocal_var_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    plocal_var_c8 = (uint64_t *)*param_2;
  }
  lStack_c0 = (int64_t)(param_2 + 4);
  if (0xf < (uint64_t)param_2[7]) {
    lStack_c0 = *(int64_t *)lStack_c0;
  }
  local_var_b8 = *(int32_t *)(param_2 + 8);
  local_var_b4 = *(int32_t *)((int64_t)param_2 + 0x44);
  plStack_a8 = param_3;
  lVar3 = SystemRenderer(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a0 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  local_var_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  local_var_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_1801857bd;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1801857bd:
  *(uint64_t *)(lVar3 + 0x40) = local_var_58;
  NVGSDK_Highlights_SetVideoHighlightAsync
            (*(uint64_t *)(param_1 + 8),&plocal_var_c8,function_1842a0,lVar3);
  local_var_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_185840(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)
void function_185840(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  int64_t lStack_f0;
  int32_t *plocal_var_e8;
  int32_t *plocal_var_e0;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int64_t lStack_c8;
  int64_t lStack_c0;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  puVar7 = (int32_t *)0x0;
  local_var_f8 = 0;
  lStack_f0 = 0;
  plocal_var_e8 = (int32_t *)0x0;
  plocal_var_e0 = (int32_t *)0x0;
  puVar6 = (uint64_t *)*param_2;
  plStack_b0 = param_3;
  if (puVar6 != (uint64_t *)param_2[1]) {
    do {
      puVar3 = puVar6;
      if (0xf < (uint64_t)puVar6[3]) {
        puVar3 = (uint64_t *)*puVar6;
      }
      local_var_d0 = *(int32_t *)(puVar6 + 4);
      local_var_cc = *(int32_t *)((int64_t)puVar6 + 0x24);
      local_var_d8 = puVar3;
      if (puVar7 == plocal_var_e8) {
        function_1887a0(&lStack_f0,plocal_var_e8,&local_var_d8);
        puVar7 = plocal_var_e0;
      }
      else {
        local_var_d8._0_4_ = SUB84(puVar3,0);
        local_var_d8._4_4_ = (int32_t)((uint64_t)puVar3 >> 0x20);
        *plocal_var_e8 = (int32_t)local_var_d8;
        plocal_var_e8[1] = local_var_d8._4_4_;
        plocal_var_e8[2] = local_var_d0;
        plocal_var_e8[3] = local_var_cc;
        plocal_var_e8 = plocal_var_e8 + 4;
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != (uint64_t *)param_2[1]);
  }
  lVar2 = lStack_f0;
  lStack_c8 = lStack_f0;
  lStack_c0 = (int64_t)plocal_var_e8 - lStack_f0 >> 4;
  lVar4 = SystemRenderer(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar6 = (uint64_t *)param_3[7];
  lStack_a8 = lVar4;
  if (puVar6 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar6)(puVar6,alStack_98);
  }
  local_var_f8 = 3;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  local_var_d8 = (int64_t *)lVar4;
  local_var_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar5 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar4);
      *(uint64_t *)(lVar4 + 0x38) = uVar5;
      if (plStack_60 == (int64_t *)0x0) goto LAB_1801859b0;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar4 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1801859b0:
  *(uint64_t *)(lVar4 + 0x40) = local_var_58;
  NVGSDK_Highlights_OpenSummaryAsync(*(uint64_t *)(param_1 + 8),&lStack_c8,function_1842a0,lVar4);
  local_var_f8 = 1;
  local_var_d8 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  if (lVar2 != 0) {
    uVar8 = (int64_t)puVar7 - lVar2 & 0xfffffffffffffff0;
    lVar4 = lVar2;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      lVar4 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar4,uVar8);
    lStack_f0 = 0;
    plocal_var_e8 = (int32_t *)0x0;
    plocal_var_e0 = (int32_t *)0x0;
  }
  plVar1 = (int64_t *)param_3[7];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_185a90(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void function_185a90(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t stack_array_f8 [32];
  int32_t local_var_d8;
  int64_t *plStack_d0;
  uint64_t *plocal_var_c8;
  int32_t local_var_c0;
  int32_t local_var_bc;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_d8 = 0;
  plocal_var_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    plocal_var_c8 = (uint64_t *)*param_2;
  }
  local_var_c0 = *(int32_t *)(param_2 + 4);
  local_var_bc = *(int32_t *)((int64_t)param_2 + 0x24);
  plStack_b0 = param_3;
  lVar3 = SystemRenderer(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  local_var_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  local_var_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_180185b78;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_180185b78:
  *(uint64_t *)(lVar3 + 0x40) = local_var_58;
  NVGSDK_Highlights_GetNumberOfHighlightsAsync
            (*(uint64_t *)(param_1 + 8),&plocal_var_c8,function_185c00,lVar3);
  local_var_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_f8);
}
// 函数: void function_185c00(int param_1,int16_t *param_2,int64_t *param_3)
void function_185c00(int param_1,int16_t *param_2,int64_t *param_3)
{
  code *pcVar1;
  int64_t *plVar2;
  int16_t astack_special_x_18 [4];
  int64_t *plStackX_20;
  int16_t *plocal_var_28;
  int64_t alStack_20 [2];
  int64_t *plStack_10;
  alStack_20[1] = 0xfffffffffffffffe;
  plVar2 = (int64_t *)param_3[7];
  plStack_10 = param_3;
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = (int64_t *)param_3[7];
  }
  else {
    plStackX_20 = (int64_t *)CONCAT44(plStackX_20._4_4_,param_1);
    if (param_1 < 0) {
      plocal_var_28 = (int16_t *)param_3[8];
      alStack_20[0] = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,alStack_20,&plocal_var_28);
    }
    else {
      astack_special_x_18[0] = *param_2;
      alStack_20[0] = param_3[8];
      plocal_var_28 = astack_special_x_18;
      plVar2 = (int64_t *)param_3[7];
      if (plVar2 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,&plocal_var_28,alStack_20);
    }
    plVar2 = (int64_t *)param_3[7];
  }
  plStackX_20 = param_3;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  free(param_3,0x48);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_185cf0(uint64_t param_1,int64_t param_2)
void function_185cf0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  void *puVar3;
  void *puVar4;
  int8_t stack_array_278 [96];
  uint64_t local_var_218;
  int aiStack_1d0 [2];
  int8_t local_var_1c8;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t *plocal_var_198;
  int32_t local_var_190;
  int8_t stack_array_18c [4];
  uint64_t local_var_188;
  int8_t stack_array_178 [16];
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int8_t local_var_140;
  uint64_t stack_array_138 [7];
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int8_t local_var_e8;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  void *plocal_var_c0;
  int32_t local_var_b8;
  uint8_t stack_array_b0 [136];
  uint64_t local_var_28;
  uVar1 = core_system_data_memory;
  local_var_218 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  lVar2 = (int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 +
          *(int64_t *)(system_message_buffer + 0x1d20);
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = *(int32_t *)(lVar2 + 0x20);
  puVar3 = *(void **)(lVar2 + 0x18);
  puVar4 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar4 = puVar3;
  }
  strcpy_s(stack_array_b0,0x80,puVar4);
  puVar3 = &system_buffer_ptr;
  if (plocal_var_c0 != (void *)0x0) {
    puVar3 = plocal_var_c0;
  }
  lVar2 = strstr(puVar3,&processed_var_9640_ptr);
  if (lVar2 != 0) {
    local_var_168 = 0;
    local_var_160 = 0xf;
    stack_array_178[0] = 0;
    local_var_158 = 0;
    local_var_150 = 0;
    local_var_148 = 0;
    local_var_140 = 0;
    plocal_var_198 = stack_array_138;
    local_var_100 = 0;
    local_var_f8 = 0;
    local_var_f0 = 0;
    local_var_d8 = 0;
    local_var_d0 = 0xf;
    local_var_e8 = 0;
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar2) != '\0');
    MathCoreCalculator0(stack_array_178,param_2);
    local_var_140 = 1;
    plocal_var_198 = (uint64_t *)0x100000000;
    local_var_190 = 2;
    function_189600(&local_var_158,&plocal_var_198,stack_array_18c);
    plocal_var_198 = (uint64_t *)&processed_var_9744_ptr;
    local_var_188 = uVar1;
    function_188620(stack_array_138,&plocal_var_198);
    local_var_1b8 = 0;
    local_var_1b0 = 0xf;
    local_var_1c8 = 0;
    plocal_var_198 = &local_var_1a8;
    local_var_1a8 = 0;
    local_var_1a0 = 0;
    local_var_1a8 = function_188560();
    function_183a20(stack_array_178,aiStack_1d0);
    if (-1 < aiStack_1d0[0]) {
      uVar1 = SystemFunction_0001801836e0();
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_9712_ptr,uVar1);
    }
    uVar1 = SystemFunction_0001801836e0();
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_9856_ptr,uVar1);
  }
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_278);
}
// 函数: void function_186360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_186360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uVar5 = 0xfffffffffffffffe;
  SystemPerformanceOptimizer(param_1 + 0x90);
  plVar2 = *(int64_t **)(param_1 + 0x78);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (int64_t *)(param_1 + 0x40));
    *(uint64_t *)(param_1 + 0x78) = 0;
  }
  lVar3 = *(int64_t *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = (*(int64_t *)(param_1 + 0x30) - lVar3 >> 2) * 4;
    lVar4 = lVar3;
    if (0xfff < uVar1) {
      lVar4 = *(int64_t *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar3 - lVar4,uVar1 + 0x27,lVar4,param_4,uVar5);
      }
    }
    free(lVar4);
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    *(uint64_t *)(param_1 + 0x30) = 0;
  }
  SystemPerformanceOptimizer(param_1);
  return;
}