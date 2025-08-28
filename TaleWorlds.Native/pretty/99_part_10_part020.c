#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part020.c - 24 个函数

// 函数: void FUN_1806b0f90(int64_t *param_1,uint param_2,uint64_t *param_3)
void FUN_1806b0f90(int64_t *param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806b0140();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*param_1 + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)(*param_1 + (uint64_t)*(uint *)(param_1 + 1) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






// 函数: void FUN_1806b1070(int64_t *param_1,uint param_2,uint64_t *param_3)
void FUN_1806b1070(int64_t *param_1,uint param_2,uint64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806b0200(param_1,(uint64_t)param_2);
  }
  lVar1 = *param_1;
  for (puVar3 = (uint64_t *)((uint64_t)*(uint *)(param_1 + 1) * 0x10 + *param_1);
      puVar3 < (uint64_t *)((uint64_t)param_2 * 0x10 + lVar1); puVar3 = puVar3 + 2) {
    uVar2 = param_3[1];
    *puVar3 = *param_3;
    puVar3[1] = uVar2;
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






// 函数: void FUN_1806b10f0(int64_t *param_1,uint param_2,int64_t param_3)
void FUN_1806b10f0(int64_t *param_1,uint param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806b0310(param_1,(uint64_t)param_2);
  }
  lVar5 = *param_1;
  uVar2 = (uint64_t)*(uint *)(param_1 + 1);
  lVar6 = (uint64_t)param_2 * 0x78;
  puVar3 = (uint64_t *)(lVar5 + lVar6);
  puVar4 = (uint64_t *)(uVar2 * 0x78 + lVar5);
  if (puVar4 < puVar3) {
    do {
      *puVar4 = &unknown_var_3704_ptr;
      uVar1 = *(uint64_t *)(param_3 + 0x10);
      puVar4[1] = *(uint64_t *)(param_3 + 8);
      puVar4[2] = uVar1;
      *(int32_t *)(puVar4 + 3) = *(int32_t *)(param_3 + 0x18);
      puVar4[4] = *(uint64_t *)(param_3 + 0x20);
      puVar4[5] = *(uint64_t *)(param_3 + 0x28);
      *(int32_t *)(puVar4 + 6) = *(int32_t *)(param_3 + 0x30);
      uVar1 = *(uint64_t *)(param_3 + 0x40);
      puVar4[7] = *(uint64_t *)(param_3 + 0x38);
      puVar4[8] = uVar1;
      *(int32_t *)(puVar4 + 9) = *(int32_t *)(param_3 + 0x48);
      *(int32_t *)((int64_t)puVar4 + 0x4c) = *(int32_t *)(param_3 + 0x4c);
      *(int32_t *)(puVar4 + 10) = *(int32_t *)(param_3 + 0x50);
      *(int32_t *)((int64_t)puVar4 + 0x54) = *(int32_t *)(param_3 + 0x54);
      uVar1 = *(uint64_t *)(param_3 + 0x60);
      puVar4[0xb] = *(uint64_t *)(param_3 + 0x58);
      puVar4[0xc] = uVar1;
      *(int32_t *)(puVar4 + 0xd) = *(int32_t *)(param_3 + 0x68);
      *(int32_t *)((int64_t)puVar4 + 0x6c) = *(int32_t *)(param_3 + 0x6c);
      *(int32_t *)(puVar4 + 0xe) = *(int32_t *)(param_3 + 0x70);
      *(int32_t *)((int64_t)puVar4 + 0x74) = *(int32_t *)(param_3 + 0x74);
      puVar4 = puVar4 + 0xf;
    } while (puVar4 < puVar3);
    uVar2 = (uint64_t)*(uint *)(param_1 + 1);
    lVar5 = *param_1;
  }
  for (puVar3 = (uint64_t *)(lVar6 + lVar5); puVar3 < (uint64_t *)(uVar2 * 0x78 + lVar5);
      puVar3 = puVar3 + 0xf) {
    *puVar3 = &unknown_var_3704_ptr;
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






// 函数: void FUN_1806b11f0(int64_t *param_1,uint param_2,uint64_t *param_3)
void FUN_1806b11f0(int64_t *param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806b03d0();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*param_1 + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)(*param_1 + (uint64_t)*(uint *)(param_1 + 1) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






// 函数: void FUN_1806b12d0(int64_t param_1,int64_t *param_2,uint param_3)
void FUN_1806b12d0(int64_t param_1,int64_t *param_2,uint param_3)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  void *puStack_18;
  int32_t uStack_10;
  
  if (((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x90))) &&
     (lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + (uint64_t)param_3 * 8), lVar6 != 0)) {
    uVar7 = 0;
    plVar1 = (int64_t *)(lVar6 + 0x58);
    puStack_18 = &system_buffer_ptr;
    uStack_10 = 0;
    FUN_1806b1070(plVar1,param_2[1] - *param_2 >> 4,&puStack_18);
    lVar6 = *param_2;
    if ((int)(param_2[1] - lVar6 >> 4) != 0) {
      do {
        uVar5 = (uint64_t)uVar7;
        uVar7 = uVar7 + 1;
        puVar2 = (uint64_t *)(lVar6 + uVar5 * 0x10);
        uVar4 = puVar2[1];
        puVar3 = (uint64_t *)(*plVar1 + uVar5 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        lVar6 = *param_2;
      } while (uVar7 < (uint)(param_2[1] - lVar6 >> 4));
    }
  }
  return;
}






// 函数: void FUN_1806b1318(int64_t param_1,int64_t param_2)
void FUN_1806b1318(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *unaff_RDI;
  int32_t uStack0000000000000028;
  
  uVar6 = 0;
  uStack0000000000000028 = 0;
  FUN_1806b1070((int64_t *)(param_1 + 0x58),param_2 >> 4);
  lVar5 = *unaff_RDI;
  if ((int)(unaff_RDI[1] - lVar5 >> 4) != 0) {
    do {
      uVar4 = (uint64_t)uVar6;
      uVar6 = uVar6 + 1;
      puVar1 = (uint64_t *)(lVar5 + uVar4 * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (uint64_t *)(*(int64_t *)(param_1 + 0x58) + uVar4 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar5 = *unaff_RDI;
    } while (uVar6 < (uint)(unaff_RDI[1] - lVar5 >> 4));
  }
  return;
}






// 函数: void FUN_1806b137e(void)
void FUN_1806b137e(void)

{
  return;
}



int * FUN_1806b1390(int64_t param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  int8_t auStackX_18 [16];
  
  pbVar5 = &system_buffer_ptr;
  if (param_3 != (byte *)0x0) {
    pbVar5 = param_3;
  }
  if ((char)*pbVar5 < '\x01') {
    *param_2 = 0;
    return param_2;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar8 = 0x1505;
    bVar1 = *param_3;
    pbVar5 = param_3;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      uVar8 = uVar8 * 0x21 ^ (uint)bVar1;
      bVar1 = *pbVar5;
    }
    uVar8 = *(uint *)(*(int64_t *)(param_1 + 0x98) +
                     (uint64_t)(*(int *)(param_1 + 0xa4) - 1U & uVar8) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pcVar6 = *(char **)(*(int64_t *)(param_1 + 0x88) + (uint64_t)uVar8 * 0x10);
        lVar9 = (int64_t)param_3 - (int64_t)pcVar6;
        do {
          cVar2 = *pcVar6;
          cVar3 = pcVar6[lVar9];
          if (cVar2 != cVar3) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          if ((uVar8 != 0xffffffff) &&
             (lVar9 = (uint64_t)uVar8 * 0x10 + *(int64_t *)(param_1 + 0x88), lVar9 != 0)) {
            *param_2 = *(int *)(lVar9 + 8);
            return param_2;
          }
          break;
        }
        uVar8 = *(uint *)(*(int64_t *)(param_1 + 0x90) + (uint64_t)uVar8 * 4);
      } while (uVar8 != 0xffffffff);
    }
  }
  uVar7 = FUN_1806ac2c0(param_1,param_3,auStackX_18);
  iVar4 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar4 + 1;
  FUN_1806aa710(param_1,uVar7,iVar4);
  *param_2 = iVar4;
  return param_2;
}






// 函数: void FUN_1806b13d1(uint64_t param_1,uint64_t param_2,byte *param_3)
void FUN_1806b13d1(uint64_t param_1,uint64_t param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar8;
  byte *in_R11;
  bool in_ZF;
  
  if (!in_ZF) {
    uVar7 = 0x1505;
    bVar2 = *param_3;
    pbVar1 = in_R11;
    while (bVar2 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar7 = uVar7 * 0x21 ^ (uint)bVar2;
      bVar2 = *pbVar1;
    }
    uVar7 = *(uint *)(*(int64_t *)(unaff_RDI + 0x98) +
                     (uint64_t)(*(int *)(unaff_RDI + 0xa4) - 1U & uVar7) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pcVar6 = *(char **)(*(int64_t *)(unaff_RDI + 0x88) + (uint64_t)uVar7 * 0x10);
        lVar8 = (int64_t)in_R11 - (int64_t)pcVar6;
        do {
          cVar3 = *pcVar6;
          cVar4 = pcVar6[lVar8];
          if (cVar3 != cVar4) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar4 != '\0');
        if (cVar3 == cVar4) {
          if ((uVar7 != 0xffffffff) &&
             (lVar8 = (uint64_t)uVar7 * 0x10 + *(int64_t *)(unaff_RDI + 0x88), lVar8 != 0)) {
            *unaff_RSI = *(int *)(lVar8 + 8);
            return;
          }
          break;
        }
        uVar7 = *(uint *)(*(int64_t *)(unaff_RDI + 0x90) + (uint64_t)uVar7 * 4);
      } while (uVar7 != 0xffffffff);
    }
  }
  FUN_1806ac2c0();
  iVar5 = *(int *)(unaff_RDI + 0x40);
  *(int *)(unaff_RDI + 0x40) = iVar5 + 1;
  FUN_1806aa710();
  *unaff_RSI = iVar5;
  return;
}






// 函数: void FUN_1806b14a7(void)
void FUN_1806b14a7(void)

{
  int iVar1;
  int64_t unaff_RBX;
  int *unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R9;
  int64_t lVar2;
  int in_R10D;
  
  if ((in_R10D != -1) && (lVar2 = in_R9 * 0x10 + unaff_RBX, lVar2 != 0)) {
    *unaff_RSI = *(int *)(lVar2 + 8);
    return;
  }
  FUN_1806ac2c0();
  iVar1 = *(int *)(unaff_RDI + 0x40);
  *(int *)(unaff_RDI + 0x40) = iVar1 + 1;
  FUN_1806aa710();
  *unaff_RSI = iVar1;
  return;
}






// 函数: void FUN_1806b14d0(int64_t *param_1,uint64_t *param_2)
void FUN_1806b14d0(int64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_1[1] + 8))((int64_t *)param_1[1],auStackX_10,auStackX_8);
  uVar1 = (**(code **)(**(int64_t **)(*param_1 + 0x98) + 0x28))
                    (*(int64_t **)(*param_1 + 0x98),auStackX_10[0]);
  auStackX_8[0] = 4;
  *param_2 = uVar1;
  (**(code **)(*(int64_t *)param_1[1] + 8))((int64_t *)param_1[1],auStackX_10,auStackX_8);
  uVar1 = (**(code **)(**(int64_t **)(*param_1 + 0x98) + 0x28))
                    (*(int64_t **)(*param_1 + 0x98),auStackX_10[0]);
  param_2[1] = uVar1;
  return;
}






// 函数: void FUN_1806b1560(int64_t *param_1,uint64_t *param_2)
void FUN_1806b1560(int64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStackX_8 [8];
  
  uVar1 = (**(code **)(**(int64_t **)(*param_1 + 0x98) + 0x20))
                    (*(int64_t **)(*param_1 + 0x98),auStackX_8,*param_2);
  (**(code **)(*(int64_t *)param_1[1] + 8))((int64_t *)param_1[1],uVar1,4);
  uVar1 = (**(code **)(**(int64_t **)(*param_1 + 0x98) + 0x20))
                    (*(int64_t **)(*param_1 + 0x98),auStackX_8,param_2[1]);
  (**(code **)(*(int64_t *)param_1[1] + 8))((int64_t *)param_1[1],uVar1,4);
  return;
}






// 函数: void FUN_1806b15e0(uint64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
void FUN_1806b15e0(uint64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
                  int param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t uStackX_10;
  int iStackX_14;
  
  uVar4 = 0;
  uVar2 = (uint64_t)*(uint *)(param_3 + 1);
  if ((int)param_4[1] != 0) {
    do {
      uStackX_10 = *(int32_t *)(*param_4 + uVar4 * 8);
      iStackX_14 = *(int *)(*param_4 + 4 + uVar4 * 8) + param_5;
      if ((uint)uVar2 < (*(uint *)((int64_t)param_3 + 0xc) & 0x7fffffff)) {
        *(uint64_t *)(*param_3 + uVar2 * 8) = CONCAT44(iStackX_14,uStackX_10);
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      else {
        FUN_1806ae480(param_3,&uStackX_10);
      }
      uVar2 = (uint64_t)*(uint *)(param_3 + 1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while (uVar3 < *(uint *)(param_4 + 1));
  }
  lVar1 = *param_3;
  *(int64_t *)(param_2 + 0x10) = lVar1;
  *(uint64_t *)(param_2 + 0x18) = lVar1 + uVar2 * 8;
  return;
}






// 函数: void FUN_1806b1601(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806b1601(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint uVar2;
  uint64_t unaff_RDI;
  int32_t uStack0000000000000048;
  int iStack000000000000004c;
  int in_stack_00000060;
  
  do {
    uStack0000000000000048 = *(int32_t *)(*unaff_RSI + unaff_RDI * 8);
    iStack000000000000004c = *(int *)(*unaff_RSI + 4 + unaff_RDI * 8) + in_stack_00000060;
    if ((uint)param_3 < (*(uint *)((int64_t)unaff_RBX + 0xc) & 0x7fffffff)) {
      *(uint64_t *)(*unaff_RBX + param_3 * 8) =
           CONCAT44(iStack000000000000004c,uStack0000000000000048);
      *(int *)(unaff_RBX + 1) = (int)unaff_RBX[1] + 1;
    }
    else {
      FUN_1806ae480();
    }
    param_3 = (uint64_t)*(uint *)(unaff_RBX + 1);
    uVar2 = (int)unaff_RDI + 1;
    unaff_RDI = (uint64_t)uVar2;
  } while (uVar2 < *(uint *)(unaff_RSI + 1));
  lVar1 = *unaff_RBX;
  *(int64_t *)(unaff_RBP + 0x10) = lVar1;
  *(uint64_t *)(unaff_RBP + 0x18) = lVar1 + param_3 * 8;
  return;
}






// 函数: void FUN_1806b1668(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1806b1668(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  
  lVar1 = *unaff_RBX;
  *(int64_t *)(unaff_RBP + 0x10) = lVar1;
  *(int64_t *)(unaff_RBP + 0x18) = lVar1 + param_3 * 8;
  return;
}






// 函数: void FUN_1806b1690(int64_t param_1,int64_t *param_2)
void FUN_1806b1690(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint auStackX_8 [2];
  int32_t auStackX_10 [2];
  int64_t lStack_38;
  int64_t *plStack_30;
  
  auStackX_8[0] = 1;
  (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe8,4);
  lVar1 = *(int64_t *)(param_1 + 0x98);
  auStackX_10[0] = *(int32_t *)(lVar1 + 0x7c);
  (**(code **)(*param_2 + 8))(param_2,auStackX_10,4);
  (**(code **)(*param_2 + 8))(param_2,lVar1 + 0x40,4);
  uVar5 = 0;
  if (*(int *)(lVar1 + 0x68) == 0) {
FUN_1806b17fa:
    auStackX_8[0] = *(uint *)(param_1 + 0x90);
    lStack_38 = param_1;
    plStack_30 = param_2;
    (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + uVar5 * 8);
        auStackX_8[0] = (uint)(lVar1 != 0);
        (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
        if (lVar1 != 0) {
          FUN_1806a9230(lVar1,&lStack_38);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x90));
    }
    auStackX_8[0] = *(uint *)(param_1 + 0x80);
    (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + uVar5 * 8);
        auStackX_8[0] = (uint)(lVar1 != 0);
        (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
        if (lVar1 != 0) {
          FUN_1806a9050(lVar1,&lStack_38);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x80));
    }
    auStackX_8[0] = *(uint *)(param_1 + 0xe0);
    (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0xd8) + uVar5 * 8);
        auStackX_8[0] = (uint)(lVar1 != 0);
        (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
        if (lVar1 != 0) {
          FUN_1806a93e0(lVar1,&lStack_38);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0xe0));
    }
    return;
  }
  uVar4 = **(uint **)(lVar1 + 0x60);
  if (uVar4 == 0xffffffff) {
    do {
      uVar3 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == *(uint *)(lVar1 + 0x6c)) goto joined_r0x0001806b1736;
      uVar4 = (*(uint **)(lVar1 + 0x60))[uVar5];
    } while (uVar4 == 0xffffffff);
  }
LAB_1806b1750:
  do {
    do {
      lVar6 = (uint64_t)uVar4 * 0x10;
      (**(code **)(*param_2 + 8))(param_2,*(int64_t *)(lVar1 + 0x50) + lVar6,4);
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x50) + 8 + lVar6) + lVar2) != '\0');
      auStackX_8[0] = (int)lVar2 + 1;
      (**(code **)(*param_2 + 8))(param_2,auStackX_8,4);
      (**(code **)(*param_2 + 8))
                (param_2,*(uint64_t *)(*(int64_t *)(lVar1 + 0x50) + 8 + lVar6),auStackX_8[0]);
      uVar4 = *(uint *)(*(int64_t *)(lVar1 + 0x58) + (uint64_t)uVar4 * 4);
    } while (uVar4 != 0xffffffff);
    do {
      uVar3 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar3;
      if (uVar3 == *(uint *)(lVar1 + 0x6c)) goto joined_r0x0001806b1736;
      uVar4 = *(uint *)(*(int64_t *)(lVar1 + 0x60) + uVar5 * 4);
    } while (uVar4 == 0xffffffff);
  } while( true );
joined_r0x0001806b1736:
  if (uVar4 == 0xffffffff) goto FUN_1806b17fa;
  goto LAB_1806b1750;
}






// 函数: void FUN_1806b173c(void)
void FUN_1806b173c(void)

{
  uint in_EAX;
  int64_t lVar1;
  uint uVar2;
  uint64_t unaff_RBX;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  
  do {
    do {
      (**(code **)(*unaff_RDI + 8))();
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(*(int64_t *)
                          (*(int64_t *)(unaff_R14 + 0x50) + 8 + (uint64_t)in_EAX * 0x10) + lVar1)
               != '\0');
      *(int *)(unaff_RBP + 0x30) = (int)lVar1 + 1;
      (**(code **)(*unaff_RDI + 8))();
      (**(code **)(*unaff_RDI + 8))();
      in_EAX = *(uint *)(*(int64_t *)(unaff_R14 + 0x58) + (uint64_t)in_EAX * 4);
    } while (in_EAX != 0xffffffff);
    do {
      uVar2 = (int)unaff_RBX + 1;
      unaff_RBX = (uint64_t)uVar2;
      if (uVar2 == *(uint *)(unaff_R14 + 0x6c)) {
        if (in_EAX == 0xffffffff) {
          *(int32_t *)(unaff_RBP + 0x30) = *(int32_t *)(unaff_RSI + 0x90);
          lVar1 = *unaff_RDI;
          *(int64_t *)(unaff_RBP + -0x10) = unaff_RSI;
          *(int64_t **)(unaff_RBP + -8) = unaff_RDI;
          (**(code **)(lVar1 + 8))();
          uVar3 = 0;
          if (*(int *)(unaff_RSI + 0x90) != 0) {
            do {
              lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x88) + uVar3 * 8);
              *(uint *)(unaff_RBP + 0x30) = (uint)(lVar1 != 0);
              (**(code **)(*unaff_RDI + 8))();
              if (lVar1 != 0) {
                FUN_1806a9230(lVar1,unaff_RBP + -0x10);
              }
              uVar2 = (int)uVar3 + 1;
              uVar3 = (uint64_t)uVar2;
            } while (uVar2 < *(uint *)(unaff_RSI + 0x90));
          }
          *(int32_t *)(unaff_RBP + 0x30) = *(int32_t *)(unaff_RSI + 0x80);
          (**(code **)(*unaff_RDI + 8))();
          uVar3 = 0;
          if (*(int *)(unaff_RSI + 0x80) != 0) {
            do {
              lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x78) + uVar3 * 8);
              *(uint *)(unaff_RBP + 0x30) = (uint)(lVar1 != 0);
              (**(code **)(*unaff_RDI + 8))();
              if (lVar1 != 0) {
                FUN_1806a9050(lVar1,unaff_RBP + -0x10);
              }
              uVar2 = (int)uVar3 + 1;
              uVar3 = (uint64_t)uVar2;
            } while (uVar2 < *(uint *)(unaff_RSI + 0x80));
          }
          *(int32_t *)(unaff_RBP + 0x30) = *(int32_t *)(unaff_RSI + 0xe0);
          (**(code **)(*unaff_RDI + 8))();
          uVar3 = 0;
          if (*(int *)(unaff_RSI + 0xe0) != 0) {
            do {
              lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0xd8) + uVar3 * 8);
              *(uint *)(unaff_RBP + 0x30) = (uint)(lVar1 != 0);
              (**(code **)(*unaff_RDI + 8))();
              if (lVar1 != 0) {
                FUN_1806a93e0(lVar1,unaff_RBP + -0x10);
              }
              uVar2 = (int)uVar3 + 1;
              uVar3 = (uint64_t)uVar2;
            } while (uVar2 < *(uint *)(unaff_RSI + 0xe0));
          }
          return;
        }
        break;
      }
      in_EAX = *(uint *)(*(int64_t *)(unaff_R14 + 0x60) + unaff_RBX * 4);
    } while (in_EAX == 0xffffffff);
  } while( true );
}






// 函数: void FUN_1806b17fa(void)
void FUN_1806b17fa(void)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  *(int32_t *)(unaff_RBP + 0x30) = *(int32_t *)(unaff_RSI + 0x90);
  lVar1 = *unaff_RDI;
  *(int64_t *)(unaff_RBP + -0x10) = unaff_RSI;
  *(int64_t **)(unaff_RBP + -8) = unaff_RDI;
  (**(code **)(lVar1 + 8))();
  uVar3 = 0;
  if (*(int *)(unaff_RSI + 0x90) != 0) {
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x88) + uVar3 * 8);
      *(uint *)(unaff_RBP + 0x30) = (uint)(lVar1 != 0);
      (**(code **)(*unaff_RDI + 8))();
      if (lVar1 != 0) {
        FUN_1806a9230(lVar1,unaff_RBP + -0x10);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while (uVar2 < *(uint *)(unaff_RSI + 0x90));
  }
  *(int32_t *)(unaff_RBP + 0x30) = *(int32_t *)(unaff_RSI + 0x80);
  (**(code **)(*unaff_RDI + 8))();
  uVar3 = 0;
  if (*(int *)(unaff_RSI + 0x80) != 0) {
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x78) + uVar3 * 8);
      *(uint *)(unaff_RBP + 0x30) = (uint)(lVar1 != 0);
      (**(code **)(*unaff_RDI + 8))();
      if (lVar1 != 0) {
        FUN_1806a9050(lVar1,unaff_RBP + -0x10);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while (uVar2 < *(uint *)(unaff_RSI + 0x80));
  }
  *(int32_t *)(unaff_RBP + 0x30) = *(int32_t *)(unaff_RSI + 0xe0);
  (**(code **)(*unaff_RDI + 8))();
  uVar3 = 0;
  if (*(int *)(unaff_RSI + 0xe0) != 0) {
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0xd8) + uVar3 * 8);
      *(uint *)(unaff_RBP + 0x30) = (uint)(lVar1 != 0);
      (**(code **)(*unaff_RDI + 8))();
      if (lVar1 != 0) {
        FUN_1806a93e0(lVar1,unaff_RBP + -0x10);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while (uVar2 < *(uint *)(unaff_RSI + 0xe0));
  }
  return;
}






// 函数: void FUN_1806b1960(int64_t param_1,uint64_t param_2)
void FUN_1806b1960(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  char acStackX_8 [8];
  uint64_t uStackX_10;
  uint64_t auStackX_18 [2];
  
  uStackX_10 = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x40));
  lVar1 = func_0x0001806a28d0(param_1 + 8,&uStackX_10);
  if (lVar1 == 0) {
    auStackX_18[0] = param_2;
    puVar2 = (uint64_t *)FUN_1806a2490(param_1 + 8,auStackX_18,acStackX_8);
    if (acStackX_8[0] == '\0') {
      *puVar2 = param_2;
      *(int32_t *)(puVar2 + 1) = 1;
    }
  }
  else {
    puVar2 = (uint64_t *)FUN_1806a2490(param_1 + 8,&uStackX_10,acStackX_8);
    if (acStackX_8[0] == '\0') {
      *puVar2 = param_2;
      *(int32_t *)(puVar2 + 1) = 0;
    }
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x40));
}






// 函数: void FUN_1806b1a00(int64_t param_1,uint64_t param_2)
void FUN_1806b1a00(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x40));
  lVar1 = func_0x0001806a28d0(param_1 + 8,auStackX_10);
  if ((lVar1 != 0) &&
     ((*(int *)(lVar1 + 8) == 0 ||
      (iVar2 = *(int *)(lVar1 + 8) + -1, *(int *)(lVar1 + 8) = iVar2, iVar2 == 0)))) {
    func_0x0001806a2720(param_1 + 8,auStackX_10);
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x40));
}






// 函数: void FUN_1806b1a80(int64_t param_1)
void FUN_1806b1a80(int64_t param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x40));
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x20),0xffffffff,*(int *)(param_1 + 0x2c) * 4);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x40));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1806b1b20(uint64_t *param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  uint64_t uVar6;
  
  param_1[2] = param_2;
  *param_1 = &unknown_var_5688_ptr;
  uVar6 = 0;
  param_1[3] = 0;
  param_1[1] = &unknown_var_5744_ptr;
  *(int8_t *)(param_1 + 4) = 0;
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  if (iVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &unknown_var_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&unknown_var_1664_ptr,0x71);
  }
  param_1[5] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  uVar6 = FUN_1806b21e0(system_system_buffer_config,0x1000);
  param_1[6] = uVar6;
  return param_1;
}






// 函数: void FUN_1806b1c00(uint64_t *param_1)
void FUN_1806b1c00(uint64_t *param_1)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  
  *param_1 = &unknown_var_5688_ptr;
  param_1[1] = &unknown_var_5744_ptr;
  (**(code **)(*(int64_t *)param_1[2] + 0x50))((int64_t *)param_1[2],param_1);
  cVar2 = (**(code **)(*(int64_t *)(param_1[6] + 8) + 0x18))();
  if (cVar2 != '\0') {
    (**(code **)(*(int64_t *)param_1[3] + 0x68))((int64_t *)param_1[3],param_1[6]);
  }
  (**(code **)(*(int64_t *)param_1[6] + 0x18))();
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[5]);
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
  }
  param_1[1] = &unknown_var_1808_ptr;
  *param_1 = &unknown_var_5632_ptr;
  return;
}






// 函数: void FUN_1806b1cc0(int64_t param_1)
void FUN_1806b1cc0(int64_t param_1)

{
  int64_t *plVar1;
  void *puStack_18;
  void *puStack_10;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(int8_t *)(param_1 + 0x20) = 1;
    plVar1 = (int64_t *)FUN_1806a3140(*(uint64_t *)(param_1 + 0x10));
    *(int64_t **)(param_1 + 0x18) = plVar1;
    puStack_18 = &unknown_var_1904_ptr;
    puStack_10 = &unknown_var_2056_ptr;
    (**(code **)(*plVar1 + 8))(plVar1,&puStack_18,*(uint64_t *)(param_1 + 0x30));
    plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x30) + 8);
                    // WARNING: Could not recover jumptable at 0x0001806b1d29. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 8))(plVar1,param_1 + 8);
    return;
  }
  return;
}






// 函数: void FUN_1806b1d40(int64_t *param_1)
void FUN_1806b1d40(int64_t *param_1)

{
  if ((char)param_1[4] != '\0') {
    *(int8_t *)(param_1 + 4) = 0;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*(int64_t *)(param_1[6] + 8) + 0x10))((int64_t *)(param_1[6] + 8),param_1 + 1);
    (**(code **)(*(int64_t *)param_1[3] + 0xa0))();
    param_1[3] = 0;
  }
  return;
}






// 函数: void FUN_1806b1d90(int64_t param_1)
void FUN_1806b1d90(int64_t param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x28));
  (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x30) + 0x10) + 8))();
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x28));
  return;
}






