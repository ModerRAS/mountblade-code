#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part019.c - 7 个函数

// 函数: void FUN_1808affb0(int64_t param_1,uint *param_2)
void FUN_1808affb0(int64_t param_1,uint *param_2)

{
  uint uVar1;
  uint64_t *puVar2;
  uint auStackX_10 [6];
  
  uVar1 = *param_2;
  puVar2 = *(uint64_t **)(param_1 + 8);
  if (uVar1 < 0x8000) {
    auStackX_10[0] = CONCAT22(auStackX_10[0]._2_2_,(short)uVar1);
    (**(code **)*puVar2)(puVar2,auStackX_10,2);
    return;
  }
  auStackX_10[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
  (**(code **)*puVar2)(puVar2,auStackX_10,4);
  return;
}



uint64_t FUN_1808b0010(int64_t param_1,int *param_2)

{
  byte bVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  byte abStackX_10 [8];
  byte abStackX_18 [8];
  
  uVar3 = *param_2 + 1;
  if (uVar3 < 0x80) {
    abStackX_10[0] = (byte)uVar3 & 0x7f;
    uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),abStackX_10,1)
    ;
    return uVar2;
  }
  if (uVar3 != 0) {
    do {
      bVar1 = (byte)uVar3 & 0x7f;
      abStackX_18[0] = bVar1 | 0x80;
      if (uVar3 >> 7 == 0) {
        abStackX_18[0] = bVar1;
      }
      uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),abStackX_18,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      bVar4 = 0x7f < uVar3;
      uVar3 = uVar3 >> 7;
    } while (bVar4);
  }
  return 0;
}



uint64_t FUN_1808b00b0(int64_t param_1,uint *param_2)

{
  byte bVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  byte abStackX_10 [8];
  
  uVar3 = *param_2;
  if (uVar3 < 0x80) {
    abStackX_10[0] = (byte)uVar3 & 0x7f;
    uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),abStackX_10,1)
    ;
    return uVar2;
  }
  if (uVar3 != 0) {
    do {
      bVar1 = (byte)uVar3 & 0x7f;
      abStackX_10[0] = bVar1 | 0x80;
      if (uVar3 >> 7 == 0) {
        abStackX_10[0] = bVar1;
      }
      uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                        (*(uint64_t **)(param_1 + 8),abStackX_10,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      bVar4 = 0x7f < uVar3;
      uVar3 = uVar3 >> 7;
    } while (bVar4);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b0160(int64_t *param_1,uint64_t param_2,int32_t param_3)
void FUN_1808b0160(int64_t *param_1,uint64_t param_2,int32_t param_3)

{
  *(int32_t *)((int64_t)param_1 + 0x44) = 0xffffffff;
  FUN_18084c220(param_1 + 4);
  FUN_18084c220(param_1 + 2);
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  *(int64_t **)param_1[1] = param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_3,1);
}



uint64_t * FUN_1808b0200(uint64_t *param_1,int16_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  *(int32_t *)(param_1 + 1) = 0xb1e55ed1;
  *param_1 = &unknown_var_1544_ptr;
  *(int16_t *)((int64_t)param_1 + 0xe) = 0;
  *(int16_t *)((int64_t)param_1 + 0xc) = param_2;
  puVar2 = (uint64_t *)FUN_180847820();
  uVar1 = puVar2[1];
  param_1[2] = *puVar2;
  param_1[3] = uVar1;
  *param_1 = &unknown_var_936_ptr;
  puVar2 = param_1 + 4;
  param_1[5] = 0;
  *puVar2 = puVar2;
  param_1[5] = puVar2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b02a0(uint64_t *param_1)
void FUN_1808b02a0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  *param_1 = &unknown_var_936_ptr;
  plVar1 = param_1 + 4;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &unknown_var_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar3 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  *(int64_t *)plVar3[1] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  *(int64_t **)plVar3[1] = plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_976_ptr,0x30,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808b0380(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar1 = param_1 + 4;
  *param_1 = &unknown_var_936_ptr;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &unknown_var_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    if ((param_2 & 1) != 0) {
      free(param_1,0x30);
    }
    return param_1;
  }
  plVar3 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  *(int64_t *)plVar3[1] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  *(int64_t **)plVar3[1] = plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_976_ptr,0x30,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808b0386(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar1 = param_1 + 4;
  *param_1 = &unknown_var_936_ptr;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &unknown_var_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    if ((param_2 & 1) != 0) {
      free(param_1,0x30);
    }
    return param_1;
  }
  plVar3 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  *(int64_t *)plVar3[1] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  *(int64_t **)plVar3[1] = plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_976_ptr,0x30,1);
}






// 函数: void FUN_1808b046c(void)
void FUN_1808b046c(void)

{
  free();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808b0490(int64_t param_1,uint param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int iVar6;
  
  if (param_3 == (uint64_t *)0x0) {
    return 0x1f;
  }
  plVar4 = *(int64_t **)(param_1 + 0x20);
  plVar1 = (int64_t *)(param_1 + 0x20);
  if (plVar4 != plVar1) {
    while (*(uint *)(plVar4 + 8) != param_2) {
      if ((plVar4 == plVar1) || (plVar4 = (int64_t *)*plVar4, plVar4 == plVar1))
      goto LAB_1808b04f7;
    }
    if (plVar4 != (int64_t *)0x0) goto LAB_1808b05b5;
  }
LAB_1808b04f7:
  iVar6 = 0;
  plVar4 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_976_ptr,0x41,0,0,1);
  if (plVar4 == (int64_t *)0x0) {
    uVar3 = 0x26;
  }
  else {
    *plVar4 = (int64_t)plVar4;
    plVar4[1] = (int64_t)plVar4;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar5 = (int64_t *)FUN_180847820();
    lVar2 = plVar5[1];
    plVar4[6] = *plVar5;
    plVar4[7] = lVar2;
    *(uint *)(plVar4 + 8) = param_2;
    *(int32_t *)((int64_t)plVar4 + 0x44) = 0;
    *(int32_t *)(plVar4 + 9) = 2;
    plVar5 = (int64_t *)*plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = (int64_t *)*plVar5;
        iVar6 = iVar6 + 1;
      } while (plVar5 != plVar4);
      if (iVar6 != 0) {
        return 0x1c;
      }
    }
    for (plVar5 = (int64_t *)*plVar1; plVar5 != plVar1; plVar5 = (int64_t *)*plVar5) {
      if (param_2 <= *(uint *)(plVar5 + 8)) {
        if ((plVar5 != plVar1) && (*(uint *)(plVar5 + 8) <= param_2)) {
          return 0x1f;
        }
        break;
      }
    }
    plVar4[1] = plVar5[1];
    *plVar4 = (int64_t)plVar5;
    plVar5[1] = (int64_t)plVar4;
    *(int64_t **)plVar4[1] = plVar4;
LAB_1808b05b5:
    *param_3 = plVar4;
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b04b9(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *in_RAX;
  uint64_t uVar3;
  int64_t *plVar4;
  uint unaff_EBP;
  int iVar5;
  uint64_t *unaff_R14;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  plVar1 = (int64_t *)(param_1 + 0x20);
  if (in_RAX != plVar1) {
    while (*(uint *)(in_RAX + 8) != unaff_EBP) {
      if ((in_RAX == plVar1) || (in_RAX = (int64_t *)*in_RAX, in_RAX == plVar1))
      goto LAB_1808b04f7;
    }
    if (in_RAX != (int64_t *)0x0) goto LAB_1808b05b5;
  }
LAB_1808b04f7:
  iVar5 = 0;
  uStack0000000000000030 = 1;
  uStack0000000000000028 = 0;
  in_RAX = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_976_ptr,0x41,0);
  if (in_RAX == (int64_t *)0x0) {
    uVar3 = 0x26;
  }
  else {
    *in_RAX = (int64_t)in_RAX;
    in_RAX[1] = (int64_t)in_RAX;
    in_RAX[2] = 0;
    in_RAX[3] = 0;
    in_RAX[4] = 0;
    in_RAX[5] = 0;
    plVar4 = (int64_t *)FUN_180847820();
    lVar2 = plVar4[1];
    in_RAX[6] = *plVar4;
    in_RAX[7] = lVar2;
    *(uint *)(in_RAX + 8) = unaff_EBP;
    *(int32_t *)((int64_t)in_RAX + 0x44) = 0;
    *(int32_t *)(in_RAX + 9) = 2;
    plVar4 = (int64_t *)*in_RAX;
    if (plVar4 != in_RAX) {
      do {
        plVar4 = (int64_t *)*plVar4;
        iVar5 = iVar5 + 1;
      } while (plVar4 != in_RAX);
      if (iVar5 != 0) {
        return 0x1c;
      }
    }
    for (plVar4 = (int64_t *)*plVar1; plVar4 != plVar1; plVar4 = (int64_t *)*plVar4) {
      if (unaff_EBP <= *(uint *)(plVar4 + 8)) {
        if ((plVar4 != plVar1) && (*(uint *)(plVar4 + 8) <= unaff_EBP)) {
          return 0x1f;
        }
        break;
      }
    }
    in_RAX[1] = plVar4[1];
    *in_RAX = (int64_t)plVar4;
    plVar4[1] = (int64_t)in_RAX;
    *(int64_t **)in_RAX[1] = in_RAX;
LAB_1808b05b5:
    *unaff_R14 = in_RAX;
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808b05d5(int64_t param_1)

{
  uint in_EAX;
  uint64_t uVar1;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RDI;
  uint64_t *unaff_R14;
  
  if ((param_1 == unaff_RDI) || (unaff_EBP < in_EAX)) {
    unaff_RBX[1] = *(int64_t *)(param_1 + 8);
    *unaff_RBX = param_1;
    *(int64_t **)(param_1 + 8) = unaff_RBX;
    *(int64_t **)unaff_RBX[1] = unaff_RBX;
    *unaff_R14 = unaff_RBX;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}



uint64_t FUN_1808b05f0(int64_t *param_1)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x10))();
  if (((int)uVar2 == 0) && (cVar1 = (char)uVar2, uVar2 = uVar2 & 0xffffffff, cVar1 == '\0')) {
    uVar2 = 0x1c;
  }
  return uVar2;
}



uint64_t FUN_1808b0660(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar2 = *(int64_t **)(param_1 + 0x20);
  plVar1 = (int64_t *)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    while ((int)plVar2[8] != param_2) {
      if (plVar2 == plVar1) {
        return 0;
      }
      plVar2 = (int64_t *)*plVar2;
      if (plVar2 == plVar1) {
        return 0;
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_1808b0160(plVar2,&unknown_var_976_ptr,0x4d);
    }
  }
  return 0;
}



uint64_t
FUN_1808b06c0(int64_t *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4,
             byte param_5)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    FUN_1808b0fb0(param_1,0x20);
    puVar4 = (int32_t *)(*param_1 + uVar5);
  }
  else {
    FUN_1808b0fb0(param_1,uVar1 + 0x28);
    lVar2 = *param_1;
    *(int32_t *)(uVar5 + lVar2) = 0x1002;
    puVar4 = (int32_t *)(lVar2 + 4 + uVar5);
    puVar4[8] = 0x30;
  }
  *puVar4 = 0x11;
  uVar3 = param_2[1];
  *(uint64_t *)(puVar4 + 1) = *param_2;
  *(uint64_t *)(puVar4 + 3) = uVar3;
  puVar4[6] = param_3;
  puVar4[5] = ((param_5 ^ 1) + 0x28) * 0x200 | 0x20;
  puVar4[7] = param_4;
  return 0;
}






// 函数: void FUN_1808b0820(uint64_t *param_1,uint64_t param_2)
void FUN_1808b0820(uint64_t *param_1,uint64_t param_2)

{
  uint64_t *puStack_18;
  uint64_t uStack_10;
  
  uStack_10 = *param_1;
  puStack_18 = param_1;
  FUN_1808b0850(param_2,&puStack_18);
  return;
}



uint FUN_1808b0850(int64_t param_1,int64_t param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte abStackX_18 [8];
  int8_t auStackX_20 [8];
  int32_t auStack_28 [4];
  
  bVar7 = 1;
  auStack_28[0] = 0;
  abStackX_18[0] = 1;
  cVar2 = func_0x0001808b0f90(param_2);
  do {
    if (cVar2 == '\0') {
LAB_1808b09a7:
      return (uint)bVar7;
    }
    puVar1 = *(uint **)(param_2 + 8);
    uVar6 = *puVar1 & 0xf0;
    if (uVar6 == 0) {
      switch((char)*puVar1) {
      case '\0':
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x12':
      case '0':
        puVar4 = puVar1 + 1;
        break;
      default:
        puVar4 = (uint *)0x0;
        break;
      case '\x10':
        puVar4 = puVar1 + 2;
        break;
      case '\x11':
        puVar4 = puVar1 + 5;
        break;
      case ' ':
        puVar4 = puVar1 + 3;
      }
      *(uint **)(param_2 + 8) = puVar4;
      bVar5 = 0;
      uVar3 = *puVar1;
      uVar6 = uVar3 & 0xff;
      if ((char)uVar3 == '\0') {
        bVar5 = 0;
      }
      else if (uVar6 == 1) {
        bVar5 = 1;
      }
      else if (uVar6 == 2) {
        bVar5 = FUN_1808b0850(param_1,param_2);
        uVar3 = *puVar1;
      }
      else if (uVar6 == 3) {
        bVar5 = (byte)(*(uint *)(param_1 + 0x2d8) >> 0xf) & 1;
      }
      uVar3 = uVar3 & 0xff00;
      if (uVar3 < 0x1201) {
        if (uVar3 == 0x1200) {
          abStackX_18[0] = bVar7 != bVar5;
        }
        else {
          abStackX_18[0] = bVar5;
          if (uVar3 != 0) {
            if (uVar3 != 0x100) {
              if (uVar3 == 0x1000) goto joined_r0x0001808b09fa;
              if (uVar3 != 0x1100) goto LAB_1808b0a1d;
              if (bVar7 != 0) goto LAB_1808b0991;
              goto joined_r0x0001808b09fe;
            }
            abStackX_18[0] = bVar5 ^ 1;
          }
        }
      }
      else if (uVar3 == 0x1300) {
        if ((bVar7 == 0) || (bVar5 == 0)) {
LAB_1808b0991:
          abStackX_18[0] = 1;
        }
        else {
          abStackX_18[0] = 0;
        }
      }
      else if (uVar3 == 0x1400) {
joined_r0x0001808b09fa:
        if (bVar7 == 0) {
joined_r0x0001808b09fe:
          if (bVar5 == 0) goto LAB_1808b0991;
        }
        abStackX_18[0] = 0;
      }
      else {
        if ((uVar3 != 0x1500) && (uVar3 != 0x1600)) goto LAB_1808b0a1d;
        abStackX_18[0] = bVar7 == bVar5;
      }
    }
    else {
      uVar3 = uVar6 - 0x10;
      if ((uVar3 & 0xffffffef) != 0) {
        if (uVar6 != 0x30) {
LAB_1808b0a1d:
          return uVar3 & 0xffffff00;
        }
        func_0x0001808b0770(param_2);
        goto LAB_1808b09a7;
      }
      FUN_1808b0a70(param_1,param_2,auStack_28,abStackX_18,auStackX_20);
    }
    bVar7 = abStackX_18[0];
    cVar2 = func_0x0001808b0f90(param_2);
  } while( true );
}






// 函数: void FUN_1808b0a70(uint64_t param_1,int64_t param_2,float *param_3,int8_t *param_4,
void FUN_1808b0a70(uint64_t param_1,int64_t param_2,float *param_3,int8_t *param_4,
                  int8_t *param_5)

{
  float fVar1;
  uint *puVar2;
  char cVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int8_t auStackX_10 [8];
  int8_t auStack_38 [4];
  float afStack_34 [7];
  
  puVar2 = *(uint **)(param_2 + 8);
  func_0x0001808b0770(param_2);
  fVar7 = 0.0;
  uVar5 = *puVar2 & 0xff;
  uVar6 = *puVar2 & 0xff00;
  if (uVar5 == 0x10) {
    afStack_34[0] = (float)puVar2[1];
  }
  else {
    afStack_34[0] = fVar7;
    if (uVar5 == 0x11) {
      lVar4 = FUN_18085fdf0(param_1,puVar2 + 1);
      if (lVar4 != 0) {
        afStack_34[0] = *(float *)(lVar4 + 0x28);
      }
    }
    else if (uVar5 == 0x12) {
      afStack_34[0] = 0.0;
      auStackX_10[0] = 1;
      auStack_38[0] = 0;
      cVar3 = func_0x0001808b0f90(param_2);
      fVar1 = afStack_34[0];
      while ((afStack_34[0] = fVar7, cVar3 != '\0' &&
             (afStack_34[0] = fVar1,
             FUN_1808b0a70(param_1,param_2,afStack_34,auStack_38,auStackX_10),
             **(char **)(param_2 + 8) != '0'))) {
        cVar3 = func_0x0001808b0f90(param_2);
        fVar7 = afStack_34[0];
        fVar1 = afStack_34[0];
      }
    }
    else if (uVar5 == 0x20) {
      fVar7 = (float)puVar2[1];
      afStack_34[0] = (float)puVar2[2];
      if (uVar6 == 0x4000) {
        fVar1 = *param_3;
        if ((fVar7 <= fVar1) && (fVar7 = fVar1, afStack_34[0] <= fVar1)) {
          fVar7 = afStack_34[0];
        }
        *param_3 = fVar7;
        return;
      }
      if (uVar6 == 0x5000) {
        *param_5 = 0;
        if ((fVar7 <= *param_3) && (*param_3 <= afStack_34[0])) {
          *param_4 = 1;
          return;
        }
        goto LAB_1808b0d17;
      }
      if (uVar6 == 0x5100) {
        *param_5 = 0;
        if ((*param_3 < fVar7) || (afStack_34[0] < *param_3)) {
LAB_1808b0b7f:
          *param_4 = 1;
          return;
        }
LAB_1808b0b33:
        *param_4 = 0;
        return;
      }
      if (uVar6 == 0x5200) {
        *param_5 = 0;
        if ((fVar7 <= *param_3) && (*param_3 < afStack_34[0])) {
          *param_4 = 1;
          return;
        }
        goto LAB_1808b0d17;
      }
      if (uVar6 == 0x5300) {
        *param_5 = 0;
        if ((*param_3 < fVar7) || (afStack_34[0] <= *param_3)) goto LAB_1808b0b7f;
        goto LAB_1808b0b33;
      }
    }
  }
  if (uVar6 == 0) {
    *param_3 = afStack_34[0];
    *param_5 = 1;
    return;
  }
  uVar5 = *puVar2 & 0xff00;
  if (0x2500 < uVar5) {
    if (uVar5 == 0x3000) {
      afStack_34[0] = afStack_34[0] + *param_3;
    }
    else {
      if (uVar5 == 0x3100) {
        *param_3 = *param_3 - afStack_34[0];
        return;
      }
      if (uVar5 != 0x3200) {
        if (uVar5 == 0x3300) {
          fVar7 = *param_3;
          if (afStack_34[0] <= *param_3) {
            fVar7 = afStack_34[0];
          }
          *param_3 = fVar7;
          return;
        }
        if (uVar5 != 0x3400) {
          return;
        }
        fVar7 = *param_3;
        if (*param_3 <= afStack_34[0]) {
          fVar7 = afStack_34[0];
        }
        *param_3 = fVar7;
        return;
      }
      afStack_34[0] = afStack_34[0] * *param_3;
    }
    *param_3 = afStack_34[0];
    return;
  }
  if (uVar5 == 0x2500) {
    *param_5 = 0;
    *param_4 = *param_3 <= afStack_34[0];
    return;
  }
  if (uVar5 == 0x2000) {
    *param_5 = 0;
    if (afStack_34[0] != *param_3) goto LAB_1808b0d17;
  }
  else {
    if (uVar5 != 0x2100) {
      if (uVar5 == 0x2200) {
        *param_5 = 0;
        *param_4 = afStack_34[0] < *param_3;
        return;
      }
      if (uVar5 != 0x2300) {
        if (uVar5 != 0x2400) {
          return;
        }
        *param_5 = 0;
        *param_4 = *param_3 <= afStack_34[0] && afStack_34[0] != *param_3;
        return;
      }
      *param_5 = 0;
      *param_4 = afStack_34[0] < *param_3 || afStack_34[0] == *param_3;
      return;
    }
    *param_5 = 0;
    if (afStack_34[0] == *param_3) {
LAB_1808b0d17:
      *param_4 = 0;
      return;
    }
  }
  *param_4 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b0fb0(int64_t *param_1,uint64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  
  lVar2 = 0;
  uVar3 = (uint)param_2;
  if (uVar3 != 0) {
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_1104_ptr,0xd7,0,0,1)
    ;
    if (((lVar2 != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) && (uVar1 < uVar3)) {
                    // WARNING: Subroutine does not return
      memcpy(lVar2,*param_1,uVar1);
    }
  }
  if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_1104_ptr,0xe0,1);
  }
  *param_1 = lVar2;
  *(uint *)(param_1 + 1) = uVar3;
  return 0;
}






// 函数: void FUN_1808b11b0(ushort *param_1,uint64_t param_2,int *param_3,uint *param_4)
void FUN_1808b11b0(ushort *param_1,uint64_t param_2,int *param_3,uint *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar7 = (int)param_2 + -0x21524111 + *param_3;
  uVar8 = uVar7 + *param_4;
  if (((uint64_t)param_1 & 3) == 0) {
    if (0xc < param_2) {
      lVar6 = (param_2 - 0xd) / 0xc + 1;
      param_2 = param_2 + lVar6 * -0xc;
      uVar13 = uVar7;
      do {
        uVar8 = uVar8 + *(int *)(param_1 + 4);
        puVar1 = param_1 + 2;
        iVar5 = *(int *)param_1;
        param_1 = param_1 + 6;
        iVar9 = uVar8 + uVar7 + *(int *)puVar1;
        uVar8 = (uVar8 * 0x10 | uVar8 >> 0x1c) ^ (iVar5 - uVar8) + uVar13;
        iVar11 = uVar8 + iVar9;
        uVar7 = (uVar8 << 6 | uVar8 >> 0x1a) ^ (uVar7 + *(int *)puVar1) - uVar8;
        iVar5 = uVar7 + iVar11;
        uVar7 = (uVar7 << 8 | uVar7 >> 0x18) ^ iVar9 - uVar7;
        iVar9 = uVar7 + iVar5;
        uVar7 = (uVar7 << 0x10 | uVar7 >> 0x10) ^ iVar11 - uVar7;
        uVar13 = uVar7 + iVar9;
        uVar8 = (uVar7 >> 0xd | uVar7 << 0x13) ^ iVar5 - uVar7;
        uVar7 = uVar8 + uVar13;
        uVar8 = (uVar8 << 4 | uVar8 >> 0x1c) ^ iVar9 - uVar8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (0xc < param_2) goto LAB_1808b161e;
    }
                    // WARNING: Could not recover jumptable at 0x0001808b12a8. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)((uint64_t)*(uint *)(&unknown_var_6220_ptr + param_2 * 4) + 0x180000000))();
    return;
  }
  if (((uint64_t)param_1 & 1) == 0) {
    if (0xc < param_2) {
      lVar6 = (param_2 - 0xd) / 0xc + 1;
      param_2 = param_2 + lVar6 * -0xc;
      uVar13 = uVar7;
      do {
        uVar4 = *param_1;
        iVar5 = param_1[2] + uVar7 + (uint)param_1[3] * 0x10000;
        uVar7 = param_1[4] + uVar8 + (uint)param_1[5] * 0x10000;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 6;
        iVar9 = uVar7 + iVar5;
        uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) ^
                (((uint)*puVar1 * 0x10000 + (uint)uVar4) - uVar7) + uVar13;
        iVar11 = uVar7 + iVar9;
        uVar7 = (uVar7 << 6 | uVar7 >> 0x1a) ^ iVar5 - uVar7;
        iVar5 = uVar7 + iVar11;
        uVar7 = (uVar7 << 8 | uVar7 >> 0x18) ^ iVar9 - uVar7;
        iVar9 = uVar7 + iVar5;
        uVar7 = (uVar7 << 0x10 | uVar7 >> 0x10) ^ iVar11 - uVar7;
        uVar13 = uVar7 + iVar9;
        uVar8 = (uVar7 >> 0xd | uVar7 << 0x13) ^ iVar5 - uVar7;
        uVar7 = uVar8 + uVar13;
        uVar8 = (uVar8 << 4 | uVar8 >> 0x1c) ^ iVar9 - uVar8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (0xc < param_2) {
LAB_1808b161e:
        uVar10 = (uVar8 ^ uVar7) - (uVar7 << 0xe | uVar7 >> 0x12);
        uVar8 = (uVar10 ^ uVar13) - (uVar10 * 0x800 | uVar10 >> 0x15);
        uVar12 = (uVar7 ^ uVar8) - (uVar8 >> 7 | uVar8 * 0x2000000);
        uVar13 = (uVar10 ^ uVar12) - (uVar12 * 0x10000 | uVar12 >> 0x10);
        uVar7 = (uVar13 ^ uVar8) - (uVar13 * 0x10 | uVar13 >> 0x1c);
        uVar7 = (uVar12 ^ uVar7) - (uVar7 * 0x4000 | uVar7 >> 0x12);
        *param_3 = (uVar13 ^ uVar7) - (uVar7 >> 8 | uVar7 * 0x1000000);
        *param_4 = uVar7;
        return;
      }
    }
                    // WARNING: Could not recover jumptable at 0x0001808b1420. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)((uint64_t)*(uint *)(&unknown_var_6272_ptr + param_2 * 4) + 0x180000000))();
    return;
  }
  if (0xc < param_2) {
    lVar6 = (param_2 - 0xd) / 0xc + 1;
    param_2 = param_2 + lVar6 * -0xc;
    uVar13 = uVar7;
    do {
      iVar5 = (byte)param_1[2] + uVar7 +
              (((uint)*(byte *)((int64_t)param_1 + 7) * 0x100 + (uint)(byte)param_1[3]) * 0x100 +
              (uint)*(byte *)((int64_t)param_1 + 5)) * 0x100;
      puVar1 = param_1 + 1;
      uVar7 = (byte)param_1[4] + uVar8 +
              (((uint)*(byte *)((int64_t)param_1 + 0xb) * 0x100 + (uint)(byte)param_1[5]) * 0x100 +
              (uint)*(byte *)((int64_t)param_1 + 9)) * 0x100;
      pbVar2 = (byte *)((int64_t)param_1 + 3);
      pbVar3 = (byte *)((int64_t)param_1 + 1);
      uVar4 = *param_1;
      param_1 = param_1 + 6;
      iVar9 = uVar7 + iVar5;
      uVar7 = (uVar7 * 0x10 | uVar7 >> 0x1c) ^
              (((((uint)*pbVar2 * 0x100 + (uint)(byte)*puVar1) * 0x100 + (uint)*pbVar3) * 0x100 +
               (uint)(byte)uVar4) - uVar7) + uVar13;
      iVar11 = uVar7 + iVar9;
      uVar7 = (uVar7 << 6 | uVar7 >> 0x1a) ^ iVar5 - uVar7;
      iVar5 = uVar7 + iVar11;
      uVar7 = (uVar7 << 8 | uVar7 >> 0x18) ^ iVar9 - uVar7;
      iVar9 = uVar7 + iVar5;
      uVar7 = (uVar7 << 0x10 | uVar7 >> 0x10) ^ iVar11 - uVar7;
      uVar13 = uVar7 + iVar9;
      uVar8 = (uVar7 >> 0xd | uVar7 << 0x13) ^ iVar5 - uVar7;
      uVar7 = uVar8 + uVar13;
      uVar8 = (uVar8 << 4 | uVar8 >> 0x1c) ^ iVar9 - uVar8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (0xc < param_2) goto LAB_1808b161e;
  }
                    // WARNING: Could not recover jumptable at 0x0001808b15b2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((uint64_t)*(uint *)(&unknown_var_6324_ptr + param_2 * 4) + 0x180000000))();
  return;
}






