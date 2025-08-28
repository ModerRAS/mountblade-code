#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part075.c - 4 个函数

// 函数: void FUN_1808dc020(int64_t *param_1)
void FUN_1808dc020(int64_t *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_1808dbf90(param_1 + 8);
  FUN_1808dbf90(param_1 + 6);
  FUN_180840270(param_1 + 4);
  uVar2 = *(uint *)((int64_t)param_1 + 0x1c);
  if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0) {
    if (0 < (int)param_1[3]) goto LAB_1808dc0dc;
    if ((0 < (int)uVar2) && (param_1[2] != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[2],&unknown_var_8432_ptr,0x100,1);
    }
    param_1[2] = 0;
    *(int32_t *)((int64_t)param_1 + 0x1c) = 0;
    uVar2 = 0;
  }
  iVar1 = (int)param_1[3];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + param_1[2],0,(int64_t)-iVar1 << 4);
  }
  *(int32_t *)(param_1 + 3) = 0;
  if (0 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    FUN_180748010(param_1 + 2,0);
  }
LAB_1808dc0dc:
  uVar2 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar2) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar2 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset(*param_1 + (int64_t)iVar1 * 8,0,(uint64_t)(uint)-iVar1 << 3);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    FUN_180882f00(param_1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808dc190(uint64_t *param_1)
void FUN_1808dc190(uint64_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  
  *param_1 = &unknown_var_8000_ptr;
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 == 0) {
    lVar6 = param_1[0x45];
    if (lVar6 != 0) {
      uVar1 = 0x6f;
LAB_1808dc214:
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_8016_ptr,uVar1,1);
    }
  }
  else if (iVar3 == 1) {
    if (param_1[0x45] != 0) {
      FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x45],&unknown_var_8432_ptr,0xe9);
    }
  }
  else if ((iVar3 == 3) && (0 < *(int *)(param_1 + 0x47))) {
    lVar6 = param_1[0x46];
    uVar1 = 0x79;
    goto LAB_1808dc214;
  }
  lVar6 = param_1[0x5b];
  if (lVar6 != 0) {
    FUN_1808dc020(lVar6);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_8016_ptr,0x7f,1);
  }
  lVar6 = param_1[0x5c];
  if (lVar6 == 0) {
    if (param_1[0x60] == 0) {
      FUN_180840100(param_1 + 0x59);
      FUN_18084c220(param_1 + 0x57);
      FUN_18084c220(param_1 + 0x55);
      FUN_180840100(param_1 + 0x53);
      FUN_180840100(param_1 + 0x51);
      FUN_18084c220(param_1 + 0x4f);
      FUN_1808c76b0(param_1 + 0x4d);
      FUN_18085dbf0(param_1 + 0x3e);
      FUN_18085dbf0(param_1 + 0x3c);
      FUN_18085dbf0(param_1 + 0x3a);
      FUN_18085dbf0(param_1 + 0x38);
      FUN_18085dbf0(param_1 + 0x36);
      FUN_18085dbf0(param_1 + 0x34);
      FUN_18085dbf0(param_1 + 0x32);
      FUN_18085dbf0(param_1 + 0x30);
      FUN_18085dbf0(param_1 + 0x2e);
      FUN_18085dbf0(param_1 + 0x2c);
      FUN_18085dbf0(param_1 + 0x2a);
      FUN_18085dbf0(param_1 + 0x28);
      FUN_18085dbf0(param_1 + 0x26);
      FUN_18085dbf0(param_1 + 0x24);
      FUN_18085dbf0(param_1 + 0x22);
      FUN_18085dbf0(param_1 + 0x20);
      FUN_18085dbf0(param_1 + 0x1e);
      FUN_18085dbf0(param_1 + 0x1c);
      FUN_18085dbf0(param_1 + 0x1a);
      FUN_18085dbf0(param_1 + 0x18);
      FUN_18085dbf0(param_1 + 0x16);
      FUN_18085dbf0(param_1 + 0x14);
      FUN_18085dbf0(param_1 + 0x12);
      FUN_18085dbf0(param_1 + 0x10);
      FUN_18085dbf0(param_1 + 0xe);
      FUN_18085dbf0(param_1 + 0xc);
      FUN_18085dbf0(param_1 + 10);
      FUN_18085dbf0(param_1 + 8);
      FUN_18085dbf0(param_1 + 6);
      plVar2 = param_1 + 4;
      *(int64_t *)param_1[5] = *plVar2;
      *(uint64_t *)(*plVar2 + 8) = param_1[5];
      param_1[5] = plVar2;
      *plVar2 = (int64_t)plVar2;
      *(int64_t **)param_1[5] = plVar2;
      *(uint64_t *)(*plVar2 + 8) = param_1[5];
      param_1[5] = plVar2;
      *plVar2 = (int64_t)plVar2;
      *param_1 = &unknown_var_1544_ptr;
      *(int32_t *)(param_1 + 1) = 0xdeadf00d;
      return;
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x60],&unknown_var_8016_ptr,0x89,1);
  }
  FUN_1808dbf90(lVar6 + 0x18);
  uVar7 = *(uint *)(lVar6 + 0x14);
  if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0) {
    if (0 < *(int *)(lVar6 + 0x10)) goto LAB_1808dc338;
    if ((0 < (int)uVar7) && (*(int64_t *)(lVar6 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar6 + 8),&unknown_var_8432_ptr,
                    0x100,1);
    }
    *(uint64_t *)(lVar6 + 8) = 0;
    uVar7 = 0;
    *(int32_t *)(lVar6 + 0x14) = 0;
  }
  iVar3 = *(int *)(lVar6 + 0x10);
  if (iVar3 < 0) {
    uVar5 = (uint64_t)(uint)-iVar3;
    puVar4 = (uint64_t *)(*(int64_t *)(lVar6 + 8) + (int64_t)iVar3 * 8);
    if (iVar3 < 0) {
      do {
        if (puVar4 != (uint64_t *)0x0) {
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar7 = *(uint *)(lVar6 + 0x14);
    }
  }
  *(int32_t *)(lVar6 + 0x10) = 0;
  if (0 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
    FUN_180882f00(lVar6 + 8,0);
  }
LAB_1808dc338:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_8016_ptr,0x84,1);
}



uint64_t FUN_1808dc590(uint64_t param_1,uint64_t param_2)

{
  FUN_1808dc190();
  if ((param_2 & 1) != 0) {
    free(param_1,0x308);
  }
  return param_1;
}



uint64_t FUN_1808dc5d0(int64_t param_1)

{
  int in_stack_00000030;
  int8_t auStack_108 [240];
  
  if (*(int *)(param_1 + 8) <= in_stack_00000030) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_108,0,0xe4);
}



int64_t FUN_1808dc7b0(int64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar7) {
    lVar1 = *(int64_t *)(param_1 + 0x30);
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(&uStack_38,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,&uStack_38,0x10);
        uVar5 = (uint)(iVar4 < 0);
        if (uVar5 == 0) {
          if ((-1 < iVar3) && (lVar2 != 0)) {
            return lVar2;
          }
          break;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar5) {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x48) + -1;
  if (-1 < iVar7) {
    lVar1 = *(int64_t *)(param_1 + 0x40);
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(&uStack_38,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,&uStack_38,0x10);
        uVar5 = (uint)(iVar4 < 0);
        if (uVar5 == 0) {
          if ((-1 < iVar3) && (lVar2 != 0)) {
            return lVar2;
          }
          break;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar5) {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x58) + -1;
  if (-1 < iVar7) {
    lVar1 = *(int64_t *)(param_1 + 0x50);
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(&uStack_38,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,&uStack_38,0x10);
        uVar5 = (uint)(iVar4 < 0);
        if (uVar5 == 0) {
          if ((-1 < iVar3) && (lVar2 != 0)) {
            return lVar2;
          }
          break;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar5) {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x68) + -1;
  if (-1 < iVar7) {
    lVar1 = *(int64_t *)(param_1 + 0x60);
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(&uStack_38,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,&uStack_38,0x10);
        uVar5 = (uint)(iVar4 < 0);
        if (uVar5 == 0) {
          if ((-1 < iVar3) && (lVar2 != 0)) {
            return lVar2;
          }
          break;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar5) {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  uStack_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x78) + -1;
  if (-1 < iVar7) {
    lVar1 = *(int64_t *)(param_1 + 0x70);
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(&uStack_38,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,&uStack_38,0x10);
        uVar5 = (uint)(iVar4 < 0);
        if (uVar5 == 0) {
          if (iVar3 < 0) {
            return 0;
          }
          if (lVar2 == 0) {
            return 0;
          }
          return lVar2;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar5) {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808dcad0(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  uint64_t uStackX_20;
  int64_t alStack_108 [2];
  int8_t auStack_f8 [224];
  
  uVar5 = 0;
  uStackX_20 = 0;
  uVar4 = FUN_180749e60(param_2,&uStackX_20,0);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  if (iVar1 == 0) {
    uVar6 = *(uint64_t *)(param_1 + 0x228);
    alStack_108[0] = 0;
    uVar4 = FUN_18078d9d0(uStackX_20,uVar6,0,alStack_108,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar7 = 0;
  }
  else {
    if (1 < iVar1 - 1U) {
      if (iVar1 != 3) {
        return 0x1c;
      }
                    // WARNING: Subroutine does not return
      memset(auStack_f8,0,0xe0);
    }
    alStack_108[0] = 0;
    uVar4 = FUN_18078de70(uStackX_20,alStack_108);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar7 = *(int32_t *)(param_1 + 0x230);
    uVar6 = *(uint64_t *)(param_1 + 0x228);
  }
  lVar2 = alStack_108[0];
  uVar3 = FUN_180769c60(alStack_108[0],uVar6,uVar7,0,0);
  if (uVar3 == 0) {
    *param_3 = alStack_108[0];
  }
  else {
    uVar5 = (uint64_t)uVar3;
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xb8,1);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808dcb12(int param_1)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  int32_t uVar5;
  uint64_t unaff_R14;
  uint64_t in_stack_00000030;
  
  if (param_1 == 0) {
    uVar4 = *(uint64_t *)(unaff_RDI + 0x228);
    in_stack_00000030 = unaff_R14;
    uVar2 = FUN_18078d9d0(*(uint64_t *)(unaff_RBP + 0x58),uVar4,0,&stack0x00000030);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar5 = 0;
  }
  else {
    if (1 < param_1 - 1U) {
      if (param_1 != 3) {
        return 0x1c;
      }
                    // WARNING: Subroutine does not return
      memset(&stack0x00000040,0,0xe0);
    }
    in_stack_00000030 = unaff_R14;
    uVar2 = FUN_18078de70(*(uint64_t *)(unaff_RBP + 0x58),&stack0x00000030);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar5 = *(int32_t *)(unaff_RDI + 0x230);
    uVar4 = *(uint64_t *)(unaff_RDI + 0x228);
  }
  uVar2 = in_stack_00000030;
  uVar1 = FUN_180769c60(in_stack_00000030,uVar4,uVar5,0);
  uVar3 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar3 = unaff_R14 & 0xffffffff;
    *unaff_RSI = in_stack_00000030;
  }
  else if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar2,&unknown_var_2144_ptr,0xb8,1);
  }
  return uVar3;
}






// 函数: void FUN_1808dcc7d(void)
void FUN_1808dcc7d(void)

{
  return;
}



uint64_t FUN_1808dcca0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  
  uVar3 = FUN_1808dbae0(param_2,param_1,0);
  if (((int)uVar3 == 0) &&
     ((uVar4 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f, iVar1 = *(int *)(param_1 + 8),
      iVar1 <= (int)((*(uint *)(param_1 + 0x1c) ^ uVar4) - uVar4) ||
      (uVar3 = FUN_180748010(param_1 + 0x10,iVar1), (int)uVar3 == 0)))) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 < iVar1) {
                    // WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x10 + *(int64_t *)(param_1 + 0x10),0,(int64_t)(iVar1 - iVar2) << 4
            );
    }
    *(int *)(param_1 + 0x18) = iVar1;
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808dccc2(uint64_t param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  iVar1 = *(int *)(unaff_RDI + 8);
  if (((int)((in_EAX ^ param_2) - param_2) < iVar1) &&
     (uVar3 = FUN_180748010(unaff_RDI + 0x10,iVar1), (int)uVar3 != 0)) {
    return uVar3;
  }
  iVar2 = *(int *)(unaff_RDI + 0x18);
  if (iVar1 <= iVar2) {
    *(int *)(unaff_RDI + 0x18) = iVar1;
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 * 0x10 + *(int64_t *)(unaff_RDI + 0x10),0,(int64_t)(iVar1 - iVar2) << 4);
}






// 函数: void FUN_1808dcd0d(void)
void FUN_1808dcd0d(void)

{
  return;
}



uint64_t FUN_1808dcd20(int64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  uVar4 = param_2[1];
  *(uint64_t *)(param_1 + 0x220) = *param_2;
  *(uint64_t *)(param_1 + 0x228) = uVar4;
  uVar4 = param_2[3];
  *(uint64_t *)(param_1 + 0x230) = param_2[2];
  *(uint64_t *)(param_1 + 0x238) = uVar4;
  uVar4 = param_2[5];
  *(uint64_t *)(param_1 + 0x240) = param_2[4];
  *(uint64_t *)(param_1 + 0x248) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x34);
  uVar2 = *(int32_t *)(param_2 + 7);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x3c);
  *(int32_t *)(param_1 + 0x250) = *(int32_t *)(param_2 + 6);
  *(int32_t *)(param_1 + 0x254) = uVar1;
  *(int32_t *)(param_1 + 600) = uVar2;
  *(int32_t *)(param_1 + 0x25c) = uVar3;
  *(uint64_t *)(param_1 + 0x260) = param_2[8];
  if ((*(int *)(param_1 + 0x220) == 0) && (*(int64_t *)(param_1 + 0x228) != 0)) {
    lVar5 = FUN_18076b520();
    *(int64_t *)(param_1 + 0x228) = lVar5;
    if (lVar5 == 0) {
      return 0x26;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




