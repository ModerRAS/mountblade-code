#include "TaleWorlds.Native.Split.h"

// 03_rendering_part236.c - 18 个函数

// 函数: void FUN_18039d9bf(void)
void FUN_18039d9bf(void)

{
  longlong unaff_RBP;
  uint64_t in_R9;
  longlong unaff_R15;
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (*(longlong *)(unaff_R15 + 0x238) - *(longlong *)(unaff_R15 + 0x230) >> 3 != 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBP + -0x60,0,0x210,in_R9,lVar1);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 < 0x20);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1b0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18039dbd0(longlong param_1,longlong *param_2,longlong param_3,uint64_t param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint64_t uVar7;
  uint64_t *puStackX_8;
  uint64_t *puStackX_10;
  
  lVar3 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puStackX_8 = (uint64_t *)(lVar3 + 0x20);
  *puStackX_8 = &unknown_var_720_ptr;
  uVar7 = 0;
  *(uint64_t *)(lVar3 + 0x28) = 0;
  *(int32_t *)(lVar3 + 0x30) = 0;
  *puStackX_8 = &unknown_var_3456_ptr;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  *(uint64_t *)(lVar3 + 0x28) = 0;
  *(int32_t *)(lVar3 + 0x30) = 0;
  *(int32_t *)(lVar3 + 0x30) = *(int32_t *)(param_3 + 0x10);
  *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_3 + 8);
  *(int32_t *)(lVar3 + 0x3c) = *(int32_t *)(param_3 + 0x1c);
  *(int32_t *)(lVar3 + 0x38) = *(int32_t *)(param_3 + 0x18);
  *(int32_t *)(param_3 + 0x10) = 0;
  *(uint64_t *)(param_3 + 8) = 0;
  *(uint64_t *)(param_3 + 0x18) = 0;
  *(int32_t *)(lVar3 + 0x40) = *(int32_t *)(param_3 + 0x20);
  puStackX_10 = puStackX_8;
  lVar4 = FUN_1800590b0(param_1,&puStackX_8,puStackX_8);
  if ((char)puStackX_8 == '\0') {
    FUN_18008ea80();
    *param_2 = lVar4;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar4 == param_1) goto LAB_18039dccd;
  if (*(int *)(lVar4 + 0x30) != 0) {
    if (*(int *)(lVar3 + 0x30) == 0) goto LAB_18039dccd;
    pbVar5 = *(byte **)(lVar4 + 0x28);
    lVar6 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar5;
    do {
      bVar1 = *pbVar5;
      uVar2 = (uint)pbVar5[lVar6];
      if (bVar1 != uVar2) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar2 != 0);
    if (0 < (int)(bVar1 - uVar2)) goto LAB_18039dccd;
  }
  uVar7 = 1;
LAB_18039dccd:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,lVar4,param_1,uVar7);
}



uint64_t *
FUN_18039dd20(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x16;
  strcpy_s(param_2[1],0x80,&unknown_var_7304_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_18039dda0(uint64_t *param_1)

{
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &unknown_var_7336_ptr;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 3;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(uint64_t *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0xb4) = 0;
  *(uint64_t *)((longlong)param_1 + 0xbc) = 0x3f80000000000000;
  *(uint64_t *)((longlong)param_1 + 0xc4) = 0;
  *(uint64_t *)((longlong)param_1 + 0xcc) = 0;
  *(uint64_t *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0xdc) = 0;
  *(uint64_t *)((longlong)param_1 + 0xe4) = 0x3f80000000000000;
  *(int32_t *)(param_1 + 1) = 0;
  *(int32_t *)((longlong)param_1 + 0xa4) = 0x21;
  *(int16_t *)((longlong)param_1 + 0xa9) = 1;
  return param_1;
}



uint64_t * FUN_18039dea0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  uint64_t uVar7;
  ulonglong uVar5;
  
  uVar7 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7336_ptr;
  uVar5 = 0;
  plVar1 = param_1 + 6;
  lVar3 = *plVar1;
  uVar6 = uVar5;
  if (param_1[7] - lVar3 >> 3 != 0) {
    do {
      plVar2 = *(longlong **)(uVar6 + lVar3);
      *(uint64_t *)(uVar6 + lVar3) = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar3 = *plVar1;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[7] - lVar3 >> 3));
  }
  FUN_180057830();
  FUN_180057830(plVar1);
  *param_1 = &unknown_var_768_ptr;
  param_1[5] = 0;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0,param_3,param_4,uVar7);
  }
  return param_1;
}



longlong FUN_18039dfa0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x38) - lVar1 >> 3 != 0) {
    lVar3 = 0;
    do {
      lVar1 = (**(code **)(**(longlong **)(lVar3 + lVar1) + 0x178))();
      if (lVar1 != 0) {
        return lVar1;
      }
      lVar1 = *(longlong *)(param_1 + 0x30);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar1 >> 3));
  }
  return 0;
}





// 函数: void FUN_18039e020(longlong param_1,char param_2)
void FUN_18039e020(longlong param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0x38) - lVar5 >> 3 != 0) {
    do {
      cVar1 = param_2;
      if (param_2 == '\0') {
        cVar1 = '\0';
      }
      (**(code **)(**(longlong **)(uVar2 + lVar5) + 0xd0))(*(longlong **)(uVar2 + lVar5),cVar1);
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar5 >> 3));
  }
  return;
}





// 函数: void FUN_18039e04b(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_18039e04b(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  char unaff_SIL;
  uint unaff_EDI;
  
  uVar2 = (ulonglong)unaff_EDI;
  do {
    cVar1 = unaff_SIL;
    if (unaff_SIL == '\0') {
      cVar1 = '\0';
    }
    (**(code **)(**(longlong **)(uVar2 + param_3) + 0xd0))(*(longlong **)(uVar2 + param_3),cVar1);
    param_3 = *(longlong *)(unaff_RBP + 0x30);
    unaff_EDI = unaff_EDI + 1;
    uVar2 = uVar2 + 8;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBP + 0x38) - param_3 >> 3));
  return;
}





// 函数: void FUN_18039e08e(void)
void FUN_18039e08e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18039e0a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plStackX_8;
  longlong *plStackX_10;
  
  uVar9 = 0;
  plStackX_10 = param_2;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3,0,0xfffffffffffffffe);
  plVar6 = (longlong *)FUN_18039dda0(uVar5);
  *param_2 = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  lVar1 = *param_2;
  uVar5 = *(uint64_t *)(param_1 + 0xb4);
  *(uint64_t *)(lVar1 + 0xac) = *(uint64_t *)(param_1 + 0xac);
  *(uint64_t *)(lVar1 + 0xb4) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0xc4);
  *(uint64_t *)(lVar1 + 0xbc) = *(uint64_t *)(param_1 + 0xbc);
  *(uint64_t *)(lVar1 + 0xc4) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0xd4);
  *(uint64_t *)(lVar1 + 0xcc) = *(uint64_t *)(param_1 + 0xcc);
  *(uint64_t *)(lVar1 + 0xd4) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0xe4);
  *(uint64_t *)(lVar1 + 0xdc) = *(uint64_t *)(param_1 + 0xdc);
  *(uint64_t *)(lVar1 + 0xe4) = uVar5;
  *(int8_t *)(lVar1 + 0xa8) = *(int8_t *)(param_1 + 0xa8);
  uVar5 = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(lVar1 + 0x70) = *(uint64_t *)(param_1 + 0x70);
  *(uint64_t *)(lVar1 + 0x78) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x88);
  *(uint64_t *)(lVar1 + 0x80) = *(uint64_t *)(param_1 + 0x80);
  *(uint64_t *)(lVar1 + 0x88) = uVar5;
  uVar2 = *(int32_t *)(param_1 + 0x94);
  uVar3 = *(int32_t *)(param_1 + 0x98);
  uVar4 = *(int32_t *)(param_1 + 0x9c);
  *(int32_t *)(lVar1 + 0x90) = *(int32_t *)(param_1 + 0x90);
  *(int32_t *)(lVar1 + 0x94) = uVar2;
  *(int32_t *)(lVar1 + 0x98) = uVar3;
  *(int32_t *)(lVar1 + 0x9c) = uVar4;
  *(int32_t *)(lVar1 + 0xa0) = *(int32_t *)(param_1 + 0xa0);
  *(int32_t *)(lVar1 + 0xa4) = *(int32_t *)(param_1 + 0xa4);
  *(int8_t *)(lVar1 + 0xaa) = *(int8_t *)(param_1 + 0xaa);
  lVar7 = *(longlong *)(param_1 + 0x30);
  uVar10 = uVar9;
  if (*(longlong *)(param_1 + 0x38) - lVar7 >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar10 + lVar7) + 0xa8))
                (*(longlong **)(uVar10 + lVar7),&plStackX_8);
      FUN_18039f160(lVar1,plStackX_8);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      lVar7 = *(longlong *)(param_1 + 0x30);
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar7 >> 3));
  }
  return param_2;
}





// 函数: void FUN_18039e220(longlong param_1)
void FUN_18039e220(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar1 + *(longlong *)(param_1 + 0x30)) + 0x140))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039e240(void)
void FUN_18039e240(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0x30)) + 0x140))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039e280(void)
void FUN_18039e280(void)

{
  return;
}



ulonglong FUN_18039e290(longlong param_1,uint *param_2,uint64_t param_3,uint64_t *param_4,
                       uint64_t param_5)

{
  float fVar1;
  void *puVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  if ((*(char *)(param_1 + 0xa9) != '\0') &&
     (in_RAX = (ulonglong)*(uint *)(param_1 + 0xa4), (*param_2 & *(uint *)(param_1 + 0xa4)) != 0)) {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      FUN_180285cf0(&uStack_78,param_4,param_1 + 0xac);
    }
    else {
      uStack_78 = *param_4;
      uStack_70 = param_4[1];
      uStack_68 = param_4[2];
      uStack_60 = param_4[3];
      uStack_58 = *(int32_t *)(param_4 + 4);
      uStack_54 = *(int32_t *)((longlong)param_4 + 0x24);
      uStack_50 = *(int32_t *)(param_4 + 5);
      uStack_4c = *(int32_t *)((longlong)param_4 + 0x2c);
      uStack_48 = param_4[6];
      uStack_40 = param_4[7];
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    iVar6 = 0;
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar5 >> 3;
    if (uVar3 != 0) {
      lVar7 = 0;
      do {
        fVar1 = (float)param_2[0x5d];
        puVar2 = (void *)**(uint64_t **)(lVar7 + lVar5);
        if (puVar2 == &unknown_var_9656_ptr) {
          puVar4 = *(uint64_t **)(lVar7 + lVar5) + 10;
        }
        else {
          puVar4 = (uint64_t *)(**(code **)(puVar2 + 0x198))();
          lVar5 = *(longlong *)(param_1 + 0x30);
        }
        if ((fVar1 <= 0.0) ||
           (fVar8 = (float)func_0x000180285a90(&uStack_78,*(int32_t *)(puVar4 + 6)),
           fVar1 <= fVar8)) {
          (**(code **)(**(longlong **)(lVar7 + lVar5) + 0x1c8))
                    (*(longlong **)(lVar7 + lVar5),param_2,
                     *(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x20),&uStack_78,param_5);
        }
        lVar5 = *(longlong *)(param_1 + 0x30);
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
        uVar3 = (ulonglong)iVar6;
      } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar5 >> 3));
    }
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t
FUN_18039e2c2(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
             uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
             uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
             uint64_t param_13,int32_t param_14,int32_t param_15,int32_t param_16,
             int32_t param_17)

{
  float fVar1;
  void *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int iVar6;
  longlong lVar7;
  bool in_ZF;
  float fVar8;
  
  if (in_ZF) {
    FUN_180285cf0(&param_6,param_4,param_1 + 0xac);
  }
  else {
    param_6 = *param_4;
    param_7 = param_4[1];
    param_8 = param_4[2];
    param_9 = param_4[3];
    param_10._0_4_ = *(int32_t *)(param_4 + 4);
    param_10._4_4_ = *(int32_t *)((longlong)param_4 + 0x24);
    param_11._0_4_ = *(int32_t *)(param_4 + 5);
    param_11._4_4_ = *(int32_t *)((longlong)param_4 + 0x2c);
    param_12 = param_4[6];
    param_13 = param_4[7];
  }
  lVar5 = *(longlong *)(unaff_RBX + 0x30);
  iVar6 = 0;
  uVar3 = *(longlong *)(unaff_RBX + 0x38) - lVar5 >> 3;
  if (uVar3 != 0) {
    lVar7 = 0;
    do {
      fVar1 = *(float *)(unaff_RBP + 0x174);
      puVar2 = (void *)**(uint64_t **)(lVar7 + lVar5);
      if (puVar2 == &unknown_var_9656_ptr) {
        puVar4 = *(uint64_t **)(lVar7 + lVar5) + 10;
      }
      else {
        puVar4 = (uint64_t *)(**(code **)(puVar2 + 0x198))();
        lVar5 = *(longlong *)(unaff_RBX + 0x30);
      }
      if ((fVar1 <= 0.0) ||
         (fVar8 = (float)func_0x000180285a90(&param_6,*(int32_t *)(puVar4 + 6)), fVar1 <= fVar8))
      {
        (**(code **)(**(longlong **)(lVar7 + lVar5) + 0x1c8))();
      }
      lVar5 = *(longlong *)(unaff_RBX + 0x30);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      uVar3 = (ulonglong)iVar6;
    } while (uVar3 < (ulonglong)(*(longlong *)(unaff_RBX + 0x38) - lVar5 >> 3));
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



uint64_t FUN_18039e323(uint64_t param_1,longlong param_2)

{
  float fVar1;
  void *puVar2;
  uint64_t *puVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar4;
  float fVar5;
  
  uVar4 = (ulonglong)unaff_ESI;
  do {
    fVar1 = *(float *)(unaff_RBP + 0x174);
    puVar2 = (void *)**(uint64_t **)(uVar4 + param_2);
    if (puVar2 == &unknown_var_9656_ptr) {
      puVar3 = *(uint64_t **)(uVar4 + param_2) + 10;
    }
    else {
      puVar3 = (uint64_t *)(**(code **)(puVar2 + 0x198))();
      param_2 = *(longlong *)(unaff_RBX + 0x30);
    }
    if (fVar1 <= 0.0) {
LAB_18039e395:
      (**(code **)(**(longlong **)(uVar4 + param_2) + 0x1c8))();
    }
    else {
      fVar5 = (float)func_0x000180285a90(&stack0x00000030,*(int32_t *)(puVar3 + 6));
      if (fVar1 <= fVar5) goto LAB_18039e395;
    }
    param_2 = *(longlong *)(unaff_RBX + 0x30);
    unaff_ESI = unaff_ESI + 1;
    uVar4 = uVar4 + 8;
    if ((ulonglong)(*(longlong *)(unaff_RBX + 0x38) - param_2 >> 3) <=
        (ulonglong)(longlong)(int)unaff_ESI) {
      return CONCAT71((int7)(int3)(unaff_ESI >> 8),1);
    }
  } while( true );
}



int8_t FUN_18039e3f9(void)

{
  return 1;
}



int8_t FUN_18039e40d(void)

{
  return 0;
}



uint64_t FUN_18039e419(void)

{
  longlong in_RAX;
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R15;
  float fVar3;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
code_r0x00018039e419:
  plVar1 = (longlong *)(**(code **)(in_RAX + 0x198))();
  lVar2 = *(longlong *)(unaff_RBX + 0x30);
  do {
    if (unaff_XMM6_Da <= unaff_XMM7_Da) {
LAB_18039e395:
      (**(code **)(**(longlong **)(unaff_RDI + lVar2) + 0x1c8))();
    }
    else {
      fVar3 = (float)func_0x000180285a90(&stack0x00000030,(int)plVar1[6]);
      if (unaff_XMM6_Da <= fVar3) goto LAB_18039e395;
    }
    lVar2 = *(longlong *)(unaff_RBX + 0x30);
    unaff_ESI = unaff_ESI + 1;
    unaff_RDI = unaff_RDI + 8;
    if ((ulonglong)(*(longlong *)(unaff_RBX + 0x38) - lVar2 >> 3) <= (ulonglong)(longlong)unaff_ESI)
    {
      return CONCAT71((int7)(int3)((uint)unaff_ESI >> 8),1);
    }
    unaff_XMM6_Da = *(float *)(unaff_RBP + 0x174);
    in_RAX = **(longlong **)(unaff_RDI + lVar2);
    if (in_RAX != unaff_R15) goto code_r0x00018039e419;
    plVar1 = *(longlong **)(unaff_RDI + lVar2) + 10;
  } while( true );
}



ulonglong FUN_18039e430(longlong param_1,uint64_t param_2,int32_t param_3,uint64_t *param_4)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if (*(char *)(param_1 + 0xa9) != '\0') {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      FUN_180285cf0(&uStack_48,param_4,param_1 + 0xac);
    }
    else {
      uStack_48 = *param_4;
      uStack_40 = param_4[1];
      uStack_38 = param_4[2];
      uStack_30 = param_4[3];
      uStack_28 = *(int32_t *)(param_4 + 4);
      uStack_24 = *(int32_t *)((longlong)param_4 + 0x24);
      uStack_20 = *(int32_t *)(param_4 + 5);
      uStack_1c = *(int32_t *)((longlong)param_4 + 0x2c);
      uStack_18 = param_4[6];
      uStack_10 = param_4[7];
    }
    uVar3 = 0;
    uVar2 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3;
    uVar5 = uVar3;
    if (uVar2 != 0) {
      do {
        plVar1 = *(longlong **)(uVar3 + *(longlong *)(param_1 + 0x30));
        (**(code **)(*plVar1 + 0x1d0))(plVar1,param_2,param_3,&uStack_48);
        uVar3 = uVar3 + 8;
        uVar4 = (int)uVar5 + 1;
        uVar2 = (ulonglong)(int)uVar4;
        uVar5 = (ulonglong)uVar4;
      } while (uVar2 < (ulonglong)
                       (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t FUN_18039e4c5(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0x30)) + 0x1d0))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x30) >> 3));
  return CONCAT71((int7)(int3)(unaff_EDI >> 8),1);
}



int8_t FUN_18039e50b(void)

{
  return 1;
}



ulonglong FUN_18039e530(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 3);
  if (plVar1 == (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    iVar5 = 0;
    uVar2 = *(longlong *)(param_1 + 0x38) - lVar4 >> 3;
    if (uVar2 != 0) {
      lVar6 = 0;
      do {
        if ((void *)**(uint64_t **)(lVar6 + lVar4) == &unknown_var_9656_ptr) {
          plVar1 = (longlong *)&unknown_var_9656_ptr;
          goto LAB_18039e5cb;
        }
        plVar1 = (longlong *)(**(code **)((void *)**(uint64_t **)(lVar6 + lVar4) + 0x98))();
        if ((int)plVar1 != 0) goto LAB_18039e5cb;
        iVar3 = 0;
        lVar4 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x30));
        plVar1 = *(longlong **)(lVar4 + 0x38);
        uVar2 = *(longlong *)(lVar4 + 0x40) - (longlong)plVar1 >> 4;
        if (uVar2 != 0) {
          do {
            if (*(char *)(*plVar1 + 0xf7) != '\0') goto LAB_18039e5cb;
            iVar3 = iVar3 + 1;
            plVar1 = plVar1 + 2;
          } while ((ulonglong)(longlong)iVar3 < uVar2);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
        uVar2 = (ulonglong)iVar5;
      } while (uVar2 < (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar4 >> 3));
    }
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
LAB_18039e5cb:
    uVar2 = (ulonglong)plVar1 & 0xffffffffffffff00;
  }
  return uVar2;
}





// 函数: void FUN_18039e610(longlong param_1,uint64_t param_2)
void FUN_18039e610(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x108))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039e660(longlong param_1,int32_t param_2)
void FUN_18039e660(longlong param_1,int32_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x110))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039e6b0(longlong param_1,int32_t param_2)
void FUN_18039e6b0(longlong param_1,int32_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x120))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039e700(longlong param_1,uint64_t param_2)
void FUN_18039e700(longlong param_1,uint64_t param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar4 = 0;
  uVar6 = uVar4;
  if (*(longlong *)(param_1 + 0x38) - lVar3 >> 3 != 0) {
    do {
      if ((void *)**(uint64_t **)(uVar4 + lVar3) == &unknown_var_9656_ptr) {
LAB_18039e74d:
        if ((void *)**(uint64_t **)(uVar4 + lVar3) != &unknown_var_9656_ptr) {
          iVar1 = (**(code **)((void *)**(uint64_t **)(uVar4 + lVar3) + 0x98))();
          if (iVar1 == 7) {
            plVar2 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0x30));
            goto LAB_18039e75b;
          }
        }
      }
      else {
        iVar1 = (**(code **)((void *)**(uint64_t **)(uVar4 + lVar3) + 0x98))();
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (iVar1 != 0) goto LAB_18039e74d;
        plVar2 = *(longlong **)(uVar4 + lVar3);
LAB_18039e75b:
        (**(code **)(*plVar2 + 400))(plVar2,param_2);
      }
      lVar3 = *(longlong *)(param_1 + 0x30);
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar3 >> 3));
  }
  return;
}





// 函数: void FUN_18039e72b(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_18039e72b(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  uVar3 = (ulonglong)unaff_ESI;
  do {
    if ((void *)**(uint64_t **)(uVar3 + param_3) == &unknown_var_9656_ptr) {
LAB_18039e74d:
      if ((void *)**(uint64_t **)(uVar3 + param_3) != &unknown_var_9656_ptr) {
        iVar1 = (**(code **)((void *)**(uint64_t **)(uVar3 + param_3) + 0x98))();
        if (iVar1 == 7) {
          plVar2 = *(longlong **)(uVar3 + *(longlong *)(unaff_RDI + 0x30));
          goto LAB_18039e75b;
        }
      }
    }
    else {
      iVar1 = (**(code **)((void *)**(uint64_t **)(uVar3 + param_3) + 0x98))();
      param_3 = *(longlong *)(unaff_RDI + 0x30);
      if (iVar1 != 0) goto LAB_18039e74d;
      plVar2 = *(longlong **)(uVar3 + param_3);
LAB_18039e75b:
      (**(code **)(*plVar2 + 400))();
    }
    param_3 = *(longlong *)(unaff_RDI + 0x30);
    unaff_ESI = unaff_ESI + 1;
    uVar3 = uVar3 + 8;
    if ((ulonglong)(*(longlong *)(unaff_RDI + 0x38) - param_3 >> 3) <=
        (ulonglong)(longlong)(int)unaff_ESI) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18039e791(void)
void FUN_18039e791(void)

{
  return;
}





// 函数: void FUN_18039e7a1(void)
void FUN_18039e7a1(void)

{
  int iVar1;
  longlong in_RAX;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
code_r0x00018039e7a1:
  iVar1 = (**(code **)(in_RAX + 0x98))();
  lVar3 = *(longlong *)(unaff_RDI + 0x30);
  if (iVar1 != 0) goto LAB_18039e74d;
  plVar2 = *(longlong **)(unaff_RBX + lVar3);
  do {
    (**(code **)(*plVar2 + 400))();
    do {
      do {
        lVar3 = *(longlong *)(unaff_RDI + 0x30);
        unaff_ESI = unaff_ESI + 1;
        unaff_RBX = unaff_RBX + 8;
        if ((ulonglong)(*(longlong *)(unaff_RDI + 0x38) - lVar3 >> 3) <=
            (ulonglong)(longlong)unaff_ESI) {
          return;
        }
        in_RAX = **(longlong **)(unaff_RBX + lVar3);
        if (in_RAX != unaff_R14) goto code_r0x00018039e7a1;
LAB_18039e74d:
      } while (**(longlong **)(unaff_RBX + lVar3) == unaff_R14);
      iVar1 = (**(code **)(**(longlong **)(unaff_RBX + lVar3) + 0x98))();
    } while (iVar1 != 7);
    plVar2 = *(longlong **)(unaff_RBX + *(longlong *)(unaff_RDI + 0x30));
  } while( true );
}





// 函数: void FUN_18039e7d0(longlong param_1,uint64_t param_2)
void FUN_18039e7d0(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0xf8))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039e820(longlong param_1,uint64_t param_2)
void FUN_18039e820(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x118))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039e880(longlong param_1,int32_t *param_2)
void FUN_18039e880(longlong param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  int32_t auStackX_8 [2];
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  *(int32_t *)(param_1 + 0xa4) = *param_2;
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      auStackX_8[0] = *(int32_t *)(param_1 + 0xa4);
      (**(code **)(*(longlong *)*puVar1 + 0x128))((longlong *)*puVar1,auStackX_8);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039e8f0(longlong param_1)
void FUN_18039e8f0(longlong param_1)

{
  char cVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  *(int32_t *)(param_1 + 0xa0) = 0;
  if ((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) & 0xfffffffffffffff8U) != 0) {
    *(uint64_t *)(param_1 + 0x70) = 0x4cbebc204cbebc20;
    *(uint64_t *)(param_1 + 0x78) = 0x7f7fffff4cbebc20;
    *(int32_t *)(param_1 + 0x90) = 0;
    *(int32_t *)(param_1 + 0x94) = 0;
    *(int32_t *)(param_1 + 0x98) = 0;
    *(int32_t *)(param_1 + 0x9c) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0x80) = 0xccbebc20ccbebc20;
    *(uint64_t *)(param_1 + 0x88) = 0x7f7fffffccbebc20;
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar7 = uVar6;
    if (*(longlong *)(param_1 + 0x38) - lVar4 >> 3 != 0) {
      do {
        cVar1 = (**(code **)(**(longlong **)(uVar7 + lVar4) + 0xc0))();
        if (cVar1 == '\0') {
          uVar2 = (**(code **)(**(longlong **)(uVar7 + *(longlong *)(param_1 + 0x30)) + 0x158))();
          uVar3 = (**(code **)(**(longlong **)(uVar7 + *(longlong *)(param_1 + 0x30)) + 0x198))();
          FUN_18063a240(param_1 + 0x70,uVar3,uVar2);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 8;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar4 >> 3));
    }
    return;
  }
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  return;
}





