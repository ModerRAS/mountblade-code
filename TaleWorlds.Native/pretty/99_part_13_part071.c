#include "TaleWorlds.Native.Split.h"

// 99_part_13_part071.c - 2 个函数

// 函数: void FUN_1808d8b17(void)
void FUN_1808d8b17(void)

{
  return;
}



uint64_t FUN_1808d8b60(longlong param_1)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 0x20);
  while( true ) {
    if (puVar2 == (uint64_t *)(param_1 + 0x20)) {
      return 0;
    }
    lVar3 = puVar2[3];
    lVar4 = *(longlong *)(param_1 + 0x18);
    if ((*(uint *)(lVar3 + 0x5c) >> 2 & 1) == 0) {
      plVar1 = (longlong *)(lVar3 + 0x10);
      **(longlong **)(lVar3 + 0x18) = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(lVar3 + 0x18);
      *(longlong **)(lVar3 + 0x18) = plVar1;
      *plVar1 = (longlong)plVar1;
      if (plVar1 == (longlong *)0x0) {
        return 0x1c;
      }
      *(uint64_t *)(lVar3 + 0x18) = *(uint64_t *)(lVar4 + 0x48);
      *plVar1 = lVar4 + 0x40;
      *(longlong **)(lVar4 + 0x48) = plVar1;
      **(longlong **)(lVar3 + 0x18) = (longlong)plVar1;
      *(uint *)(lVar3 + 0x5c) = *(uint *)(lVar3 + 0x5c) & 0xffffffef | 4;
    }
    if (puVar2 == (uint64_t *)(param_1 + 0x20)) break;
    puVar2 = (uint64_t *)*puVar2;
  }
  return 0;
}



uint64_t FUN_1808d8c80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != param_1) {
    while (plVar1[2] != param_2) {
      if (plVar1 == param_1) {
        return 0;
      }
      plVar1 = (longlong *)*plVar1;
      if (plVar1 == param_1) {
        return 0;
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_1808d7840(plVar1,&unknown_var_7344_ptr,0x32b);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808d8cd0(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  float fVar9;
  
  if (param_2 == 3) {
    *(float *)(param_1 + 100) = param_3;
    fVar9 = param_3 * *(float *)(param_1 + 0x60) * 0.01;
    if ((fVar9 != *(float *)(param_1 + 0x68)) &&
       (*(float *)(param_1 + 0x68) = fVar9, *(int *)(param_1 + 0x80) == 1)) {
      uVar3 = FUN_1808d8b60(*(uint64_t *)(param_1 + 0x50));
      if (uVar3 != 0) {
        return (uint64_t *)(ulonglong)uVar3;
      }
    }
    return (uint64_t *)0x0;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  plVar4 = *(longlong **)(lVar1 + 0x30);
  plVar5 = (longlong *)(lVar1 + 0x30);
  if (plVar4 != plVar5) {
    while (param_2 != *(int *)((longlong)plVar4 + 0x2c)) {
      if (plVar4 == plVar5) {
        return (uint64_t *)0x0;
      }
      plVar4 = (longlong *)*plVar4;
      if (plVar4 == plVar5) {
        return (uint64_t *)0x0;
      }
    }
    puVar6 = (uint64_t *)(param_1 + 0x30);
    for (puVar2 = *(uint64_t **)(param_1 + 0x30); puVar2 != puVar6; puVar2 = (uint64_t *)*puVar2
        ) {
      if (*(int *)(puVar2 + 2) == param_2) {
        if (puVar2 != puVar6) {
          *(float *)((longlong)puVar2 + 0x14) = param_3;
          goto LAB_1808d8e33;
        }
        break;
      }
      if (puVar2 == puVar6) {
        return (uint64_t *)0x1c;
      }
    }
    puVar8 = (uint64_t *)0x0;
    for (puVar2 = *(uint64_t **)(lVar1 + 0x20);
        ((puVar7 = puVar8, puVar2 != (uint64_t *)(lVar1 + 0x20) &&
         (puVar7 = puVar2, *(int *)(puVar2 + 8) != param_2)) &&
        (puVar7 = puVar8, puVar2 != (uint64_t *)(lVar1 + 0x20))); puVar2 = (uint64_t *)*puVar2)
    {
    }
    if ((*(int *)(puVar7 + 5) != 0) || (*(int *)(puVar7 + 3) != 0)) {
      plVar5 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&unknown_var_1696_ptr,0xbf,0,0,1)
      ;
      if (plVar5 == (longlong *)0x0) {
        puVar8 = (uint64_t *)0x26;
      }
      else {
        *plVar5 = (longlong)plVar5;
        plVar5[1] = (longlong)plVar5;
        plVar5[2] = CONCAT44(param_3,param_2);
        plVar5[1] = *(longlong *)(param_1 + 0x38);
        *plVar5 = (longlong)puVar6;
        *(longlong **)(param_1 + 0x38) = plVar5;
        *(longlong **)plVar5[1] = plVar5;
      }
      if ((int)puVar8 != 0) {
        return puVar8;
      }
    }
LAB_1808d8e33:
    puVar6 = (uint64_t *)FUN_1808d8b60(*(uint64_t *)(param_1 + 0x50));
    if ((int)puVar6 != 0) {
      return puVar6;
    }
  }
  return (uint64_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808d8d32(longlong *param_1,int param_2,int32_t param_3)

{
  uint64_t *puVar1;
  longlong *in_RAX;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong unaff_RSI;
  uint64_t *puVar5;
  longlong in_R8;
  
  if (in_RAX != param_1) {
    while (param_2 != *(int *)((longlong)in_RAX + 0x2c)) {
      if (in_RAX == param_1) {
        return (uint64_t *)0x0;
      }
      in_RAX = (longlong *)*in_RAX;
      if (in_RAX == param_1) {
        return (uint64_t *)0x0;
      }
    }
    puVar3 = (uint64_t *)(unaff_RSI + 0x30);
    for (puVar1 = *(uint64_t **)(unaff_RSI + 0x30); puVar1 != puVar3;
        puVar1 = (uint64_t *)*puVar1) {
      if (*(int *)(puVar1 + 2) == param_2) {
        if (puVar1 != puVar3) {
          *(int32_t *)((longlong)puVar1 + 0x14) = param_3;
          goto LAB_1808d8e33;
        }
        break;
      }
      if (puVar1 == puVar3) {
        return (uint64_t *)0x1c;
      }
    }
    puVar5 = (uint64_t *)0x0;
    for (puVar1 = *(uint64_t **)(in_R8 + 0x20);
        ((puVar4 = puVar5, puVar1 != (uint64_t *)(in_R8 + 0x20) &&
         (puVar4 = puVar1, *(int *)(puVar1 + 8) != param_2)) &&
        (puVar4 = puVar5, puVar1 != (uint64_t *)(in_R8 + 0x20))); puVar1 = (uint64_t *)*puVar1)
    {
    }
    if ((*(int *)(puVar4 + 5) != 0) || (*(int *)(puVar4 + 3) != 0)) {
      plVar2 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&unknown_var_1696_ptr,0xbf,0);
      if (plVar2 == (longlong *)0x0) {
        puVar5 = (uint64_t *)0x26;
      }
      else {
        *plVar2 = (longlong)plVar2;
        plVar2[1] = (longlong)plVar2;
        plVar2[2] = CONCAT44(param_3,param_2);
        plVar2[1] = *(longlong *)(unaff_RSI + 0x38);
        *plVar2 = (longlong)puVar3;
        *(longlong **)(unaff_RSI + 0x38) = plVar2;
        *(longlong **)plVar2[1] = plVar2;
      }
      if ((int)puVar5 != 0) {
        return puVar5;
      }
    }
LAB_1808d8e33:
    puVar3 = (uint64_t *)FUN_1808d8b60(*(uint64_t *)(unaff_RSI + 0x50));
    if ((int)puVar3 != 0) {
      return puVar3;
    }
  }
  return (uint64_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808d8d68(uint64_t param_1,int param_2,int32_t param_3)

{
  uint64_t *puVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong unaff_RSI;
  uint64_t *puVar5;
  longlong in_R8;
  
  puVar1 = *(uint64_t **)(unaff_RSI + 0x30);
  puVar3 = (uint64_t *)(unaff_RSI + 0x30);
  do {
    if (puVar1 == puVar3) {
LAB_1808d8d8f:
      puVar5 = (uint64_t *)0x0;
      for (puVar1 = *(uint64_t **)(in_R8 + 0x20);
          ((puVar4 = puVar5, puVar1 != (uint64_t *)(in_R8 + 0x20) &&
           (puVar4 = puVar1, *(int *)(puVar1 + 8) != param_2)) &&
          (puVar4 = puVar5, puVar1 != (uint64_t *)(in_R8 + 0x20))); puVar1 = (uint64_t *)*puVar1
          ) {
      }
      if ((*(int *)(puVar4 + 5) != 0) || (*(int *)(puVar4 + 3) != 0)) {
        plVar2 = (longlong *)
                 FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&unknown_var_1696_ptr,0xbf,0);
        if (plVar2 == (longlong *)0x0) {
          puVar5 = (uint64_t *)0x26;
        }
        else {
          *plVar2 = (longlong)plVar2;
          plVar2[1] = (longlong)plVar2;
          plVar2[2] = CONCAT44(param_3,param_2);
          plVar2[1] = *(longlong *)(unaff_RSI + 0x38);
          *plVar2 = (longlong)puVar3;
          *(longlong **)(unaff_RSI + 0x38) = plVar2;
          *(longlong **)plVar2[1] = plVar2;
        }
        if ((int)puVar5 != 0) {
          return puVar5;
        }
      }
LAB_1808d8e33:
      puVar3 = (uint64_t *)FUN_1808d8b60(*(uint64_t *)(unaff_RSI + 0x50));
      if ((int)puVar3 == 0) {
        puVar3 = (uint64_t *)0x0;
      }
      return puVar3;
    }
    if (*(int *)(puVar1 + 2) == param_2) {
      if (puVar1 != puVar3) {
        *(int32_t *)((longlong)puVar1 + 0x14) = param_3;
        goto LAB_1808d8e33;
      }
      goto LAB_1808d8d8f;
    }
    if (puVar1 == puVar3) {
      return (uint64_t *)0x1c;
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808d8e25(uint64_t param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong in_RAX;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint64_t *puVar4;
  int32_t in_XMM2_Da;
  
  if (in_RAX == unaff_RBX) {
    puVar4 = (uint64_t *)0x0;
    for (puVar2 = *(uint64_t **)(param_3 + 0x20);
        ((puVar3 = puVar4, puVar2 != (uint64_t *)(param_3 + 0x20) &&
         (puVar3 = puVar2, *(int *)(puVar2 + 8) != param_2)) &&
        (puVar3 = puVar4, puVar2 != (uint64_t *)(param_3 + 0x20))); puVar2 = (uint64_t *)*puVar2
        ) {
    }
    if ((*(int *)(puVar3 + 5) != 0) || (*(int *)(puVar3 + 3) != 0)) {
      plVar1 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&unknown_var_1696_ptr,0xbf,0);
      if (plVar1 == (longlong *)0x0) {
        puVar4 = (uint64_t *)0x26;
      }
      else {
        *plVar1 = (longlong)plVar1;
        plVar1[1] = (longlong)plVar1;
        plVar1[2] = CONCAT44(in_XMM2_Da,param_2);
        plVar1[1] = *(longlong *)(unaff_RBX + 8);
        *plVar1 = unaff_RBX;
        *(longlong **)(unaff_RBX + 8) = plVar1;
        *(longlong **)plVar1[1] = plVar1;
      }
      if ((int)puVar4 != 0) {
        return puVar4;
      }
    }
  }
  else {
    *(int32_t *)(in_RAX + 0x14) = in_XMM2_Da;
  }
  puVar2 = (uint64_t *)FUN_1808d8b60(*(uint64_t *)(unaff_RSI + 0x50));
  if ((int)puVar2 == 0) {
    puVar2 = (uint64_t *)0x0;
  }
  return puVar2;
}



ulonglong FUN_1808d8e52(longlong *param_1)

{
  ulonglong uVar1;
  longlong *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint unaff_EDI;
  longlong in_stack_00000040;
  
  *in_RAX = (longlong)param_1;
  in_RAX[1] = (longlong)param_1;
  param_1[2] = in_stack_00000040;
  param_1[1] = *(longlong *)(unaff_RBX + 8);
  *param_1 = unaff_RBX;
  *(longlong **)(unaff_RBX + 8) = param_1;
  *(longlong **)param_1[1] = param_1;
  if (unaff_EDI != 0) {
    return (ulonglong)unaff_EDI;
  }
  uVar1 = FUN_1808d8b60(*(uint64_t *)(unaff_RSI + 0x50));
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808d8e90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plStack_30;
  longlong *plStack_28;
  int iStack_20;
  int8_t uStack_1c;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  if ((*(uint *)((longlong)param_2 + 0x5c) >> 3 & 1) != 0) {
    *(uint *)((longlong)param_2 + 0x5c) = *(uint *)((longlong)param_2 + 0x5c) | 4;
    FUN_1808b2d20(param_2);
    plVar1 = (longlong *)(param_1 + 0x30);
    plVar5 = (longlong *)0x0;
    plStack_30 = (longlong *)(*(longlong *)(param_1 + 0x30) + -0x10);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      plStack_30 = plVar5;
    }
    if (plStack_30 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    else {
      plStack_30 = plStack_30 + 2;
    }
    if (plStack_30 == plVar1) {
LAB_1808d8f58:
      if ((plStack_30 != plVar1) && (uVar3 = FUN_1808d90e0(param_1,param_2), (int)uVar3 != 0)) {
        return uVar3;
      }
    }
    else {
      do {
        plVar2 = plStack_30 + -2;
        if (plStack_30 == (longlong *)0x0) {
          plVar2 = plVar5;
        }
        if (plVar2 == param_2) goto LAB_1808d8f58;
        if (plStack_30 == plVar1) break;
        plVar2 = (longlong *)(*plStack_30 + -0x10);
        if (*plStack_30 == 0) {
          plVar2 = plVar5;
        }
        plStack_30 = plVar5;
        if (plVar2 != (longlong *)0x0) {
          plStack_30 = plVar2 + 2;
        }
      } while (plStack_30 != plVar1);
    }
    plVar1 = (longlong *)(param_1 + 0x20);
    iStack_20 = 0x7fffffff;
    uStack_1c = 0;
    uStack_18 = 0;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + -0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      plVar2 = plVar5;
    }
    uStack_10 = 0;
    plVar6 = plVar5;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2 + 4;
    }
    plStack_28 = param_2;
    if (plVar6 != plVar1) {
      do {
        plVar2 = plVar6 + -4;
        if (plVar6 == (longlong *)0x0) {
          plVar2 = plVar5;
        }
        plVar4 = (longlong *)(plVar2[10] + 0x20);
        plVar2 = (longlong *)*plVar4;
        if (plVar2 != plVar4) {
          while ((longlong *)plVar2[3] != param_2) {
            if ((plVar2 == plVar4) || (plVar2 = (longlong *)*plVar2, plVar2 == plVar4))
            goto LAB_1808d9016;
          }
          if (plVar2 != (longlong *)0x0) {
            uVar3 = FUN_1808d9950(&plStack_28);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            *(uint *)((longlong)param_2 + 0x5c) = *(uint *)((longlong)param_2 + 0x5c) | 0x10;
          }
        }
LAB_1808d9016:
        if (plVar6 == plVar1) break;
        plVar2 = (longlong *)(*plVar6 + -0x20);
        if (*plVar6 == 0) {
          plVar2 = plVar5;
        }
        plVar6 = plVar2 + 4;
        if (plVar2 == (longlong *)0x0) {
          plVar6 = plVar5;
        }
      } while (plVar6 != plVar1);
      if (iStack_20 != 0x7fffffff) {
        uVar3 = FUN_1808b3950(plStack_28,(int32_t)uStack_18,uStack_10,uStack_1c);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iStack_20 = 0x7fffffff;
      }
    }
    uVar3 = FUN_1808b1c90(param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    plVar1 = param_2 + 2;
    *(longlong *)param_2[3] = *plVar1;
    *(longlong *)(*plVar1 + 8) = param_2[3];
    param_2[3] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    if (plVar1 == (longlong *)0x0) {
      return 0x1c;
    }
    param_2[3] = *(longlong *)(param_1 + 0x58);
    *plVar1 = param_1 + 0x50;
    *(longlong **)(param_1 + 0x58) = plVar1;
    *(longlong **)param_2[3] = plVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808d90e0(uint64_t *param_1,longlong param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int8_t auStack_28 [16];
  
  puVar3 = (uint64_t *)*param_1;
  do {
    if (puVar3 == param_1) {
      return 0;
    }
    lVar6 = *(longlong *)(param_2 + 0x20);
    plVar5 = (longlong *)(**(code **)**(uint64_t **)(param_2 + 0x28))();
    uVar2 = *(int32_t *)(lVar6 + 0x40);
    (**(code **)(*plVar5 + 0x20))(plVar5,auStack_28);
    lVar6 = FUN_1808ec110(puVar3[2],auStack_28,uVar2);
    if (lVar6 != 0) {
      puVar1 = puVar3 + 4;
      for (puVar4 = (uint64_t *)puVar3[4]; puVar4 != puVar1; puVar4 = (uint64_t *)*puVar4) {
        if (puVar4[2] == lVar6) goto LAB_1808d91e4;
        if (puVar4 == puVar1) break;
      }
      plVar5 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x20,&unknown_var_7344_ptr,0xd2,0,0,1)
      ;
      if (plVar5 == (longlong *)0x0) {
        return 0x26;
      }
      *plVar5 = (longlong)plVar5;
      plVar5[1] = (longlong)plVar5;
      plVar5[2] = lVar6;
      plVar5[3] = param_2;
      plVar5[1] = puVar3[5];
      *plVar5 = (longlong)puVar1;
      puVar3[5] = plVar5;
      *(longlong **)plVar5[1] = plVar5;
    }
LAB_1808d91e4:
    if (puVar3 == param_1) {
      return 0;
    }
    puVar3 = (uint64_t *)*puVar3;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808d9230(uint64_t *param_1,longlong param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  
  if ((*(uint *)(param_2 + 0x5c) >> 3 & 1) != 0) {
    plVar1 = (longlong *)(param_2 + 0x10);
    **(uint64_t **)(param_2 + 0x18) = *(uint64_t *)(param_2 + 0x10);
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_2 + 0x18);
    *(longlong **)(param_2 + 0x18) = plVar1;
    *plVar1 = (longlong)plVar1;
    for (puVar2 = (uint64_t *)*param_1; puVar2 != param_1; puVar2 = (uint64_t *)*puVar2) {
      plVar1 = puVar2 + 4;
      for (plVar3 = (longlong *)puVar2[4]; plVar3 != plVar1; plVar3 = (longlong *)*plVar3) {
        if (plVar3[3] == param_2) {
          if (plVar3 == plVar1) {
            return 0x1c;
          }
          *(longlong *)plVar3[1] = *plVar3;
          *(longlong *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (longlong)plVar3;
          *plVar3 = (longlong)plVar3;
          *(longlong *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (longlong)plVar3;
          *plVar3 = (longlong)plVar3;
          *(longlong **)plVar3[1] = plVar3;
          *(longlong *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (longlong)plVar3;
          *plVar3 = (longlong)plVar3;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar3,&unknown_var_7344_ptr,0xe2,1);
        }
        if (plVar3 == plVar1) break;
      }
      if (puVar2 == param_1) break;
    }
    *(uint *)(param_2 + 0x5c) = *(uint *)(param_2 + 0x5c) & 0xffffffef;
  }
  return 0;
}



ulonglong FUN_1808d9380(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  
  if ((bool)param_2 == (*(int *)(param_1 + 0x80) == 1)) {
    return 0;
  }
  if (param_2 == '\0') {
    uVar3 = FUN_1808d8b60(*(uint64_t *)(param_1 + 0x50));
    if ((int)uVar3 == 0) {
      plVar1 = (longlong *)(param_1 + 0x20);
      **(longlong **)(param_1 + 0x28) = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
      *(longlong **)(param_1 + 0x28) = plVar1;
      *plVar1 = (longlong)plVar1;
      *(int32_t *)(param_1 + 0x80) = 2;
      return 0;
    }
    return uVar3;
  }
  uVar3 = FUN_1808b2f30(param_1,3);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x20);
  *(int32_t *)(param_1 + 0x80) = 1;
  if (plVar1 == (longlong *)0x0) {
LAB_1808d9400:
    uVar6 = 0x1c;
  }
  else {
    plVar4 = (longlong *)*plVar1;
    uVar6 = 0;
    if (plVar4 != plVar1) {
      iVar5 = 0;
      do {
        plVar4 = (longlong *)*plVar4;
        iVar5 = iVar5 + 1;
      } while (plVar4 != plVar1);
      if (iVar5 != 0) goto LAB_1808d9400;
    }
    *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(lVar2 + 0x18);
    *plVar1 = lVar2 + 0x10;
    *(longlong **)(lVar2 + 0x18) = plVar1;
    **(longlong **)(param_1 + 0x28) = (longlong)plVar1;
  }
  if (uVar6 == 0) {
    return 0;
  }
  return (ulonglong)uVar6;
}



uint64_t FUN_1808d9460(longlong param_1,float param_2)

{
  uint64_t uVar1;
  float fVar2;
  
  *(float *)(param_1 + 0x60) = param_2;
  fVar2 = param_2 * *(float *)(param_1 + 100) * 0.01;
  if (((fVar2 != *(float *)(param_1 + 0x68)) &&
      (*(float *)(param_1 + 0x68) = fVar2, *(int *)(param_1 + 0x80) == 1)) &&
     (uVar1 = FUN_1808d8b60(*(uint64_t *)(param_1 + 0x50)), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d94a0(longlong param_1)
void FUN_1808d94a0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint64_t *puVar15;
  uint uStack_4c;
  uint uStack_3c;
  
  plVar10 = (longlong *)(param_1 + 0x30);
  plVar14 = (longlong *)0x0;
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + -0x10);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar8 = plVar14;
  }
  plVar5 = plVar14;
  if (plVar8 != (longlong *)0x0) {
    plVar5 = plVar8 + 2;
  }
  while (plVar5 != plVar10) {
    plVar8 = plVar5 + -2;
    if (plVar5 == (longlong *)0x0) {
      plVar8 = plVar14;
    }
    iVar4 = FUN_1808d90e0(param_1,plVar8);
    if (iVar4 != 0) {
      return;
    }
    if (plVar5 == plVar10) break;
    plVar8 = (longlong *)(*plVar5 + -0x10);
    if (*plVar5 == 0) {
      plVar8 = plVar14;
    }
    plVar5 = plVar14;
    if (plVar8 != (longlong *)0x0) {
      plVar5 = plVar8 + 2;
    }
  }
  plVar8 = (longlong *)(param_1 + 0x10);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar5 = plVar14;
  }
  plVar6 = plVar14;
  if (plVar5 != (longlong *)0x0) {
    plVar6 = plVar5 + 4;
  }
  while (plVar6 != plVar8) {
    plVar5 = plVar6 + 0xc;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = (longlong *)0x80;
    }
    if ((int)*plVar5 == 1) {
      plVar5 = plVar6 + -4;
      if (plVar6 == (longlong *)0x0) {
        plVar5 = plVar14;
      }
      plVar9 = plVar6;
      if (plVar6 != plVar8) {
        lVar2 = *plVar6;
        plVar13 = (longlong *)(lVar2 + -0x20);
        if (lVar2 == 0) {
          plVar13 = plVar14;
        }
        plVar9 = plVar14;
        if (plVar13 != (longlong *)0x0) {
          plVar9 = plVar13 + 4;
        }
        *(longlong *)plVar6[1] = lVar2;
        *(longlong *)(*plVar6 + 8) = plVar6[1];
        plVar6[1] = (longlong)plVar6;
        *plVar6 = (longlong)plVar6;
      }
      iVar4 = FUN_1808d7d10(param_1,plVar5);
      plVar6 = plVar9;
      if (iVar4 != 0) {
        return;
      }
    }
    else {
      if (plVar6 == plVar8) break;
      plVar5 = (longlong *)(*plVar6 + -0x20);
      if (*plVar6 == 0) {
        plVar5 = plVar14;
      }
      plVar6 = plVar14;
      if (plVar5 != (longlong *)0x0) {
        plVar6 = plVar5 + 4;
      }
    }
  }
  plVar8 = (longlong *)(*plVar10 + -0x10);
  if (*plVar10 == 0) {
    plVar8 = plVar14;
  }
  plVar5 = plVar14;
  if (plVar8 != (longlong *)0x0) {
    plVar5 = plVar8 + 2;
  }
  while (plVar5 != plVar10) {
    plVar8 = plVar5 + -2;
    if (plVar5 == (longlong *)0x0) {
      plVar8 = plVar14;
    }
    FUN_1808b2d20(plVar8);
    if (plVar5 == plVar10) break;
    plVar8 = (longlong *)(*plVar5 + -0x10);
    if (*plVar5 == 0) {
      plVar8 = plVar14;
    }
    plVar5 = plVar14;
    if (plVar8 != (longlong *)0x0) {
      plVar5 = plVar8 + 2;
    }
  }
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x40) + -0x10);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar10 = plVar14;
  }
  plVar8 = plVar14;
  if (plVar10 != (longlong *)0x0) {
    plVar8 = plVar10 + 2;
  }
  while (plVar8 != (longlong *)(param_1 + 0x40)) {
    plVar10 = plVar8 + -2;
    if (plVar8 == (longlong *)0x0) {
      plVar10 = plVar14;
    }
    FUN_1808b2d20(plVar10);
    if (plVar8 == (longlong *)(param_1 + 0x40)) break;
    plVar10 = (longlong *)(*plVar8 + -0x10);
    if (*plVar8 == 0) {
      plVar10 = plVar14;
    }
    plVar8 = plVar14;
    if (plVar10 != (longlong *)0x0) {
      plVar8 = plVar10 + 2;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x6c);
  if ((int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x68)) goto LAB_1808d9713;
    if ((0 < (int)uVar11) && (*(longlong *)(param_1 + 0x60) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x60),
                    &unknown_var_8432_ptr,0x100,1);
    }
    *(uint64_t *)(param_1 + 0x60) = 0;
    *(int32_t *)(param_1 + 0x6c) = 0;
  }
  *(int32_t *)(param_1 + 0x68) = 0;
LAB_1808d9713:
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x20) + -0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar10 = plVar14;
  }
  plVar8 = plVar10 + 4;
  if (plVar10 == (longlong *)0x0) {
    plVar8 = plVar14;
  }
  if (plVar8 != (longlong *)(param_1 + 0x20)) {
    do {
      plVar10 = plVar8 + -4;
      if (plVar8 == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      puVar15 = (uint64_t *)(plVar10[10] + 0x20);
      for (puVar3 = (uint64_t *)*puVar15; puVar3 != puVar15; puVar3 = (uint64_t *)*puVar3) {
        lVar2 = puVar3[3];
        if ((*(uint *)(lVar2 + 0x5c) >> 2 & 1) != 0) {
          plVar5 = plVar14;
          if (0 < *(int *)(param_1 + 0x68)) {
            plVar6 = *(longlong **)(param_1 + 0x60);
            plVar9 = plVar14;
            plVar13 = plVar14;
            do {
              if (*plVar6 == lVar2) {
                plVar5 = *(longlong **)(param_1 + 0x60) + (longlong)(int)plVar13 * 4;
                break;
              }
              plVar13 = (longlong *)(ulonglong)((int)plVar13 + 1);
              plVar9 = (longlong *)((longlong)plVar9 + 1);
              plVar6 = plVar6 + 4;
            } while ((longlong)plVar9 < (longlong)*(int *)(param_1 + 0x68));
          }
          if (plVar5 == (longlong *)0x0) {
            uVar11 = (int)*(uint *)(param_1 + 0x6c) >> 0x1f;
            iVar4 = (*(uint *)(param_1 + 0x6c) ^ uVar11) - uVar11;
            iVar7 = *(int *)(param_1 + 0x68) + 1;
            uStack_4c = uStack_4c & 0xffffff00;
            if (iVar4 < iVar7) {
              iVar12 = (int)((float)iVar4 * 1.5);
              iVar4 = iVar7;
              if (iVar7 <= iVar12) {
                iVar4 = iVar12;
              }
              if (iVar4 < 2) {
                iVar12 = 2;
              }
              else if (iVar12 < iVar7) {
                iVar12 = iVar7;
              }
              iVar4 = FUN_1808532e0(param_1 + 0x60,iVar12);
              if (iVar4 != 0) {
                return;
              }
            }
            plVar5 = (longlong *)
                     ((longlong)*(int *)(param_1 + 0x68) * 0x20 + *(longlong *)(param_1 + 0x60));
            *plVar5 = lVar2;
            plVar5[1] = CONCAT44(uStack_4c,0x7fffffff);
            plVar5[2] = 0;
            plVar5[3] = (ulonglong)uStack_3c << 0x20;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            plVar5 = (longlong *)
                     ((longlong)(*(int *)(param_1 + 0x68) + -1) * 0x20 +
                     *(longlong *)(param_1 + 0x60));
          }
          iVar4 = FUN_1808d9950(plVar5,plVar10,puVar3);
          if (iVar4 != 0) {
            return;
          }
        }
        if (puVar3 == puVar15) break;
      }
      plVar10 = (longlong *)(*plVar8 + -0x20);
      if (*plVar8 == 0) {
        plVar10 = plVar14;
      }
      plVar8 = plVar10 + 4;
      if (plVar10 == (longlong *)0x0) {
        plVar8 = plVar14;
      }
    } while (plVar8 != (longlong *)(param_1 + 0x20));
  }
  plVar10 = plVar14;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (*(int *)((longlong)plVar10 + lVar2 + 8) != 0x7fffffff) {
        iVar4 = FUN_1808b3950(*(uint64_t *)((longlong)plVar10 + lVar2),
                              *(int32_t *)((longlong)plVar10 + lVar2 + 0x10),
                              *(int32_t *)((longlong)plVar10 + lVar2 + 0x18),
                              *(int8_t *)((longlong)plVar10 + lVar2 + 0xc));
        if (iVar4 != 0) {
          return;
        }
        *(int32_t *)((longlong)plVar10 + lVar2 + 8) = 0x7fffffff;
      }
      uVar11 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar11;
      puVar1 = (uint *)(*(longlong *)((longlong)plVar10 + lVar2) + 0x5c);
      *puVar1 = *puVar1 | 0x10;
      plVar10 = plVar10 + 4;
    } while ((int)uVar11 < *(int *)(param_1 + 0x68));
  }
  iVar4 = FUN_1808d82a0(param_1,param_1 + 0x30);
  if (iVar4 == 0) {
    FUN_1808d82a0(param_1,param_1 + 0x40);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




