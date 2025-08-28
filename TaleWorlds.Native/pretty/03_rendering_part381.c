#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part381.c - 21 个函数

// 函数: void FUN_180476f10(void)
void FUN_180476f10(void)

{
  FUN_180477750();
  return;
}



int8_t * FUN_180476f30(int64_t param_1,int8_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t auStack_20 [2];
  int8_t *puStack_10;
  
  auStack_20[1] = 0xfffffffffffffffe;
  puStack_10 = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0xf;
  *param_2 = 0;
  if (((*(uint *)(param_1 + 0x78) & 2) == 0) &&
     (uVar4 = **(uint64_t **)(param_1 + 0x48), uVar4 != 0)) {
    lVar1 = **(int64_t **)(param_1 + 0x28);
    auStack_20[0] = uVar4;
    puVar2 = auStack_20;
    if (uVar4 < *(uint64_t *)(param_1 + 0x70)) {
      puVar2 = (uint64_t *)(param_1 + 0x70);
    }
    lVar3 = *puVar2 - lVar1;
  }
  else {
    if ((*(uint *)(param_1 + 0x78) & 4) != 0) {
      return param_2;
    }
    uVar4 = **(uint64_t **)(param_1 + 0x40);
    if (uVar4 == 0) {
      return param_2;
    }
    lVar1 = **(int64_t **)(param_1 + 0x20);
    lVar3 = (**(int **)(param_1 + 0x58) - lVar1) + uVar4;
  }
  FUN_1800671b0(param_2,lVar1,lVar3,uVar4,2);
  return param_2;
}



int64_t * FUN_180476ff0(int64_t *param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = (int64_t)&unknown_var_4336_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(param_1 + 0x11);
  plVar1 = param_1 + 1;
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (param_1,plVar1,0,0,1,uVar2);
  *(void **)((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1) = &unknown_var_4024_ptr;
  *(int *)((int64_t)*(int *)(*param_1 + 4) + -4 + (int64_t)param_1) =
       *(int *)(*param_1 + 4) + -0x88;
  __0__basic_streambuf_DU__char_traits_D_std___std__IEAA_XZ(plVar1);
  *plVar1 = (int64_t)&unknown_var_4144_ptr;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 4;
  return param_1;
}



uint64_t * FUN_1804770b0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar8 = param_3[1] + *param_3;
  uVar3 = **(uint64_t **)(param_1 + 0x40);
  lVar4 = **(int64_t **)(param_1 + 0x38);
  if ((uVar3 != 0) && (*(uint64_t *)(param_1 + 0x68) < uVar3)) {
    *(uint64_t *)(param_1 + 0x68) = uVar3;
  }
  lVar5 = *(int64_t *)(param_1 + 0x68);
  lVar6 = **(int64_t **)(param_1 + 0x18);
  if (((uint64_t)(lVar5 - lVar6) < uVar8) ||
     ((uVar8 != 0 &&
      ((((param_4 & 1) != 0 && (lVar4 == 0)) || (((param_4 & 2) != 0 && (uVar3 == 0)))))))) {
    *param_2 = 0xffffffffffffffff;
  }
  else {
    lVar1 = lVar6 + uVar8;
    if (((param_4 & 1) != 0) && (lVar4 != 0)) {
      **(int64_t **)(param_1 + 0x38) = lVar1;
      **(int **)(param_1 + 0x50) = (int)lVar5 - (int)lVar1;
    }
    if (((param_4 & 2) != 0) && (uVar3 != 0)) {
      iVar2 = **(int **)(param_1 + 0x58);
      uVar7 = **(uint64_t **)(param_1 + 0x40);
      **(int64_t **)(param_1 + 0x20) = lVar6;
      **(int64_t **)(param_1 + 0x40) = lVar1;
      **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar7) - (int)lVar1;
    }
    *param_2 = uVar8;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



uint64_t *
FUN_1804771a0(int64_t param_1,uint64_t *param_2,int64_t param_3,int param_4,byte param_5)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  lVar3 = **(int64_t **)(param_1 + 0x38);
  uVar4 = **(uint64_t **)(param_1 + 0x40);
  if ((uVar4 != 0) && (*(uint64_t *)(param_1 + 0x68) < uVar4)) {
    *(uint64_t *)(param_1 + 0x68) = uVar4;
  }
  lVar5 = *(int64_t *)(param_1 + 0x68);
  lVar6 = **(int64_t **)(param_1 + 0x18);
  uVar9 = lVar5 - lVar6;
  uVar8 = 0;
  if (param_4 == 0) {
LAB_180477250:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar9) &&
       ((uVar8 == 0 ||
        ((((param_5 & 1) == 0 || (lVar3 != 0)) && (((param_5 & 2) == 0 || (uVar4 != 0)))))))) {
      lVar1 = lVar6 + uVar8;
      if (((param_5 & 1) != 0) && (lVar3 != 0)) {
        **(int64_t **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar5 - (int)lVar1;
      }
      if (((param_5 & 2) != 0) && (uVar4 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar7 = **(uint64_t **)(param_1 + 0x40);
        **(int64_t **)(param_1 + 0x20) = lVar6;
        **(int64_t **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar7) - (int)lVar1;
      }
      *param_2 = uVar8;
      goto LAB_1804772c0;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar4 != 0 || (lVar6 == 0)))) {
          uVar8 = uVar4 - lVar6;
          goto LAB_180477250;
        }
      }
      else if ((lVar3 != 0) || (lVar6 == 0)) {
        uVar8 = lVar3 - lVar6;
        goto LAB_180477250;
      }
    }
  }
  else {
    uVar8 = uVar9;
    if (param_4 == 2) goto LAB_180477250;
  }
  *param_2 = 0xffffffffffffffff;
LAB_1804772c0:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



int FUN_1804773c0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 != -1) {
    uVar1 = **(uint64_t **)(param_1 + 0x40);
    uVar5 = (int64_t)**(int **)(param_1 + 0x58) + uVar1;
    if ((uVar1 != 0) && (uVar1 < uVar5)) {
      puVar3 = (int8_t *)__Pninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ();
      *puVar3 = (char)param_2;
      *(uint64_t *)(param_1 + 0x68) = uVar1 + 1;
      return param_2;
    }
    lVar2 = **(int64_t **)(param_1 + 0x18);
    uVar5 = uVar5 - lVar2;
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    if (uVar5 < 0x20) {
      lVar6 = 0x20;
    }
    else if (uVar5 < 0x3fffffff) {
      lVar6 = uVar5 * 2;
    }
    else {
      lVar6 = 0x7fffffff;
      if (0x7ffffffe < uVar5) {
        return -1;
      }
    }
    uVar4 = FUN_180067110(lVar6);
                    // WARNING: Subroutine does not return
    memcpy(uVar4,lVar2,uVar5);
  }
  return 0;
}





// 函数: void FUN_180477468(void)
void FUN_180477468(void)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180067110();
                    // WARNING: Subroutine does not return
  memcpy(uVar1);
}



int32_t FUN_1804774fb(void)

{
  int8_t *puVar1;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar2;
  uint64_t unaff_RDI;
  
  lVar2 = unaff_RSI;
  if (0xfff < unaff_RDI) {
    lVar2 = *(int64_t *)(unaff_RSI + -8);
    unaff_RDI = unaff_RDI + 0x27;
    if (0x1f < (unaff_RSI - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(lVar2,unaff_RDI);
  *(uint *)(unaff_RBX + 0x70) = *(uint *)(unaff_RBX + 0x70) | 1;
  puVar1 = (int8_t *)__Pninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ();
  *puVar1 = (char)unaff_EBP;
  return unaff_EBP;
}





// 函数: void FUN_180477570(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180477570(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  *param_1 = &unknown_var_4144_ptr;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    if (*(int64_t *)param_1[8] == 0) {
      lVar3 = (int64_t)*(int *)param_1[10] + *(int64_t *)param_1[7];
    }
    else {
      lVar3 = (int64_t)*(int *)param_1[0xb] + *(int64_t *)param_1[8];
    }
    lVar1 = *(int64_t *)param_1[3];
    if (0xfff < (uint64_t)(lVar3 - lVar1)) {
      lVar2 = lVar1 - *(int64_t *)(lVar1 + -8);
      if (0x1f < lVar2 - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar2,(lVar3 - lVar1) + 0x27,*(int64_t *)(lVar1 + -8),param_4,0xfffffffffffffffe
                  );
      }
    }
    free();
  }
  *(uint64_t *)param_1[3] = 0;
  *(uint64_t *)param_1[7] = 0;
  *(int32_t *)param_1[10] = 0;
  *(uint64_t *)param_1[4] = 0;
  *(uint64_t *)param_1[8] = 0;
  *(int32_t *)param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x000180477627. Too many branches
                    // WARNING: Treating indirect jump as call
  __1__basic_streambuf_DU__char_traits_D_std___std__UEAA_XZ(param_1);
  return;
}



int64_t FUN_180477640(int64_t param_1,uint64_t param_2)

{
  param_1 = param_1 + -0x88;
  FUN_180476e90(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}



uint64_t FUN_180477680(uint64_t param_1,uint64_t param_2)

{
  FUN_180477570();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78);
  }
  return param_1;
}





// 函数: void FUN_1804776c0(char *param_1,char *param_2)
void FUN_1804776c0(char *param_1,char *param_2)

{
  char cVar1;
  uint64_t uVar2;
  
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 != '\0') {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    uVar2 = *(uint64_t *)(param_2 + 0x10);
    *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_2 + 8);
    *(uint64_t *)(param_1 + 0x10) = uVar2;
    uVar2 = *(uint64_t *)(param_2 + 0x20);
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
    *(uint64_t *)(param_1 + 0x20) = uVar2;
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\x0f';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[8] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    uVar2 = *(uint64_t *)(param_2 + 0x30);
    *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_2 + 0x28);
    *(uint64_t *)(param_1 + 0x30) = uVar2;
    uVar2 = *(uint64_t *)(param_2 + 0x40);
    *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t *)(param_1 + 0x40) = uVar2;
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
    param_2[0x40] = '\x0f';
    param_2[0x41] = '\0';
    param_2[0x42] = '\0';
    param_2[0x43] = '\0';
    param_2[0x44] = '\0';
    param_2[0x45] = '\0';
    param_2[0x46] = '\0';
    param_2[0x47] = '\0';
    param_2[0x28] = '\0';
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t *)(param_1 + 0x50) = *(uint64_t *)(param_2 + 0x50);
  }
  return;
}





// 函数: void FUN_180477750(int64_t *param_1)
void FUN_180477750(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  if (*param_1 != 0) {
    FUN_180477be0(*param_1,param_1[1]);
    lVar1 = *param_1;
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_1804777d0(void)

{
  render_system_config = (uint64_t *)FUN_1808fc418(0x20);
  *(int32_t *)(render_system_config + 1) = 1;
  *(int32_t *)((int64_t)render_system_config + 0xc) = 1;
  *render_system_config = &unknown_var_4400_ptr;
  render_system_config = render_system_config + 2;
  *render_system_config = &unknown_var_4320_ptr;
  *render_system_config = &unknown_var_4520_ptr;
  return &system_data_2470;
}



uint64_t * FUN_180477890(uint64_t *param_1,int8_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)FUN_1808fc418(0x20);
  *(int32_t *)(puVar2 + 1) = 1;
  *(int32_t *)((int64_t)puVar2 + 0xc) = 1;
  *puVar2 = &unknown_var_4440_ptr;
  puVar1 = puVar2 + 2;
  *puVar1 = &unknown_var_4320_ptr;
  *puVar1 = &unknown_var_4352_ptr;
  *(int8_t *)(puVar2 + 3) = *param_2;
  *param_1 = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



uint64_t FUN_180477950(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  code *pcVar3;
  uint64_t uVar4;
  
  lVar1 = **(int64_t **)(param_1 + 8);
  puVar2 = *(uint64_t **)(lVar1 + 8);
  uVar4 = FUN_180478200(param_1,lVar1,puVar2,param_3);
  if (*(int64_t *)(param_1 + 0x10) == 0x3fffffffffffffe) {
    __Xlength_error_std__YAXPEBD_Z(&unknown_var_2104_ptr);
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + 1;
  *(uint64_t *)(lVar1 + 8) = uVar4;
  *puVar2 = uVar4;
  FUN_1803f4f30(param_1,param_2,**(int64_t **)(param_1 + 8) + 0x10);
  return param_2;
}



int8_t * FUN_1804779f0(uint64_t param_1,int8_t *param_2)

{
  *param_2 = 0;
  return param_2;
}



uint64_t * FUN_180477a30(int64_t *param_1,int64_t param_2,uint64_t *param_3)

{
  int *piVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  
  uVar13 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  lVar8 = param_1[1] - lVar6 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar2)();
    return puVar4;
  }
  uVar9 = lVar8 + 1;
  uVar5 = param_1[2] - lVar6 >> 4;
  uVar3 = uVar9;
  if ((uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) && (uVar3 = (uVar5 >> 1) + uVar5, uVar3 < uVar9))
  {
    uVar3 = uVar9;
  }
  lVar8 = uVar3 * 0x10;
  if (0xfffffffffffffff < uVar3) {
    lVar8 = -1;
  }
  puVar4 = (uint64_t *)FUN_180067110(lVar8);
  puVar7 = (uint64_t *)((param_2 - lVar6 & 0xfffffffffffffff0U) + (int64_t)puVar4);
  *puVar7 = 0;
  puVar7[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar7 = *param_3;
  puVar7[1] = param_3[1];
  lVar6 = param_1[1];
  lVar8 = *param_1;
  puVar10 = puVar4;
  puVar11 = puVar7;
  puVar12 = puVar4;
  puVar14 = puVar7;
  if (param_2 != lVar6) {
    FUN_180477d80(*param_1,param_2,puVar4,param_1,puVar7,puVar4,uVar13,puVar7);
    lVar6 = param_1[1];
    lVar8 = param_2;
    puVar10 = puVar7 + 2;
    puVar11 = puVar4;
  }
  FUN_180477d80(lVar8,lVar6,puVar10,param_1,puVar11,puVar12,uVar13,puVar14);
  if (*param_1 != 0) {
    FUN_180477be0(*param_1,param_1[1]);
    lVar6 = *param_1;
    uVar5 = param_1[2] - lVar6 & 0xfffffffffffffff0;
    lVar8 = lVar6;
    if (0xfff < uVar5) {
      lVar8 = *(int64_t *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar6 - lVar8,uVar5 + 0x27);
      }
    }
    free(lVar8);
  }
  *param_1 = (int64_t)puVar4;
  param_1[1] = (int64_t)(puVar4 + uVar9 * 2);
  param_1[2] = (int64_t)(puVar4 + uVar3 * 2);
  return puVar7;
}





// 函数: void FUN_180477be0(int64_t param_1,int64_t param_2)
void FUN_180477be0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  
  if (param_1 != param_2) {
    do {
      plVar4 = *(int64_t **)(param_1 + 8);
      if (plVar4 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((int64_t)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}





// 函数: void FUN_180477c70(int64_t param_1)
void FUN_180477c70(int64_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  
  plVar4 = *(int64_t **)(param_1 + 8);
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}





// 函数: void FUN_180477c7f(void)
void FUN_180477c7f(void)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*unaff_RBX)();
    LOCK();
    piVar2 = (int *)((int64_t)unaff_RBX + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*unaff_RBX + 8))();
    }
  }
  return;
}





// 函数: void FUN_180477cb5(void)
void FUN_180477cb5(void)

{
  return;
}



uint64_t *
FUN_180477d80(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    puVar1 = (uint64_t *)0x0;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      param_3 = param_3 + 2;
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  FUN_180477be0(param_3,param_3,puVar1,param_4,0xfffffffffffffffe,param_3,param_3,param_4);
  return param_3;
}



uint64_t FUN_180477e30(uint64_t param_1,uint64_t param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



uint64_t FUN_180477e60(uint64_t param_1,uint64_t param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}



uint64_t FUN_180477e90(uint64_t param_1,uint64_t param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



uint64_t FUN_180477ec0(uint64_t param_1,uint64_t param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}





// 函数: void FUN_180477f00(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180477f00(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    FUN_180067050();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = uVar1 - param_2;
  uVar2 = param_1[3];
  if (uVar6 < param_3) {
    param_3 = uVar6;
  }
  if (param_3 == param_5) {
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)param_1 + param_2,param_4,param_5);
  }
  if (param_5 < param_3) {
    param_1[2] = (uVar1 - param_3) + param_5;
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)param_1 + param_2,param_4,param_5);
  }
  uVar5 = param_5 - param_3;
  if (uVar5 <= uVar2 - uVar1) {
    param_1[2] = uVar5 + uVar1;
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
    lVar4 = (int64_t)param_1 + param_3 + param_2;
                    // WARNING: Subroutine does not return
    memmove(lVar4 + uVar5,lVar4,(uVar6 - param_3) + 1);
  }
  FUN_180478290(param_1,uVar5,uVar2,param_2,param_3,param_4,param_5);
  return;
}





// 函数: void FUN_180477f1f(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180477f1f(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t unaff_RBP;
  uint64_t *unaff_RDI;
  uint64_t uVar3;
  uint64_t in_stack_00000090;
  
  uVar3 = param_1 - param_2;
  uVar1 = unaff_RDI[3];
  if (uVar3 < param_3) {
    unaff_RBP = uVar3;
  }
  if (unaff_RBP == in_stack_00000090) {
    if (0xf < uVar1) {
      unaff_RDI = (uint64_t *)*unaff_RDI;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)unaff_RDI + param_2);
  }
  if (in_stack_00000090 < unaff_RBP) {
    unaff_RDI[2] = (param_1 - unaff_RBP) + in_stack_00000090;
    if (0xf < uVar1) {
      unaff_RDI = (uint64_t *)*unaff_RDI;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)unaff_RDI + param_2);
  }
  in_stack_00000090 = in_stack_00000090 - unaff_RBP;
  if (in_stack_00000090 <= uVar1 - param_1) {
    unaff_RDI[2] = in_stack_00000090 + param_1;
    if (0xf < uVar1) {
      unaff_RDI = (uint64_t *)*unaff_RDI;
    }
    lVar2 = (int64_t)unaff_RDI + unaff_RBP + param_2;
                    // WARNING: Subroutine does not return
    memmove(lVar2 + in_stack_00000090,lVar2,(uVar3 - unaff_RBP) + 1);
  }
  FUN_180478290();
  return;
}





// 函数: void FUN_180477f6d(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180477f6d(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uVar2;
  int64_t unaff_R15;
  
  if (unaff_RSI < unaff_RBP) {
    unaff_RDI[2] = (param_1 - unaff_RBP) + unaff_RSI;
    if (0xf < param_3) {
      unaff_RDI = (uint64_t *)*unaff_RDI;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)unaff_RDI + param_2);
  }
  uVar2 = unaff_RSI - unaff_RBP;
  if (uVar2 <= param_3 - param_1) {
    unaff_RDI[2] = uVar2 + param_1;
    if (0xf < param_3) {
      unaff_RDI = (uint64_t *)*unaff_RDI;
    }
    lVar1 = (int64_t)unaff_RDI + unaff_RBP + param_2;
                    // WARNING: Subroutine does not return
    memmove(lVar1 + uVar2,lVar1,unaff_R15 + 1);
  }
  FUN_180478290();
  return;
}





// 函数: void FUN_180477fb8(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180477fb8(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uVar2;
  int64_t unaff_R15;
  
  uVar2 = unaff_RSI - unaff_RBP;
  if (uVar2 <= param_3 - param_1) {
    unaff_RDI[2] = uVar2 + param_1;
    if (0xf < param_3) {
      unaff_RDI = (uint64_t *)*unaff_RDI;
    }
    lVar1 = (int64_t)unaff_RDI + unaff_RBP + param_2;
                    // WARNING: Subroutine does not return
    memmove(lVar1 + uVar2,lVar1,unaff_R15 + 1);
  }
  FUN_180478290();
  return;
}





// 函数: void FUN_180477fd5(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180477fd5(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R15;
  
  unaff_RDI[2] = unaff_R12 + param_1;
  if (0xf < param_3) {
    unaff_RDI = (uint64_t *)*unaff_RDI;
  }
  lVar1 = (int64_t)unaff_RDI + unaff_RBP + param_2;
                    // WARNING: Subroutine does not return
  memmove(lVar1 + unaff_R12,lVar1,unaff_R15 + 1);
}





// 函数: void FUN_180478059(void)
void FUN_180478059(void)

{
  FUN_180478290();
  return;
}





// 函数: void FUN_18047807e(void)
void FUN_18047807e(void)

{
  return;
}





// 函数: void FUN_180478083(void)
void FUN_180478083(void)

{
  return;
}





// 函数: void FUN_180478096(void)
void FUN_180478096(void)

{
  code *pcVar1;
  
  FUN_180067050();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint64_t *
FUN_1804780a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803e8470();
  *param_1 = &unknown_var_4320_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_180478100(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180477750();
  *param_1 = &unknown_var_4320_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_180478160(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  SystemPerformanceOptimizer(param_1 + 1);
  *param_1 = &unknown_var_4320_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_1804781c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_4320_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



int64_t FUN_180478200(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  lVar2 = FUN_1803f4cb0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *(uint64_t *)(lVar2 + 0x20) = 0;
  *(uint64_t *)(lVar2 + 0x28) = 0;
  uVar1 = param_4[1];
  *(uint64_t *)(lVar2 + 0x10) = *param_4;
  *(uint64_t *)(lVar2 + 0x18) = uVar1;
  uVar1 = param_4[3];
  *(uint64_t *)(lVar2 + 0x20) = param_4[2];
  *(uint64_t *)(lVar2 + 0x28) = uVar1;
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(int8_t *)param_4 = 0;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  *(uint64_t *)(lVar2 + 0x30) = param_4[4];
  *(uint64_t *)(lVar2 + 0x38) = param_4[5];
  param_4[4] = 0;
  param_4[5] = 0;
  return lVar2;
}





// 函数: void FUN_180478290(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180478290(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  if (0x7fffffffffffffff - param_1[2] < param_2) {
    FUN_1800670f0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = param_1[3];
  param_2 = param_1[2] + param_2;
  uVar5 = param_2 | 0xf;
  uVar6 = 0x7fffffffffffffff;
  if (((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
     (uVar1 = (uVar2 >> 1) + uVar2, uVar6 = uVar5, uVar5 < uVar1)) {
    uVar6 = uVar1;
  }
  uVar4 = FUN_180067110(uVar6 + 1);
  param_1[3] = uVar6;
  param_1[2] = param_2;
  if (0xf < uVar2) {
                    // WARNING: Subroutine does not return
    memcpy(uVar4,*param_1,param_4);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar4,param_1,param_4);
}





// 函数: void FUN_1804782bd(int64_t param_1,int64_t param_2)
void FUN_1804782bd(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  
  uVar2 = *(uint64_t *)(param_1 + 0x18);
  uVar4 = unaff_RSI + param_2 | 0xf;
  if (((uVar4 <= unaff_RBX) && (uVar2 <= unaff_RBX - (uVar2 >> 1))) &&
     (uVar1 = (uVar2 >> 1) + uVar2, unaff_RBX = uVar4, uVar4 < uVar1)) {
    unaff_RBX = uVar1;
  }
  uVar3 = FUN_180067110(unaff_RBX + 1);
  unaff_RDI[3] = unaff_RBX;
  unaff_RDI[2] = unaff_RSI + param_2;
  if (0xf < uVar2) {
                    // WARNING: Subroutine does not return
    memcpy(uVar3,*unaff_RDI);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar3);
}





// 函数: void FUN_1804783f9(void)
void FUN_1804783f9(void)

{
  code *pcVar1;
  
  FUN_1800670f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



