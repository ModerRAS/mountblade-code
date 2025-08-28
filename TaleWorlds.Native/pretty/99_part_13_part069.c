#include "TaleWorlds.Native.Split.h"

// 99_part_13_part069.c - 1 个函数

// 函数: void FUN_1808d7a10(longlong *param_1)
void FUN_1808d7a10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 == param_1) {
    if ((longlong *)param_1[1] == param_1) {
      uVar3 = *(uint *)((longlong)param_1 + 0x6c);
      if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
        if (0 < (int)param_1[0xd]) goto LAB_1808d7bbe;
        if ((0 < (int)uVar3) && (param_1[0xc] != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0xc],&UNK_180957f70,0x100,1)
          ;
        }
        param_1[0xc] = 0;
        *(int32_t *)((longlong)param_1 + 0x6c) = 0;
        uVar3 = 0;
      }
      *(int32_t *)(param_1 + 0xd) = 0;
      if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
        FUN_1808532e0(param_1 + 0xc,0);
      }
LAB_1808d7bbe:
      func_0x0001808d7970(param_1 + 10);
      func_0x0001808d7970(param_1 + 8);
      func_0x0001808d7970(param_1 + 6);
      func_0x00018084e310(param_1 + 4);
      func_0x00018084e310(param_1 + 2);
      plVar5 = (longlong *)*param_1;
      if (plVar5 != param_1) {
        do {
          if (plVar5 == param_1) break;
          plVar1 = (longlong *)*plVar5;
          *(longlong **)plVar5[1] = plVar1;
          *(longlong *)(*plVar5 + 8) = plVar5[1];
          plVar5[1] = (longlong)plVar5;
          *plVar5 = (longlong)plVar5;
          plVar5 = plVar1;
        } while (plVar1 != param_1);
        plVar5 = (longlong *)*param_1;
      }
      *(longlong **)param_1[1] = plVar5;
      *(longlong *)(*param_1 + 8) = param_1[1];
      param_1[1] = (longlong)param_1;
      *param_1 = (longlong)param_1;
      *(longlong **)param_1[1] = param_1;
      *(longlong *)(*param_1 + 8) = param_1[1];
      param_1[1] = (longlong)param_1;
      *param_1 = (longlong)param_1;
      return;
    }
    if (plVar5 == param_1) goto LAB_1808d7a63;
  }
  *(longlong *)plVar5[1] = *plVar5;
  *(longlong *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (longlong)plVar5;
  *plVar5 = (longlong)plVar5;
LAB_1808d7a63:
  plVar1 = plVar5 + 4;
  plVar4 = plVar5 + 4;
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 == plVar1) && ((longlong *)plVar5[5] == plVar1)) {
    func_0x00018085dda0(plVar4);
    *(longlong *)plVar5[1] = *plVar5;
    *(longlong *)(*plVar5 + 8) = plVar5[1];
    plVar5[1] = (longlong)plVar5;
    *plVar5 = (longlong)plVar5;
    *(longlong **)plVar5[1] = plVar5;
    *(longlong *)(*plVar5 + 8) = plVar5[1];
    plVar5[1] = (longlong)plVar5;
    *plVar5 = (longlong)plVar5;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180988870,0x18d,1);
  }
  if (plVar2 == plVar4) {
    plVar2 = (longlong *)0x0;
  }
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  *(longlong *)plVar4[1] = *plVar4;
  *(longlong *)(*plVar4 + 8) = plVar4[1];
  plVar4[1] = (longlong)plVar4;
  *plVar4 = (longlong)plVar4;
  *(longlong **)plVar4[1] = plVar4;
  *(longlong *)(*plVar4 + 8) = plVar4[1];
  plVar4[1] = (longlong)plVar4;
  *plVar4 = (longlong)plVar4;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar4,&UNK_180988870,0xc0,1);
}



uint64_t * FUN_1808d7c70(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180988830;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_1808d8b60(param_1[10]);
  }
  FUN_18084c680(param_1 + 6);
  FUN_1808b1a30(param_1);
  plVar1 = param_1 + 4;
  *(longlong *)param_1[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}



uint64_t FUN_1808d7d10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar2 = FUN_1808d8b60(*(uint64_t *)(param_2 + 0x50));
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  plVar6 = (longlong *)0x0;
  plVar3 = (longlong *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar3 = plVar6;
  }
  plVar4 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3 + 4;
  }
  while (plVar4 != plVar1) {
    plVar3 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x50;
    }
    if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0x10) + 0x44) <
        *(int *)(*(longlong *)(*plVar3 + 0x10) + 0x44)) {
      if (plVar4 == plVar1) {
        return 0x1f;
      }
      plVar1 = (longlong *)(param_2 + 0x20);
      if (plVar1 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar3 = (longlong *)*plVar1;
      plVar7 = plVar6;
      if (plVar3 != plVar1) goto LAB_1808d7e23;
      goto LAB_1808d7e33;
    }
    if (plVar4 == plVar1) break;
    plVar3 = (longlong *)(*plVar4 + -0x20);
    if (*plVar4 == 0) {
      plVar3 = plVar6;
    }
    plVar4 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3 + 4;
    }
  }
  plVar3 = (longlong *)(param_2 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    return 0x1c;
  }
  plVar4 = (longlong *)*plVar3;
  if (plVar4 != plVar3) {
    do {
      plVar4 = (longlong *)*plVar4;
      uVar5 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while (plVar4 != plVar3);
    if (uVar5 != 0) {
      return 0x1c;
    }
  }
  *(uint64_t *)(param_2 + 0x28) = *(uint64_t *)(param_1 + 0x28);
  *plVar3 = (longlong)plVar1;
  *(longlong **)(param_1 + 0x28) = plVar3;
LAB_1808d7de6:
  **(longlong **)(param_2 + 0x28) = param_2 + 0x20;
  return 0;
LAB_1808d7e23:
  do {
    plVar3 = (longlong *)*plVar3;
    uVar5 = (int)plVar7 + 1;
    plVar7 = (longlong *)(ulonglong)uVar5;
  } while (plVar3 != plVar1);
  if (uVar5 == 0) {
LAB_1808d7e33:
    plVar3 = plVar4 + -4;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar6;
    }
    if ((plVar3 != (longlong *)0x0) && (plVar3 + 4 != (longlong *)0x0)) {
      *(longlong *)(param_2 + 0x28) = plVar3[5];
      *plVar1 = (longlong)(plVar3 + 4);
      plVar3[5] = (longlong)plVar1;
      goto LAB_1808d7de6;
    }
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1808d7ed0(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)0x0;
  if (param_3 != (uint64_t *)0x0) {
    *param_3 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = FUN_1808d83b0(param_2,lVar1 + 0x30);
  if (((lVar2 == 0) && (lVar2 = FUN_1808d83b0(param_2,lVar1 + 0x40), lVar2 == 0)) &&
     (lVar2 = FUN_1808d83b0(param_2,lVar1 + 0x50), lVar2 == 0)) {
    return (longlong *)0x0;
  }
  if ((*(uint *)(lVar2 + 0x5c) >> 3 & 1) != 0) goto LAB_1808d7fa7;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(uint *)(lVar2 + 0x5c) = *(uint *)(lVar2 + 0x5c) | 0xc;
  plVar7 = (longlong *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    plVar7 = plVar4;
  }
  if (plVar7 == (longlong *)0x0) {
LAB_1808d7f9e:
    plVar4 = (longlong *)0x1c;
  }
  else {
    plVar3 = (longlong *)*plVar7;
    plVar6 = plVar4;
    if (plVar3 != plVar7) {
      do {
        plVar3 = (longlong *)*plVar3;
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
      } while (plVar3 != plVar7);
      if (uVar5 != 0) goto LAB_1808d7f9e;
    }
    plVar7[1] = *(longlong *)(lVar1 + 0x38);
    *plVar7 = lVar1 + 0x30;
    *(longlong **)(lVar1 + 0x38) = plVar7;
    *(longlong **)plVar7[1] = plVar7;
  }
  if ((int)plVar4 != 0) {
    return plVar4;
  }
LAB_1808d7fa7:
  plVar4 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_180988870,300,0,0,1);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)plVar4;
    plVar4[1] = (longlong)plVar4;
    plVar4[2] = param_2;
    plVar4[3] = lVar2;
    plVar4[1] = *(longlong *)(param_1 + 0x28);
    *plVar4 = param_1 + 0x20;
    *(longlong **)(param_1 + 0x28) = plVar4;
    *(longlong **)plVar4[1] = plVar4;
    if (param_3 != (uint64_t *)0x0) {
      *param_3 = plVar4;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808d8040(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4,
                 uint64_t *param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  
  puVar3 = (uint64_t *)0x0;
  for (puVar5 = (uint64_t *)*param_1;
      ((puVar1 = puVar3, puVar5 != param_1 && (puVar1 = puVar5, puVar5[2] != param_2)) &&
      (puVar1 = puVar3, puVar5 != param_1)); puVar5 = (uint64_t *)*puVar5) {
  }
  puVar5 = (uint64_t *)0x0;
  if (puVar1 == (uint64_t *)0x0) {
    puVar1 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_180988870,0xfd,0,0,1);
    if (puVar1 == (uint64_t *)0x0) {
      iVar6 = 0x26;
      puVar5 = puVar3;
      goto LAB_1808d824e;
    }
    *puVar1 = puVar1;
    puVar3 = (uint64_t *)(param_2 + 0x30);
    puVar1[1] = puVar1;
    puVar1[2] = param_2;
    puVar1[3] = param_1;
    puVar2 = puVar1 + 4;
    puVar1[5] = 0;
    *puVar2 = puVar2;
    puVar1[5] = puVar2;
    for (puVar2 = (uint64_t *)*puVar3; puVar2 != puVar3; puVar2 = (uint64_t *)*puVar2) {
      iVar6 = FUN_1808d7ed0(puVar1,puVar2,0);
      if (iVar6 != 0) {
        FUN_1808d7840(puVar1,&UNK_18095b500,0xc6);
        goto LAB_1808d824e;
      }
      if (puVar2 == puVar3) break;
    }
    iVar6 = 0;
    puVar5 = (uint64_t *)*puVar1;
    if (puVar5 != puVar1) {
      do {
        puVar5 = (uint64_t *)*puVar5;
        iVar6 = iVar6 + 1;
      } while (puVar5 != puVar1);
      if (iVar6 != 0) {
        iVar6 = 0x1c;
        puVar5 = puVar1;
        goto LAB_1808d824e;
      }
    }
    puVar1[1] = param_1[1];
    *puVar1 = param_1;
    param_1[1] = puVar1;
    *(uint64_t **)puVar1[1] = puVar1;
    puVar3 = puVar1;
  }
  puVar5 = puVar3;
  puVar3 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x88,&UNK_180988870,0x1a4,0,0,1);
  if (puVar3 == (uint64_t *)0x0) {
    iVar6 = 0x26;
  }
  else {
    puVar2 = puVar3 + 4;
    *puVar2 = puVar2;
    puVar3[5] = puVar2;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &UNK_180988830;
    puVar2 = puVar3 + 6;
    *puVar2 = puVar2;
    puVar3[7] = puVar2;
    puVar3[8] = param_2;
    puVar3[9] = param_1;
    puVar3[10] = puVar1;
    puVar3[0xb] = param_4;
    *(int32_t *)(puVar3 + 0xc) = 0x42c80000;
    *(int32_t *)((longlong)puVar3 + 100) = 0x42c80000;
    *(int32_t *)(puVar3 + 0xd) = 0x42c80000;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(int32_t *)(puVar3 + 0x10) = 2;
    uVar4 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))();
    iVar6 = FUN_1808b89f0(uVar4,puVar3);
    if (iVar6 == 0) {
      *param_5 = puVar3;
      return 0;
    }
  }
LAB_1808d824e:
  if (puVar5 != (uint64_t *)0x0) {
    FUN_1808d7840(puVar5,&UNK_18095b500,0xc6);
  }
  return iVar6;
}



uint64_t FUN_1808d82a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  cVar1 = func_0x0001808d8b40(param_2);
  if (cVar1 == '\0') {
    plVar8 = (longlong *)0x0;
    do {
      plVar7 = (longlong *)*param_2;
      plVar2 = plVar8;
      if ((plVar7 != param_2) && (plVar7 != (longlong *)0x0)) {
        plVar2 = plVar7 + -2;
      }
      plVar7 = plVar2 + 2;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = plVar8;
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_2;
      }
      plVar2 = plVar7 + -2;
      if (plVar7 == (longlong *)0x0) {
        plVar2 = plVar8;
      }
      uVar3 = FUN_1808b1c90(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (plVar7 == param_2) {
        return 0x1c;
      }
      *(longlong *)plVar7[1] = *plVar7;
      *(longlong *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (longlong)plVar7;
      *plVar7 = (longlong)plVar7;
      if (plVar2 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar7 = plVar2 + 2;
      if (plVar7 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar4 = (longlong *)*plVar7;
      plVar6 = plVar8;
      if (plVar4 != plVar7) {
        do {
          plVar4 = (longlong *)*plVar4;
          uVar5 = (int)plVar6 + 1;
          plVar6 = (longlong *)(ulonglong)uVar5;
        } while (plVar4 != plVar7);
        if (uVar5 != 0) {
          return 0x1c;
        }
      }
      plVar2[3] = *(longlong *)(param_1 + 0x58);
      *plVar7 = param_1 + 0x50;
      *(longlong **)(param_1 + 0x58) = plVar7;
      *(longlong **)plVar2[3] = plVar7;
      cVar1 = func_0x0001808d8b40(param_2);
    } while (cVar1 == '\0');
  }
  return 0;
}



longlong * FUN_1808d83b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lStack_48;
  longlong lStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  plVar5 = (longlong *)0x0;
  plVar2 = (longlong *)(*param_2 + -0x10);
  if (*param_2 == 0) {
    plVar2 = plVar5;
  }
  plVar4 = plVar5;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2 + 2;
  }
  if (plVar4 != param_2) {
    do {
      plVar2 = plVar4 + 2;
      plVar3 = plVar4 + 3;
      if (plVar4 == (longlong *)0x0) {
        plVar2 = (longlong *)0x20;
        plVar3 = (longlong *)0x28;
      }
      lVar1 = *plVar2;
      plVar2 = (longlong *)(*(code *)**(uint64_t **)*plVar3)();
      uStack_38 = *(int32_t *)(param_1 + 0x18);
      uStack_34 = *(int32_t *)(param_1 + 0x1c);
      uStack_30 = *(int32_t *)(param_1 + 0x20);
      uStack_2c = *(int32_t *)(param_1 + 0x24);
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      (**(code **)(*plVar2 + 0x20))(plVar2,&lStack_48);
      if (((lStack_48 == CONCAT44(uStack_34,uStack_38)) &&
          (lStack_40 == CONCAT44(uStack_1c,uStack_20))) &&
         (*(int *)(lVar1 + 0x40) == *(int *)(param_1 + 0x28))) {
        if (plVar4 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        return plVar4 + -2;
      }
      if (plVar4 == param_2) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(*plVar4 + -0x10);
      if (*plVar4 == 0) {
        plVar2 = plVar5;
      }
      plVar4 = plVar5;
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2 + 2;
      }
    } while (plVar4 != param_2);
  }
  return (longlong *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808d84d0(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_1808d77c0(param_2,param_1 + 0x40);
  uVar4 = FUN_1808b2950(param_1,param_2);
  if ((int)uVar4 == 0) {
    cVar3 = func_0x0001808d7720(param_2,param_1 + 0x40);
    if (cVar3 == '\0') {
LAB_1808d85fc:
      uVar4 = 0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x30);
      plVar1 = (longlong *)(param_1 + 0x30);
joined_r0x0001808d8529:
      do {
        if (plVar2 == plVar1) {
LAB_1808d85eb:
          uVar4 = FUN_1808b2f30(param_1,3);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          goto LAB_1808d85fc;
        }
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
        plVar5 = (longlong *)*plVar6;
        if (plVar5 != plVar6) {
          while ((int)plVar5[8] != (int)plVar2[2]) {
            if ((plVar5 == plVar6) || (plVar5 = (longlong *)*plVar5, plVar5 == plVar6))
            goto LAB_1808d856d;
          }
          if ((plVar5 != (longlong *)0x0) && (((int)plVar5[5] != 0 || ((int)plVar5[3] != 0)))) {
            if (plVar2 == plVar1) goto LAB_1808d85eb;
            plVar2 = (longlong *)*plVar2;
            goto joined_r0x0001808d8529;
          }
        }
LAB_1808d856d:
        if (plVar2 != plVar1) {
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(longlong **)plVar2[1] = plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180984b50,0xe1,1);
        }
        uVar4 = FUN_1808d8b60(*(uint64_t *)(param_1 + 0x50));
      } while ((int)uVar4 == 0);
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808d8509(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  
  cVar3 = func_0x0001808d7720();
  if (cVar3 == '\0') {
LAB_1808d85fc:
    uVar4 = 0;
  }
  else {
    plVar2 = *(longlong **)(unaff_RSI + 0x30);
    plVar1 = (longlong *)(unaff_RSI + 0x30);
joined_r0x0001808d8529:
    do {
      if (plVar2 == plVar1) {
LAB_1808d85eb:
        uVar4 = FUN_1808b2f30();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        goto LAB_1808d85fc;
      }
      plVar6 = (longlong *)(*(longlong *)(unaff_RSI + 0x40) + 0x20);
      plVar5 = (longlong *)*plVar6;
      if (plVar5 != plVar6) {
        while ((int)plVar5[8] != (int)plVar2[2]) {
          if ((plVar5 == plVar6) || (plVar5 = (longlong *)*plVar5, plVar5 == plVar6))
          goto LAB_1808d856d;
        }
        if ((plVar5 != (longlong *)0x0) && (((int)plVar5[5] != 0 || ((int)plVar5[3] != 0)))) {
          if (plVar2 == plVar1) goto LAB_1808d85eb;
          plVar2 = (longlong *)*plVar2;
          goto joined_r0x0001808d8529;
        }
      }
LAB_1808d856d:
      if (plVar2 != plVar1) {
        *(longlong *)plVar2[1] = *plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
        *(longlong **)plVar2[1] = plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180984b50,0xe1,1);
      }
      uVar4 = FUN_1808d8b60(*(uint64_t *)(unaff_RSI + 0x50));
    } while ((int)uVar4 == 0);
  }
  return uVar4;
}






