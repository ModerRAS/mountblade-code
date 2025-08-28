#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part384.c - 10 个函数

// 函数: void FUN_18047b5a0(int64_t *param_1)
void FUN_18047b5a0(int64_t *param_1)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  char cVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  char *pcVar12;
  int32_t uVar13;
  
  lVar3 = param_1[9];
  cVar7 = FUN_18047c9d0();
  if (cVar7 == '\0') {
    if (*(int *)((int64_t)param_1 + 0x7c) != 0x7c) {
      return;
    }
    uVar8 = FUN_18047ce10(param_1 + 8,8);
    FUN_18047b8d0(param_1 + 8,uVar8);
  }
  puVar9 = (uint64_t *)SystemRenderer(0x20);
  *puVar9 = &processed_var_6184_ptr;
  puVar9[1] = 0x11;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = &processed_var_5768_ptr;
  puVar9[3] = param_1[9];
  lVar11 = param_1[9];
  if (*(int64_t *)(lVar11 + 0x10) != 0) {
    puVar9[2] = *(int64_t *)(lVar11 + 0x10);
    *(uint64_t **)(*(int64_t *)(param_1[9] + 0x10) + 0x18) = puVar9;
    lVar11 = param_1[9];
  }
  *(uint64_t **)(lVar11 + 0x10) = puVar9;
  param_1[9] = (int64_t)puVar9;
  puVar10 = (uint64_t *)SystemRenderer(0x30);
  *puVar10 = &processed_var_6184_ptr;
  puVar10[1] = 0x10;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = &processed_var_5816_ptr;
  puVar10[4] = puVar9;
  puVar10[5] = 0;
  lVar11 = *(int64_t *)(lVar3 + 0x10);
  *(uint64_t **)(*(int64_t *)(lVar11 + 0x18) + 0x10) = puVar10;
  puVar10[3] = *(uint64_t *)(lVar11 + 0x18);
  *(uint64_t **)(lVar11 + 0x18) = puVar10;
  puVar10[2] = lVar11;
  iVar2 = *(int *)((int64_t)param_1 + 0x7c);
  while (iVar2 == 0x7c) {
    pcVar12 = (char *)*param_1;
    if (pcVar12 != (char *)param_1[2]) {
      if (*pcVar12 == '\\') {
        pcVar1 = pcVar12 + 1;
        if ((pcVar1 == (char *)param_1[2]) ||
           ((((*(uint *)(param_1 + 0x10) & 8) != 0 || (1 < (byte)(*pcVar1 - 0x28U))) &&
            (((*(uint *)(param_1 + 0x10) & 0x10) != 0 || ((*pcVar1 + 0x85U & 0xfd) != 0)))))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pcVar12 = pcVar1;
        }
      }
      *param_1 = (int64_t)(pcVar12 + 1);
    }
    RenderingSystem_MaterialManager0(param_1);
    cVar7 = FUN_18047c9d0(param_1);
    if (cVar7 == '\0') {
      lVar11 = FUN_18047ce10(param_1 + 8,8);
      iVar2 = *(int *)(lVar11 + 8);
      if (iVar2 == 8) {
        uVar13 = 9;
      }
      else if (iVar2 == 10) {
        uVar13 = 0xc;
      }
      else {
        uVar13 = 0xe;
        if (iVar2 == 0xb) {
          uVar13 = 0xc;
        }
      }
      puVar10 = (uint64_t *)SystemRenderer(0x28);
      *puVar10 = &processed_var_6184_ptr;
      *(int32_t *)(puVar10 + 1) = uVar13;
      *(int32_t *)((int64_t)puVar10 + 0xc) = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &processed_var_6120_ptr;
      puVar10[4] = lVar11;
      puVar10[3] = param_1[9];
      lVar11 = param_1[9];
      if (*(int64_t *)(lVar11 + 0x10) != 0) {
        puVar10[2] = *(int64_t *)(lVar11 + 0x10);
        *(uint64_t **)(*(int64_t *)(param_1[9] + 0x10) + 0x18) = puVar10;
        lVar11 = param_1[9];
      }
      *(uint64_t **)(lVar11 + 0x10) = puVar10;
      param_1[9] = (int64_t)puVar10;
    }
    lVar11 = *(int64_t *)(lVar3 + 0x10);
    lVar4 = puVar9[2];
    puVar9[2] = 0;
    lVar5 = param_1[9];
    param_1[9] = (int64_t)puVar9;
    puVar9[2] = 0;
    *(uint64_t **)(lVar5 + 0x10) = puVar9;
    for (lVar5 = *(int64_t *)(lVar11 + 0x28); lVar5 != 0; lVar5 = *(int64_t *)(lVar5 + 0x28)) {
      lVar11 = lVar5;
    }
    puVar10 = (uint64_t *)SystemRenderer(0x30);
    *puVar10 = &processed_var_6184_ptr;
    puVar10[1] = 0x10;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = &processed_var_5816_ptr;
    puVar10[4] = puVar9;
    puVar10[5] = 0;
    *(uint64_t **)(lVar11 + 0x28) = puVar10;
    puVar10[2] = lVar4;
    *(uint64_t *)(lVar4 + 0x18) = *(uint64_t *)(lVar11 + 0x28);
    iVar2 = *(int *)((int64_t)param_1 + 0x7c);
  }
  return;
}





// 函数: void FUN_18047b870(int64_t *param_1)
void FUN_18047b870(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)*param_1;
  if ((uint64_t *)*param_1 != (uint64_t *)0x0) {
    do {
      puVar1 = (uint64_t *)puVar2[2];
      puVar2[2] = 0;
      (**(code **)*puVar2)(puVar2,1);
      puVar2 = puVar1;
    } while (puVar1 != (uint64_t *)0x0);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}





// 函数: void FUN_18047b8d0(int64_t param_1,int64_t param_2)
void FUN_18047b8d0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 8) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xc;
    if ((iVar1 != 10) && (uVar2 = 0xe, iVar1 == 0xb)) {
      uVar2 = 0xc;
    }
  }
  puVar3 = (uint64_t *)SystemRenderer(0x28);
  *puVar3 = &processed_var_6184_ptr;
  *(int32_t *)(puVar3 + 1) = uVar2;
  *(int32_t *)((int64_t)puVar3 + 0xc) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &processed_var_6120_ptr;
  puVar3[4] = param_2;
  puVar3[3] = *(uint64_t *)(param_1 + 8);
  lVar4 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar4 + 0x10) != 0) {
    puVar3[2] = *(int64_t *)(lVar4 + 0x10);
    *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10) + 0x18) = puVar3;
    lVar4 = *(int64_t *)(param_1 + 8);
  }
  *(uint64_t **)(lVar4 + 0x10) = puVar3;
  *(uint64_t **)(param_1 + 8) = puVar3;
  return;
}



uint64_t * FUN_18047b990(int64_t param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  puVar1 = (uint64_t *)SystemRenderer(0x28);
  *puVar1 = &processed_var_6184_ptr;
  puVar1[1] = 0xd;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &processed_var_6152_ptr;
  *(int32_t *)(puVar1 + 4) = param_2;
  puVar1[3] = *(uint64_t *)(param_1 + 8);
  lVar2 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar2 + 0x10) != 0) {
    puVar1[2] = *(int64_t *)(lVar2 + 0x10);
    *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar2 = *(int64_t *)(param_1 + 8);
  }
  *(uint64_t **)(lVar2 + 0x10) = puVar1;
  *(uint64_t **)(param_1 + 8) = puVar1;
  return puVar1;
}



int64_t *
FUN_18047ba30(int64_t param_1,int64_t *param_2,byte *param_3,byte *param_4,int64_t param_5)

{
  byte *pbVar1;
  byte bVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  lVar8 = param_5;
  if (param_5 == 0) {
    lVar8 = *(int64_t *)(param_1 + 0xb0);
  }
  if (param_3 != param_4) {
    while (lVar8 != 0) {
      switch(*(int32_t *)(lVar8 + 8)) {
      case 1:
      case 8:
      case 9:
      case 0xd:
      case 0xe:
      case 0x14:
        lVar8 = *(int64_t *)(lVar8 + 0x10);
        break;
      case 2:
        if (param_3[-1] != 10) goto code_r0x00018047baa0;
        goto LAB_18047bab5;
      case 3:
        goto code_r0x00018047bac0;
      default:
        goto LAB_18047bab5;
      case 6:
        goto code_r0x00018047bad5;
      case 7:
        do {
          pbVar1 = param_3 + 1;
          bVar2 = *param_3;
          if ((*(int64_t *)(lVar8 + 0x20) == 0) ||
             (puVar5 = (uint64_t *)FUN_18047d500(&param_5,param_3,pbVar1),
             (byte *)*puVar5 == param_3)) {
            lVar3 = *(int64_t *)(lVar8 + 0x38);
            if (lVar3 != 0) {
              bVar4 = bVar2;
              if ((*(uint *)(param_1 + 0xb8) & 0x800) != 0) {
                bVar4 = FUN_18047c260();
              }
              uVar7 = 0;
              if (*(uint *)(lVar3 + 4) != 0) {
                do {
                  if ((*(byte *)(uVar7 + *(int64_t *)(lVar3 + 8)) <= bVar4) &&
                     (bVar4 <= *(byte *)((uint64_t)((int)uVar7 + 1) + *(int64_t *)(lVar3 + 8))))
                  goto LAB_18047bbf1;
                  uVar6 = (int)uVar7 + 2;
                  uVar7 = (uint64_t)uVar6;
                } while (uVar6 < *(uint *)(lVar3 + 4));
              }
            }
            if ((*(int64_t *)(lVar8 + 0x28) == 0) ||
               ((*(byte *)((uint64_t)(bVar2 >> 3) + *(int64_t *)(lVar8 + 0x28)) &
                (byte)(1 << (bVar2 & 7))) == 0)) {
              uVar6 = 0;
            }
            else {
LAB_18047bbf1:
              uVar6 = 1;
            }
          }
          else {
            uVar6 = 1;
          }
          if (uVar6 != (*(uint *)(lVar8 + 0xc) & 1)) {
            *param_2 = (int64_t)param_3;
            return param_2;
          }
          param_3 = pbVar1;
          if (pbVar1 == param_4) {
            *param_2 = (int64_t)pbVar1;
            return param_2;
          }
        } while( true );
      case 0xc:
      case 0x15:
        lVar8 = 0;
        break;
      case 0x10:
        goto FUN_18047bc40;
      }
    }
  }
  goto LAB_18047bab5;
code_r0x00018047bad5:
  while( true ) {
    pbVar1 = param_3 + 1;
    puVar5 = (uint64_t *)
             FUN_18047d3a0(&param_5,param_3,pbVar1,*(int64_t *)(lVar8 + 0x28),
                           *(int64_t *)(lVar8 + 0x28) + 1,*(uint64_t *)(param_1 + 0xd0),
                           *(int32_t *)(param_1 + 0xb8));
    if ((byte *)*puVar5 != param_3) break;
    param_3 = pbVar1;
    if (pbVar1 == param_4) {
      *param_2 = (int64_t)pbVar1;
      return param_2;
    }
  }
  goto LAB_18047bab5;
code_r0x00018047bac0:
  while (*param_3 != 10) {
    param_3 = param_3 + 1;
    if (param_3 == param_4) {
      *param_2 = (int64_t)param_3;
      return param_2;
    }
  }
  goto LAB_18047bab5;
  while( true ) {
    puVar5 = (uint64_t *)
             FUN_18047ba30(param_1,&param_5,param_3,param_4,*(uint64_t *)(lVar8 + 0x10));
    lVar8 = *(int64_t *)(lVar8 + 0x28);
    param_4 = (byte *)*puVar5;
    if (param_3 == param_4) break;
FUN_18047bc40:
    if (lVar8 == 0) break;
  }
  *param_2 = (int64_t)param_4;
  return param_2;
  while (param_3 = param_3 + 1, param_3 != param_4) {
code_r0x00018047baa0:
    if (*param_3 == 10) break;
  }
  if (param_3 != param_4) {
    param_3 = param_3 + 1;
  }
LAB_18047bab5:
  *param_2 = (int64_t)param_3;
  return param_2;
}





// 函数: void FUN_18047bb25(void)
void FUN_18047bb25(void)

{
  byte *pbVar1;
  byte bVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  byte *unaff_RBX;
  int64_t unaff_RBP;
  byte *unaff_RSI;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  
  do {
    pbVar1 = unaff_RSI + 1;
    bVar2 = *unaff_RSI;
    if ((*(int64_t *)(unaff_RBP + 0x20) == 0) ||
       (puVar5 = (uint64_t *)FUN_18047d500(&stack0x00000090,unaff_RSI,pbVar1),
       (byte *)*puVar5 == unaff_RSI)) {
      lVar3 = *(int64_t *)(unaff_RBP + 0x38);
      if (lVar3 != 0) {
        bVar4 = bVar2;
        if ((*(uint *)(unaff_R13 + 0xb8) & 0x800) != 0) {
          bVar4 = FUN_18047c260();
        }
        uVar7 = 0;
        if (*(uint *)(lVar3 + 4) != 0) {
          do {
            if ((*(byte *)(uVar7 + *(int64_t *)(lVar3 + 8)) <= bVar4) &&
               (bVar4 <= *(byte *)((uint64_t)((int)uVar7 + 1) + *(int64_t *)(lVar3 + 8))))
            goto LAB_18047bbf1;
            uVar6 = (int)uVar7 + 2;
            uVar7 = (uint64_t)uVar6;
          } while (uVar6 < *(uint *)(lVar3 + 4));
        }
      }
      if ((*(int64_t *)(unaff_RBP + 0x28) == 0) ||
         ((*(byte *)((uint64_t)(bVar2 >> 3) + *(int64_t *)(unaff_RBP + 0x28)) &
          (byte)(1 << (bVar2 & 7))) == 0)) {
        uVar6 = 0;
      }
      else {
LAB_18047bbf1:
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 1;
    }
    if (uVar6 != (*(uint *)(unaff_RBP + 0xc) & 1)) {
      *unaff_R15 = (int64_t)unaff_RSI;
      return;
    }
    unaff_RSI = pbVar1;
    if (pbVar1 == unaff_RBX) {
      *unaff_R15 = (int64_t)pbVar1;
      return;
    }
  } while( true );
}





// 函数: void FUN_18047bc20(void)
void FUN_18047bc20(void)

{
  return;
}





// 函数: void FUN_18047bc34(void)
void FUN_18047bc34(void)

{
  uint64_t unaff_RSI;
  uint64_t *unaff_R15;
  
  *unaff_R15 = unaff_RSI;
  return;
}





// 函数: void FUN_18047bc40(void)
void FUN_18047bc40(void)

{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_R15;
  
  do {
    if (unaff_RBP == 0) break;
    plVar1 = (int64_t *)FUN_18047ba30();
    unaff_RBP = *(int64_t *)(unaff_RBP + 0x28);
    unaff_RBX = *plVar1;
  } while (unaff_RSI != unaff_RBX);
  *unaff_R15 = unaff_RBX;
  return;
}



int8_t FUN_18047bcd0(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  uint64_t uVar7;
  
  if (param_2 == (uint64_t *)0x0) {
    plVar5 = (int64_t *)&system_data_0010;
  }
  else {
    plVar5 = param_2 + 2;
    *(int8_t *)(param_2 + 1) = 1;
    FUN_18047d750(plVar5,0);
  }
  param_1[0x13] = param_1[0x15];
  *param_1 = param_1[0x15];
  FUN_18047c050(param_1 + 1,*(int32_t *)((int64_t)param_1 + 0xc4));
  FUN_18047d5a0(param_1 + 5,*(int32_t *)((int64_t)param_1 + 0xc4));
  *(int8_t *)(param_1 + 0x1b) = 0;
  *(int32_t *)((int64_t)param_1 + 0xdc) = 10000000;
  *(bool *)((int64_t)param_1 + 0xc1) = param_2 != (uint64_t *)0x0;
  *(int32_t *)(param_1 + 0x1c) = 600;
  *(int8_t *)(param_1 + 0x18) = 0;
  cVar3 = FUN_18047cea0(param_1,param_1[0x16]);
  if (cVar3 != '\0') {
    if (param_2 != (uint64_t *)0x0) {
      FUN_18047d750(plVar5,*(int32_t *)((int64_t)param_1 + 0xc4));
      uVar7 = 0;
      if (*(int *)((int64_t)param_1 + 0xc4) != 0) {
        do {
          lVar1 = uVar7 * 0x18;
          if ((*(uint *)(param_1[9] + (uVar7 >> 5) * 4) >> ((byte)uVar7 & 0x1f) & 1) == 0) {
            *(int8_t *)(*plVar5 + 0x10 + lVar1) = 0;
            *(uint64_t *)(lVar1 + *plVar5) = param_1[0x14];
            uVar4 = param_1[0x14];
          }
          else {
            *(int8_t *)(*plVar5 + 0x10 + lVar1) = 1;
            *(uint64_t *)(lVar1 + *plVar5) = *(uint64_t *)(param_1[0xd] + uVar7 * 0x10);
            uVar4 = *(uint64_t *)(param_1[0xd] + 8 + uVar7 * 0x10);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (uint64_t)uVar6;
          *(uint64_t *)(lVar1 + 8 + *plVar5) = uVar4;
        } while (uVar6 < *(uint *)((int64_t)param_1 + 0xc4));
      }
      *param_2 = param_1[0x13];
      lVar1 = param_1[0x13];
      param_2[5] = lVar1;
      lVar2 = *(int64_t *)*plVar5;
      param_2[6] = lVar2;
      *(bool *)(param_2 + 7) = lVar1 != lVar2;
      lVar1 = *(int64_t *)(*plVar5 + 8);
      param_2[8] = lVar1;
      lVar2 = param_1[0x14];
      param_2[9] = lVar2;
      *(bool *)(param_2 + 10) = lVar1 != lVar2;
      param_2[0xb] = param_1[0x14];
      param_2[0xc] = param_1[0x14];
    }
    return 1;
  }
  return 0;
}





// 函数: void FUN_18047bea0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18047bea0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uVar7 = lVar3 - lVar4 >> 4;
  uVar2 = param_1[2] - lVar4 >> 4;
  auStackX_18[0] = param_3;
  if (uVar2 < param_2) {
    if (0xfffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = param_2;
    if ((uVar2 <= 0xfffffffffffffff - (uVar2 >> 1)) &&
       (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < param_2)) {
      uVar6 = param_2;
    }
    lVar3 = uVar6 << 4;
    if (0xfffffffffffffff < uVar6) {
      lVar3 = -1;
    }
    lVar3 = SystemCore_SyscallHandler(lVar3);
    puVar5 = (uint64_t *)(uVar7 * 0x10 + lVar3);
    for (lVar4 = param_2 - uVar7; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
    func_0x00018018a000(auStackX_18,*param_1,param_1[1],param_4,0,uVar8);
                    // WARNING: Subroutine does not return
    memmove(lVar3);
  }
  if (uVar7 < param_2) {
    if (param_2 - uVar7 == 0) {
      param_1[1] = lVar3;
      return;
    }
                    // WARNING: Subroutine does not return
    memset(lVar3,0,(param_2 - uVar7) * 0x10);
  }
  if (param_2 != uVar7) {
    param_1[1] = param_2 * 0x10 + lVar4;
  }
  return;
}





// 函数: void FUN_18047c050(int64_t *param_1,uint64_t param_2)
void FUN_18047c050(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int64_t lStack_38;
  uint64_t uStack_30;
  int64_t lStack_28;
  uint64_t uStack_20;
  int8_t auStack_18 [16];
  
  uVar2 = param_1[3];
  if (uVar2 < param_2) {
    lVar3 = param_2 - uVar2;
    if (((int64_t)uVar2 < 0) && (uVar2 != 0)) {
      lStack_38 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      lStack_38 = (uVar2 >> 5) * 4;
    }
    lStack_38 = *param_1 + lStack_38;
    uVar4 = (uint)uVar2 & 0x1f;
    uStack_30 = (uint64_t)uVar4;
    lStack_28 = lStack_38;
    uStack_20 = (uint64_t)uVar4;
    uVar2 = FUN_18047c750(param_1,&lStack_28,lVar3);
    if (((int64_t)uVar2 < 0) && (uVar2 != 0)) {
      lVar1 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar2 >> 5) * 4;
    }
    puVar5 = (uint *)(*param_1 + lVar1);
    uVar4 = (uint)uVar2 & 0x1f;
    uVar2 = (uint64_t)uVar4;
    if ((lVar3 < 0) && (uVar2 < (uint64_t)-lVar3)) {
      lVar1 = -((~(uVar2 + lVar3) >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar2 + lVar3 >> 5) * 4;
    }
    puVar6 = (uint *)((int64_t)puVar5 + lVar1);
    while ((puVar5 != puVar6 || (uVar2 != (uVar4 + (int)lVar3 & 0x1f)))) {
      *puVar5 = *puVar5 & ~(1 << ((uint)uVar2 & 0x1f));
      if (uVar2 < 0x1f) {
        uVar2 = uVar2 + 1;
      }
      else {
        uVar2 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else if (param_2 < uVar2) {
    if (((int64_t)uVar2 < 0) && (uVar2 != 0)) {
      lStack_38 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      lStack_38 = (uVar2 >> 5) * 4;
    }
    lStack_38 = *param_1 + lStack_38;
    if (((int64_t)param_2 < 0) && (param_2 != 0)) {
      lStack_28 = -((~param_2 >> 5) * 4 + 4);
    }
    else {
      lStack_28 = (param_2 >> 5) * 4;
    }
    lStack_28 = *param_1 + lStack_28;
    uStack_30 = (uint64_t)((uint)uVar2 & 0x1f);
    uStack_20 = (uint64_t)((uint)param_2 & 0x1f);
    FUN_18047c500(param_1,auStack_18,&lStack_28,&lStack_38);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18047c260(uint64_t *param_1,int8_t param_2)
void FUN_18047c260(uint64_t *param_1,int8_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int8_t auStack_68 [32];
  int8_t uStack_48;
  int8_t auStack_47 [15];
  uint64_t uStack_38;
  int8_t uStack_30;
  uint8_t uStack_2f;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  uStack_48 = param_2;
  FUN_18047c710(*param_1,&uStack_30,&uStack_48,auStack_47);
  if (0xf < uStack_18) {
    uVar3 = uStack_18 + 1;
    lVar1 = CONCAT71(uStack_2f,uStack_30);
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      uVar3 = uStack_18 + 0x28;
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar2,uVar3);
  }
  uStack_20 = 0;
  uStack_18 = 0xf;
  uStack_30 = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_68);
}



uint64_t * FUN_18047c330(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &processed_var_5800_ptr;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    lVar1 = *(int64_t *)(lVar2 + 0x18);
    free(*(uint64_t *)(lVar2 + 0x10));
    free(lVar2,0x20,param_3,param_4,uVar3);
    lVar2 = lVar1;
  }
  free(param_1[5],0x20,param_3,param_4,uVar3);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    free(*(uint64_t *)(lVar2 + 8));
    free(lVar2,0x10,param_3,param_4,uVar3);
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    free(*(uint64_t *)(lVar2 + 8));
    free(lVar2,0x10,param_3,param_4,uVar3);
  }
  lVar2 = param_1[9];
  while (lVar2 != 0) {
    lVar1 = *(int64_t *)(lVar2 + 0x18);
    free(*(uint64_t *)(lVar2 + 0x10));
    free(lVar2,0x20);
    lVar2 = lVar1;
  }
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}





