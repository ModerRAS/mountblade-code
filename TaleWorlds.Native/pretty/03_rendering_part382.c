#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part382.c - 13 个函数

// 函数: void FUN_180478410(int64_t param_1,uint64_t *param_2)
void FUN_180478410(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int8_t auStack_98 [32];
  uint uStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  int8_t uStack_60;
  uint8_t uStack_5f;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int8_t uStack_40;
  uint8_t uStack_3f;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uStack_78 = 0;
  lVar7 = *(int64_t *)(param_1 + 8);
  puStack_68 = param_2;
  if (lVar7 == 0) {
    uStack_30 = 0;
    uStack_28 = 0xf;
    uStack_40 = 0;
    puVar2 = (uint64_t *)&uStack_40;
    uVar5 = 1;
  }
  else {
    lVar3 = *(int64_t *)(lVar7 + 0x28);
    if (lVar3 == 0) {
      lVar3 = lVar7 + 0x30;
    }
    uStack_50 = 0;
    uStack_48 = 0xf;
    uStack_60 = 0;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar3 + lVar7) != '\0');
    FUN_1800671b0(&uStack_60);
    puVar2 = (uint64_t *)&uStack_60;
    uVar5 = 2;
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(int8_t *)puVar2 = 0;
  uVar6 = uVar5 | 4;
  uStack_78 = uVar6;
  if ((uVar5 & 2) != 0) {
    uVar6 = uVar5 & 0xfffffffd | 4;
    uStack_78 = uVar6;
    if (0xf < uStack_48) {
      uVar4 = uStack_48 + 1;
      lVar3 = CONCAT71(uStack_5f,uStack_60);
      lVar7 = lVar3;
      if (0xfff < uVar4) {
        uVar4 = uStack_48 + 0x28;
        lVar7 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar7,uVar4);
    }
    uStack_50 = 0;
    uStack_48 = 0xf;
    uStack_60 = 0;
  }
  if ((uVar6 & 1) != 0) {
    uStack_78 = uVar6 & 0xfffffffe;
    if (0xf < uStack_28) {
      uVar4 = uStack_28 + 1;
      lVar3 = CONCAT71(uStack_3f,uStack_40);
      lVar7 = lVar3;
      if (0xfff < uVar4) {
        uVar4 = uStack_28 + 0x28;
        lVar7 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar7,uVar4);
    }
    uStack_30 = 0;
    uStack_28 = 0xf;
    uStack_40 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (uint64_t)auStack_98);
}



uint64_t * FUN_1804785d0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}





// 函数: void FUN_180478600(uint64_t *param_1,uint64_t *param_2)
void FUN_180478600(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  
  if (param_1 != param_2) {
    do {
      if (param_1 == (uint64_t *)0x0) {
        return;
      }
      puVar1 = (uint64_t *)param_1[2];
      param_1[2] = 0;
      (**(code **)*param_1)(param_1,1);
      param_1 = puVar1;
    } while (puVar1 != param_2);
  }
  return;
}





// 函数: void FUN_18047860f(uint64_t *param_1,uint64_t *param_2)
void FUN_18047860f(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  
  do {
    if (param_1 == (uint64_t *)0x0) {
      return;
    }
    puVar1 = (uint64_t *)param_1[2];
    param_1[2] = 0;
    (**(code **)*param_1)(param_1,1);
    param_1 = puVar1;
  } while (puVar1 != param_2);
  return;
}





// 函数: void FUN_180478650(void)
void FUN_180478650(void)

{
  return;
}



uint64_t *
FUN_180478660(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1804786a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_1804786e0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_5288_ptr;
  puVar1 = (uint64_t *)param_1[4];
  if (puVar1 != (uint64_t *)0x0) {
    while (puVar1 != (uint64_t *)0x0) {
      puVar2 = (uint64_t *)puVar1[2];
      puVar1[2] = 0;
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,uVar3);
      puVar1 = puVar2;
    }
  }
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}



uint64_t *
FUN_180478780(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_1804787c0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_5816_ptr;
  puVar3 = (uint64_t *)param_1[5];
  while (puVar3 != (uint64_t *)0x0) {
    puVar1 = (uint64_t *)puVar3[5];
    puVar3[5] = 0;
    puVar2 = (uint64_t *)param_1[4];
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (uint64_t *)0x0))) {
      puVar3 = (uint64_t *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1,param_3,param_4,uVar5);
      puVar4 = puVar3;
    }
  }
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



uint64_t *
FUN_180478880(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_1804788c0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1804788c0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  if (param_1 != param_2) {
    do {
      if (param_1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 8);
      lVar3 = param_3;
      if (9 < iVar1) {
        if (iVar1 < 0xc) {
          FUN_1804788c0(*(uint64_t *)(param_1 + 0x20),0,0);
        }
        else if (iVar1 == 0x10) {
          if (param_3 != 0) {
            *(int32_t *)(param_3 + 0x34) = 0;
          }
          for (lVar2 = *(int64_t *)(param_1 + 0x28); lVar2 != 0;
              lVar2 = *(int64_t *)(lVar2 + 0x28)) {
            FUN_1804788c0(*(uint64_t *)(lVar2 + 0x10),*(uint64_t *)(lVar2 + 0x20),param_3);
          }
        }
        else if (iVar1 == 0x12) {
          lVar3 = param_1;
          if (param_3 != 0) {
            *(int32_t *)(param_3 + 0x34) = 0;
            *(int32_t *)(param_1 + 0x34) = 0;
            lVar3 = param_3;
          }
        }
        else if (((iVar1 == 0x13) && (param_3 == *(int64_t *)(param_1 + 0x20))) &&
                (lVar3 = 0, *(int *)(param_3 + 0x34) == -1)) {
          *(int32_t *)(param_3 + 0x34) = 1;
        }
      }
      param_1 = *(int64_t *)(param_1 + 0x10);
      param_3 = lVar3;
    } while (param_1 != param_2);
  }
  return;
}





// 函数: void FUN_1804788d8(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1804788d8(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  do {
    if (param_1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    lVar3 = param_3;
    if (9 < iVar1) {
      if (iVar1 < 0xc) {
        FUN_1804788c0(*(uint64_t *)(param_1 + 0x20),0,0);
      }
      else if (iVar1 == 0x10) {
        if (param_3 != 0) {
          *(int32_t *)(param_3 + 0x34) = 0;
        }
        for (lVar2 = *(int64_t *)(param_1 + 0x28); lVar2 != 0; lVar2 = *(int64_t *)(lVar2 + 0x28))
        {
          FUN_1804788c0(*(uint64_t *)(lVar2 + 0x10),*(uint64_t *)(lVar2 + 0x20),param_3);
        }
      }
      else if (iVar1 == 0x12) {
        lVar3 = param_1;
        if (param_3 != 0) {
          *(int32_t *)(param_3 + 0x34) = 0;
          *(int32_t *)(param_1 + 0x34) = 0;
          lVar3 = param_3;
        }
      }
      else if (((iVar1 == 0x13) && (param_3 == *(int64_t *)(param_1 + 0x20))) &&
              (lVar3 = 0, *(int *)(param_3 + 0x34) == -1)) {
        *(int32_t *)(param_3 + 0x34) = 1;
      }
    }
    param_1 = *(int64_t *)(param_1 + 0x10);
    param_3 = lVar3;
  } while (param_1 != param_2);
  return;
}





// 函数: void FUN_1804789af(void)
void FUN_1804789af(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804789b0(uint64_t param_1,uint64_t param_2)
void FUN_1804789b0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  code *pcVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint64_t *puVar6;
  int *piVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int8_t auStack_128 [40];
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  int8_t uStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int8_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int8_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int8_t uStack_80;
  int64_t lStack_78;
  uint64_t auStack_70 [3];
  int64_t *plStack_58;
  uint64_t uStack_50;
  int8_t uStack_48;
  uint8_t uStack_47;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  bVar4 = false;
  uStack_f8 = 0;
  FUN_18047a1e0(&lStack_78,&unknown_var_4648_ptr);
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_100 = param_1;
  cVar5 = FUN_18047ad30(param_1,param_2,&uStack_e8,&lStack_78);
  if (cVar5 != '\0') {
    puVar6 = &uStack_90;
    if (1 < (uint64_t)((lStack_d0 - lStack_d8) / 0x18)) {
      puVar6 = (uint64_t *)(lStack_d8 + 0x18);
    }
    puVar6 = (uint64_t *)FUN_18047a470(puVar6,&uStack_48);
    bVar4 = true;
    uStack_f8 = 1;
    piVar7 = (int *)_errno();
    if (0xf < (uint64_t)puVar6[3]) {
      puVar6 = (uint64_t *)*puVar6;
    }
    *piVar7 = 0;
    strtol(puVar6,&puStack_f0,10);
    if (puVar6 == puStack_f0) {
      __Xinvalid_argument_std__YAXPEBD_Z(&unknown_var_4536_ptr);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*piVar7 == 0x22) {
      __Xout_of_range_std__YAXPEBD_Z(&unknown_var_4560_ptr);
    }
  }
  if (bVar4) {
    uStack_f8 = 0;
    if (0xf < uStack_30) {
      uVar9 = uStack_30 + 1;
      lVar3 = CONCAT71(uStack_47,uStack_48);
      lVar8 = lVar3;
      if (0xfff < uVar9) {
        uVar9 = uStack_30 + 0x28;
        lVar8 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar8,uVar9);
    }
    uStack_38 = 0;
    uStack_30 = 0xf;
    uStack_48 = 0;
  }
  if (lStack_d8 != 0) {
    uVar9 = ((lStack_c8 - lStack_d8) / 0x18) * 0x18;
    lVar8 = lStack_d8;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar8 = *(int64_t *)(lStack_d8 + -8);
      if (0x1f < (lStack_d8 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar8,uVar9);
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
  }
  if (lStack_78 != 0) {
    LOCK();
    piVar7 = (int *)(lStack_78 + 0x2c);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FUN_180478600(lStack_78,0);
    }
  }
  lStack_78 = 0;
  puStack_f0 = auStack_70;
  if ((plStack_58 != (int64_t *)0x0) &&
     (puVar6 = (uint64_t *)(**(code **)(*plStack_58 + 0x10))(), puVar6 != (uint64_t *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_128);
}





// 函数: void FUN_180478c60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180478c60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar1 = *(int64_t *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar3 = ((*(int64_t *)(param_1 + 0x20) - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180478cf0(uint64_t param_1,uint64_t param_2)
void FUN_180478cf0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  code *pcVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint64_t *puVar6;
  int *piVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int8_t auStack_138 [40];
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t *puStack_100;
  uint64_t uStack_f8;
  int8_t uStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int8_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int8_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  int8_t uStack_90;
  int64_t lStack_88;
  uint64_t auStack_80 [3];
  int64_t *plStack_68;
  uint64_t uStack_60;
  int8_t uStack_58;
  uint8_t uStack_57;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  bVar4 = false;
  uStack_108 = 0;
  FUN_18047a1e0(&lStack_88,&unknown_var_4680_ptr);
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_110 = param_1;
  cVar5 = FUN_18047ad30(param_1,param_2,&uStack_f8,&lStack_88);
  if (cVar5 != '\0') {
    puVar6 = &uStack_a0;
    if (1 < (uint64_t)((lStack_e0 - lStack_e8) / 0x18)) {
      puVar6 = (uint64_t *)(lStack_e8 + 0x18);
    }
    puVar6 = (uint64_t *)FUN_18047a470(puVar6,&uStack_58);
    bVar4 = true;
    uStack_108 = 1;
    piVar7 = (int *)_errno();
    if (0xf < (uint64_t)puVar6[3]) {
      puVar6 = (uint64_t *)*puVar6;
    }
    *piVar7 = 0;
    strtoull(puVar6,&puStack_100,10);
    if (puVar6 == puStack_100) {
      __Xinvalid_argument_std__YAXPEBD_Z(&unknown_var_4592_ptr);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*piVar7 == 0x22) {
      __Xout_of_range_std__YAXPEBD_Z(&unknown_var_4616_ptr);
    }
  }
  if (bVar4) {
    uStack_108 = 0;
    if (0xf < uStack_40) {
      uVar9 = uStack_40 + 1;
      lVar3 = CONCAT71(uStack_57,uStack_58);
      lVar8 = lVar3;
      if (0xfff < uVar9) {
        uVar9 = uStack_40 + 0x28;
        lVar8 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar8,uVar9);
    }
    uStack_48 = 0;
    uStack_40 = 0xf;
    uStack_58 = 0;
  }
  if (lStack_e8 != 0) {
    uVar9 = ((lStack_d8 - lStack_e8) / 0x18) * 0x18;
    lVar8 = lStack_e8;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar8 = *(int64_t *)(lStack_e8 + -8);
      if (0x1f < (lStack_e8 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar8,uVar9);
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
  }
  if (lStack_88 != 0) {
    LOCK();
    piVar7 = (int *)(lStack_88 + 0x2c);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FUN_180478600(lStack_88,0);
    }
  }
  lStack_88 = 0;
  puStack_100 = auStack_80;
  if ((plStack_68 != (int64_t *)0x0) &&
     (puVar6 = (uint64_t *)(**(code **)(*plStack_68 + 0x10))(), puVar6 != (uint64_t *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_138);
}





// 函数: void FUN_180478fa0(void)
void FUN_180478fa0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Removing unreachable block (ram,0x000180479dfe)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180479a10(char *param_1,int64_t *param_2,uint64_t param_3,uint64_t *param_4,
void FUN_180479a10(char *param_1,int64_t *param_2,uint64_t param_3,uint64_t *param_4,
                  uint64_t *param_5,uint64_t param_6,uint64_t param_7)

{
  uint64_t *puVar1;
  int64_t lVar2;
  bool bVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  char *pcVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  int iVar14;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  int8_t *puStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  int64_t lStack_278;
  int8_t auStack_270 [8];
  int8_t auStack_268 [120];
  int8_t auStack_1f0 [104];
  char acStack_188 [8];
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int8_t uStack_160;
  uint8_t uStack_15f;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_138;
  int iStack_130;
  int32_t uStack_12c;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int8_t uStack_f8;
  uint8_t uStack_f7;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  char acStack_d8 [8];
  int8_t auStack_d0 [8];
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  int8_t auStack_a0 [16];
  uint64_t uStack_90;
  uint64_t uStack_88;
  char acStack_80 [8];
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  
  uStack_288 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  puStack_290 = (int8_t *)param_7;
  uStack_298 = 0;
  iVar13 = 1;
  uStack_280 = param_1;
  FUN_180476ff0(&lStack_278);
  uVar5 = FUN_1800a1160(&lStack_278,param_3);
  uVar5 = FUN_1800a0e50(uVar5,0x20);
  puVar8 = param_4 + 2;
  if (0xf < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  uVar5 = FUN_1803f4790(uVar5,param_4,*puVar8);
  uVar5 = FUN_1800a1160(uVar5,&unknown_var_4768_ptr);
  uVar6 = FUN_180481f90(&uStack_138,*(int16_t *)(*param_2 + 0x20));
  uVar7 = FUN_180482ac0(&uStack_118,*param_2);
  puVar8 = (uint64_t *)FUN_180482b40(&uStack_f8,uVar7,uVar6);
  uStack_298 = 4;
  if (0xf < uStack_100) {
    uVar11 = uStack_100 + 1;
    uVar12 = uStack_118;
    if (0xfff < uVar11) {
      uVar11 = uStack_100 + 0x28;
      uVar12 = *(uint64_t *)(uStack_118 - 8);
      if (0x1f < (uStack_118 - uVar12) - 8) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar12,uVar11);
  }
  uStack_108 = 0;
  uStack_100 = 0xf;
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  if (0xf < uStack_120) {
    uVar12 = uStack_120 + 1;
    if ((0xfff < uVar12) &&
       (uVar12 = uStack_120 + 0x28, 0x1f < (uStack_138 - *(int64_t *)(uStack_138 - 8)) - 8)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar12);
  }
  uStack_128 = 0;
  uStack_120 = 0xf;
  uStack_138 = uStack_138 & 0xffffffffffffff00;
  puVar1 = puVar8 + 2;
  if (0xf < (uint64_t)puVar8[3]) {
    puVar8 = (uint64_t *)*puVar8;
  }
  uVar5 = FUN_1803f4790(uVar5,puVar8,*puVar1);
  uVar5 = FUN_1800a1160(uVar5,&unknown_var_4744_ptr);
  uVar5 = __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01__K_Z(uVar5,param_5[2]);
  FUN_1800a1160(uVar5,&unknown_var_4800_ptr);
  uStack_298 = 0;
  if (0xf < uStack_e0) {
    uVar12 = uStack_e0 + 1;
    lVar2 = CONCAT71(uStack_f7,uStack_f8);
    lVar10 = lVar2;
    if (0xfff < uVar12) {
      uVar12 = uStack_e0 + 0x28;
      lVar10 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar12);
  }
  uStack_e8 = 0;
  uStack_e0 = 0xf;
  uStack_f8 = 0;
  puVar8 = param_5 + 2;
  if (0xf < (uint64_t)param_5[3]) {
    param_5 = (uint64_t *)*param_5;
  }
  _write___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_PEBD_J_Z
            (&lStack_278,param_5,*puVar8);
  FUN_180476f30(&lStack_278,&uStack_160);
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_88 = 0xf;
  auStack_a0[0] = 0;
  FUN_18047aa70();
  puVar4 = puStack_290;
  while( true ) {
    pcVar9 = (char *)FUN_180478fa0(acStack_80,param_2,&uStack_160,puVar4);
    uStack_298 = 1;
    if (pcVar9 != acStack_188) {
      if (acStack_188[0] != '\0') {
        FUN_180067070(&uStack_180);
      }
      acStack_188[0] = *pcVar9;
      if (acStack_188[0] != '\0') {
        uStack_180 = *(uint64_t *)(pcVar9 + 8);
        uStack_178 = *(uint64_t *)(pcVar9 + 0x10);
        uStack_170 = *(uint64_t *)(pcVar9 + 0x18);
        uStack_168 = *(uint64_t *)(pcVar9 + 0x20);
        pcVar9[0x18] = '\0';
        pcVar9[0x19] = '\0';
        pcVar9[0x1a] = '\0';
        pcVar9[0x1b] = '\0';
        pcVar9[0x1c] = '\0';
        pcVar9[0x1d] = '\0';
        pcVar9[0x1e] = '\0';
        pcVar9[0x1f] = '\0';
        pcVar9[0x20] = '\x0f';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = '\0';
        pcVar9[8] = '\0';
      }
    }
    iVar14 = iVar13;
    if ((acStack_188[0] == '\0') || (iVar14 = iVar13 + -1, iVar13 == 0)) {
      bVar3 = false;
      iVar13 = iVar14;
    }
    else {
      bVar3 = true;
      iVar13 = iVar14;
    }
    uStack_298 = 0;
    if (acStack_80[0] != '\0') {
      FUN_180067070(auStack_78);
    }
    if (!bVar3) break;
    lVar10 = _Xtime_get_ticks();
    lVar10 = (lVar10 + 1000000) * 100;
    uStack_138 = lVar10 / 1000000000;
    iStack_130 = (int)lVar10 + (int)uStack_138 * -1000000000;
    uStack_110 = CONCAT44(uStack_12c,iStack_130);
    uStack_118 = uStack_138;
    _Thrd_sleep(&uStack_118);
    FUN_180482450(param_2,acStack_d8);
    if (acStack_d8[0] != '\0') {
      puStack_290 = &uStack_f8;
      uVar5 = FUN_18018b350(&uStack_f8,auStack_c8);
      FUN_18047a710(param_1,uVar5);
      uStack_298 = 2;
      if (acStack_d8[0] != '\0') {
        puStack_290 = auStack_d0;
        FUN_180067070(auStack_c8);
      }
      if (acStack_188[0] != '\0') {
        FUN_180067070(&uStack_180);
      }
      FUN_180067070(auStack_a0);
      if (0xf < uStack_148) {
        uVar12 = uStack_148 + 1;
        lVar2 = CONCAT71(uStack_15f,uStack_160);
        lVar10 = lVar2;
        if (0xfff < uVar12) {
          uVar12 = uStack_148 + 0x28;
          lVar10 = *(int64_t *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar10,uVar12);
      }
      uStack_150 = 0;
      uStack_148 = 0xf;
      uStack_160 = 0;
      puStack_290 = auStack_1f0;
      *(void **)(auStack_270 + (int64_t)*(int *)(lStack_278 + 4) + -8) = &unknown_var_4024_ptr;
      *(int *)((int64_t)&uStack_280 + (int64_t)*(int *)(lStack_278 + 4) + 4) =
           *(int *)(lStack_278 + 4) + -0x88;
      FUN_180477570(auStack_270);
LAB_180479ff8:
      __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_268);
      __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_1f0);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_2b8);
    }
  }
  *param_1 = acStack_188[0];
  if (acStack_188[0] != '\0') {
    *(uint64_t *)(param_1 + 8) = uStack_180;
    *(uint64_t *)(param_1 + 0x10) = uStack_178;
    *(uint64_t *)(param_1 + 0x18) = uStack_170;
    *(uint64_t *)(param_1 + 0x20) = uStack_168;
    uStack_170 = 0;
    uStack_168 = 0xf;
    uStack_180 = uStack_180 & 0xffffffffffffff00;
  }
  uStack_298 = 2;
  if (acStack_188[0] != '\0') {
    FUN_180067070(&uStack_180);
  }
  FUN_180067070(auStack_a0);
  if (0xf < uStack_148) {
    uVar12 = uStack_148 + 1;
    lVar2 = CONCAT71(uStack_15f,uStack_160);
    lVar10 = lVar2;
    if (0xfff < uVar12) {
      uVar12 = uStack_148 + 0x28;
      lVar10 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar12);
  }
  uStack_150 = 0;
  uStack_148 = 0xf;
  uStack_160 = 0;
  puStack_290 = auStack_1f0;
  *(void **)(auStack_270 + (int64_t)*(int *)(lStack_278 + 4) + -8) = &unknown_var_4024_ptr;
  *(int *)((int64_t)&uStack_280 + (int64_t)*(int *)(lStack_278 + 4) + 4) =
       *(int *)(lStack_278 + 4) + -0x88;
  FUN_180477570(auStack_270);
  goto LAB_180479ff8;
}



uint64_t
FUN_18047a040(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int param_4,
             uint64_t param_5)

{
  void *puVar1;
  
  puVar1 = (void *)0x0;
  if (param_4 == 0) {
    puVar1 = &unknown_var_4788_ptr;
  }
  else if (param_4 == 1) {
    puVar1 = &unknown_var_4792_ptr;
  }
  else if (param_4 == 2) {
    puVar1 = &unknown_var_4964_ptr;
  }
  FUN_180479a10(param_2,*param_1,puVar1,param_3,param_5);
  return param_2;
}





// 函数: void FUN_18047a0d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18047a0d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





