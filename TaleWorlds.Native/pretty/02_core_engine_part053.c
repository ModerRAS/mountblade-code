#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part053.c - 10 个函数

// 函数: void FUN_18008edcf(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_18008edcf(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  byte bVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t in_stack_00000060;
  
  uVar2 = in_RAX - (int64_t)param_1;
joined_r0x00018008edee:
  if (((int64_t)(uVar2 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
    if (param_3 == 0) {
      lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      if (1 < lVar7) {
        lVar3 = (lVar7 + -2 >> 1) + 1;
        do {
          in_stack_00000060 = param_1[lVar3 + -1];
          lVar3 = lVar3 + -1;
          FUN_18008fa70(param_1,lVar3,lVar7,lVar3,&stack0x00000060);
        } while (lVar3 != 0);
      }
      if (1 < lVar7) {
        param_2 = param_2 + -1;
        do {
          in_stack_00000060 = *param_2;
          *param_2 = *param_1;
          FUN_18008fa70(param_1,0,lVar7 + -1,0,&stack0x00000060);
          param_2 = param_2 + -1;
          lVar7 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar7);
      }
    }
    return;
  }
  lVar7 = *param_1;
  lVar3 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (lVar3 < 0) {
    lVar3 = lVar3 + 1;
  }
  lVar3 = param_1[lVar3 >> 1];
  plVar8 = param_1;
  plVar11 = param_2;
  if (*(int *)(lVar3 + 0x78) == 0) {
LAB_18008eecc:
    lVar9 = param_2[-1];
    lVar10 = lVar3;
    if ((*(int *)(lVar9 + 0x78) == 0) || (lVar10 = lVar7, *(int *)(lVar7 + 0x78) == 0))
    goto LAB_18008ef40;
    pbVar4 = *(byte **)(lVar9 + 0x70);
    lVar10 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
    do {
      bVar1 = *pbVar4;
      uVar5 = (uint)pbVar4[lVar10];
      if (bVar1 != uVar5) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    lVar10 = lVar7;
    if ((0 < (int)(bVar1 - uVar5)) || (lVar10 = lVar3, *(int *)(lVar9 + 0x78) == 0))
    goto LAB_18008ef40;
    if (*(int *)(lVar3 + 0x78) != 0) {
      pbVar4 = *(byte **)(lVar9 + 0x70);
      lVar10 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar4;
      do {
        uVar5 = (uint)pbVar4[lVar10];
        iVar6 = *pbVar4 - uVar5;
        lVar7 = lVar3;
        if (*pbVar4 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      goto joined_r0x00018008ef35;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x78) != 0) {
      pbVar4 = *(byte **)(lVar3 + 0x70);
      lVar9 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar9];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18008eecc;
    }
    lVar9 = param_2[-1];
    lVar10 = lVar7;
    if (*(int *)(lVar9 + 0x78) == 0) goto LAB_18008ef40;
    pbVar4 = *(byte **)(lVar9 + 0x70);
    lVar10 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar4;
    do {
      bVar1 = *pbVar4;
      uVar5 = (uint)pbVar4[lVar10];
      if (bVar1 != uVar5) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    lVar10 = lVar3;
    if ((0 < (int)(bVar1 - uVar5)) || (lVar10 = lVar7, *(int *)(lVar9 + 0x78) == 0))
    goto LAB_18008ef40;
    if (*(int *)(lVar7 + 0x78) != 0) {
      pbVar4 = *(byte **)(lVar9 + 0x70);
      lVar3 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
      do {
        uVar5 = (uint)pbVar4[lVar3];
        iVar6 = *pbVar4 - uVar5;
        if (*pbVar4 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
joined_r0x00018008ef35:
      lVar10 = lVar7;
      if (iVar6 < 1) goto LAB_18008ef40;
    }
  }
  lVar10 = lVar9;
LAB_18008ef40:
  do {
    while( true ) {
      lVar7 = *plVar8;
      if (*(int *)(lVar10 + 0x78) == 0) break;
      if (*(int *)(lVar7 + 0x78) != 0) {
        pbVar4 = *(byte **)(lVar10 + 0x70);
        lVar3 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar3];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) break;
      }
      plVar8 = plVar8 + 1;
    }
    do {
      do {
        lVar3 = plVar11[-1];
        plVar11 = plVar11 + -1;
        if (*(int *)(lVar3 + 0x78) == 0) goto LAB_18008efb7;
      } while (*(int *)(lVar10 + 0x78) == 0);
      pbVar4 = *(byte **)(lVar3 + 0x70);
      lVar9 = *(int64_t *)(lVar10 + 0x70) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar9];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
    } while (0 < (int)(bVar1 - uVar5));
LAB_18008efb7:
    if (plVar11 <= plVar8) break;
    *plVar8 = lVar3;
    *plVar11 = lVar7;
    plVar8 = plVar8 + 1;
  } while( true );
  param_3 = param_3 + -1;
  FUN_18008edc0(plVar8,param_2,param_3,param_4);
  uVar2 = (int64_t)plVar8 - (int64_t)param_1;
  param_2 = plVar8;
  goto joined_r0x00018008edee;
}





// 函数: void FUN_18008edf4(void)
void FUN_18008edf4(void)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int8_t unaff_BL;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  
LAB_18008ee00:
  plVar7 = unaff_R14;
  if (0 < unaff_R12) {
    lVar6 = *unaff_R15;
    lVar2 = (int64_t)unaff_R14 - (int64_t)unaff_R15 >> 3;
    if (lVar2 < 0) {
      lVar2 = lVar2 + 1;
    }
    lVar2 = unaff_R15[lVar2 >> 1];
    plVar7 = unaff_R15;
    plVar10 = unaff_R14;
    if (*(int *)(lVar2 + 0x78) == 0) {
LAB_18008eecc:
      lVar8 = unaff_R14[-1];
      lVar9 = lVar2;
      if ((*(int *)(lVar8 + 0x78) == 0) || (lVar9 = lVar6, *(int *)(lVar6 + 0x78) == 0))
      goto LAB_18008ef40;
      pbVar3 = *(byte **)(lVar8 + 0x70);
      lVar9 = *(int64_t *)(lVar6 + 0x70) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      lVar9 = lVar6;
      if ((0 < (int)(bVar1 - uVar4)) || (lVar9 = lVar2, *(int *)(lVar8 + 0x78) == 0))
      goto LAB_18008ef40;
      if (*(int *)(lVar2 + 0x78) != 0) {
        pbVar3 = *(byte **)(lVar8 + 0x70);
        lVar9 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar3;
        do {
          uVar4 = (uint)pbVar3[lVar9];
          iVar5 = *pbVar3 - uVar4;
          lVar6 = lVar2;
          if (*pbVar3 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        goto joined_r0x00018008ef35;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x78) != 0) {
        pbVar3 = *(byte **)(lVar2 + 0x70);
        lVar8 = *(int64_t *)(lVar6 + 0x70) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar8];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_18008eecc;
      }
      lVar8 = unaff_R14[-1];
      lVar9 = lVar6;
      if (*(int *)(lVar8 + 0x78) == 0) goto LAB_18008ef40;
      pbVar3 = *(byte **)(lVar8 + 0x70);
      lVar9 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      lVar9 = lVar2;
      if ((0 < (int)(bVar1 - uVar4)) || (lVar9 = lVar6, *(int *)(lVar8 + 0x78) == 0))
      goto LAB_18008ef40;
      if (*(int *)(lVar6 + 0x78) != 0) {
        pbVar3 = *(byte **)(lVar8 + 0x70);
        lVar2 = *(int64_t *)(lVar6 + 0x70) - (int64_t)pbVar3;
        do {
          uVar4 = (uint)pbVar3[lVar2];
          iVar5 = *pbVar3 - uVar4;
          if (*pbVar3 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
joined_r0x00018008ef35:
        lVar9 = lVar6;
        if (iVar5 < 1) goto LAB_18008ef40;
      }
    }
    lVar9 = lVar8;
LAB_18008ef40:
    do {
      while( true ) {
        lVar6 = *plVar7;
        if (*(int *)(lVar9 + 0x78) == 0) break;
        if (*(int *)(lVar6 + 0x78) != 0) {
          pbVar3 = *(byte **)(lVar9 + 0x70);
          lVar2 = *(int64_t *)(lVar6 + 0x70) - (int64_t)pbVar3;
          do {
            bVar1 = *pbVar3;
            uVar4 = (uint)pbVar3[lVar2];
            if (bVar1 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          if ((int)(bVar1 - uVar4) < 1) break;
        }
        plVar7 = plVar7 + 1;
      }
      do {
        do {
          lVar2 = plVar10[-1];
          plVar10 = plVar10 + -1;
          if (*(int *)(lVar2 + 0x78) == 0) goto LAB_18008efb7;
        } while (*(int *)(lVar9 + 0x78) == 0);
        pbVar3 = *(byte **)(lVar2 + 0x70);
        lVar8 = *(int64_t *)(lVar9 + 0x70) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar8];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
      } while (0 < (int)(bVar1 - uVar4));
LAB_18008efb7:
      if (plVar10 <= plVar7) goto LAB_18008efcb;
      *plVar7 = lVar2;
      *plVar10 = lVar6;
      plVar7 = plVar7 + 1;
    } while( true );
  }
  goto LAB_18008eff7;
LAB_18008efcb:
  unaff_R12 = unaff_R12 + -1;
  FUN_18008edc0(plVar7,unaff_R14,unaff_R12,unaff_BL);
  unaff_R14 = plVar7;
  if ((int64_t)((int64_t)plVar7 - (int64_t)unaff_R15 & 0xfffffffffffffff8U) < 0xe1) {
LAB_18008eff7:
    if (unaff_R12 == 0) {
      lVar6 = (int64_t)plVar7 - (int64_t)unaff_R15 >> 3;
      if (1 < lVar6) {
        lVar2 = (lVar6 + -2 >> 1) + 1;
        do {
          lVar2 = lVar2 + -1;
          FUN_18008fa70();
        } while (lVar2 != 0);
      }
      if (1 < lVar6) {
        plVar7 = plVar7 + -1;
        do {
          *plVar7 = *unaff_R15;
          FUN_18008fa70();
          plVar7 = plVar7 + -1;
        } while (1 < (8 - (int64_t)unaff_R15) + (int64_t)plVar7 >> 3);
      }
    }
    return;
  }
  goto LAB_18008ee00;
}





// 函数: void FUN_18008effc(void)
void FUN_18008effc(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t unaff_R12;
  int64_t unaff_R14;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000060;
  
  if (unaff_R12 == 0) {
    lVar1 = unaff_R14 - (int64_t)unaff_R15 >> 3;
    if (1 < lVar1) {
      lVar2 = (lVar1 + -2 >> 1) + 1;
      do {
        uStack0000000000000060 = unaff_R15[lVar2 + -1];
        lVar2 = lVar2 + -1;
        FUN_18008fa70();
      } while (lVar2 != 0);
    }
    if (1 < lVar1) {
      puVar3 = (uint64_t *)(unaff_R14 + -8);
      do {
        uStack0000000000000060 = *puVar3;
        *puVar3 = *unaff_R15;
        FUN_18008fa70();
        puVar3 = puVar3 + -1;
      } while (1 < (8 - (int64_t)unaff_R15) + (int64_t)puVar3 >> 3);
    }
  }
  return;
}





// 函数: void FUN_18008f00a(void)
void FUN_18008f00a(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t unaff_R14;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000060;
  
  lVar1 = unaff_R14 - (int64_t)unaff_R15 >> 3;
  if (1 < lVar1) {
    lVar2 = (lVar1 + -2 >> 1) + 1;
    do {
      uStack0000000000000060 = unaff_R15[lVar2 + -1];
      lVar2 = lVar2 + -1;
      FUN_18008fa70();
    } while (lVar2 != 0);
  }
  if (1 < lVar1) {
    puVar3 = (uint64_t *)(unaff_R14 + -8);
    do {
      uStack0000000000000060 = *puVar3;
      *puVar3 = *unaff_R15;
      FUN_18008fa70();
      puVar3 = puVar3 + -1;
    } while (1 < (8 - (int64_t)unaff_R15) + (int64_t)puVar3 >> 3);
  }
  return;
}





// 函数: void FUN_18008f0d0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_18008f0d0(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  lVar2 = FUN_18008f430();
  *(int16_t *)(lVar2 + 0x18) = 0;
  uVar1 = ((uint64_t *)*param_3)[1];
  *(uint64_t *)(lVar2 + 0x20) = *(uint64_t *)*param_3;
  *(uint64_t *)(lVar2 + 0x28) = uVar1;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  *(uint64_t *)(lVar2 + 0x40) = 0;
  *(int32_t *)(lVar2 + 0x48) = 0xffffffff;
  *(int32_t *)(lVar2 + 0x4c) = 0xffffffff;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  return;
}



uint64_t *
FUN_18008f140(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t param_5)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  bool bVar7;
  int8_t auStack_30 [24];
  
  if (param_1[1] == 0) {
    FUN_18008f470(param_1,param_2,1,*param_1);
    return param_2;
  }
  plVar1 = (int64_t *)*param_1;
  if (param_3 == (int64_t *)*plVar1) {
    iVar3 = memcmp(param_4,param_3 + 4,0x10);
    if (iVar3 < 0) {
      FUN_18008f470(param_1,param_2,1,param_3);
      return param_2;
    }
  }
  else if (param_3 == plVar1) {
    lVar2 = plVar1[2];
    iVar3 = memcmp(lVar2 + 0x20,param_4,0x10);
    if (iVar3 < 0) {
      FUN_18008f470(param_1,param_2,0,lVar2);
      return param_2;
    }
  }
  else {
    iVar3 = memcmp(param_4,param_3 + 4,0x10);
    if (iVar3 < 0) {
      if (*(char *)((int64_t)param_3 + 0x19) == '\0') {
        plVar1 = param_3;
        plVar6 = (int64_t *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar5 = plVar6;
            plVar6 = (int64_t *)plVar5[2];
          } while (*(char *)(plVar5[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (int64_t *)plVar5[1];
            if (*(char *)((int64_t)plVar1 + 0x19) != '\0') break;
          } while (plVar5 == (int64_t *)*plVar1);
          if (*(char *)((int64_t)plVar5 + 0x19) == '\0') {
            plVar5 = plVar1;
          }
        }
      }
      else {
        plVar5 = (int64_t *)param_3[2];
      }
      iVar3 = memcmp(plVar5 + 4,param_4,0x10);
      if (iVar3 < 0) {
        if (*(char *)(plVar5[2] + 0x19) != '\0') {
          FUN_18008f470(param_1,param_2,0,plVar5);
          return param_2;
        }
        FUN_18008f470(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    iVar3 = memcmp(param_3 + 4,param_4,0x10);
    if (iVar3 < 0) {
      plVar1 = (int64_t *)param_3[2];
      plVar6 = param_3;
      if (*(char *)(param_3[2] + 0x19) == '\0') {
        do {
          plVar5 = plVar1;
          plVar1 = (int64_t *)*plVar5;
        } while (*(char *)(*plVar5 + 0x19) == '\0');
      }
      else {
        do {
          plVar5 = (int64_t *)plVar6[1];
          if (*(char *)((int64_t)plVar5 + 0x19) != '\0') break;
          bVar7 = plVar6 == (int64_t *)plVar5[2];
          plVar6 = plVar5;
        } while (bVar7);
      }
      if ((plVar5 == (int64_t *)*param_1) || (iVar3 = memcmp(param_4,plVar5 + 4,0x10), iVar3 < 0))
      {
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          FUN_18008f470(param_1,param_2,0,param_3);
          return param_2;
        }
        FUN_18008f470(param_1,param_2,1,plVar5);
        return param_2;
      }
    }
  }
  puVar4 = (uint64_t *)FUN_18008f6a0(param_1,auStack_30,0,param_4,param_5);
  *param_2 = *puVar4;
  return param_2;
}





// 函数: void FUN_18008f430(uint64_t *param_1)
void FUN_18008f430(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_180067110(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}



uint64_t *
FUN_18008f470(int64_t *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5,int64_t *param_6)

{
  char cVar1;
  int64_t *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  if (0x2e8ba2e8ba2e8b8 < (uint64_t)param_1[1]) {
    func_0x00018008d310(0x2e8ba2e8ba2e8b9,param_6);
    __Xlength_error_std__YAXPEBD_Z(&unknown_var_9176_ptr);
    pcVar3 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (int64_t)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = param_6;
    *(int64_t **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(uint64_t **)*param_1) {
        *(int64_t **)*param_1 = param_6;
      }
      goto LAB_18008f4f4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(uint64_t **)(lVar5 + 0x10)) goto LAB_18008f4f4;
  }
  *(int64_t **)(lVar5 + 0x10) = param_6;
LAB_18008f4f4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(int8_t *)(*(int64_t *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (int64_t *)param_6[1];
    plVar7 = *(int64_t **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((int64_t *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(lVar5 + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(int64_t **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (int64_t *)plVar6[2]) {
          func_0x00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(int64_t **)(param_6[1] + 8);
        plVar7 = (int64_t *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(int64_t **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar7;
          plVar7[2] = (int64_t)plVar6;
        }
        else {
          plVar2 = (int64_t *)plVar6[1];
          if (plVar6 == (int64_t *)plVar2[2]) {
            plVar2[2] = (int64_t)plVar7;
            plVar7[2] = (int64_t)plVar6;
          }
          else {
            *plVar2 = (int64_t)plVar7;
            plVar7[2] = (int64_t)plVar6;
          }
        }
LAB_18008f669:
        plVar6[1] = (int64_t)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (int64_t *)*plVar6) {
          func_0x00018008d250(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(int64_t **)(param_6[1] + 8);
        plVar7 = (int64_t *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(int64_t **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (uint64_t *)plVar6[1];
          if (plVar6 == (int64_t *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (int64_t)plVar6;
        goto LAB_18008f669;
      }
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(plVar7 + 3) = 1;
      *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(int64_t **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}



uint64_t *
FUN_18008f6a0(int64_t *param_1,uint64_t *param_2,char param_3,uint64_t param_4,
             uint64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  bool bVar6;
  int8_t auStackX_8 [8];
  
  bVar6 = true;
  puVar4 = (uint64_t *)((uint64_t *)*param_1)[1];
  puVar5 = (uint64_t *)*param_1;
  while (*(char *)((int64_t)puVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      iVar3 = memcmp(param_4,puVar4 + 4,0x10);
      bVar6 = iVar3 < 0;
    }
    else {
      iVar3 = memcmp(puVar4 + 4,param_4,0x10);
      bVar6 = -1 < iVar3;
    }
    puVar5 = puVar4;
    if (bVar6 == false) {
      puVar4 = (uint64_t *)puVar4[2];
    }
    else {
      puVar4 = (uint64_t *)*puVar4;
    }
  }
  puVar4 = puVar5;
  if (bVar6 != false) {
    if (puVar5 == *(uint64_t **)*param_1) {
      puVar4 = (uint64_t *)FUN_18008f470(param_1,auStackX_8,1,puVar5);
      *param_2 = *puVar4;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((int64_t)puVar5 + 0x19) == '\0') {
      puVar2 = (uint64_t *)*puVar5;
      puVar1 = puVar5;
      if (*(char *)((int64_t)*puVar5 + 0x19) == '\0') {
        do {
          puVar4 = puVar2;
          puVar2 = (uint64_t *)puVar4[2];
        } while (*(char *)((int64_t)puVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar4 = puVar1;
          puVar1 = (uint64_t *)puVar4[1];
          if (*(char *)((int64_t)puVar1 + 0x19) != '\0') break;
        } while (puVar4 == (uint64_t *)*puVar1);
        if (*(char *)((int64_t)puVar4 + 0x19) == '\0') {
          puVar4 = puVar1;
        }
      }
    }
    else {
      puVar4 = (uint64_t *)puVar5[2];
    }
  }
  iVar3 = memcmp(puVar4 + 4,param_4,0x10);
  if (iVar3 < 0) {
    puVar4 = (uint64_t *)FUN_18008f470(param_1,auStackX_8,bVar6,puVar5);
    *param_2 = *puVar4;
    *(int8_t *)(param_2 + 1) = 1;
  }
  else {
    free(param_5,0x58);
    *param_2 = puVar4;
    *(int8_t *)(param_2 + 1) = 0;
  }
  return param_2;
}



int64_t * FUN_18008f870(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  int64_t lVar8;
  
  iVar2 = (int)param_1[1];
  iVar3 = (int)param_2[1];
  if (iVar2 == iVar3) {
    if (*(int *)(*param_2 + 0x78) == 0) {
      bVar5 = false;
    }
    else if (*(int *)(*param_1 + 0x78) == 0) {
      bVar5 = true;
    }
    else {
      pbVar6 = *(byte **)(*param_2 + 0x70);
      lVar8 = *(int64_t *)(*param_1 + 0x70) - (int64_t)pbVar6;
      do {
        bVar1 = *pbVar6;
        uVar7 = (uint)pbVar6[lVar8];
        if (bVar1 != uVar7) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      bVar5 = 0 < (int)(bVar1 - uVar7);
    }
  }
  else {
    bVar5 = iVar2 < iVar3;
  }
  iVar4 = (int)param_3[1];
  if (bVar5) {
    if (iVar3 == iVar4) {
      if (*(int *)(*param_3 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*param_2 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar6 = *(byte **)(*param_3 + 0x70);
        lVar8 = *(int64_t *)(*param_2 + 0x70) - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar5 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar5 = iVar3 < iVar4;
    }
    if (bVar5) {
      return param_2;
    }
    if (iVar2 == iVar4) {
      if (*(int *)(*param_3 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*param_1 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar6 = *(byte **)(*param_3 + 0x70);
        lVar8 = *(int64_t *)(*param_1 + 0x70) - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar5 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar5 = iVar2 < iVar4;
    }
    if (bVar5) {
      return param_3;
    }
  }
  else {
    if (iVar2 == iVar4) {
      if (*(int *)(*param_3 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*param_1 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar6 = *(byte **)(*param_3 + 0x70);
        lVar8 = *(int64_t *)(*param_1 + 0x70) - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar5 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar5 = iVar2 < iVar4;
    }
    if (!bVar5) {
      if (iVar3 == iVar4) {
        if (*(int *)(*param_3 + 0x78) == 0) {
          bVar5 = false;
        }
        else if (*(int *)(*param_2 + 0x78) == 0) {
          bVar5 = true;
        }
        else {
          pbVar6 = *(byte **)(*param_3 + 0x70);
          lVar8 = *(int64_t *)(*param_2 + 0x70) - (int64_t)pbVar6;
          do {
            bVar1 = *pbVar6;
            uVar7 = (uint)pbVar6[lVar8];
            if (bVar1 != uVar7) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar7 != 0);
          bVar5 = 0 < (int)(bVar1 - uVar7);
        }
      }
      else {
        bVar5 = iVar3 < iVar4;
      }
      if (!bVar5) {
        return param_2;
      }
      return param_3;
    }
  }
  return param_1;
}





// 函数: void FUN_18008fa70(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_18008fa70(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t *param_5)

{
  byte bVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar7 = param_4 * 2;
  while (lVar4 = lVar7 + 2, lVar4 < param_3) {
    lVar8 = *(int64_t *)(param_1 + -8 + lVar4 * 8);
    lVar2 = *(int64_t *)(param_1 + lVar4 * 8);
    if (*(int *)(lVar8 + 0x78) == 0) {
      bVar3 = false;
    }
    else if (*(int *)(lVar2 + 0x78) == 0) {
      bVar3 = true;
    }
    else {
      pbVar5 = *(byte **)(lVar8 + 0x70);
      lVar8 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      bVar3 = 0 < (int)(bVar1 - uVar6);
    }
    lVar8 = lVar7 + 1;
    if (!bVar3) {
      lVar8 = lVar4;
    }
    *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + lVar8 * 8);
    param_4 = lVar8;
    lVar7 = lVar8 * 2;
  }
  if (lVar4 == param_3) {
    *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + -8 + lVar4 * 8);
    param_4 = lVar7 + 1;
  }
  if (param_4 <= param_2) {
    *(int64_t *)(param_1 + param_4 * 8) = *param_5;
    return;
  }
  do {
    lVar7 = *param_5;
    lVar8 = param_4 + -1 >> 1;
    lVar4 = *(int64_t *)(param_1 + lVar8 * 8);
    if (*(int *)(lVar7 + 0x78) == 0) {
LAB_18008fb99:
      *(int64_t *)(param_1 + param_4 * 8) = lVar7;
      return;
    }
    if (*(int *)(lVar4 + 0x78) != 0) {
      pbVar5 = *(byte **)(lVar7 + 0x70);
      lVar7 = *(int64_t *)(lVar4 + 0x70) - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) {
        lVar7 = *param_5;
        goto LAB_18008fb99;
      }
    }
    *(int64_t *)(param_1 + param_4 * 8) = lVar4;
    param_4 = lVar8;
    if (lVar8 <= param_2) {
      *(int64_t *)(param_1 + lVar8 * 8) = *param_5;
      return;
    }
  } while( true );
}





// 函数: void FUN_18008fb19(void)
void FUN_18008fb19(void)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint uVar4;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_R10;
  int64_t in_R11;
  int64_t *in_stack_00000030;
  
  do {
    lVar5 = *in_stack_00000030;
    lVar6 = in_R10 + -1 >> 1;
    lVar2 = *(int64_t *)(in_R11 + lVar6 * 8);
    if (*(int *)(lVar5 + 0x78) == 0) {
LAB_18008fb99:
      *(int64_t *)(in_R11 + in_R10 * 8) = lVar5;
      return;
    }
    if (*(int *)(lVar2 + 0x78) != 0) {
      pbVar3 = *(byte **)(lVar5 + 0x70);
      lVar5 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar5];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) {
        lVar5 = *in_stack_00000030;
        goto LAB_18008fb99;
      }
    }
    *(int64_t *)(in_R11 + in_R10 * 8) = lVar2;
    in_R10 = lVar6;
    if (lVar6 <= unaff_RSI) {
      *(int64_t *)(in_R11 + lVar6 * 8) = *in_stack_00000030;
      return;
    }
  } while( true );
}





// 函数: void FUN_18008fb96(void)
void FUN_18008fb96(void)

{
  uint64_t *unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  
  *(uint64_t *)(in_R11 + in_R10 * 8) = *unaff_RDI;
  return;
}





// 函数: void FUN_18008fba9(void)
void FUN_18008fba9(void)

{
  int64_t in_R10;
  int64_t in_R11;
  uint64_t *in_stack_00000030;
  
  *(uint64_t *)(in_R11 + in_R10 * 8) = *in_stack_00000030;
  return;
}





