#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part206.c - 5 个函数

// 函数: void FUN_1807897f7(int64_t param_1)
void FUN_1807897f7(int64_t param_1)

{
  uint64_t uVar1;
  float *pfVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  float *pfVar6;
  
  uVar1 = *(uint64_t *)(param_1 + 0x60);
  SystemStateManager(uVar1);
  iVar4 = *(int *)(unaff_RBX + 0x18);
  pfVar2 = *(float **)(unaff_RBX + 0x20);
  if (unaff_ESI == 1) {
    if (unaff_RBP == 0) {
      iVar3 = 0;
      if (0 < iVar4 / 2) {
        lVar5 = 0;
        pfVar6 = pfVar2;
        do {
          iVar3 = iVar3 + 1;
          *pfVar6 = *(float *)(unaff_RDI +
                              (int64_t)(*(int *)(lVar5 + *(int64_t *)(unaff_RBX + 0x38)) * 2) * 4)
          ;
          pfVar6[1] = *(float *)(unaff_RDI + 4 +
                                (int64_t)(*(int *)(lVar5 + *(int64_t *)(unaff_RBX + 0x38)) * 2) *
                                4);
          iVar4 = *(int *)(unaff_RBX + 0x18);
          lVar5 = lVar5 + 4;
          pfVar6 = pfVar6 + 2;
        } while (iVar3 < iVar4 / 2);
      }
      goto LAB_180789990;
    }
  }
  else if (unaff_RBP == 0) {
    iVar3 = 0;
    if (0 < iVar4 / 2) {
      lVar5 = 0;
      pfVar6 = pfVar2;
      do {
        iVar3 = iVar3 + 1;
        *pfVar6 = *(float *)(unaff_RDI +
                            (int64_t)
                            (*(int *)(lVar5 + *(int64_t *)(unaff_RBX + 0x38)) * unaff_ESI * 2) * 4)
        ;
        pfVar6[1] = *(float *)(unaff_RDI +
                              (int64_t)
                              ((*(int *)(lVar5 + *(int64_t *)(unaff_RBX + 0x38)) * 2 + 1) *
                              unaff_ESI) * 4);
        iVar4 = *(int *)(unaff_RBX + 0x18);
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 2;
      } while (iVar3 < iVar4 / 2);
    }
    goto LAB_180789990;
  }
  iVar3 = 0;
  if (0 < iVar4 / 2) {
    lVar5 = 0;
    pfVar6 = pfVar2;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(lVar5 + *(int64_t *)(unaff_RBX + 0x38));
      *pfVar6 = *(float *)(unaff_RDI + (int64_t)(iVar4 * unaff_ESI * 2) * 4) *
                *(float *)(unaff_RBP + (int64_t)(iVar4 * 2) * 4);
      iVar4 = *(int *)(lVar5 + *(int64_t *)(unaff_RBX + 0x38)) * 2;
      pfVar6[1] = *(float *)(unaff_RDI + (int64_t)((iVar4 + 1) * unaff_ESI) * 4) *
                  *(float *)(unaff_RBP + 4 + (int64_t)iVar4 * 4);
      iVar4 = *(int *)(unaff_RBX + 0x18);
      lVar5 = lVar5 + 4;
      pfVar6 = pfVar6 + 2;
    } while (iVar3 < iVar4 / 2);
  }
LAB_180789990:
  (*(code *)*ui_system_config)(pfVar2,*(int64_t *)(unaff_RBX + 0x30) + (int64_t)iVar4 * 4,iVar4 / 2)
  ;
  (*(code *)ui_system_config[2])(pfVar2);
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}





// 函数: void FUN_1807899de(void)
void FUN_1807899de(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_180789a00(int64_t param_1,uint64_t param_2,int32_t *param_3,int64_t param_4,int param_5)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int32_t *puVar7;
  float *pfVar8;
  int64_t lVar9;
  float *pfVar10;
  int64_t lVar11;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x43;
  }
  lVar4 = (int64_t)param_5;
  if (param_5 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x68);
    SystemStateManager(uVar1);
    (**(code **)(ui_system_config + 0x18))
              (param_2,*(uint64_t *)(param_1 + 0x28),*(uint64_t *)(param_1 + 0x30),
               *(int32_t *)(param_1 + 0x18));
    iVar3 = *(int *)(param_1 + 0x18);
    iVar5 = 0;
    lVar11 = *(int64_t *)(param_1 + 0x28);
    iVar6 = 0;
    iVar2 = iVar3 / 2;
    if (0 < iVar2) {
      lVar9 = 0;
      do {
        iVar2 = iVar2 + iVar6;
        iVar6 = iVar6 + 1;
        *(uint64_t *)(lVar11 + (int64_t)iVar2 * 8) =
             *(uint64_t *)(lVar11 + (int64_t)*(int *)(lVar9 + *(int64_t *)(param_1 + 0x38)) * 8)
        ;
        iVar3 = *(int *)(param_1 + 0x18);
        iVar2 = iVar3 / 2;
        lVar9 = lVar9 + 4;
      } while (iVar6 < iVar2);
      lVar11 = *(int64_t *)(param_1 + 0x28);
    }
    (**(code **)(ui_system_config + 8))
              (lVar11 + (int64_t)iVar3 * 4,*(int64_t *)(param_1 + 0x30) + (int64_t)iVar3 * 4,
               iVar3 / 2);
    if ((param_5 == 1) && (param_4 == 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      if (0 < iVar3) {
        puVar7 = param_3 + 2;
        do {
          puVar7[-2] = *(int32_t *)
                        (*(int64_t *)(param_1 + 0x28) + (int64_t)(iVar3 + iVar5) * 4);
          puVar7[-1] = *(int32_t *)
                        (*(int64_t *)(param_1 + 0x28) + 4 +
                        (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4);
          *puVar7 = *(int32_t *)
                     (*(int64_t *)(param_1 + 0x28) + 8 +
                     (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4);
          iVar3 = *(int *)(param_1 + 0x18) + iVar5;
          iVar5 = iVar5 + 4;
          puVar7[1] = *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0xc + (int64_t)iVar3 * 4);
          iVar3 = *(int *)(param_1 + 0x18);
          puVar7 = puVar7 + 4;
        } while (iVar5 < iVar3);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      if (param_4 == 0) {
        if (0 < iVar3) {
          do {
            *param_3 = *(int32_t *)
                        (*(int64_t *)(param_1 + 0x28) + (int64_t)(iVar3 + iVar5) * 4);
            param_3[lVar4] =
                 *(int32_t *)
                  (*(int64_t *)(param_1 + 0x28) + 4 +
                  (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4);
            param_3[param_5 * 2] =
                 *(int32_t *)
                  (*(int64_t *)(param_1 + 0x28) + 8 +
                  (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4);
            iVar3 = *(int *)(param_1 + 0x18) + iVar5;
            iVar5 = iVar5 + 4;
            param_3[param_5 * 3] =
                 *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0xc + (int64_t)iVar3 * 4);
            param_3 = param_3 + param_5 * 4;
            iVar3 = *(int *)(param_1 + 0x18);
          } while (iVar5 < iVar3);
        }
      }
      else if (0 < iVar3) {
        pfVar10 = (float *)(param_3 + lVar4 * 2);
        pfVar8 = (float *)(param_4 + 8);
        do {
          pfVar10[lVar4 * -2] =
               *(float *)(*(int64_t *)(param_1 + 0x28) +
                         (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4) * pfVar8[-2];
          pfVar10[-lVar4] =
               *(float *)(*(int64_t *)(param_1 + 0x28) + 4 +
                         (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4) * pfVar8[-1];
          *pfVar10 = *(float *)(*(int64_t *)(param_1 + 0x28) + 8 +
                               (int64_t)(*(int *)(param_1 + 0x18) + iVar5) * 4) * *pfVar8;
          iVar3 = *(int *)(param_1 + 0x18) + iVar5;
          iVar5 = iVar5 + 4;
          pfVar10[lVar4] =
               *(float *)(*(int64_t *)(param_1 + 0x28) + 0xc + (int64_t)iVar3 * 4) * pfVar8[1];
          pfVar10 = pfVar10 + param_5 * 4;
          pfVar8 = pfVar8 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x18));
      }
    }
                    // WARNING: Subroutine does not return
    SystemConfigManager(uVar1);
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180789a48(int64_t param_1)
void FUN_180789a48(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar4;
  int iVar5;
  int32_t *puVar6;
  float *pfVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t lVar10;
  int32_t *unaff_R14;
  uint64_t uVar11;
  
  uVar1 = *(uint64_t *)(param_1 + 0x68);
  uVar11 = SystemStateManager(uVar1);
  (**(code **)(ui_system_config + 0x18))
            (uVar11,*(uint64_t *)(unaff_RBX + 0x28),*(uint64_t *)(unaff_RBX + 0x30),
             *(int32_t *)(unaff_RBX + 0x18));
  iVar3 = *(int *)(unaff_RBX + 0x18);
  iVar4 = 0;
  lVar10 = *(int64_t *)(unaff_RBX + 0x28);
  iVar5 = 0;
  iVar2 = iVar3 / 2;
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      iVar2 = iVar2 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint64_t *)(lVar10 + (int64_t)iVar2 * 8) =
           *(uint64_t *)(lVar10 + (int64_t)*(int *)(lVar8 + *(int64_t *)(unaff_RBX + 0x38)) * 8)
      ;
      iVar3 = *(int *)(unaff_RBX + 0x18);
      iVar2 = iVar3 / 2;
      lVar8 = lVar8 + 4;
    } while (iVar5 < iVar2);
    lVar10 = *(int64_t *)(unaff_RBX + 0x28);
  }
  (**(code **)(ui_system_config + 8))
            (lVar10 + (int64_t)iVar3 * 4,*(int64_t *)(unaff_RBX + 0x30) + (int64_t)iVar3 * 4,
             iVar3 / 2);
  iVar3 = (int)unaff_RSI;
  if ((iVar3 == 1) && (unaff_RBP == 0)) {
    iVar3 = *(int *)(unaff_RBX + 0x18);
    if (0 < iVar3) {
      puVar6 = unaff_R14 + 2;
      do {
        puVar6[-2] = *(int32_t *)
                      (*(int64_t *)(unaff_RBX + 0x28) + (int64_t)(iVar3 + iVar4) * 4);
        puVar6[-1] = *(int32_t *)
                      (*(int64_t *)(unaff_RBX + 0x28) + 4 +
                      (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
        *puVar6 = *(int32_t *)
                   (*(int64_t *)(unaff_RBX + 0x28) + 8 +
                   (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
        iVar3 = *(int *)(unaff_RBX + 0x18) + iVar4;
        iVar4 = iVar4 + 4;
        puVar6[1] = *(int32_t *)(*(int64_t *)(unaff_RBX + 0x28) + 0xc + (int64_t)iVar3 * 4);
        iVar3 = *(int *)(unaff_RBX + 0x18);
        puVar6 = puVar6 + 4;
      } while (iVar4 < iVar3);
    }
  }
  else {
    iVar2 = *(int *)(unaff_RBX + 0x18);
    if (unaff_RBP == 0) {
      if (0 < iVar2) {
        do {
          *unaff_R14 = *(int32_t *)
                        (*(int64_t *)(unaff_RBX + 0x28) + (int64_t)(iVar2 + iVar4) * 4);
          unaff_R14[unaff_RSI] =
               *(int32_t *)
                (*(int64_t *)(unaff_RBX + 0x28) + 4 +
                (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
          unaff_R14[iVar3 * 2] =
               *(int32_t *)
                (*(int64_t *)(unaff_RBX + 0x28) + 8 +
                (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
          iVar2 = *(int *)(unaff_RBX + 0x18) + iVar4;
          iVar4 = iVar4 + 4;
          unaff_R14[iVar3 * 3] =
               *(int32_t *)(*(int64_t *)(unaff_RBX + 0x28) + 0xc + (int64_t)iVar2 * 4);
          unaff_R14 = unaff_R14 + iVar3 * 4;
          iVar2 = *(int *)(unaff_RBX + 0x18);
        } while (iVar4 < iVar2);
      }
    }
    else if (0 < iVar2) {
      pfVar9 = (float *)(unaff_R14 + unaff_RSI * 2);
      pfVar7 = (float *)(unaff_RBP + 8);
      do {
        pfVar9[unaff_RSI * -2] =
             *(float *)(*(int64_t *)(unaff_RBX + 0x28) +
                       (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4) * pfVar7[-2];
        pfVar9[-unaff_RSI] =
             *(float *)(*(int64_t *)(unaff_RBX + 0x28) + 4 +
                       (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4) * pfVar7[-1];
        *pfVar9 = *(float *)(*(int64_t *)(unaff_RBX + 0x28) + 8 +
                            (int64_t)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4) * *pfVar7;
        iVar2 = *(int *)(unaff_RBX + 0x18) + iVar4;
        iVar4 = iVar4 + 4;
        pfVar9[unaff_RSI] =
             *(float *)(*(int64_t *)(unaff_RBX + 0x28) + 0xc + (int64_t)iVar2 * 4) * pfVar7[1];
        pfVar9 = pfVar9 + iVar3 * 4;
        pfVar7 = pfVar7 + 4;
      } while (iVar4 < *(int *)(unaff_RBX + 0x18));
    }
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}





// 函数: void FUN_180789cd9(void)
void FUN_180789cd9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180789cf0(int64_t *param_1)
void FUN_180789cf0(int64_t *param_1)

{
  int64_t lVar1;
  
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[8],&unknown_var_160_ptr,0x94,1);
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[9],&unknown_var_160_ptr,0x95,1);
  }
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[10],&unknown_var_160_ptr,0x96,1);
  }
  if (param_1[0xb] != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0xb],&unknown_var_160_ptr,0x97,1);
  }
  *(int32_t *)(param_1 + 3) = 0;
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  lVar1 = param_1[0xd];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  if ((lVar1 != 0) && (lVar1 != param_1[0xc])) {
    FUN_180768380(lVar1,0);
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_180768380(param_1[0xc],0);
    param_1[0xc] = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_160_ptr,0xab,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180789e60(uint64_t *param_1)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint uVar8;
  uint64_t uVar9;
  uint uVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint uVar13;
  uint64_t uVar14;
  int64_t lStackX_8;
  
  if (param_1[1] == 0) {
    uVar10 = *(uint *)(param_1 + 4);
  }
  else {
    uVar10 = *(uint *)((int64_t)param_1 + 0x24);
  }
  iVar2 = *(int *)((int64_t)param_1 + 0x1c);
  uVar5 = ~(iVar2 - 1U);
  uVar12 = iVar2 + 0xa7U & uVar5;
  uVar8 = iVar2 + 0x37U & uVar5;
  uVar13 = iVar2 + -1 + uVar10 * 0x18 & uVar5;
  uVar5 = iVar2 + -1 + uVar10 * 8 & uVar5;
  lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        uVar12 * uVar10 + iVar2 + uVar5 + uVar13 + uVar8,&unknown_var_272_ptr,0x24,
                        0x200000);
  if (lVar4 != 0) {
    uVar9 = 0;
    uVar3 = *(int *)((int64_t)param_1 + 0x1c) - 1;
    plVar7 = (int64_t *)((uint64_t)uVar3 + lVar4 & ~(uint64_t)uVar3);
    plVar7[3] = lVar4;
    plVar7[5] = (int64_t)plVar7 + (uint64_t)uVar8;
    *(uint *)(plVar7 + 4) = uVar10;
    plVar7[6] = (uint64_t)uVar13 + (uint64_t)uVar8 + (int64_t)plVar7;
    plVar7[1] = (int64_t)plVar7;
    *plVar7 = (int64_t)plVar7;
    plVar7[2] = 0;
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      param_1[1] = plVar7;
    }
    else {
      plVar7[1] = *(int64_t *)(lVar4 + 8);
      *plVar7 = lVar4;
      *(int64_t **)(lVar4 + 8) = plVar7;
      *(int64_t **)plVar7[1] = plVar7;
    }
    if (uVar10 != 0) {
      lStackX_8 = 0;
      uVar14 = uVar9;
      do {
        puVar11 = (uint64_t *)
                  ((uint64_t)((int)uVar9 * uVar12) + (uint64_t)uVar5 + (uint64_t)uVar13 +
                   (uint64_t)uVar8 + (int64_t)plVar7);
        *(uint64_t **)(lStackX_8 + plVar7[6]) = puVar11;
        plVar6 = (int64_t *)(plVar7[5] + uVar14);
        plVar6[1] = param_1[7];
        *plVar6 = (int64_t)(param_1 + 6);
        param_1[7] = plVar6;
        *(int64_t **)plVar6[1] = plVar6;
        *(uint64_t **)(plVar7[5] + 0x10 + uVar14) = puVar11;
        puVar1 = puVar11 + 1;
        puVar11[2] = puVar1;
        *puVar1 = puVar1;
        puVar11[3] = 0;
        puVar1 = puVar11 + 4;
        puVar11[5] = puVar1;
        *puVar1 = puVar1;
        puVar11[6] = 0;
        puVar11[8] = 0;
        *(int32_t *)(puVar11 + 7) = 0;
        puVar11[10] = 0;
        *(int32_t *)(puVar11 + 9) = 0;
        puVar11[0x14] = 0;
        *(int32_t *)(puVar11 + 0x13) = 0;
        *puVar11 = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        func_0x000180763630(puVar11,*param_1,0x3f800000);
        uVar3 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar3;
        lStackX_8 = lStackX_8 + 8;
        uVar14 = uVar14 + 0x18;
      } while (uVar3 < uVar10);
    }
    *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) + uVar10;
    return 0;
  }
  return 0x26;
}



uint64_t FUN_180789f8f(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  int64_t unaff_RBX;
  uint unaff_EBP;
  uint unaff_ESI;
  uint64_t *unaff_RDI;
  int64_t *plVar2;
  int64_t in_R10;
  int64_t unaff_R12;
  int unaff_R13D;
  int64_t lVar3;
  int64_t lStack0000000000000080;
  int64_t in_stack_00000088;
  int64_t lStack0000000000000090;
  
  lVar3 = in_R10;
  lStack0000000000000080 = param_1;
  lStack0000000000000090 = param_4;
  do {
    plVar2 = (int64_t *)
             ((uint64_t)(unaff_EBP * unaff_R13D) + lStack0000000000000090 + param_2 + unaff_R12 +
             unaff_RBX);
    *(int64_t **)(lStack0000000000000080 + *(int64_t *)(unaff_RBX + 0x30)) = plVar2;
    plVar1 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x28) + lVar3);
    plVar1[1] = unaff_RDI[7];
    *plVar1 = (int64_t)(unaff_RDI + 6);
    unaff_RDI[7] = plVar1;
    *(int64_t **)plVar1[1] = plVar1;
    *(int64_t **)(*(int64_t *)(unaff_RBX + 0x28) + 0x10 + lVar3) = plVar2;
    plVar1 = plVar2 + 1;
    plVar2[2] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar2[3] = in_R10;
    plVar1 = plVar2 + 4;
    plVar2[5] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar2[6] = in_R10;
    plVar2[8] = in_R10;
    *(int32_t *)(plVar2 + 7) = 0;
    plVar2[10] = in_R10;
    *(int32_t *)(plVar2 + 9) = 0;
    plVar2[0x14] = in_R10;
    *(int32_t *)(plVar2 + 0x13) = 0;
    *plVar2 = in_R10;
    plVar2[0xb] = in_R10;
    plVar2[0xc] = in_R10;
    func_0x000180763630(plVar2,*unaff_RDI,0x3f800000);
    unaff_EBP = unaff_EBP + 1;
    lStack0000000000000080 = lStack0000000000000080 + 8;
    lVar3 = lVar3 + 0x18;
    in_R10 = 0;
    param_2 = in_stack_00000088;
  } while (unaff_EBP < unaff_ESI);
  *(uint *)(unaff_RDI + 2) = *(int *)(unaff_RDI + 2) + unaff_ESI;
  return 0;
}



uint64_t FUN_18078a09f(void)

{
  int unaff_ESI;
  int64_t unaff_RDI;
  
  *(int *)(unaff_RDI + 0x10) = *(int *)(unaff_RDI + 0x10) + unaff_ESI;
  return 0;
}



int FUN_18078a0c0(int64_t *param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int64_t *plVar8;
  int iVar9;
  
  iVar6 = (int)param_1[3];
  lVar1 = *param_1;
  iVar9 = 0x16;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  bVar5 = false;
  if (lVar1 == 0) {
    iVar6 = 0x43;
  }
  else if (param_2 == (int64_t *)0x0) {
    iVar6 = 0x1f;
  }
  else {
    cVar7 = '\0';
    if (-1 < iVar6) {
      cVar7 = param_3;
    }
    if ((cVar7 != '\0') && (lVar1 != 0)) {
      func_0x000180743c20(lVar1,iVar9);
      bVar5 = true;
    }
    plVar2 = param_1 + 6;
    if ((((int64_t *)*plVar2 != plVar2) || ((int64_t *)param_1[7] != plVar2)) ||
       (iVar6 = FUN_180789e60(param_1), iVar6 == 0)) {
      plVar2 = (int64_t *)*plVar2;
      *(int64_t *)plVar2[1] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      plVar2[1] = param_1[10];
      *plVar2 = (int64_t)(param_1 + 9);
      param_1[10] = (int64_t)plVar2;
      *(int64_t **)plVar2[1] = plVar2;
      plVar8 = (int64_t *)param_1[1];
      do {
        plVar3 = (int64_t *)plVar8[5];
        if ((plVar3 <= plVar2) && (plVar2 < plVar3 + (int64_t)(int)plVar8[4] * 3)) {
          iVar6 = (int)(((int64_t)plVar2 - (int64_t)plVar3) / 0x18);
          if (iVar6 != -1) {
            lVar4 = *(int64_t *)(plVar8[6] + (int64_t)iVar6 * 8);
            *param_2 = lVar4;
            if (lVar4 == 0) {
              iVar6 = 0x26;
            }
            else {
              plVar2[2] = lVar4;
              func_0x000180763630(*param_2,*param_1,0x3f800000);
              *(int *)((int64_t)plVar8 + 0x24) = *(int *)((int64_t)plVar8 + 0x24) + 1;
              *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
              iVar6 = 0;
            }
            goto LAB_18078a1be;
          }
          break;
        }
        plVar8 = (int64_t *)*plVar8;
      } while (plVar8 != (int64_t *)param_1[1]);
      iVar6 = 0x1e;
    }
  }
LAB_18078a1be:
  if ((bVar5) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,iVar9);
  }
  return iVar6;
}



int FUN_18078a0d9(uint64_t *param_1,int64_t *param_2,char param_3,int param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int64_t *plVar8;
  int64_t unaff_RBP;
  
  bVar5 = false;
  if (unaff_RBP == 0) {
    iVar6 = 0x43;
  }
  else if (param_2 == (int64_t *)0x0) {
    iVar6 = 0x1f;
  }
  else {
    cVar7 = '\0';
    if (-1 < param_4) {
      cVar7 = param_3;
    }
    if ((cVar7 != '\0') && (unaff_RBP != 0)) {
      func_0x000180743c20();
      bVar5 = true;
    }
    puVar1 = param_1 + 6;
    if ((((uint64_t *)*puVar1 != puVar1) || ((uint64_t *)param_1[7] != puVar1)) ||
       (iVar6 = FUN_180789e60(param_1), iVar6 == 0)) {
      plVar2 = (int64_t *)*puVar1;
      *(int64_t *)plVar2[1] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      plVar2[1] = param_1[10];
      *plVar2 = (int64_t)(param_1 + 9);
      param_1[10] = plVar2;
      *(int64_t **)plVar2[1] = plVar2;
      plVar8 = (int64_t *)param_1[1];
      do {
        plVar3 = (int64_t *)plVar8[5];
        if ((plVar3 <= plVar2) && (plVar2 < plVar3 + (int64_t)(int)plVar8[4] * 3)) {
          iVar6 = (int)(((int64_t)plVar2 - (int64_t)plVar3) / 0x18);
          if (iVar6 != -1) {
            lVar4 = *(int64_t *)(plVar8[6] + (int64_t)iVar6 * 8);
            *param_2 = lVar4;
            if (lVar4 == 0) {
              iVar6 = 0x26;
            }
            else {
              plVar2[2] = lVar4;
              func_0x000180763630(*param_2,*param_1,0x3f800000);
              *(int *)((int64_t)plVar8 + 0x24) = *(int *)((int64_t)plVar8 + 0x24) + 1;
              *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
              iVar6 = 0;
            }
            goto LAB_18078a1be;
          }
          break;
        }
        plVar8 = (int64_t *)*plVar8;
      } while (plVar8 != (int64_t *)param_1[1]);
      iVar6 = 0x1e;
    }
  }
LAB_18078a1be:
  if ((bVar5) && (unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar6;
}



int32_t FUN_18078a1d7(void)

{
  int64_t unaff_RBP;
  int32_t unaff_EDI;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}



int32_t FUN_18078a1f2(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int iVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  int32_t unaff_EDI;
  char unaff_R12B;
  int64_t *unaff_R15;
  
  iVar2 = (int)((param_3 - param_2) / 0x18);
  if (iVar2 == -1) {
    unaff_EDI = 0x1e;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x30) + (int64_t)iVar2 * 8);
    *unaff_R15 = lVar1;
    if (lVar1 == 0) {
      unaff_EDI = 0x26;
    }
    else {
      *(int64_t *)(param_3 + 0x10) = lVar1;
      func_0x000180763630(*unaff_R15,*unaff_RSI,0x3f800000);
      *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + 1;
      *(int *)((int64_t)unaff_RSI + 0x14) = *(int *)((int64_t)unaff_RSI + 0x14) + 1;
    }
  }
  if ((unaff_R12B != '\0') && (unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078a260(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  plVar1 = *(int64_t **)(param_1 + 8);
  if (plVar1 == (int64_t *)0x0) {
    return 0;
  }
  uVar2 = 0;
  uVar5 = uVar2;
  uVar6 = uVar2;
  if (0 < (int)plVar1[4]) {
    do {
      uVar4 = (int)uVar5 + 1;
      plVar3 = (int64_t *)(plVar1[5] + uVar6);
      *(int64_t *)plVar3[1] = *plVar3;
      *(int64_t *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (int64_t)plVar3;
      *plVar3 = (int64_t)plVar3;
      uVar5 = (uint64_t)uVar4;
      uVar6 = uVar6 + 0x18;
    } while ((int)uVar4 < (int)plVar1[4]);
  }
  if (plVar1 == *(int64_t **)(param_1 + 8)) {
    plVar3 = (int64_t *)*plVar1;
    if ((int64_t *)*plVar1 == *(int64_t **)(param_1 + 8)) {
      plVar3 = (int64_t *)uVar2;
    }
    *(int64_t **)(param_1 + 8) = plVar3;
  }
  *(int64_t *)plVar1[1] = *plVar1;
  *(int64_t *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)plVar1[4];
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1[3],&unknown_var_272_ptr,0x70,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



