#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part005.c - 13 个函数

// 函数: void FUN_1808a8b72(void)
void FUN_1808a8b72(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8bb0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *puStack_58;
  int8_t auStack_50 [40];
  
  uVar3 = FUN_1808ddc20(param_1,auStack_50,1,param_3);
  if ((int)uVar3 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStackX_20[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              puVar4 = (uint64_t *)
                       FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_18084c050(puVar4,0,1);
              *puVar4 = &unknown_var_1472_ptr;
              puVar4[9] = &unknown_var_1520_ptr;
              puStack_58 = puVar4;
              iVar2 = FUN_18089ae50(puVar4,param_1,0x53554249,0x42534249,1);
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_58), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_50);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8bdc(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000b8;
  
  iStack00000000000000b8 = 0;
  uVar1 = FUN_1808de650();
  if (iStack00000000000000b8 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000b8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000b8) {
          do {
            puVar4 = (uint64_t *)
                     FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_18084c050(puVar4,0,1);
            *puVar4 = &unknown_var_1472_ptr;
            puVar4[9] = &unknown_var_1520_ptr;
            iVar2 = FUN_18089ae50(puVar4);
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000b8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a8c3f(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int unaff_R15D;
  int in_stack_000000b8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_18084c050(puVar2,0,1);
        *puVar2 = &unknown_var_1472_ptr;
        puVar2[9] = &unknown_var_1520_ptr;
        iVar1 = FUN_18089ae50(puVar2);
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < in_stack_000000b8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a8d57(void)
void FUN_1808a8d57(void)

{
  return;
}






// 函数: void FUN_1808a8d64(void)
void FUN_1808a8d64(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808a8d6f(void)
void FUN_1808a8d6f(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8db0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *puStack_58;
  int8_t auStack_50 [40];
  
  uVar3 = FUN_1808ddc20(param_1,auStack_50,1,param_3);
  if ((int)uVar3 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStackX_20[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              puVar4 = (uint64_t *)
                       FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_18084c050(puVar4,0x1e,0);
              *puVar4 = &unknown_var_1472_ptr;
              puVar4[9] = &unknown_var_1520_ptr;
              puStack_58 = puVar4;
              iVar2 = FUN_18089ae50(puVar4,param_1,0x54524f50,0x42545250,1);
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_58), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_50);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8ddc(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000b8;
  
  iStack00000000000000b8 = 0;
  uVar1 = FUN_1808de650();
  if (iStack00000000000000b8 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000b8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000b8) {
          do {
            puVar4 = (uint64_t *)
                     FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_18084c050(puVar4,0x1e,0);
            *puVar4 = &unknown_var_1472_ptr;
            puVar4[9] = &unknown_var_1520_ptr;
            iVar2 = FUN_18089ae50(puVar4);
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000b8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a8e3f(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int unaff_R15D;
  int in_stack_000000b8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_18084c050(puVar2,0x1e,0);
        *puVar2 = &unknown_var_1472_ptr;
        puVar2[9] = &unknown_var_1520_ptr;
        iVar1 = FUN_18089ae50(puVar2);
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < in_stack_000000b8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a8f5a(void)
void FUN_1808a8f5a(void)

{
  return;
}






// 函数: void FUN_1808a8f67(void)
void FUN_1808a8f67(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808a8f72(void)
void FUN_1808a8f72(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8fb0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *puStack_48;
  int8_t auStack_40 [40];
  
  uVar2 = FUN_1808ddc20(param_1,auStack_40,1,param_3);
  if ((int)uVar2 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar2 = FUN_180747f10(param_2,aiStackX_20[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&unknown_var_816_ptr,
                                    0x30a,0,0,1);
              if (lVar3 == 0) {
                return 0x26;
              }
              puVar4 = (uint64_t *)FUN_18084da70(lVar3);
              puStack_48 = puVar4;
              uVar1 = FUN_18089c630(puVar4,param_1);
              if ((uVar1 != 0) || (uVar1 = FUN_18087dc70(param_2,&puStack_48), uVar1 != 0)) {
                if (puVar4 == (uint64_t *)0x0) {
                  return (uint64_t)uVar1;
                }
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_40);
      }
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8fd9(void)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000a8;
  
  iStack00000000000000a8 = 0;
  uVar1 = FUN_1808de650();
  if (iStack00000000000000a8 < 0) {
    uVar2 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000a8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar2 = FUN_180747f10(), (int)uVar2 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000a8) {
          do {
            lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&unknown_var_816_ptr,0x30a,
                                  0);
            if (lVar3 == 0) {
              return 0x26;
            }
            puVar4 = (uint64_t *)FUN_18084da70(lVar3);
            uVar1 = FUN_18089c630(puVar4);
            if ((uVar1 != 0) || (uVar1 = FUN_18087dc70(), uVar1 != 0)) {
              if (puVar4 == (uint64_t *)0x0) {
                return (uint64_t)uVar1;
              }
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000a8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a903c(int param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  int unaff_R15D;
  int in_stack_000000a8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&unknown_var_816_ptr,0x30a);
        if (lVar2 == 0) {
          return 0x26;
        }
        puVar3 = (uint64_t *)FUN_18084da70(lVar2);
        iVar1 = FUN_18089c630(puVar3);
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          if (puVar3 == (uint64_t *)0x0) {
            return iVar1;
          }
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&unknown_var_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < in_stack_000000a8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a9109(void)
void FUN_1808a9109(void)

{
  return;
}






// 函数: void FUN_1808a9116(void)
void FUN_1808a9116(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808a911e(void)

{
  uint64_t *unaff_RBX;
  int32_t unaff_ESI;
  
  if (unaff_RBX != (uint64_t *)0x0) {
    (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9170(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *puStack_58;
  int8_t auStack_50 [40];
  
  uVar3 = FUN_1808ddc20(param_1,auStack_50,1,param_3);
  if ((int)uVar3 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStackX_20[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              puVar4 = (uint64_t *)
                       FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_18084c050(puVar4,2,0);
              *puVar4 = &unknown_var_1472_ptr;
              puVar4[9] = &unknown_var_1520_ptr;
              puStack_58 = puVar4;
              iVar2 = FUN_18089ae50(puVar4,param_1,0x53554252,0x42534252,1);
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_58), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_50);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a919c(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000b8;
  
  iStack00000000000000b8 = 0;
  uVar1 = FUN_1808de650();
  if (iStack00000000000000b8 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000b8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000b8) {
          do {
            puVar4 = (uint64_t *)
                     FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_18084c050(puVar4,2,0);
            *puVar4 = &unknown_var_1472_ptr;
            puVar4[9] = &unknown_var_1520_ptr;
            iVar2 = FUN_18089ae50(puVar4);
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000b8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a91ff(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int unaff_R15D;
  int in_stack_000000b8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_18084c050(puVar2,2,0);
        *puVar2 = &unknown_var_1472_ptr;
        puVar2[9] = &unknown_var_1520_ptr;
        iVar1 = FUN_18089ae50(puVar2);
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < in_stack_000000b8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a931a(void)
void FUN_1808a931a(void)

{
  return;
}






// 函数: void FUN_1808a9327(void)
void FUN_1808a9327(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808a9332(void)
void FUN_1808a9332(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9370(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *puStack_48;
  int8_t auStack_40 [40];
  
  uVar2 = FUN_1808ddc20(param_1,auStack_40,1,param_3);
  if ((int)uVar2 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar2 = FUN_180747f10(param_2,aiStackX_20[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&unknown_var_816_ptr,
                                    0x30a,0,0,1);
              if (lVar3 == 0) {
                return 0x26;
              }
              puVar4 = (uint64_t *)FUN_1808d9af0(lVar3);
              puStack_48 = puVar4;
              uVar1 = FUN_18089df40(puVar4,param_1);
              if ((uVar1 != 0) || (uVar1 = FUN_18087dc70(param_2,&puStack_48), uVar1 != 0)) {
                if (puVar4 == (uint64_t *)0x0) {
                  return (uint64_t)uVar1;
                }
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_40);
      }
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9399(void)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000a8;
  
  iStack00000000000000a8 = 0;
  uVar1 = FUN_1808de650();
  if (iStack00000000000000a8 < 0) {
    uVar2 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000a8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar2 = FUN_180747f10(), (int)uVar2 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000a8) {
          do {
            lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&unknown_var_816_ptr,0x30a,
                                  0);
            if (lVar3 == 0) {
              return 0x26;
            }
            puVar4 = (uint64_t *)FUN_1808d9af0(lVar3);
            uVar1 = FUN_18089df40(puVar4);
            if ((uVar1 != 0) || (uVar1 = FUN_18087dc70(), uVar1 != 0)) {
              if (puVar4 == (uint64_t *)0x0) {
                return (uint64_t)uVar1;
              }
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000a8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a93fc(int param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  int unaff_R15D;
  int in_stack_000000a8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&unknown_var_816_ptr,0x30a);
        if (lVar2 == 0) {
          return 0x26;
        }
        puVar3 = (uint64_t *)FUN_1808d9af0(lVar2);
        iVar1 = FUN_18089df40(puVar3);
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          if (puVar3 == (uint64_t *)0x0) {
            return iVar1;
          }
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&unknown_var_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < in_stack_000000a8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a94c9(void)
void FUN_1808a94c9(void)

{
  return;
}






