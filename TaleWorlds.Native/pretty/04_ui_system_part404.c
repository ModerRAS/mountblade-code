#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part404.c - 12 个函数

// 函数: void FUN_18088e970(int64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_18088e970(int64_t param_1,int64_t *param_2,int32_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int32_t auStack_148 [4];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  (**(code **)(*param_2 + 8))(param_2,auStack_138,0x100);
  uVar2 = (**(code **)*param_2)(param_2);
  iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  uVar5 = 0;
  iVar7 = iVar1 + 10;
  if (iVar1 < 1) {
    iVar7 = 0;
  }
  uVar6 = uVar5;
  if (iVar7 == 0xb) {
    iVar1 = func_0x00018088c570(*(uint64_t *)(param_1 + 0x158),auStack_148);
    if (iVar1 == 0) {
      uVar6 = auStack_148[0];
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
    if (((piVar3 != (int *)0x0) && (uVar6 = 0, *piVar3 != 0)) &&
       (puVar4 = (int32_t *)(**(code **)(*param_2 + 0x40))(param_2), uVar6 = uVar5,
       puVar4 != (int32_t *)0x0)) {
      uVar6 = *puVar4;
    }
  }
  puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(param_3,iVar7,uVar6,uVar2);
}



uint64_t
FUN_18088ea60(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4,int64_t param_5)

{
  uint64_t uVar1;
  
  if (param_5 == 0) {
    return 0x1c;
  }
  if (param_2 == 0x100001) {
    if (*(char *)(param_5 + 0x188) != '\0') {
      FUN_180768b70(param_5 + 0x178);
      *(int *)(param_5 + 0x18c) = *(int *)(param_5 + 0x18c) + 1;
      if (*(int *)(param_5 + 400) <= *(int *)(param_5 + 0x18c)) {
        if (*(char *)(param_5 + 0x18a) == '\0') {
          if ((*(code **)(param_5 + 0x230) != (code *)0x0) &&
             (uVar1 = (**(code **)(param_5 + 0x230))(), (int)uVar1 != 0)) {
            return uVar1;
          }
        }
        else {
          *(int32_t *)(param_5 + 0x18c) = 0;
          *(int8_t *)(param_5 + 0x18a) = 0;
          uVar1 = FUN_180768910(*(uint64_t *)(param_5 + 0x170));
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
      }
    }
  }
  else if (param_2 == 0x100002) {
    if (*(int *)(param_5 + 0x184) != 0) {
      return 0x1c;
    }
    *(int32_t *)(param_5 + 0x184) = 1;
    if (param_4 != 0) {
      *(uint64_t *)(param_5 + 0x150) = param_3;
      return 0;
    }
  }
  else if (param_2 == 0x100004) {
    if (*(int *)(param_5 + 0x184) != 1) {
      return 0x1c;
    }
    *(int32_t *)(param_5 + 0x184) = 0;
    *(uint64_t *)(param_5 + 0x150) = 0;
  }
  return 0;
}



uint64_t FUN_18088eb60(int64_t param_1)

{
  uint64_t uVar1;
  int aiStackX_8 [8];
  
  if ((*(char *)(param_1 + 0x188) != '\0') &&
     (FUN_180768b70(aiStackX_8), 0x32 < aiStackX_8[0] - *(int *)(param_1 + 0x178))) {
    *(int *)(param_1 + 0x178) = aiStackX_8[0];
    uVar1 = FUN_180768910(*(uint64_t *)(param_1 + 0x170));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018074b8e9)
// WARNING: Removing unreachable block (ram,0x00018074b8ee)
// WARNING: Removing unreachable block (ram,0x00018074b908)

int FUN_18088ebb0(int64_t param_1,int param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t unaff_RDI;
  
  uVar3 = func_0x00018085fa80();
  iVar1 = memcmp(param_3,uVar3,0x30);
  if (iVar1 != 0) {
    iVar1 = func_0x00018074b7b0(param_1,param_2,0x7b);
    iVar2 = FUN_18074b6f0(param_1 + iVar1,param_2 - iVar1,param_3);
    iVar1 = iVar1 + iVar2;
    iVar2 = func_0x00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x2c);
    iVar1 = iVar1 + iVar2;
    iVar2 = FUN_18074b6f0(iVar1 + param_1,param_2 - iVar1,param_3 + 0xc);
    iVar1 = iVar1 + iVar2;
    iVar2 = func_0x00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x2c);
    iVar1 = iVar1 + iVar2;
    iVar2 = FUN_18074b6f0(iVar1 + param_1,param_2 - iVar1,param_3 + 0x18);
    iVar1 = iVar1 + iVar2;
    iVar2 = func_0x00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x2c);
    iVar1 = iVar1 + iVar2;
    iVar2 = FUN_18074b6f0(iVar1 + param_1,param_2 - iVar1,param_3 + 0x24);
    iVar1 = iVar1 + iVar2;
    iVar2 = func_0x00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x7d);
    return iVar2 + iVar1;
  }
  iVar1 = func_0x00018076b690(&unknown_var_7528_ptr);
  if (param_2 < iVar1 + 1) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&unknown_var_552_ptr,&unknown_var_7528_ptr,unaff_RDI);
  }
                    // WARNING: Subroutine does not return
  memcpy(param_1,&unknown_var_7528_ptr,(int64_t)(iVar1 + 1));
}



int FUN_18088ece0(int64_t param_1,uint64_t param_2,int32_t *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_0x00018074b7b0(param_1,param_2,0x7b);
  iVar3 = (int)param_2;
  iVar2 = func_0x00018074b800(param_1 + iVar1,iVar3 - iVar1,*param_3);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7b0(iVar1 + param_1,iVar3 - iVar1,0x2c);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(iVar1 + param_1,iVar3 - iVar1,param_3[1]);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7b0(iVar1 + param_1,iVar3 - iVar1,0x7d);
  return iVar2 + iVar1;
}



uint FUN_18088ed70(int8_t *param_1,int param_2,int64_t param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  if (0 < param_2) {
    *param_1 = 0x7b;
  }
  uVar2 = (uint)(0 < param_2);
  if (param_4 != 0) {
    if (param_2 <= (int)uVar2) {
      return uVar2;
    }
    iVar1 = FUN_18088ece0(param_1 + uVar2,param_2 - uVar2);
    uVar2 = uVar2 + iVar1;
    if (1 < param_4) {
      do {
        if (param_2 <= (int)uVar2) {
          return uVar2;
        }
        iVar3 = uVar2 + 1;
        param_1[(int)uVar2] = 0x2c;
        iVar1 = FUN_18088ece0(param_1 + iVar3,param_2 - iVar3,param_3 + (int64_t)iVar4 * 8);
        uVar2 = iVar3 + iVar1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_4);
    }
  }
  if ((int)uVar2 < param_2) {
    param_1[(int)uVar2] = 0x7d;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



uint64_t FUN_18088ee20(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t auStackX_18 [2];
  
  uVar2 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_18010cbc0(auStackX_18[0],&unknown_var_4576_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}



uint64_t FUN_18088ee60(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t auStackX_18 [2];
  
  uVar2 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_18010cbc0(auStackX_18[0],&unknown_var_2208_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}



uint64_t FUN_18088eea0(uint64_t param_1,float *param_2)

{
  char cVar1;
  double dVar2;
  char *pcVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  float fVar7;
  int32_t uStackX_18;
  int32_t uStackX_1c;
  char *pcStackX_20;
  
  uVar5 = FUN_18088f710(param_1,&uStackX_18);
  if ((int)uVar5 == 0) {
    pcVar3 = (char *)CONCAT44(uStackX_1c,uStackX_18);
    dVar2 = (double)strtod(pcVar3,&pcStackX_20);
    *param_2 = (float)dVar2;
    if (*pcStackX_20 == ' ') {
      if (pcStackX_20 == pcVar3) {
        return 0x13;
      }
    }
    else if (*pcStackX_20 != '\0') {
      cVar1 = *pcVar3;
      lVar6 = FUN_18076b7c0(pcVar3,&unknown_var_7568_ptr);
      if (lVar6 == 0) {
        lVar6 = FUN_18076b7c0(pcVar3,&unknown_var_7572_ptr);
        if (lVar6 == 0) {
          lVar6 = FUN_18076b7c0(pcVar3,&unknown_var_7576_ptr);
          if (lVar6 == 0) {
            lVar6 = FUN_18076b7c0(pcVar3,&unknown_var_7580_ptr);
            if (lVar6 == 0) {
              lVar6 = FUN_18076b7c0(pcVar3,&unknown_var_7584_ptr);
              if (lVar6 == 0) {
                return 0x13;
              }
            }
          }
          fVar4 = NAN;
          fVar7 = -NAN;
        }
        else {
          fVar4 = NAN;
          fVar7 = -NAN;
        }
      }
      else {
        fVar4 = INFINITY;
        fVar7 = -INFINITY;
      }
      if (cVar1 == '-') {
        fVar4 = fVar7;
      }
      *param_2 = fVar4;
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_18088eebb(void)

{
  char cVar1;
  double dVar2;
  float fVar3;
  int64_t lVar4;
  float fVar5;
  float *unaff_RSI;
  char *in_stack_00000040;
  char *in_stack_00000048;
  
  dVar2 = (double)strtod(in_stack_00000040,&stack0x00000048);
  *unaff_RSI = (float)dVar2;
  if (*in_stack_00000048 == ' ') {
    if (in_stack_00000048 == in_stack_00000040) {
      return 0x13;
    }
  }
  else if (*in_stack_00000048 != '\0') {
    cVar1 = *in_stack_00000040;
    lVar4 = FUN_18076b7c0(in_stack_00000040,&unknown_var_7568_ptr);
    if (lVar4 == 0) {
      lVar4 = FUN_18076b7c0(in_stack_00000040,&unknown_var_7572_ptr);
      if (lVar4 == 0) {
        lVar4 = FUN_18076b7c0(in_stack_00000040,&unknown_var_7576_ptr);
        if (lVar4 == 0) {
          lVar4 = FUN_18076b7c0(in_stack_00000040,&unknown_var_7580_ptr);
          if (lVar4 == 0) {
            lVar4 = FUN_18076b7c0(in_stack_00000040,&unknown_var_7584_ptr);
            if (lVar4 == 0) {
              return 0x13;
            }
          }
        }
        fVar3 = NAN;
        fVar5 = -NAN;
      }
      else {
        fVar3 = NAN;
        fVar5 = -NAN;
      }
    }
    else {
      fVar3 = INFINITY;
      fVar5 = -INFINITY;
    }
    if (cVar1 == '-') {
      fVar3 = fVar5;
    }
    *unaff_RSI = fVar3;
  }
  return 0;
}



uint64_t FUN_18088ef0e(int32_t param_1)

{
  char cVar1;
  int32_t uVar2;
  int64_t lVar3;
  char in_CL;
  int32_t uVar4;
  char *unaff_RBX;
  int32_t *unaff_RSI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  
  if (in_CL != '\0') {
    cVar1 = *unaff_RBX;
    lVar3 = FUN_18076b7c0(param_1,&unknown_var_7568_ptr);
    if (lVar3 == 0) {
      lVar3 = FUN_18076b7c0(extraout_XMM0_Da,&unknown_var_7572_ptr);
      if (lVar3 == 0) {
        lVar3 = FUN_18076b7c0(extraout_XMM0_Da_00,&unknown_var_7576_ptr);
        if (lVar3 == 0) {
          lVar3 = FUN_18076b7c0(extraout_XMM0_Da_01,&unknown_var_7580_ptr);
          if (lVar3 == 0) {
            lVar3 = FUN_18076b7c0(extraout_XMM0_Da_02,&unknown_var_7584_ptr);
            if (lVar3 == 0) {
              return 0x13;
            }
          }
        }
        uVar2 = 0x7fffffff;
        uVar4 = 0xffffffff;
      }
      else {
        uVar2 = 0x7fc00000;
        uVar4 = 0xffc00000;
      }
    }
    else {
      uVar2 = 0x7f800000;
      uVar4 = 0xff800000;
    }
    if (cVar1 == '-') {
      uVar2 = uVar4;
    }
    *unaff_RSI = uVar2;
  }
  return 0;
}



uint64_t FUN_18088efaa(void)

{
  int32_t uVar1;
  int32_t *unaff_RSI;
  char unaff_DIL;
  
  uVar1 = 0x7fffffff;
  if (unaff_DIL == '-') {
    uVar1 = 0xffffffff;
  }
  *unaff_RSI = uVar1;
  return 0;
}





// 函数: void FUN_18088efd5(void)
void FUN_18088efd5(void)

{
  return;
}



uint64_t FUN_18088efe0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t auStackX_18 [2];
  
  uVar1 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar1 == 0) {
    *param_2 = auStackX_18[0];
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18088f010(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t auStackX_18 [2];
  
  uVar2 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_18010cbc0(auStackX_18[0],&unknown_var_9020_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}





// 函数: void FUN_18088f050(uint64_t param_1,int64_t param_2)
void FUN_18088f050(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uStackX_18;
  int8_t auStackX_20 [8];
  
  iVar1 = FUN_18088f710(param_1,auStackX_20);
  if ((iVar1 == 0) && (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
    iVar1 = FUN_18010cbc0(uStackX_18,&unknown_var_7592_ptr,param_2,param_2 + 4,param_2 + 8);
    if (((iVar1 == 3) ||
        (((iVar1 = FUN_18088eea0(&uStackX_18,param_2), iVar1 == 0 &&
          (iVar1 = FUN_18088eea0(&uStackX_18,param_2 + 4), iVar1 == 0)) &&
         (iVar1 = FUN_18088eea0(&uStackX_18,param_2 + 8), iVar1 == 0)))) &&
       (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
      iVar1 = FUN_18010cbc0(uStackX_18,&unknown_var_7592_ptr,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14);
      if (((iVar1 == 3) ||
          (((iVar1 = FUN_18088eea0(&uStackX_18,param_2 + 0xc), iVar1 == 0 &&
            (iVar1 = FUN_18088eea0(&uStackX_18,param_2 + 0x10), iVar1 == 0)) &&
           (iVar1 = FUN_18088eea0(&uStackX_18,param_2 + 0x14), iVar1 == 0)))) &&
         (iVar1 = FUN_18088f3a0(auStackX_20,param_2 + 0x18), iVar1 == 0)) {
        FUN_18088f3a0(auStackX_20,param_2 + 0x24);
      }
    }
  }
  return;
}





// 函数: void FUN_18088f06b(void)
void FUN_18088f06b(void)

{
  int iVar1;
  int64_t unaff_RBX;
  uint64_t in_stack_00000060;
  
  iVar1 = FUN_18088f710(&stack0x00000068,&stack0x00000060);
  if (iVar1 == 0) {
    iVar1 = FUN_18010cbc0(in_stack_00000060,&unknown_var_7592_ptr);
    if (((iVar1 == 3) ||
        (((iVar1 = FUN_18088eea0(&stack0x00000060), iVar1 == 0 &&
          (iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 4), iVar1 == 0)) &&
         (iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 8), iVar1 == 0)))) &&
       (iVar1 = FUN_18088f710(&stack0x00000068,&stack0x00000060), iVar1 == 0)) {
      iVar1 = FUN_18010cbc0(in_stack_00000060,&unknown_var_7592_ptr,unaff_RBX + 0xc,unaff_RBX + 0x10,
                            unaff_RBX + 0x14);
      if (((iVar1 == 3) ||
          (((iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 0xc), iVar1 == 0 &&
            (iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 0x10), iVar1 == 0)) &&
           (iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 0x14), iVar1 == 0)))) &&
         (iVar1 = FUN_18088f3a0(&stack0x00000068,unaff_RBX + 0x18), iVar1 == 0)) {
        FUN_18088f3a0(&stack0x00000068,unaff_RBX + 0x24);
      }
    }
  }
  return;
}





// 函数: void FUN_18088f0f7(void)
void FUN_18088f0f7(void)

{
  int iVar1;
  int64_t unaff_RBX;
  uint64_t in_stack_00000060;
  
  iVar1 = FUN_18088f710(&stack0x00000068);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_18010cbc0(in_stack_00000060,&unknown_var_7592_ptr,unaff_RBX + 0xc,unaff_RBX + 0x10,
                        unaff_RBX + 0x14);
  if (iVar1 != 3) {
    iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 0xc);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 0x10);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_18088eea0(&stack0x00000060,unaff_RBX + 0x14);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_18088f3a0(&stack0x00000068,unaff_RBX + 0x18);
  if (iVar1 == 0) {
    FUN_18088f3a0(&stack0x00000068,unaff_RBX + 0x24);
  }
  return;
}





// 函数: void FUN_18088f18b(void)
void FUN_18088f18b(void)

{
  return;
}





// 函数: void FUN_18088f195(void)
void FUN_18088f195(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088f1a0(uint64_t param_1,int64_t param_2)
void FUN_18088f1a0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int8_t auStack_98 [32];
  int64_t lStack_78;
  int8_t *puStack_70;
  int8_t *puStack_68;
  int8_t *puStack_60;
  int8_t *puStack_58;
  int8_t *puStack_50;
  int8_t *puStack_48;
  int8_t *puStack_40;
  int8_t *puStack_38;
  uint64_t uStack_28;
  int8_t auStack_20 [2];
  int8_t auStack_1e [2];
  int8_t auStack_1c [2];
  int8_t auStack_1a [2];
  int8_t auStack_18 [2];
  int8_t auStack_16 [2];
  int8_t auStack_14 [2];
  int8_t auStack_12 [2];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  iVar1 = FUN_18088f710(param_1,&uStack_28);
  if (iVar1 == 0) {
    puStack_38 = auStack_12;
    lStack_78 = param_2 + 6;
    puStack_40 = auStack_14;
    puStack_48 = auStack_16;
    puStack_50 = auStack_18;
    puStack_58 = auStack_1a;
    puStack_60 = auStack_1c;
    puStack_68 = auStack_1e;
    puStack_70 = auStack_20;
    FUN_18010cbc0(uStack_28,&unknown_var_7608_ptr,param_2,param_2 + 4);
    *(int8_t *)(param_2 + 8) = auStack_20[0];
    *(int8_t *)(param_2 + 9) = auStack_1e[0];
    *(int8_t *)(param_2 + 10) = auStack_1c[0];
    *(int8_t *)(param_2 + 0xb) = auStack_1a[0];
    *(int8_t *)(param_2 + 0xc) = auStack_18[0];
    *(int8_t *)(param_2 + 0xd) = auStack_16[0];
    *(int8_t *)(param_2 + 0xe) = auStack_14[0];
    *(int8_t *)(param_2 + 0xf) = auStack_12[0];
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (uint64_t)auStack_98);
}





// 函数: void FUN_18088f2d0(uint64_t param_1,uint64_t *param_2)
void FUN_18088f2d0(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int8_t auStackX_18 [16];
  
  iVar1 = FUN_18088f710(param_1,auStackX_18);
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return;
}



uint64_t FUN_18088f310(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int8_t auStackX_18 [8];
  uint64_t uStackX_20;
  
  uVar2 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar2 == 0) {
    *param_2 = 0;
    uVar2 = FUN_18088f710(auStackX_18,&uStackX_20);
    if ((int)uVar2 == 0) {
      iVar1 = FUN_18010cbc0(uStackX_20,&unknown_var_2208_ptr,param_2);
      if (iVar1 != 1) {
        return 0x13;
      }
      uVar2 = FUN_18088f710(auStackX_18,&uStackX_20);
      if ((int)uVar2 == 0) {
        iVar1 = FUN_18010cbc0(uStackX_20,&unknown_var_2208_ptr,(int64_t)param_2 + 4);
        if (iVar1 != 1) {
          return 0x13;
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18088f3a0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t auStackX_18 [2];
  
  uVar2 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_18010cbc0(auStackX_18[0],&unknown_var_7592_ptr,param_2,param_2 + 4,param_2 + 8);
    if ((iVar1 == 3) ||
       (((uVar2 = FUN_18088eea0(auStackX_18,param_2), (int)uVar2 == 0 &&
         (uVar2 = FUN_18088eea0(auStackX_18,param_2 + 4), (int)uVar2 == 0)) &&
        (uVar2 = FUN_18088eea0(auStackX_18,param_2 + 8), (int)uVar2 == 0)))) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_18088f3c0(uint64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  
  iVar1 = FUN_18010cbc0(param_1,&unknown_var_7592_ptr);
  if (iVar1 != 3) {
    uVar2 = FUN_18088eea0(&stack0x00000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_18088eea0(&stack0x00000050,unaff_RBX + 4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_18088eea0(&stack0x00000050,unaff_RBX + 8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}





// 函数: void FUN_18088f427(void)
void FUN_18088f427(void)

{
  return;
}



uint64_t FUN_18088f430(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t auStackX_18 [2];
  
  uVar2 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_18010cbc0(auStackX_18[0],&unknown_var_7284_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}



uint64_t FUN_18088f470(uint64_t param_1,int8_t *param_2)

{
  uint64_t uVar1;
  uint64_t auStackX_18 [2];
  
  uVar1 = FUN_18088f710(param_1,auStackX_18);
  if ((int)uVar1 == 0) {
    uVar1 = func_0x00018076b420(auStackX_18[0],&unknown_var_2328_ptr);
    if ((int)uVar1 == 0) {
      *param_2 = 1;
      return uVar1;
    }
    uVar1 = func_0x00018076b420(auStackX_18[0],&unknown_var_2336_ptr);
    if ((int)uVar1 == 0) {
      *param_2 = (char)uVar1;
      return uVar1;
    }
    uVar1 = 0x13;
  }
  return uVar1;
}



uint64_t FUN_18088f4d0(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uStackX_20;
  
  uVar2 = FUN_18088f710(param_1,&uStackX_20);
  if ((int)uVar2 == 0) {
    iVar1 = func_0x00018076b690(uStackX_20);
    if (param_3 <= iVar1) {
      return 0x13;
    }
    func_0x00018076b450(param_2,uStackX_20,param_3);
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18088f530(uint64_t param_1,int64_t param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int8_t auStackX_20 [8];
  uint64_t auStack_18 [2];
  
  uVar2 = FUN_18088f710(param_1,auStackX_20);
  if ((int)uVar2 == 0) {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        uVar2 = FUN_18088f710(auStackX_20,auStack_18);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar1 = FUN_18010cbc0(auStack_18[0],&unknown_var_4576_ptr,param_2 + (int64_t)iVar3 * 4);
        if (iVar1 != 1) {
          return 0x13;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18088f54e(void)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t uStackX_20;
  
  iVar3 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar2 = FUN_18088f710(&stack0x00000058,&uStackX_20);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar1 = FUN_18010cbc0(uStackX_20,&unknown_var_4576_ptr,unaff_RSI + (int64_t)iVar3 * 4);
      if (iVar1 != 1) {
        return 0x13;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI);
  }
  return 0;
}





// 函数: void FUN_18088f59d(void)
void FUN_18088f59d(void)

{
  return;
}



uint64_t FUN_18088f5a8(void)

{
  return 0x13;
}



uint64_t FUN_18088f5c0(uint64_t param_1,int64_t param_2,int param_3)

{
  uint64_t uVar1;
  int iVar2;
  int8_t auStackX_20 [8];
  
  uVar1 = FUN_18088f710(param_1,auStackX_20);
  if ((int)uVar1 == 0) {
    iVar2 = 0;
    if (0 < param_3) {
      do {
        uVar1 = FUN_18088eea0(auStackX_20,param_2 + (int64_t)iVar2 * 4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18088f5de(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t unaff_RSI;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar1 = FUN_18088eea0(&stack0x00000048,unaff_RSI + (int64_t)iVar2 * 4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EDI);
  }
  return 0;
}





// 函数: void FUN_18088f612(void)
void FUN_18088f612(void)

{
  return;
}



uint64_t FUN_18088f620(uint64_t param_1,int64_t param_2,int param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  int8_t auStackX_20 [8];
  int8_t auStack_28 [8];
  uint64_t uStack_20;
  uint64_t auStack_18 [2];
  
  uVar3 = FUN_18088f710(param_1,auStack_28);
  if ((int)uVar3 == 0) {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        puVar1 = (uint64_t *)(param_2 + (int64_t)iVar4 * 8);
        uVar3 = FUN_18088f710(auStack_28,auStackX_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *puVar1 = 0;
        uVar3 = FUN_18088f710(auStackX_20,&uStack_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar2 = FUN_18010cbc0(uStack_20,&unknown_var_2208_ptr,puVar1);
        if (iVar2 != 1) {
          return 0x13;
        }
        uVar3 = FUN_18088f710(auStackX_20,auStack_18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar2 = FUN_18010cbc0(auStack_18[0],&unknown_var_2208_ptr,(int64_t)puVar1 + 4);
        if (iVar2 != 1) {
          return 0x13;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_18088f643(void)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  int unaff_ESI;
  int64_t unaff_R14;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  
  iVar4 = 0;
  if (0 < unaff_ESI) {
    do {
      puVar1 = (uint64_t *)(unaff_R14 + (int64_t)iVar4 * 8);
      uVar3 = FUN_18088f710(auStackX_20,&stack0x00000068);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar1 = 0;
      uVar3 = FUN_18088f710(&stack0x00000068,&stack0x00000028);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar2 = FUN_18010cbc0(in_stack_00000028,&unknown_var_2208_ptr,puVar1);
      if (iVar2 != 1) {
        return 0x13;
      }
      uVar3 = FUN_18088f710(&stack0x00000068,&stack0x00000030);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar2 = FUN_18010cbc0(in_stack_00000030,&unknown_var_2208_ptr,(int64_t)puVar1 + 4);
      if (iVar2 != 1) {
        return 0x13;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_ESI);
  }
  return 0;
}





