#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part637.c - 18 个函数

// 函数: void FUN_180622f90(char *param_1,char *param_2,longlong param_3,longlong *param_4)
void FUN_180622f90(char *param_1,char *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  lVar5 = (longlong)param_2 - (longlong)param_1;
  while ((0x1c < lVar5 && (0 < param_3))) {
    pcVar6 = (char *)FUN_180623320(param_1,param_1 + ((longlong)param_2 - (longlong)param_1) / 2,
                                   param_2 + -1);
    cVar1 = *pcVar6;
    pcVar6 = param_1;
    pcVar10 = param_2;
    while( true ) {
      while( true ) {
        cVar2 = *pcVar6;
        iVar9 = 0;
        lVar5 = *(longlong *)(*param_4 + 0x140);
        cVar3 = cVar2;
        while ((lVar4 = (longlong)cVar3 * 0x1b0 + lVar5, lVar4 != 0 &&
               (cVar3 = *(char *)(lVar4 + 0xf0), cVar3 != -1))) {
          iVar9 = iVar9 + 1;
        }
        iVar8 = 0;
        lVar4 = (longlong)cVar1 * 0x1b0 + lVar5;
        for (lVar7 = lVar4; (lVar7 != 0 && (*(char *)(lVar7 + 0xf0) != -1));
            lVar7 = (longlong)*(char *)(lVar7 + 0xf0) * 0x1b0 + lVar5) {
          iVar8 = iVar8 + 1;
        }
        if (iVar8 <= iVar9) break;
        pcVar6 = pcVar6 + 1;
      }
      do {
        pcVar10 = pcVar10 + -1;
        iVar9 = 0;
        for (lVar7 = lVar4; (lVar7 != 0 && (*(char *)(lVar7 + 0xf0) != -1));
            lVar7 = (longlong)*(char *)(lVar7 + 0xf0) * 0x1b0 + lVar5) {
          iVar9 = iVar9 + 1;
        }
        iVar8 = 0;
        cVar3 = *pcVar10;
        while ((lVar7 = (longlong)cVar3 * 0x1b0 + lVar5, lVar7 != 0 &&
               (cVar3 = *(char *)(lVar7 + 0xf0), cVar3 != -1))) {
          iVar8 = iVar8 + 1;
        }
      } while (iVar9 < iVar8);
      if (pcVar10 <= pcVar6) break;
      *pcVar6 = *pcVar10;
      pcVar6 = pcVar6 + 1;
      *pcVar10 = cVar2;
    }
    param_3 = param_3 + -1;
    FUN_180622f90(pcVar6,param_2,param_3,param_4);
    lVar5 = (longlong)pcVar6 - (longlong)param_1;
    param_2 = pcVar6;
  }
  if (param_3 == 0) {
    FUN_180623170(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_180622f9d(char *param_1,char *param_2,longlong param_3,longlong *param_4)
void FUN_180622f9d(char *param_1,char *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong in_RAX;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  lVar5 = in_RAX - (longlong)param_1;
  while ((0x1c < lVar5 && (0 < param_3))) {
    pcVar6 = (char *)FUN_180623320(param_1,param_1 + ((longlong)param_2 - (longlong)param_1) / 2,
                                   param_2 + -1);
    cVar1 = *pcVar6;
    pcVar6 = param_1;
    pcVar10 = param_2;
    while( true ) {
      while( true ) {
        cVar2 = *pcVar6;
        iVar9 = 0;
        lVar5 = *(longlong *)(*param_4 + 0x140);
        cVar3 = cVar2;
        while ((lVar4 = (longlong)cVar3 * 0x1b0 + lVar5, lVar4 != 0 &&
               (cVar3 = *(char *)(lVar4 + 0xf0), cVar3 != -1))) {
          iVar9 = iVar9 + 1;
        }
        iVar8 = 0;
        lVar4 = (longlong)cVar1 * 0x1b0 + lVar5;
        for (lVar7 = lVar4; (lVar7 != 0 && (*(char *)(lVar7 + 0xf0) != -1));
            lVar7 = (longlong)*(char *)(lVar7 + 0xf0) * 0x1b0 + lVar5) {
          iVar8 = iVar8 + 1;
        }
        if (iVar8 <= iVar9) break;
        pcVar6 = pcVar6 + 1;
      }
      do {
        pcVar10 = pcVar10 + -1;
        iVar9 = 0;
        for (lVar7 = lVar4; (lVar7 != 0 && (*(char *)(lVar7 + 0xf0) != -1));
            lVar7 = (longlong)*(char *)(lVar7 + 0xf0) * 0x1b0 + lVar5) {
          iVar9 = iVar9 + 1;
        }
        iVar8 = 0;
        cVar3 = *pcVar10;
        while ((lVar7 = (longlong)cVar3 * 0x1b0 + lVar5, lVar7 != 0 &&
               (cVar3 = *(char *)(lVar7 + 0xf0), cVar3 != -1))) {
          iVar8 = iVar8 + 1;
        }
      } while (iVar9 < iVar8);
      if (pcVar10 <= pcVar6) break;
      *pcVar6 = *pcVar10;
      pcVar6 = pcVar6 + 1;
      *pcVar10 = cVar2;
    }
    param_3 = param_3 + -1;
    FUN_180622f90(pcVar6,param_2,param_3,param_4);
    lVar5 = (longlong)pcVar6 - (longlong)param_1;
    param_2 = pcVar6;
  }
  if (param_3 == 0) {
    FUN_180623170(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_180622fbb(void)
void FUN_180622fbb(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_RBX;
  int iVar9;
  char *pcVar10;
  char *unaff_R13;
  longlong unaff_R14;
  char *unaff_R15;
  
  do {
    if (unaff_R14 < 1) break;
    pcVar6 = (char *)FUN_180623320();
    cVar1 = *pcVar6;
    pcVar6 = unaff_R13;
    pcVar10 = unaff_R15;
    while( true ) {
      while( true ) {
        cVar2 = *pcVar6;
        iVar9 = 0;
        lVar4 = *(longlong *)(*unaff_RBX + 0x140);
        cVar3 = cVar2;
        while ((lVar5 = (longlong)cVar3 * 0x1b0 + lVar4, lVar5 != 0 &&
               (cVar3 = *(char *)(lVar5 + 0xf0), cVar3 != -1))) {
          iVar9 = iVar9 + 1;
        }
        iVar8 = 0;
        lVar5 = (longlong)cVar1 * 0x1b0 + lVar4;
        for (lVar7 = lVar5; (lVar7 != 0 && (*(char *)(lVar7 + 0xf0) != -1));
            lVar7 = (longlong)*(char *)(lVar7 + 0xf0) * 0x1b0 + lVar4) {
          iVar8 = iVar8 + 1;
        }
        if (iVar8 <= iVar9) break;
        pcVar6 = pcVar6 + 1;
      }
      do {
        pcVar10 = pcVar10 + -1;
        iVar9 = 0;
        for (lVar7 = lVar5; (lVar7 != 0 && (*(char *)(lVar7 + 0xf0) != -1));
            lVar7 = (longlong)*(char *)(lVar7 + 0xf0) * 0x1b0 + lVar4) {
          iVar9 = iVar9 + 1;
        }
        iVar8 = 0;
        cVar3 = *pcVar10;
        while ((lVar7 = (longlong)cVar3 * 0x1b0 + lVar4, lVar7 != 0 &&
               (cVar3 = *(char *)(lVar7 + 0xf0), cVar3 != -1))) {
          iVar8 = iVar8 + 1;
        }
      } while (iVar9 < iVar8);
      if (pcVar10 <= pcVar6) break;
      *pcVar6 = *pcVar10;
      pcVar6 = pcVar6 + 1;
      *pcVar10 = cVar2;
    }
    unaff_R14 = unaff_R14 + -1;
    FUN_180622f90(pcVar6,unaff_R15,unaff_R14);
    unaff_R15 = pcVar6;
  } while (0x1c < (longlong)pcVar6 - (longlong)unaff_R13);
  if (unaff_R14 == 0) {
    FUN_180623170();
  }
  return;
}





// 函数: void FUN_180623141(void)
void FUN_180623141(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0) {
    FUN_180623170();
  }
  return;
}





// 函数: void FUN_18062314b(void)
void FUN_18062314b(void)

{
  FUN_180623170();
  return;
}





// 函数: void FUN_180623170(char *param_1,char *param_2,char *param_3,longlong *param_4)
void FUN_180623170(char *param_1,char *param_2,char *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char acStackX_8 [8];
  ulonglong uVar6;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  if (1 < lVar2) {
    lVar3 = (lVar2 + -2 >> 1) + 1;
    do {
      acStackX_8[0] = param_1[lVar3 + -1];
      lVar3 = lVar3 + -1;
      FUN_180623490(param_1,lVar3,lVar2,lVar3,acStackX_8,param_4);
    } while (lVar3 != 0);
  }
  uVar8 = 0;
  uVar9 = (longlong)param_3 - (longlong)param_2;
  if (param_3 < param_2) {
    uVar9 = uVar8;
  }
  pcVar4 = param_2;
  if (uVar9 != 0) {
    do {
      acStackX_8[0] = *pcVar4;
      uVar6 = uVar8;
      uVar7 = 0;
      cVar1 = acStackX_8[0];
      while (lVar3 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*param_4 + 0x140), lVar3 != 0) {
        uVar7 = (uint)uVar6;
        cVar1 = *(char *)(lVar3 + 0xf0);
        if (cVar1 == -1) break;
        uVar7 = uVar7 + 1;
        uVar6 = (ulonglong)uVar7;
      }
      uVar5 = 0;
      uVar6 = uVar8;
      cVar1 = *param_1;
      while (lVar3 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*param_4 + 0x140), lVar3 != 0) {
        uVar5 = (uint)uVar6;
        cVar1 = *(char *)(lVar3 + 0xf0);
        if (cVar1 == -1) break;
        uVar5 = uVar5 + 1;
        uVar6 = (ulonglong)uVar5;
      }
      if ((int)uVar7 < (int)uVar5) {
        *pcVar4 = *param_1;
        FUN_180623490(param_1,0,lVar2,0,acStackX_8,param_4);
      }
      pcVar4 = pcVar4 + 1;
    } while ((ulonglong)((longlong)pcVar4 - (longlong)param_2) < uVar9);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -1;
    do {
      acStackX_8[0] = *param_2;
      *param_2 = *param_1;
      FUN_180623490(param_1,0,(longlong)param_2 - (longlong)param_1,0,acStackX_8,param_4);
      param_2 = param_2 + -1;
    } while (1 < (longlong)(param_2 + (1 - (longlong)param_1)));
  }
  return;
}



char * FUN_180623320(char *param_1,char *param_2,char *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plStackX_20;
  
  iVar5 = 0;
  iVar7 = 0;
  lVar1 = *(longlong *)(*param_4 + 0x140);
  cVar2 = *param_1;
  while ((lVar4 = (longlong)cVar2 * 0x1b0 + lVar1, lVar4 != 0 &&
         (cVar2 = *(char *)(lVar4 + 0xf0), cVar2 != -1))) {
    iVar7 = iVar7 + 1;
  }
  iVar6 = 0;
  lVar4 = (longlong)*param_2 * 0x1b0 + lVar1;
  for (lVar3 = lVar4; (lVar3 != 0 && (*(char *)(lVar3 + 0xf0) != -1));
      lVar3 = (longlong)*(char *)(lVar3 + 0xf0) * 0x1b0 + lVar1) {
    iVar6 = iVar6 + 1;
  }
  plStackX_20 = param_4;
  if (iVar7 < iVar6) {
    iVar7 = 0;
    for (; (lVar4 != 0 && (*(char *)(lVar4 + 0xf0) != -1));
        lVar4 = (longlong)*(char *)(lVar4 + 0xf0) * 0x1b0 + lVar1) {
      iVar7 = iVar7 + 1;
    }
    cVar2 = *param_3;
    while ((lVar4 = (longlong)cVar2 * 0x1b0 + lVar1, lVar4 != 0 &&
           (cVar2 = *(char *)(lVar4 + 0xf0), cVar2 != -1))) {
      iVar5 = iVar5 + 1;
    }
    if (iVar7 < iVar5) {
      return param_2;
    }
    cVar2 = func_0x00018061fe00(&plStackX_20,*param_1);
    if (cVar2 != '\0') {
      return param_3;
    }
  }
  else {
    cVar2 = func_0x00018061fe00(&plStackX_20,*param_1,*param_3);
    if (cVar2 == '\0') {
      cVar2 = func_0x00018061fe00(&plStackX_20,*param_2);
      if (cVar2 == '\0') {
        return param_2;
      }
      return param_3;
    }
  }
  return param_1;
}





// 函数: void FUN_180623490(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5
void FUN_180623490(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5
                  ,longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = param_4 * 2;
  while (lVar2 = lVar6 + 2, lVar2 < param_3) {
    cVar1 = *(char *)(lVar2 + param_1);
    iVar5 = 0;
    while ((lVar3 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*param_6 + 0x140), lVar3 != 0 &&
           (cVar1 = *(char *)(lVar3 + 0xf0), cVar1 != -1))) {
      iVar5 = iVar5 + 1;
    }
    cVar1 = *(char *)(param_1 + -1 + lVar2);
    iVar4 = 0;
    while ((lVar3 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*param_6 + 0x140), lVar3 != 0 &&
           (cVar1 = *(char *)(lVar3 + 0xf0), cVar1 != -1))) {
      iVar4 = iVar4 + 1;
    }
    lVar3 = lVar6 + 1;
    if (iVar4 <= iVar5) {
      lVar3 = lVar2;
    }
    *(int8_t *)(param_1 + param_4) = *(int8_t *)(lVar3 + param_1);
    param_4 = lVar3;
    lVar6 = lVar3 * 2;
  }
  if (lVar2 == param_3) {
    *(int8_t *)(param_1 + param_4) = *(int8_t *)(lVar6 + 1 + param_1);
    param_4 = lVar6 + 1;
  }
  if (param_2 < param_4) {
    do {
      lVar6 = param_4 + -1 >> 1;
      iVar5 = 0;
      cVar1 = *(char *)(lVar6 + param_1);
      while ((lVar2 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*param_6 + 0x140), lVar2 != 0 &&
             (cVar1 = *(char *)(lVar2 + 0xf0), cVar1 != -1))) {
        iVar5 = iVar5 + 1;
      }
      cVar1 = *param_5;
      iVar4 = 0;
      while ((lVar2 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*param_6 + 0x140), lVar2 != 0 &&
             (cVar1 = *(char *)(lVar2 + 0xf0), cVar1 != -1))) {
        iVar4 = iVar4 + 1;
      }
    } while ((iVar5 < iVar4) &&
            (*(char *)(param_4 + param_1) = *(char *)(lVar6 + param_1), param_4 = lVar6,
            param_2 < lVar6));
    *(char *)(param_4 + param_1) = *param_5;
    return;
  }
  *(char *)(param_4 + param_1) = *param_5;
  return;
}





// 函数: void FUN_18062357b(void)
void FUN_18062357b(void)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar4;
  int iVar5;
  longlong in_R11;
  char *in_stack_00000030;
  
  do {
    iVar5 = 0;
    cVar1 = *(char *)(in_R11 + unaff_RSI);
    while ((lVar3 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*in_RAX + 0x140), lVar3 != 0 &&
           (cVar1 = *(char *)(lVar3 + 0xf0), cVar1 != -1))) {
      iVar5 = iVar5 + 1;
    }
    cVar1 = *in_stack_00000030;
    iVar4 = 0;
    while ((lVar3 = (longlong)cVar1 * 0x1b0 + *(longlong *)(*in_RAX + 0x140), lVar3 != 0 &&
           (cVar1 = *(char *)(lVar3 + 0xf0), cVar1 != -1))) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 <= iVar5) break;
    *(char *)(unaff_RBX + unaff_RSI) = *(char *)(in_R11 + unaff_RSI);
    bVar2 = unaff_RBP < in_R11;
    unaff_RBX = in_R11;
    in_R11 = in_R11 + -1 >> 1;
  } while (bVar2);
  *(char *)(unaff_RBX + unaff_RSI) = *in_stack_00000030;
  return;
}





// 函数: void FUN_180623637(void)
void FUN_180623637(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  int8_t *in_stack_00000030;
  
  *(int8_t *)(unaff_RBX + unaff_RSI) = *in_stack_00000030;
  return;
}



uint64_t * FUN_180623660(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2256_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806236a0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2456_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t *
FUN_1806236f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x1b;
  strcpy_s(param_2[1],0x80,&unknown_var_2504_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}





// 函数: void FUN_180623770(uint64_t *param_1)
void FUN_180623770(uint64_t *param_1)

{
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806237a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar4 = (int)lVar2 + -1;
  if (iVar4 == 0) {
    cVar3 = (**(code **)(*param_1 + 0x58))();
    if (cVar3 != '\0') {
      FUN_18006f4c0(param_1);
      return 0;
    }
    (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x60))((longlong *)*_DAT_180c8ed08,param_1);
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180623800(uint64_t *param_1)
void FUN_180623800(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  uint64_t *puStack_b0;
  int iStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  ulonglong uStack_18;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  puVar4 = _DAT_180c8ecf0;
  puStack_b0 = param_1;
  if (_DAT_180c8ecf0 == (uint64_t *)0x0) {
    puVar4 = (uint64_t *)_aligned_malloc(0x18);
    _DAT_180c8ecf0 = puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  iStack_a8 = _DAT_180c8ece8;
  puVar5 = (uint64_t *)&system_buffer_ptr;
  if ((uint64_t *)param_1[1] != (uint64_t *)0x0) {
    puVar5 = (uint64_t *)param_1[1];
  }
  uStack_a4 = (int32_t)*puVar5;
  uStack_a0 = (int32_t)((ulonglong)*puVar5 >> 0x20);
  uStack_9c = (int32_t)puVar5[1];
  uStack_98 = (int32_t)((ulonglong)puVar5[1] >> 0x20);
  uStack_94 = (int32_t)puVar5[2];
  uStack_90 = (int32_t)((ulonglong)puVar5[2] >> 0x20);
  uStack_8c = (int32_t)puVar5[3];
  uStack_88 = (int32_t)((ulonglong)puVar5[3] >> 0x20);
  uStack_84 = (int32_t)puVar5[4];
  uStack_80 = (int32_t)((ulonglong)puVar5[4] >> 0x20);
  uStack_7c = (int32_t)puVar5[5];
  uStack_78 = (int32_t)((ulonglong)puVar5[5] >> 0x20);
  uStack_74 = (int32_t)puVar5[6];
  uStack_70 = (int32_t)((ulonglong)puVar5[6] >> 0x20);
  uStack_6c = (int32_t)puVar5[7];
  uStack_68 = (int32_t)((ulonglong)puVar5[7] >> 0x20);
  uStack_64 = (int32_t)puVar5[8];
  uStack_60 = (int32_t)((ulonglong)puVar5[8] >> 0x20);
  uStack_5c = (int32_t)puVar5[9];
  uStack_58 = (int32_t)((ulonglong)puVar5[9] >> 0x20);
  uStack_54 = (int32_t)puVar5[10];
  uStack_50 = (int32_t)((ulonglong)puVar5[10] >> 0x20);
  uStack_4c = (int32_t)puVar5[0xb];
  uStack_48 = (int32_t)((ulonglong)puVar5[0xb] >> 0x20);
  uStack_44 = *(int32_t *)(puVar5 + 0xc);
  uStack_40 = *(int32_t *)((longlong)puVar5 + 100);
  uStack_3c = *(int32_t *)(puVar5 + 0xd);
  uStack_38 = *(int32_t *)((longlong)puVar5 + 0x6c);
  uStack_34 = *(int32_t *)(puVar5 + 0xe);
  uVar2 = *(uint64_t *)((longlong)puVar5 + 0x6c);
  uStack_30 = *(int32_t *)((longlong)puVar5 + 0x74);
  uStack_2c = *(int32_t *)(puVar5 + 0xf);
  uVar3 = *(uint64_t *)((longlong)puVar5 + 0x74);
  uStack_28 = *(int32_t *)((longlong)puVar5 + 0x7c);
  puVar5 = (uint64_t *)puVar4[1];
  if ((uint64_t *)puVar4[2] == puVar5) {
    _DAT_180c8ece8 = _DAT_180c8ece8 + 1;
    FUN_180623a50(puVar4,puVar5,&iStack_a8);
  }
  else {
    uVar1 = CONCAT44(uStack_a4,_DAT_180c8ece8);
    _DAT_180c8ece8 = _DAT_180c8ece8 + 1;
    *puVar5 = uVar1;
    puVar5[1] = CONCAT44(uStack_9c,uStack_a0);
    puVar5[2] = CONCAT44(uStack_94,uStack_98);
    puVar5[3] = CONCAT44(uStack_8c,uStack_90);
    puVar5[4] = CONCAT44(uStack_84,uStack_88);
    puVar5[5] = CONCAT44(uStack_7c,uStack_80);
    puVar5[6] = CONCAT44(uStack_74,uStack_78);
    puVar5[7] = CONCAT44(uStack_6c,uStack_70);
    puVar5[8] = CONCAT44(uStack_64,uStack_68);
    puVar5[9] = CONCAT44(uStack_5c,uStack_60);
    puVar5[10] = CONCAT44(uStack_54,uStack_58);
    puVar5[0xb] = CONCAT44(uStack_4c,uStack_50);
    *(int32_t *)(puVar5 + 0xc) = uStack_48;
    *(int32_t *)((longlong)puVar5 + 100) = uStack_44;
    *(int32_t *)(puVar5 + 0xd) = uStack_40;
    *(int32_t *)((longlong)puVar5 + 0x6c) = uStack_3c;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    *(int32_t *)(puVar5 + 0x10) = uStack_28;
    puVar4[1] = puVar4[1] + 0x84;
  }
  *param_1 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_d8);
}



uint64_t *
FUN_1806239a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,9,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x63656a624f6c7466;
  *(int16_t *)(puVar1 + 1) = 0x74;
  *(int32_t *)(param_2 + 2) = 9;
  return param_2;
}





// 函数: void FUN_180623a30(void)
void FUN_180623a30(void)

{
  code *pcVar1;
  
  __Xout_of_range_std__YAXPEBD_Z(&unknown_var_2536_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_180623a50(longlong *param_1,longlong param_2,uint64_t *param_3)
void FUN_180623a50(longlong *param_1,longlong param_2,uint64_t *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  ulonglong uStackX_10;
  longlong lStackX_20;
  
  lVar9 = *param_1;
  lVar10 = (param_1[1] - lVar9) / 0x84;
  if (lVar10 == 0x1f07c1f07c1f07c) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = lVar10 + 1;
  uVar3 = (param_1[2] - lVar9) / 0x84;
  uStackX_10 = uVar1;
  if ((uVar3 <= 0x1f07c1f07c1f07c - (uVar3 >> 1)) &&
     (uStackX_10 = (uVar3 >> 1) + uVar3, uStackX_10 < uVar1)) {
    uStackX_10 = uVar1;
  }
  lVar10 = uStackX_10 * 0x84;
  if (0x1f07c1f07c1f07c < uStackX_10) {
    lVar10 = -1;
  }
  lVar10 = FUN_180067110(lVar10,0xffffffffffffffff,lVar9,0x1f07c1f07c1f07c,0xfffffffffffffffe);
  puVar8 = (uint64_t *)(((param_2 - lVar9) / 0x84) * 0x84 + lVar10);
  uVar7 = param_3[1];
  *puVar8 = *param_3;
  puVar8[1] = uVar7;
  uVar7 = param_3[3];
  puVar8[2] = param_3[2];
  puVar8[3] = uVar7;
  uVar7 = param_3[5];
  puVar8[4] = param_3[4];
  puVar8[5] = uVar7;
  uVar7 = param_3[7];
  puVar8[6] = param_3[6];
  puVar8[7] = uVar7;
  uVar7 = param_3[9];
  puVar8[8] = param_3[8];
  puVar8[9] = uVar7;
  uVar7 = param_3[0xb];
  puVar8[10] = param_3[10];
  puVar8[0xb] = uVar7;
  uVar4 = *(int32_t *)((longlong)param_3 + 100);
  uVar5 = *(int32_t *)(param_3 + 0xd);
  uVar6 = *(int32_t *)((longlong)param_3 + 0x6c);
  *(int32_t *)(puVar8 + 0xc) = *(int32_t *)(param_3 + 0xc);
  *(int32_t *)((longlong)puVar8 + 100) = uVar4;
  *(int32_t *)(puVar8 + 0xd) = uVar5;
  *(int32_t *)((longlong)puVar8 + 0x6c) = uVar6;
  uVar4 = *(int32_t *)((longlong)param_3 + 0x74);
  uVar5 = *(int32_t *)(param_3 + 0xf);
  uVar6 = *(int32_t *)((longlong)param_3 + 0x7c);
  *(int32_t *)(puVar8 + 0xe) = *(int32_t *)(param_3 + 0xe);
  *(int32_t *)((longlong)puVar8 + 0x74) = uVar4;
  *(int32_t *)(puVar8 + 0xf) = uVar5;
  *(int32_t *)((longlong)puVar8 + 0x7c) = uVar6;
  *(int32_t *)(puVar8 + 0x10) = *(int32_t *)(param_3 + 0x10);
  lVar9 = param_1[1];
  lStackX_20 = lVar10;
  func_0x00018018a000(auStackX_8,*param_1);
  if (param_2 != lVar9) {
                    // WARNING: Subroutine does not return
    memmove(lVar10);
  }
                    // WARNING: Subroutine does not return
  memmove(lVar10);
}





// 函数: void FUN_180623c80(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180623c80(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < (ulonglong)(param_3 * 0x84)) {
    lVar1 = *(longlong *)(param_2 + -8);
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(lVar1,param_3 * 0x84 + 0x27);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}



void Sleep(void)

{
                    // WARNING: Could not recover jumptable at 0x000180623cd0. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180623ce0(void)
void FUN_180623ce0(void)

{
  uint64_t uVar1;
  int8_t auStack_88 [32];
  int32_t auStack_68 [20];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  auStack_68[0] = 0x48;
  uVar1 = GetCurrentProcess();
  K32GetProcessMemoryInfo(uVar1,auStack_68,0x48);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180623d40(void)
void FUN_180623d40(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int8_t auStack_78 [32];
  int32_t auStack_58 [2];
  longlong lStack_50;
  longlong lStack_48;
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  auStack_58[0] = 0x40;
  iVar1 = GlobalMemoryStatusEx(auStack_58);
  if (iVar1 != 0) {
    dVar2 = (double)lStack_48;
    if (lStack_48 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)lStack_50;
    if (lStack_50 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050((float)(dVar2 / dVar3) * 100.0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(0xbf800000);
}



// WARNING: Removing unreachable block (ram,0x000180623f6c)
// WARNING: Removing unreachable block (ram,0x000180623f46)
// WARNING: Removing unreachable block (ram,0x000180623f20)
// WARNING: Removing unreachable block (ram,0x000180623ef9)
// WARNING: Removing unreachable block (ram,0x000180623ea0)
// WARNING: Removing unreachable block (ram,0x000180623e86)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180623de0(longlong *param_1)
void FUN_180623de0(longlong *param_1)

{
  uint *puVar1;
  int32_t *puVar2;
  uint uVar3;
  uint uVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  uint uStack_b4;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  int32_t uStack_58;
  uint uStack_54;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint uStack_44;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint uStack_34;
  uint64_t uStack_30;
  ulonglong uStack_18;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  *param_1 = (longlong)&unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (longlong)&unknown_var_3432_ptr;
  param_1[1] = (longlong)(param_1 + 3);
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  param_1[0x13] = 4;
  *(int16_t *)(param_1 + 0x14) = 0;
  uStack_a8 = 1;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  puVar1 = (uint *)cpuid(0x80000000);
  uVar3 = *puVar1;
  uStack_b4 = puVar1[1];
  uStack_b8 = 0xffffffff;
  uStack_b0 = CONCAT44(puVar1[2],puVar1[3]);
  if (1 < uVar3) {
    puVar2 = (int32_t *)cpuid_Version_info(1);
    uStack_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uVar4 = puVar2[3];
    uStack_b0 = CONCAT44(puVar2[2],uVar4);
    *(byte *)((longlong)param_1 + 0x9c) = (byte)uVar4 & 1;
    *(byte *)((longlong)param_1 + 0x9d) = (byte)(uVar4 >> 9) & 1;
    *(byte *)((longlong)param_1 + 0x9e) = (byte)(uVar4 >> 0x13) & 1;
    *(byte *)((longlong)param_1 + 0x9f) = (byte)(uVar4 >> 0x14) & 1;
    *(byte *)(param_1 + 0x14) = (byte)(uVar4 >> 0x1c) & 1;
  }
  if (7 < uVar3) {
    puVar2 = (int32_t *)cpuid_Extended_Feature_Enumeration_info(7);
    uStack_b8 = *puVar2;
    uStack_b0 = CONCAT44(puVar2[2],puVar2[3]);
    *(byte *)((longlong)param_1 + 0xa1) = (byte)((uint)puVar2[1] >> 5) & 1;
  }
  if (0x80000002 < uVar3) {
    puVar2 = (int32_t *)cpuid_brand_part1_info(0x80000002);
    uStack_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = CONCAT44(puVar2[2],puVar2[3]);
    uStack_50 = uStack_b0;
    uStack_58 = uStack_b8;
    uStack_54 = uStack_b4;
  }
  if (0x80000003 < uVar3) {
    puVar2 = (int32_t *)cpuid_brand_part2_info(0x80000003);
    uStack_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = CONCAT44(puVar2[2],puVar2[3]);
    uStack_40 = uStack_b0;
    uStack_48 = uStack_b8;
    uStack_44 = uStack_b4;
  }
  if (0x80000004 < uVar3) {
    puVar2 = (int32_t *)cpuid_brand_part3_info(0x80000004);
    uStack_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = CONCAT44(puVar2[2],puVar2[3]);
    uStack_30 = uStack_b0;
    uStack_38 = uStack_b8;
    uStack_34 = uStack_b4;
  }
  plStack_98 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_58);
  GetSystemInfo(auStack_88);
  *(int32_t *)(param_1 + 0x13) = uStack_68;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_180623fd0(uint64_t param_1,longlong param_2)
void FUN_180623fd0(uint64_t param_1,longlong param_2)

{
  int32_t auStack_28 [2];
  void *puStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  auStack_28[0] = 0x1000;
  puStack_20 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puStack_20 = *(void **)(param_2 + 8);
  }
  uStack_18 = GetThreadId();
  uStack_14 = 0;
  RaiseException(0x406d1388,0,3,auStack_28);
  return;
}



uint64_t *
FUN_180624030(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_7512_ptr;
  param_1[1] = param_1 + 3;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = 6;
  strcpy_s(param_1[1],0x10,&unknown_var_2588_ptr,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



