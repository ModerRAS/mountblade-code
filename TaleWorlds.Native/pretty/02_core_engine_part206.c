#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part206.c - 20 个函数

// 函数: void FUN_180188b30(int64_t *param_1,int64_t param_2,uint64_t *param_3)
void FUN_180188b30(int64_t *param_1,int64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  code *pcVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t auStackX_8 [8];
  uint64_t uStackX_10;
  int64_t lStackX_20;
  
  lVar10 = *param_1;
  lVar9 = (param_1[1] - lVar10) / 0x28;
  if (lVar9 == 0x666666666666666) {
    FUN_180189990(param_1[1] - lVar10,0x666666666666666,lVar10,0x666666666666666,0xfffffffffffffffe)
    ;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = lVar9 + 1;
  uVar4 = (param_1[2] - lVar10) / 0x28;
  uStackX_10 = uVar1;
  if ((uVar4 <= 0x666666666666666 - (uVar4 >> 1)) &&
     (uStackX_10 = uVar4 + (uVar4 >> 1), uStackX_10 < uVar1)) {
    uStackX_10 = uVar1;
  }
  lVar9 = uStackX_10 * 0x28;
  if (0x666666666666666 < uStackX_10) {
    lVar9 = -1;
  }
  lVar9 = FUN_180067110(lVar9);
  puVar2 = (uint64_t *)(lVar9 + ((param_2 - lVar10) / 0x28) * 0x28);
  uVar8 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar8;
  uVar5 = *(int32_t *)((int64_t)param_3 + 0x14);
  uVar6 = *(int32_t *)(param_3 + 3);
  uVar7 = *(int32_t *)((int64_t)param_3 + 0x1c);
  *(int32_t *)(puVar2 + 2) = *(int32_t *)(param_3 + 2);
  *(int32_t *)((int64_t)puVar2 + 0x14) = uVar5;
  *(int32_t *)(puVar2 + 3) = uVar6;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = uVar7;
  puVar2[4] = param_3[4];
  lVar10 = param_1[1];
  lStackX_20 = lVar9;
  func_0x00018018a000(auStackX_8,*param_1);
  if (param_2 != lVar10) {
                    // WARNING: Subroutine does not return
    memmove(lVar9);
  }
                    // WARNING: Subroutine does not return
  memmove(lVar9);
}



int32_t * FUN_180188d20(int64_t *param_1,int64_t param_2,int32_t *param_3)

{
  uint64_t uVar1;
  int32_t *puVar2;
  code *pcVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int32_t *puVar13;
  uint64_t uVar14;
  int32_t *puVar15;
  
  uVar14 = 0xfffffffffffffffe;
  lVar12 = *param_1;
  lVar9 = (param_1[1] - lVar12) / 0x28;
  if (lVar9 == 0x666666666666666) {
    FUN_180189990();
    pcVar3 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar3)();
    return puVar8;
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar12) / 0x28;
  uVar10 = uVar1;
  if ((uVar11 <= 0x666666666666666 - (uVar11 >> 1)) &&
     (uVar10 = uVar11 + (uVar11 >> 1), uVar10 < uVar1)) {
    uVar10 = uVar1;
  }
  lVar9 = uVar10 * 0x28;
  if (0x666666666666666 < uVar10) {
    lVar9 = -1;
  }
  puVar7 = (int32_t *)FUN_180067110(lVar9);
  puVar2 = puVar7 + ((param_2 - lVar12) / 0x28) * 10;
  *(uint64_t *)(puVar2 + 4) = 0;
  *(uint64_t *)(puVar2 + 6) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  puVar2[4] = param_3[4];
  puVar2[5] = uVar4;
  puVar2[6] = uVar5;
  puVar2[7] = uVar6;
  *(uint64_t *)(param_3 + 4) = 0;
  *(uint64_t *)(param_3 + 6) = 0xf;
  *(int8_t *)param_3 = 0;
  *(int8_t *)(puVar2 + 8) = *(int8_t *)(param_3 + 8);
  lVar12 = param_1[1];
  lVar9 = *param_1;
  puVar8 = puVar7;
  puVar13 = puVar2;
  puVar15 = puVar2;
  if (param_2 != lVar12) {
    FUN_180189b30(*param_1,param_2,puVar7,param_1,puVar2,uVar14,puVar2);
    puVar8 = puVar2 + 10;
    lVar12 = param_1[1];
    lVar9 = param_2;
    puVar13 = puVar7;
  }
  FUN_180189b30(lVar9,lVar12,puVar8,param_1,puVar13,uVar14,puVar15);
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar9 = param_1[1];
    if (lVar12 != lVar9) {
      do {
        SystemResourceAllocator(lVar12);
        lVar12 = lVar12 + 0x28;
      } while (lVar12 != lVar9);
      lVar12 = *param_1;
    }
    uVar11 = ((param_1[2] - lVar12) / 0x28) * 0x28;
    lVar9 = lVar12;
    if (0xfff < uVar11) {
      lVar9 = *(int64_t *)(lVar12 + -8);
      if (0x1f < (lVar12 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(param_1[2] - lVar12,uVar11 + 0x27);
      }
    }
    free(lVar9);
  }
  *param_1 = (int64_t)puVar7;
  param_1[1] = (int64_t)(puVar7 + uVar1 * 10);
  param_1[2] = (int64_t)(puVar7 + uVar10 * 10);
  return puVar2;
}



int64_t FUN_180188f60(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t lVar13;
  
  uVar12 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  lVar5 = (param_1[1] - lVar4) / 0x28;
  if (lVar5 == 0x666666666666666) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  uVar1 = lVar5 + 1;
  uVar8 = (param_1[2] - lVar4) / 0x28;
  uVar7 = uVar1;
  if ((uVar8 <= 0x666666666666666 - (uVar8 >> 1)) && (uVar7 = uVar8 + (uVar8 >> 1), uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  lVar5 = uVar7 * 0x28;
  if (0x666666666666666 < uVar7) {
    lVar5 = -1;
  }
  lVar3 = FUN_180067110(lVar5);
  lVar4 = lVar3 + ((param_2 - lVar4) / 0x28) * 0x28;
  lVar11 = lVar3;
  lVar13 = lVar4;
  FUN_18018b350(lVar4,param_3);
  *(int32_t *)(lVar4 + 0x20) = *(int32_t *)(param_3 + 0x20);
  *(int32_t *)(lVar4 + 0x24) = *(int32_t *)(param_3 + 0x24);
  lVar5 = param_1[1];
  lVar6 = *param_1;
  lVar9 = lVar3;
  lVar10 = lVar4;
  if (param_2 != lVar5) {
    FUN_180189bc0(*param_1,param_2,lVar3,param_1,lVar4,lVar11,uVar12,lVar13);
    lVar5 = param_1[1];
    lVar6 = param_2;
    lVar9 = lVar4 + 0x28;
    lVar10 = lVar3;
  }
  FUN_180189bc0(lVar6,lVar5,lVar9,param_1,lVar10,lVar11,uVar12,lVar13);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = param_1[1];
    if (lVar5 != lVar6) {
      do {
        SystemResourceAllocator(lVar5);
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar6);
      lVar5 = *param_1;
    }
    uVar8 = ((param_1[2] - lVar5) / 0x28) * 0x28;
    lVar6 = lVar5;
    if (0xfff < uVar8) {
      lVar6 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(param_1[2] - lVar5,uVar8 + 0x27);
      }
    }
    free(lVar6);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3 + uVar1 * 0x28;
  param_1[2] = uVar7 * 0x28 + lVar3;
  return lVar4;
}





// 函数: void FUN_180189190(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_180189190(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  FUN_18018b350(param_2,param_3,param_3,param_4,0xfffffffffffffffe);
  *(int8_t *)(param_2 + 0x20) = *(int8_t *)(param_3 + 0x20);
  *(int32_t *)(param_2 + 0x24) = *(int32_t *)(param_3 + 0x24);
  *(int32_t *)(param_2 + 0x28) = *(int32_t *)(param_3 + 0x28);
  FUN_180189c50(param_2 + 0x30,param_3 + 0x30);
  return;
}



int64_t FUN_1801891f0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  code *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  
  lVar8 = *param_1;
  lVar3 = param_1[1] - lVar8 >> 6;
  if (lVar3 == 0x3ffffffffffffff) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    lVar8 = (*pcVar2)();
    return lVar8;
  }
  uVar1 = lVar3 + 1;
  uVar4 = param_1[2] - lVar8 >> 6;
  uVar10 = uVar1;
  if ((uVar4 <= 0x3ffffffffffffff - (uVar4 >> 1)) && (uVar10 = (uVar4 >> 1) + uVar4, uVar10 < uVar1)
     ) {
    uVar10 = uVar1;
  }
  lVar3 = uVar10 << 6;
  if (0x3ffffffffffffff < uVar10) {
    lVar3 = -1;
  }
  lVar3 = FUN_180067110(lVar3);
  uVar4 = param_2 - lVar8 & 0xffffffffffffffc0;
  lVar6 = uVar4 + lVar3;
  FUN_18018b350(lVar6,param_3);
  *(int8_t *)(lVar6 + 0x20) = *(int8_t *)(param_3 + 0x20);
  *(int32_t *)(lVar6 + 0x24) = *(int32_t *)(param_3 + 0x24);
  *(int32_t *)(lVar6 + 0x28) = *(int32_t *)(param_3 + 0x28);
  FUN_180189c50(lVar6 + 0x30,param_3 + 0x30);
  lVar8 = param_1[1];
  if (param_2 == lVar8) {
    lVar7 = lVar3;
    for (lVar6 = *param_1; lVar9 = lVar7, lVar6 != lVar8; lVar6 = lVar6 + 0x40) {
      FUN_18018b350(lVar7,lVar6);
      *(int8_t *)(lVar7 + 0x20) = *(int8_t *)(lVar6 + 0x20);
      *(int32_t *)(lVar7 + 0x24) = *(int32_t *)(lVar6 + 0x24);
      *(int32_t *)(lVar7 + 0x28) = *(int32_t *)(lVar6 + 0x28);
      FUN_180189c50(lVar7 + 0x30,lVar6 + 0x30);
      lVar7 = lVar7 + 0x40;
    }
    for (; lVar9 != lVar7; lVar9 = lVar9 + 0x40) {
      FUN_180187950(lVar9);
    }
  }
  else {
    FUN_1801899b0(param_1,*param_1,param_2,lVar3,lVar6);
    FUN_1801899b0(param_1,param_2,param_1[1],lVar6 + 0x40,lVar3);
  }
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar6 = param_1[1];
    if (lVar8 != lVar6) {
      do {
        FUN_180187950(lVar8);
        lVar8 = lVar8 + 0x40;
      } while (lVar8 != lVar6);
      lVar8 = *param_1;
    }
    uVar5 = param_1[2] - lVar8 & 0xffffffffffffffc0;
    lVar6 = lVar8;
    if (0xfff < uVar5) {
      lVar6 = *(int64_t *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar6,uVar5 + 0x27);
      }
    }
    free(lVar6);
  }
  *param_1 = lVar3;
  param_1[1] = uVar1 * 0x40 + lVar3;
  param_1[2] = uVar10 * 0x40 + lVar3;
  return uVar4 + lVar3;
}





// 函数: void FUN_180189470(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189470(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t auStackX_18 [2];
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar6 = lVar3 - lVar4 >> 3;
  uVar2 = param_1[2] - lVar4 >> 3;
  auStackX_18[0] = param_3;
  if (uVar2 < param_2) {
    if (0x1fffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar7 = param_2;
    if ((uVar2 <= 0x1fffffffffffffff - (uVar2 >> 1)) &&
       (uVar7 = (uVar2 >> 1) + uVar2, uVar7 < param_2)) {
      uVar7 = param_2;
    }
    lVar3 = uVar7 * 8;
    if (0x1fffffffffffffff < uVar7) {
      lVar3 = -1;
    }
    lVar3 = FUN_180067110(lVar3);
    puVar5 = (uint64_t *)(lVar3 + uVar6 * 8);
    for (lVar4 = param_2 - uVar6; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    func_0x00018018a000(auStackX_18,*param_1,param_1[1],param_4,0,uVar8);
                    // WARNING: Subroutine does not return
    memmove(lVar3);
  }
  if (uVar6 < param_2) {
    if (param_2 - uVar6 == 0) {
      param_1[1] = lVar3;
      return;
    }
                    // WARNING: Subroutine does not return
    memset(lVar3,0,(param_2 - uVar6) * 8);
  }
  if (param_2 != uVar6) {
    param_1[1] = lVar4 + param_2 * 8;
  }
  return;
}





// 函数: void FUN_180189600(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)
void FUN_180189600(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int8_t auStackX_20 [8];
  
  lVar3 = *param_1;
  param_3 = param_3 - param_2;
  uVar2 = param_1[1] - lVar3 >> 2;
  uVar5 = param_3 >> 2;
  uVar4 = param_1[2] - lVar3 >> 2;
  auStackX_20[0] = param_4;
  if (uVar5 <= uVar4) {
    if (uVar5 <= uVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,param_2,param_3);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar3,param_2,uVar2 * 4);
  }
  if (0x3fffffffffffffff < uVar5) {
LAB_180189786:
    FUN_180189990();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = uVar5;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) && (uVar2 = (uVar4 >> 1) + uVar4, uVar2 < uVar5))
  {
    uVar2 = uVar5;
  }
  if (lVar3 != 0) {
    lVar6 = lVar3;
    if (0xfff < uVar4 * 4) {
      lVar6 = *(int64_t *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar6,uVar4 * 4 + 0x27);
      }
    }
    free(lVar6);
  }
  lVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar2 != 0) {
    if (0x3fffffffffffffff < uVar2) goto LAB_180189786;
    lVar3 = FUN_180067110(uVar2 * 4);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = uVar2 * 4 + lVar3;
  }
  func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
  memmove(lVar3,param_2,param_3);
}





// 函数: void FUN_180189900(int64_t *param_1,int64_t *param_2)
void FUN_180189900(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  if (param_1 != param_2) {
    do {
      lVar1 = *param_1;
      if (lVar1 != 0) {
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
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return;
}





// 函数: void FUN_18018990f(int64_t *param_1,int64_t *param_2)
void FUN_18018990f(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  do {
    lVar1 = *param_1;
    if (lVar1 != 0) {
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
    param_1 = param_1 + 3;
  } while (param_1 != param_2);
  return;
}





// 函数: void FUN_18018997c(void)
void FUN_18018997c(void)

{
  return;
}





// 函数: void FUN_18018997d(void)
void FUN_18018997d(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}





// 函数: void FUN_180189990(void)
void FUN_180189990(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z(&unknown_var_392_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int32_t *
FUN_1801899b0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t *param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  if (param_2 != param_3) {
    puVar6 = param_2 + 7;
    do {
      *(uint64_t *)(param_4 + 4) = 0;
      *(uint64_t *)(param_4 + 6) = 0;
      uVar2 = *(int32_t *)((int64_t)puVar6 + -0x34);
      uVar3 = *(int32_t *)(puVar6 + -6);
      uVar4 = *(int32_t *)((int64_t)puVar6 + -0x2c);
      *param_4 = *(int32_t *)(puVar6 + -7);
      param_4[1] = uVar2;
      param_4[2] = uVar3;
      param_4[3] = uVar4;
      uVar2 = *(int32_t *)((int64_t)puVar6 + -0x24);
      uVar3 = *(int32_t *)(puVar6 + -4);
      uVar4 = *(int32_t *)((int64_t)puVar6 + -0x1c);
      param_4[4] = *(int32_t *)(puVar6 + -5);
      param_4[5] = uVar2;
      param_4[6] = uVar3;
      param_4[7] = uVar4;
      puVar6[-5] = 0;
      puVar6[-4] = 0xf;
      *(int8_t *)(puVar6 + -7) = 0;
      *(int8_t *)(param_4 + 8) = *(int8_t *)(puVar6 + -3);
      param_4[9] = *(int32_t *)((int64_t)puVar6 + -0x14);
      param_4[10] = *(int32_t *)(puVar6 + -2);
      puVar1 = (uint64_t *)(param_4 + 0xc);
      *puVar1 = 0;
      *(uint64_t *)(param_4 + 0xe) = 0;
      uVar5 = FUN_180188490();
      *puVar1 = uVar5;
      uVar5 = *puVar1;
      *puVar1 = puVar6[-1];
      puVar6[-1] = uVar5;
      uVar5 = *(uint64_t *)(param_4 + 0xe);
      *(uint64_t *)(param_4 + 0xe) = *puVar6;
      *puVar6 = uVar5;
      param_4 = param_4 + 0x10;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 8;
    } while (puVar1 != param_3);
  }
  return param_4;
}



uint64_t *
FUN_180189aa0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = param_4;
  if (param_1 != param_2) {
    uVar3 = 0;
    puVar2 = param_1 + 2;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = puVar2[-2];
      param_3[1] = puVar2[-1];
      param_3[2] = *puVar2;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  FUN_180189900(param_3,param_3,param_2,uVar3,0xfffffffffffffffe,param_3,param_3,param_4);
  return param_3;
}



uint64_t * FUN_180189b30(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  
  if (param_1 != param_2) {
    do {
      param_3[2] = 0;
      param_3[3] = 0;
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      uVar1 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar1;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(int8_t *)param_1 = 0;
      *(int8_t *)(param_3 + 4) = *(int8_t *)(param_1 + 4);
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
    } while (param_1 != param_2);
  }
  return param_3;
}



uint64_t * FUN_180189bc0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      param_3[2] = 0;
      param_3[3] = 0;
      uVar2 = puVar3[-2];
      *param_3 = puVar3[-3];
      param_3[1] = uVar2;
      uVar2 = *puVar3;
      param_3[2] = puVar3[-1];
      param_3[3] = uVar2;
      puVar3[-1] = 0;
      *puVar3 = 0xf;
      *(int8_t *)(puVar3 + -3) = 0;
      *(int32_t *)(param_3 + 4) = *(int32_t *)(puVar3 + 1);
      *(int32_t *)((int64_t)param_3 + 0x24) = *(int32_t *)((int64_t)puVar3 + 0xc);
      param_3 = param_3 + 5;
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 5;
    } while (puVar1 != param_2);
  }
  return param_3;
}



int64_t * FUN_180189c50(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = FUN_180188490();
  *param_1 = lVar3;
  uVar6 = FUN_18018a8c0(param_1,*(uint64_t *)(*param_2 + 8),*param_1,(uint64_t)param_1 & 0xff,
                        uVar6);
  *(uint64_t *)(*param_1 + 8) = uVar6;
  param_1[1] = param_2[1];
  plVar1 = (int64_t *)*param_1;
  plVar2 = (int64_t *)plVar1[1];
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    do {
      plVar4 = plVar2;
      plVar2 = (int64_t *)*plVar4;
    } while (*(char *)((int64_t)plVar2 + 0x19) == '\0');
    *plVar1 = (int64_t)plVar4;
    lVar3 = *(int64_t *)(*param_1 + 8);
    do {
      lVar5 = lVar3;
      lVar3 = *(int64_t *)(lVar5 + 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
    *(int64_t *)(*param_1 + 0x10) = lVar5;
  }
  else {
    *plVar1 = (int64_t)plVar1;
    *(int64_t *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}





// 函数: void FUN_180189d00(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189d00(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_180189e60(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189e60(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189ee0(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189ee0(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&unknown_var_144_ptr,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189f10(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189f10(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&unknown_var_256_ptr,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189f40(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189f40(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&unknown_var_312_ptr,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189f70(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189f70(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&unknown_var_288_ptr,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189fa0(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189fa0(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&unknown_var_368_ptr,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189fd0(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180189fd0(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&unknown_var_336_ptr,&uStackX_18);
  return;
}





// 函数: void FUN_18018a010(int64_t *param_1)
void FUN_18018a010(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180187950(lVar2);
  }
  return;
}





// 函数: void FUN_18018a050(int64_t *param_1)
void FUN_18018a050(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    SystemResourceAllocator(lVar2);
  }
  return;
}





// 函数: void FUN_18018a0b0(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_18018a0b0(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}





