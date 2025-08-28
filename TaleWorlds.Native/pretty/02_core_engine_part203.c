#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part203.c - 11 个函数

// 函数: void FUN_180184da0(uint64_t param_1,int param_2,int64_t *param_3,int64_t *param_4)
void FUN_180184da0(uint64_t param_1,int param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t auStack_b8 [32];
  int aiStack_98 [2];
  uint *puStack_90;
  int64_t *plStack_88;
  uint *puStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint **ppuStack_68;
  uint64_t uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int8_t uStack_38;
  uint64_t uStack_30;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  plVar1 = (int64_t *)param_4[7];
  uVar4 = 0;
  plStack_88 = param_4;
  if (plVar1 != (int64_t *)0x0) {
    aiStack_98[0] = param_2;
    if (param_2 < 0) {
      ppuStack_68 = (uint **)param_4[8];
      puStack_90 = (uint *)0x0;
      if (plVar1 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,aiStack_98,&puStack_90,&ppuStack_68);
    }
    else {
      puStack_80 = (uint *)0x0;
      puStack_78 = (uint *)0x0;
      puStack_70 = (uint *)0x0;
      uVar7 = uVar4;
      if (param_3[1] != 0) {
        do {
          uStack_48 = 0;
          uStack_40 = 0xf;
          uStack_58 = uStack_58 & 0xffffff00;
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (*(char *)(*(int64_t *)(uVar4 + *param_3) + lVar6) != '\0');
          FUN_1800671b0(&uStack_58);
          uStack_38 = *(int8_t *)(*param_3 + 8 + uVar4);
          if (puStack_70 == puStack_78) {
            FUN_180188d20(&puStack_80,puStack_78,&uStack_58);
          }
          else {
            puStack_90 = puStack_78;
            puStack_78[4] = 0;
            puStack_78[5] = 0;
            puStack_78[6] = 0;
            puStack_78[7] = 0;
            *puStack_78 = uStack_58;
            puStack_78[1] = uStack_54;
            puStack_78[2] = uStack_50;
            puStack_78[3] = uStack_4c;
            *(uint64_t *)(puStack_78 + 4) = uStack_48;
            *(uint64_t *)(puStack_78 + 6) = uStack_40;
            uStack_48 = 0;
            uStack_40 = 0xf;
            uStack_58 = uStack_58 & 0xffffff00;
            *(int8_t *)(puStack_78 + 8) = uStack_38;
            puStack_78 = puStack_78 + 10;
          }
          SystemPerformanceOptimizer(&uStack_58);
          uVar7 = uVar7 + 1;
          uVar4 = uVar4 + 0x10;
        } while (uVar7 < (uint64_t)param_3[1]);
      }
      puStack_90 = (uint *)param_4[8];
      ppuStack_68 = &puStack_80;
      plVar1 = (int64_t *)param_4[7];
      if (plVar1 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,aiStack_98,&ppuStack_68,&puStack_90);
      puVar3 = puStack_78;
      puVar5 = puStack_80;
      if (puStack_80 != (uint *)0x0) {
        for (; puStack_90 = puVar5, puVar5 != puVar3; puVar5 = puVar5 + 10) {
          SystemPerformanceOptimizer(puVar5);
        }
        uVar4 = (((int64_t)puStack_70 - (int64_t)puStack_80) / 0x28) * 0x28;
        puVar5 = puStack_80;
        if (0xfff < uVar4) {
          uVar4 = uVar4 + 0x27;
          puVar5 = *(uint **)(puStack_80 + -2);
          if (0x1f < (uint64_t)((int64_t)puStack_80 + (-8 - (int64_t)puVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(puVar5,uVar4);
        puStack_80 = (uint *)0x0;
        puStack_78 = (uint *)0x0;
        puStack_70 = (uint *)0x0;
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
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_b8);
}





// 函数: void FUN_180185040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180185040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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



// 函数: void FUN_180185120(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185120(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

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
  int8_t auStack_128 [32];
  int32_t uStack_108;
  int64_t lStack_100;
  int32_t *puStack_f8;
  int32_t *puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t *puStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t uStack_c0;
  int64_t *plStack_b8;
  int64_t lStack_b0;
  int64_t alStack_a8 [7];
  int64_t *plStack_70;
  uint64_t uStack_68;
  uint64_t uStack_58;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  puVar9 = (int32_t *)0x0;
  uStack_108 = 0;
  lStack_100 = 0;
  puStack_f8 = (int32_t *)0x0;
  puStack_f0 = (int32_t *)0x0;
  plVar8 = *(int64_t **)param_2[4];
  plStack_b8 = param_3;
  if (plVar8 != (int64_t *)param_2[4]) {
    do {
      uStack_e8 = plVar8 + 4;
      if (0xf < (uint64_t)plVar8[7]) {
        uStack_e8 = (int64_t *)*uStack_e8;
      }
      plVar5 = plVar8 + 8;
      if (0xf < (uint64_t)plVar8[0xb]) {
        plVar5 = (int64_t *)*plVar5;
      }
      uStack_e0 = (int64_t)plVar5;
      if (puVar9 == puStack_f8) {
        FUN_1801887a0(&lStack_100,puStack_f8,&uStack_e8);
        puVar9 = puStack_f0;
      }
      else {
        uStack_e8._4_4_ = (int32_t)((uint64_t)uStack_e8 >> 0x20);
        uStack_e0._0_4_ = SUB84(plVar5,0);
        uStack_e0._4_4_ = (int32_t)((uint64_t)plVar5 >> 0x20);
        *puStack_f8 = (int32_t)uStack_e8;
        puStack_f8[1] = uStack_e8._4_4_;
        puStack_f8[2] = (int32_t)uStack_e0;
        puStack_f8[3] = uStack_e0._4_4_;
        puStack_f8 = puStack_f8 + 4;
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
  lStack_c8 = (int64_t)puStack_f8 - lStack_100 >> 4;
  puStack_d8 = param_2;
  lVar6 = FUN_1808fc418(0x48);
  plStack_70 = (int64_t *)0x0;
  puVar2 = (uint64_t *)param_3[7];
  lStack_b0 = lVar6;
  if (puVar2 != (uint64_t *)0x0) {
    plStack_70 = (int64_t *)(**(code **)*puVar2)(puVar2,alStack_a8);
  }
  uStack_108 = 3;
  *(uint64_t *)(lVar6 + 0x38) = 0;
  uStack_e8 = (int64_t *)lVar6;
  uStack_68 = param_4;
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
  *(uint64_t *)(lVar6 + 0x40) = uStack_68;
  NVGSDK_Highlights_OpenGroupAsync(*(uint64_t *)(param_1 + 8),&puStack_d8,FUN_1801842a0,lVar6);
  uStack_108 = 1;
  uStack_e8 = alStack_a8;
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
    puStack_f8 = (int32_t *)0x0;
    puStack_f0 = (int32_t *)0x0;
  }
  plVar8 = (int64_t *)param_3[7];
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801853d0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_1801853d0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int8_t uStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  uStack_c0 = *(int8_t *)(param_2 + 4);
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
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
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_CloseGroupAsync(*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
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
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185540(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185540(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  lStack_c0 = (int64_t)(param_2 + 4);
  if (0xf < (uint64_t)param_2[7]) {
    lStack_c0 = *(int64_t *)lStack_c0;
  }
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
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
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_SetScreenshotHighlightAsync
            (*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
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
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801856c0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_1801856c0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int64_t lStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  uint64_t uStack_b0;
  int64_t *plStack_a8;
  int64_t lStack_a0;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  lStack_c0 = (int64_t)(param_2 + 4);
  if (0xf < (uint64_t)param_2[7]) {
    lStack_c0 = *(int64_t *)lStack_c0;
  }
  uStack_b8 = *(int32_t *)(param_2 + 8);
  uStack_b4 = *(int32_t *)((int64_t)param_2 + 0x44);
  plStack_a8 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a0 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
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
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_SetVideoHighlightAsync
            (*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
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
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185840(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185840(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  int64_t lStack_f0;
  int32_t *puStack_e8;
  int32_t *puStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int64_t lStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  puVar7 = (int32_t *)0x0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  puStack_e8 = (int32_t *)0x0;
  puStack_e0 = (int32_t *)0x0;
  puVar6 = (uint64_t *)*param_2;
  plStack_b0 = param_3;
  if (puVar6 != (uint64_t *)param_2[1]) {
    do {
      puVar3 = puVar6;
      if (0xf < (uint64_t)puVar6[3]) {
        puVar3 = (uint64_t *)*puVar6;
      }
      uStack_d0 = *(int32_t *)(puVar6 + 4);
      uStack_cc = *(int32_t *)((int64_t)puVar6 + 0x24);
      uStack_d8 = puVar3;
      if (puVar7 == puStack_e8) {
        FUN_1801887a0(&lStack_f0,puStack_e8,&uStack_d8);
        puVar7 = puStack_e0;
      }
      else {
        uStack_d8._0_4_ = SUB84(puVar3,0);
        uStack_d8._4_4_ = (int32_t)((uint64_t)puVar3 >> 0x20);
        *puStack_e8 = (int32_t)uStack_d8;
        puStack_e8[1] = uStack_d8._4_4_;
        puStack_e8[2] = uStack_d0;
        puStack_e8[3] = uStack_cc;
        puStack_e8 = puStack_e8 + 4;
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != (uint64_t *)param_2[1]);
  }
  lVar2 = lStack_f0;
  lStack_c8 = lStack_f0;
  lStack_c0 = (int64_t)puStack_e8 - lStack_f0 >> 4;
  lVar4 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar6 = (uint64_t *)param_3[7];
  lStack_a8 = lVar4;
  if (puVar6 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar6)(puVar6,alStack_98);
  }
  uStack_f8 = 3;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  uStack_d8 = (int64_t *)lVar4;
  uStack_58 = param_4;
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
  *(uint64_t *)(lVar4 + 0x40) = uStack_58;
  NVGSDK_Highlights_OpenSummaryAsync(*(uint64_t *)(param_1 + 8),&lStack_c8,FUN_1801842a0,lVar4);
  uStack_f8 = 1;
  uStack_d8 = alStack_98;
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
    puStack_e8 = (int32_t *)0x0;
    puStack_e0 = (int32_t *)0x0;
  }
  plVar1 = (int64_t *)param_3[7];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185a90(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185a90(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  uStack_c0 = *(int32_t *)(param_2 + 4);
  uStack_bc = *(int32_t *)((int64_t)param_2 + 0x24);
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
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
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_GetNumberOfHighlightsAsync
            (*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_180185c00,lVar3);
  uStack_d8 = 1;
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
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}





// 函数: void FUN_180185c00(int param_1,int16_t *param_2,int64_t *param_3)
void FUN_180185c00(int param_1,int16_t *param_2,int64_t *param_3)

{
  code *pcVar1;
  int64_t *plVar2;
  int16_t auStackX_18 [4];
  int64_t *plStackX_20;
  int16_t *puStack_28;
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
      puStack_28 = (int16_t *)param_3[8];
      alStack_20[0] = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,alStack_20,&puStack_28);
    }
    else {
      auStackX_18[0] = *param_2;
      alStack_20[0] = param_3[8];
      puStack_28 = auStackX_18;
      plVar2 = (int64_t *)param_3[7];
      if (plVar2 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,&puStack_28,alStack_20);
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



// 函数: void FUN_180185cf0(uint64_t param_1,int64_t param_2)
void FUN_180185cf0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  void *puVar3;
  void *puVar4;
  int8_t auStack_278 [96];
  uint64_t uStack_218;
  int aiStack_1d0 [2];
  int8_t uStack_1c8;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t *puStack_198;
  int32_t uStack_190;
  int8_t auStack_18c [4];
  uint64_t uStack_188;
  int8_t auStack_178 [16];
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int8_t uStack_140;
  uint64_t auStack_138 [7];
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int8_t uStack_e8;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uVar1 = core_system_data_memory;
  uStack_218 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_278;
  lVar2 = (int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 +
          *(int64_t *)(system_message_buffer + 0x1d20);
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(int32_t *)(lVar2 + 0x20);
  puVar3 = *(void **)(lVar2 + 0x18);
  puVar4 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar4 = puVar3;
  }
  strcpy_s(auStack_b0,0x80,puVar4);
  puVar3 = &system_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
    puVar3 = puStack_c0;
  }
  lVar2 = strstr(puVar3,&unknown_var_9640_ptr);
  if (lVar2 != 0) {
    uStack_168 = 0;
    uStack_160 = 0xf;
    auStack_178[0] = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_198 = auStack_138;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0xf;
    uStack_e8 = 0;
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar2) != '\0');
    FUN_1800671b0(auStack_178,param_2);
    uStack_140 = 1;
    puStack_198 = (uint64_t *)0x100000000;
    uStack_190 = 2;
    FUN_180189600(&uStack_158,&puStack_198,auStack_18c);
    puStack_198 = (uint64_t *)&unknown_var_9744_ptr;
    uStack_188 = uVar1;
    FUN_180188620(auStack_138,&puStack_198);
    uStack_1b8 = 0;
    uStack_1b0 = 0xf;
    uStack_1c8 = 0;
    puStack_198 = &uStack_1a8;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = FUN_180188560();
    FUN_180183a20(auStack_178,aiStack_1d0);
    if (-1 < aiStack_1d0[0]) {
      uVar1 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,&unknown_var_9712_ptr,uVar1);
    }
    uVar1 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_9856_ptr,uVar1);
  }
  puStack_c8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_278);
}





// 函数: void FUN_180186360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180186360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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





