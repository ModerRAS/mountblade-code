#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part007.c - 9 个函数

// 函数: void FUN_1808a9a77(void)
void FUN_1808a9a77(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9ac0(uint64_t *param_1,int64_t param_2,int32_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  int iVar10;
  int aiStack_78 [2];
  uint64_t *puStack_70;
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  
  uVar6 = FUN_1808ddc20(param_1,auStack_48,1,param_3);
  aiStack_78[0] = (int)uVar6;
  if (aiStack_78[0] == 0) {
    uVar4 = FUN_1808de650(param_1,aiStack_78);
    if (aiStack_78[0] < 0) {
      uVar6 = 0xd;
    }
    else {
      uVar9 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_78[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar9) - uVar9)) ||
         (uVar6 = FUN_180747f10(param_2,aiStack_78[0]), (int)uVar6 == 0)) {
        if (uVar4 != 0x12) {
          if (uVar4 != 0) {
            return (uint64_t)uVar4;
          }
          iVar10 = 0;
          if (0 < aiStack_78[0]) {
            do {
              puVar7 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar7 == (uint64_t *)0x0) {
                return 0x26;
              }
              *puVar7 = &unknown_var_1544_ptr;
              *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
              *(int32_t *)((int64_t)puVar7 + 0xc) = 0x11;
              puVar8 = (int32_t *)FUN_180847820();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 2) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
              *(int32_t *)(puVar7 + 3) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
              puVar7[4] = 0;
              *(int32_t *)(puVar7 + 5) = 3;
              *puVar7 = &unknown_var_440_ptr;
              puVar7[6] = 0;
              puVar7[7] = 0;
              puVar7[8] = 0;
              puVar7[9] = 0;
              puStack_70 = puVar7;
              iVar5 = FUN_1808ddc20(param_1,auStack_68,0,0x20564157);
              if (iVar5 == 0) {
                puVar7[6] = param_4;
                iVar5 = FUN_180899360(param_1,puVar7 + 2);
                if ((iVar5 == 0) && (iVar5 = FUN_1808dde10(param_1,0), iVar5 == 0)) {
                  if (*(int *)(param_1[1] + 0x18) == 0) {
                    iVar5 = SystemErrorHandler(*param_1,puVar7 + 7,4);
                    if (iVar5 == 0) {
                      if (*(int *)(param_1[1] + 0x18) == 0) {
                        iVar5 = SystemErrorHandler(*param_1,(int64_t)puVar7 + 0x3c,4);
                        if ((iVar5 == 0) &&
                           (((*(uint *)(param_1 + 8) < 0x46 ||
                             (iVar5 = FUN_1808a2d50(param_1,puVar7 + 5), iVar5 == 0)) &&
                            (iVar5 = FUN_1808de0e0(param_1,0), iVar5 == 0)))) {
                    // WARNING: Subroutine does not return
                          FUN_1808ddf80(param_1,auStack_68);
                        }
                      }
                      else {
                        iVar5 = 0x1c;
                      }
                    }
                  }
                  else {
                    iVar5 = 0x1c;
                  }
                }
              }
              if ((iVar5 != 0) || (iVar5 = FUN_1808ae9d0(param_2,&puStack_70), iVar5 != 0)) {
                (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < aiStack_78[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_48);
      }
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9af6(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  uint64_t *unaff_RDI;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int iVar10;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t uVar11;
  int32_t extraout_XMM0_Da_08;
  int iStack0000000000000040;
  uint64_t *in_stack_00000048;
  
  iStack0000000000000040 = in_EAX;
  uVar4 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    uVar6 = 0xd;
  }
  else {
    uVar9 = (int)*(uint *)(unaff_R13 + 0xc) >> 0x1f;
    uVar11 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R13 + 0xc) ^ uVar9) - uVar9)) ||
       (uVar6 = FUN_180747f10(extraout_XMM0_Da,iStack0000000000000040), uVar11 = extraout_XMM0_Da_00
       , (int)uVar6 == 0)) {
      if (uVar4 != 0x12) {
        if (uVar4 != 0) {
          return (uint64_t)uVar4;
        }
        iVar10 = 0;
        if (0 < iStack0000000000000040) {
          do {
            puVar7 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar7 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar7 = &unknown_var_1544_ptr;
            *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar7 + 0xc) = 0x11;
            puVar8 = (int32_t *)FUN_180847820();
            uVar11 = *puVar8;
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(int32_t *)(puVar7 + 2) = uVar11;
            *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
            *(int32_t *)(puVar7 + 3) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
            puVar7[4] = 0;
            *(int32_t *)(puVar7 + 5) = 3;
            *puVar7 = &unknown_var_440_ptr;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
            in_stack_00000048 = puVar7;
            iVar5 = FUN_1808ddc20(uVar11,&stack0x00000050,0,0x20564157);
            uVar11 = extraout_XMM0_Da_01;
            if (iVar5 == 0) {
              puVar7[6] = unaff_R12;
              iVar5 = FUN_180899360(extraout_XMM0_Da_01,puVar7 + 2);
              uVar11 = extraout_XMM0_Da_02;
              if ((iVar5 == 0) &&
                 (iVar5 = FUN_1808dde10(extraout_XMM0_Da_02,0), uVar11 = extraout_XMM0_Da_03,
                 iVar5 == 0)) {
                if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                  iVar5 = SystemErrorHandler(*unaff_RDI,puVar7 + 7,4);
                  uVar11 = extraout_XMM0_Da_04;
                  if (iVar5 == 0) {
                    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                      iVar5 = SystemErrorHandler(*unaff_RDI,(int64_t)puVar7 + 0x3c,4);
                      uVar11 = extraout_XMM0_Da_05;
                      if ((iVar5 == 0) &&
                         (((*(uint *)(unaff_RDI + 8) < 0x46 ||
                           (iVar5 = FUN_1808a2d50(extraout_XMM0_Da_05,puVar7 + 5),
                           uVar11 = extraout_XMM0_Da_06, iVar5 == 0)) &&
                          (iVar5 = FUN_1808de0e0(uVar11,0), uVar11 = extraout_XMM0_Da_07, iVar5 == 0
                          )))) {
                    // WARNING: Subroutine does not return
                        FUN_1808ddf80(extraout_XMM0_Da_07,&stack0x00000050);
                      }
                    }
                    else {
                      iVar5 = 0x1c;
                    }
                  }
                }
                else {
                  iVar5 = 0x1c;
                }
              }
            }
            if ((iVar5 != 0) || (iVar5 = FUN_1808ae9d0(uVar11,&stack0x00000048), iVar5 != 0)) {
              (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar10 = iVar10 + 1;
            uVar11 = extraout_XMM0_Da_08;
          } while (iVar10 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80(uVar11,&stack0x00000070);
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a9b41(int32_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int in_ECX;
  int unaff_EBX;
  uint64_t *unaff_RDI;
  uint64_t unaff_R12;
  int iVar7;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar8;
  int32_t extraout_XMM0_Da_06;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar7 = 0;
    if (0 < in_ECX) {
      do {
        puVar5 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,0x30a,0);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar5 = &unknown_var_1544_ptr;
        *(int32_t *)(puVar5 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar5 + 0xc) = 0x11;
        puVar6 = (int32_t *)FUN_180847820();
        uVar8 = *puVar6;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 2) = uVar8;
        *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
        *(int32_t *)(puVar5 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
        puVar5[4] = 0;
        *(int32_t *)(puVar5 + 5) = 3;
        *puVar5 = &unknown_var_440_ptr;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        in_stack_00000048 = puVar5;
        iVar4 = FUN_1808ddc20(uVar8,&stack0x00000050,0,0x20564157);
        uVar8 = extraout_XMM0_Da;
        if (iVar4 == 0) {
          puVar5[6] = unaff_R12;
          iVar4 = FUN_180899360(extraout_XMM0_Da,puVar5 + 2);
          uVar8 = extraout_XMM0_Da_00;
          if ((iVar4 == 0) &&
             (iVar4 = FUN_1808dde10(extraout_XMM0_Da_00,0), uVar8 = extraout_XMM0_Da_01, iVar4 == 0)
             ) {
            if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
              iVar4 = SystemErrorHandler(*unaff_RDI,puVar5 + 7,4);
              uVar8 = extraout_XMM0_Da_02;
              if (iVar4 == 0) {
                if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                  iVar4 = SystemErrorHandler(*unaff_RDI,(int64_t)puVar5 + 0x3c,4);
                  uVar8 = extraout_XMM0_Da_03;
                  if ((iVar4 == 0) &&
                     (((*(uint *)(unaff_RDI + 8) < 0x46 ||
                       (iVar4 = FUN_1808a2d50(extraout_XMM0_Da_03,puVar5 + 5),
                       uVar8 = extraout_XMM0_Da_04, iVar4 == 0)) &&
                      (iVar4 = FUN_1808de0e0(uVar8,0), uVar8 = extraout_XMM0_Da_05, iVar4 == 0)))) {
                    // WARNING: Subroutine does not return
                    FUN_1808ddf80(extraout_XMM0_Da_05,&stack0x00000050);
                  }
                }
                else {
                  iVar4 = 0x1c;
                }
              }
            }
            else {
              iVar4 = 0x1c;
            }
          }
        }
        if ((iVar4 != 0) || (iVar4 = FUN_1808ae9d0(uVar8,&stack0x00000048), iVar4 != 0)) {
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&unknown_var_2144_ptr,0xc6,1);
        }
        iVar7 = iVar7 + 1;
        param_1 = extraout_XMM0_Da_06;
      } while (iVar7 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(param_1,&stack0x00000070);
}






// 函数: void FUN_1808a9d4e(void)
void FUN_1808a9d4e(void)

{
  return;
}






// 函数: void FUN_1808a9d56(void)
void FUN_1808a9d56(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808a9d63(void)
void FUN_1808a9d63(void)

{
  uint64_t *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9da0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint uVar6;
  int iVar7;
  int aiStack_48 [2];
  uint64_t *puStack_40;
  int8_t auStack_38 [32];
  
  uVar4 = FUN_1808ddc20(param_1,auStack_38,1,param_3);
  if ((int)uVar4 == 0) {
    iVar7 = 0;
    aiStack_48[0] = 0;
    uVar2 = FUN_1808de650(param_1,aiStack_48);
    if (aiStack_48[0] < 0) {
      uVar4 = 0xd;
    }
    else {
      uVar6 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_48[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar6) - uVar6)) ||
         (uVar4 = FUN_180747f10(param_2,aiStack_48[0]), (int)uVar4 == 0)) {
        if (uVar2 != 0x12) {
          if (uVar2 != 0) {
            return (uint64_t)uVar2;
          }
          if (0 < aiStack_48[0]) {
            do {
              puVar5 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar5 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808b0200(puVar5,4);
              puVar1 = puVar5 + 6;
              *puVar1 = puVar1;
              puVar5[7] = puVar1;
              *(int8_t *)(puVar5 + 8) = 0;
              *(int32_t *)((int64_t)puVar5 + 0x44) = 0;
              puVar5[9] = 0;
              puVar5[10] = 0;
              *(int32_t *)(puVar5 + 0xb) = 0;
              *(int8_t *)((int64_t)puVar5 + 0x5c) = 0;
              *puVar5 = &unknown_var_9568_ptr;
              *(int32_t *)(puVar5 + 0xc) = 0;
              puStack_40 = puVar5;
              iVar3 = FUN_18089abe0(puVar5,param_1);
              if ((iVar3 != 0) || (iVar3 = FUN_18087dc70(param_2,&puStack_40), iVar3 != 0)) {
                (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < aiStack_48[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_38);
      }
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9dc9(void)

{
  uint64_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint uVar6;
  int64_t unaff_RBP;
  int iVar7;
  int iStack0000000000000040;
  
  iVar7 = 0;
  iStack0000000000000040 = 0;
  uVar2 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    uVar4 = 0xd;
  }
  else {
    uVar6 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar6) - uVar6)) ||
       (uVar4 = FUN_180747f10(), (int)uVar4 == 0)) {
      if (uVar2 != 0x12) {
        if (uVar2 != 0) {
          return (uint64_t)uVar2;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar5 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar5 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808b0200(puVar5,4);
            puVar1 = puVar5 + 6;
            *puVar1 = puVar1;
            puVar5[7] = puVar1;
            *(int8_t *)(puVar5 + 8) = 0;
            *(int32_t *)((int64_t)puVar5 + 0x44) = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            *(int32_t *)(puVar5 + 0xb) = 0;
            *(int8_t *)((int64_t)puVar5 + 0x5c) = 0;
            *puVar5 = &unknown_var_9568_ptr;
            *(int32_t *)(puVar5 + 0xc) = 0;
            iVar3 = FUN_18089abe0(puVar5);
            if ((iVar3 != 0) || (iVar3 = FUN_18087dc70(), iVar3 != 0)) {
              (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a9e20(int param_1)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  uint uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  uint64_t unaff_R15;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar6 = (int32_t)unaff_R15;
    uVar5 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar3 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&unknown_var_816_ptr,0x30a);
        if (puVar3 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808b0200(puVar3,4);
        puVar1 = puVar3 + 6;
        *puVar1 = puVar1;
        puVar3[7] = puVar1;
        *(char *)(puVar3 + 8) = (char)unaff_R15;
        *(int32_t *)((int64_t)puVar3 + 0x44) = uVar6;
        puVar3[9] = unaff_R15;
        puVar3[10] = unaff_R15;
        *(int32_t *)(puVar3 + 0xb) = uVar6;
        *(char *)((int64_t)puVar3 + 0x5c) = (char)unaff_R15;
        *puVar3 = &unknown_var_9568_ptr;
        *(int32_t *)(puVar3 + 0xc) = uVar6;
        iVar2 = FUN_18089abe0(puVar3);
        if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&unknown_var_2144_ptr,0xc6,1);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while ((int)uVar4 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a9f31(void)
void FUN_1808a9f31(void)

{
  return;
}






// 函数: void FUN_1808a9f3e(void)
void FUN_1808a9f3e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808a9f46(void)
void FUN_1808a9f46(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9f90(uint64_t param_1,int64_t param_2,int32_t param_3,uint64_t param_4)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_58 [2];
  uint64_t *puStack_50;
  int8_t auStack_48 [32];
  
  uVar3 = FUN_1808ddc20(param_1,auStack_48,1,param_3);
  if ((int)uVar3 == 0) {
    aiStack_58[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStack_58[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStack_58[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar4,0x1c);
              *puVar4 = &unknown_var_288_ptr;
              puVar4[6] = &unknown_var_9792_ptr;
              *(int32_t *)(puVar4 + 0x1b) = 0xffffffff;
              *(uint64_t *)((int64_t)puVar4 + 0xdc) = 0;
              *(uint64_t *)((int64_t)puVar4 + 0xe4) = 0;
              *(int32_t *)((int64_t)puVar4 + 0xec) = 0;
              puStack_50 = puVar4;
              iVar2 = FUN_1808a7e10(param_1,puVar4,param_4);
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_50), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_58[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_48);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a9fc1(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack0000000000000040;
  
  iStack0000000000000040 = 0;
  uVar1 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar4,0x1c);
            *puVar4 = &unknown_var_288_ptr;
            puVar4[6] = &unknown_var_9792_ptr;
            *(int32_t *)(puVar4 + 0x1b) = 0xffffffff;
            *(uint64_t *)((int64_t)puVar4 + 0xdc) = 0;
            *(uint64_t *)((int64_t)puVar4 + 0xe4) = 0;
            *(int32_t *)((int64_t)puVar4 + 0xec) = 0;
            iVar2 = FUN_1808a7e10();
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aa019(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_R12D;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar3 = unaff_R12D;
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&unknown_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar2,0x1c);
        *puVar2 = &unknown_var_288_ptr;
        puVar2[6] = &unknown_var_9792_ptr;
        *(int32_t *)(puVar2 + 0x1b) = 0xffffffff;
        *(uint64_t *)((int64_t)puVar2 + 0xdc) = 0;
        *(uint64_t *)((int64_t)puVar2 + 0xe4) = 0;
        *(int *)((int64_t)puVar2 + 0xec) = unaff_R12D;
        iVar1 = FUN_1808a7e10();
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2144_ptr,0xc6,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808aa136(void)
void FUN_1808aa136(void)

{
  return;
}






// 函数: void FUN_1808aa143(void)
void FUN_1808aa143(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




