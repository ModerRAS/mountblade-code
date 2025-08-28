#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part100.c - 14 个函数

// 函数: void FUN_18089a9f0(int64_t param_1,int *param_2)
void FUN_18089a9f0(int64_t param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int32_t in_EAX;
  uint32_t uVar6;
  int iVar5;
  int32_t in_register_00000004;
  uint unaff_EBP;
  char in_CF;
  int *piStack_8;
  int32_t uVar4;
  
  uVar6 = (uint32_t)((uint)in_EAX >> 8);
  cVar3 = (char)in_EAX + -0x57 + in_CF;
  uVar4 = CONCAT31(uVar6,cVar3);
  *(int32_t *)CONCAT44(in_register_00000004,uVar4) = uVar4;
  *(uint *)(param_1 + -0x565dff77) = *(uint *)(param_1 + -0x565dff77) & unaff_EBP;
  *(int32_t *)CONCAT44(in_register_00000004,uVar4) = uVar4;
  piStack_8 = param_2;
  *(int32_t *)CONCAT44(in_register_00000004,uVar4) = uVar4;
  *(char *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + cVar3;
  *(char *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + cVar3;
  iVar5 = CONCAT31(uVar6,cVar3 + '\x18');
  *param_2 = *param_2 + iVar5;
  pcVar1 = (char *)((int64_t)&piStack_8 + CONCAT44(in_register_00000004,iVar5));
  *pcVar1 = *pcVar1 + cVar3 + '\x18';
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



uint64_t FUN_18089aa40(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = FUN_1808995c0(*param_2,param_1 + 0x50);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_1808995c0(*param_2,param_1 + 0x54);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808995c0(*param_2,param_1 + 0x58);
      if ((int)uVar1 == 0) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar1 = FUN_1808995c0(*param_2,param_1 + 0x60);
        if ((int)uVar1 == 0) {
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar1 = FUN_1808995c0(*param_2,param_1 + 100);
          if ((int)uVar1 == 0) {
            if (*(int *)(param_2[1] + 0x18) != 0) {
              return 0x1c;
            }
            uVar1 = FUN_1808995c0(*param_2,param_1 + 0x68);
            if ((int)uVar1 == 0) {
              if (*(int *)(param_2[1] + 0x18) != 0) {
                return 0x1c;
              }
              uVar1 = FUN_1808995c0(*param_2,param_1 + 0x6c);
              if ((int)uVar1 == 0) {
                if (*(int *)(param_2[1] + 0x18) != 0) {
                  return 0x1c;
                }
                uVar1 = FUN_1808995c0(*param_2,param_1 + 0x70);
                if ((int)uVar1 == 0) {
                  if (*(int *)(param_2[1] + 0x18) != 0) {
                    return 0x1c;
                  }
                  uVar1 = FUN_1808995c0(*param_2,param_1 + 0x74);
                  if ((int)uVar1 == 0) {
                    if (*(int *)(param_2[1] + 0x18) != 0) {
                      return 0x1c;
                    }
                    uVar1 = FUN_1808995c0(*param_2,param_1 + 0x78);
                    if ((int)uVar1 == 0) {
                      if (*(uint *)(param_2 + 8) < 0x74) {
                        uVar1 = 0;
                      }
                      else if (*(int *)(param_2[1] + 0x18) == 0) {
                        uVar1 = FUN_1808995c0(*param_2,param_1 + 0x5c);
                      }
                      else {
                        uVar1 = 0x1c;
                      }
                      if ((int)uVar1 == 0) {
                        FUN_1808db8c0(param_1);
                        uVar1 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089abe0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_58 [32];
  int8_t auStack_38 [48];
  
  uVar1 = FUN_1808ddc20(param_2,auStack_38,1,0x46464542);
  if (((((int)uVar1 == 0) &&
       (uVar1 = FUN_1808ddc20(param_2,auStack_58,0,0x42464542), (int)uVar1 == 0)) &&
      (uVar1 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar1 == 0)) &&
     ((0x5a < *(uint *)(param_2 + 8) ||
      (uVar1 = FUN_1808afc70(param_2,param_1 + 0x44), (int)uVar1 == 0)))) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = FUN_1808a2890(*param_2,param_1 + 0x60,0x25);
      if ((int)uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x3d) {
          uVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar1 = FUN_1808a2e00(*param_2,param_1 + 0x40);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          AdvancedSystemManager(param_2,auStack_58);
        }
      }
    }
    else {
      uVar1 = 0x1c;
    }
  }
  return uVar1;
}



uint64_t FUN_18089ac64(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  if (*(int *)(in_RAX + 0x18) == 0) {
    uVar1 = FUN_1808a2890(*unaff_RBX,unaff_RDI + 0x60,0x25);
    if ((int)uVar1 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x3d) {
        uVar1 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar1 = FUN_1808a2e00(*unaff_RBX,unaff_RDI + 0x40);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemManager();
      }
    }
  }
  else {
    uVar1 = 0x1c;
  }
  return uVar1;
}





// 函数: void FUN_18089ac96(void)
void FUN_18089ac96(void)

{
  int iVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  if (*(uint *)(unaff_RBX + 8) < 0x3d) {
    iVar1 = 0;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    iVar1 = FUN_1808a2e00(*unaff_RBX,unaff_RDI + 0x40);
  }
  else {
    iVar1 = 0x1c;
  }
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18089ace4(void)

{
  float fVar1;
  int in_EAX;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  
  if (in_EAX == 0x1b) {
    if (*(uint *)(unaff_RBX + 0x40) < 0x3b) {
      uVar2 = FUN_18089cc80();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI + 0x50) == 0x14) {
        puVar3 = (uint64_t *)**(int64_t **)(unaff_RDI + 0x48);
        if (*(int *)(puVar3 + 2) == (int)unaff_RBP) {
          fVar1 = *(float *)(puVar3 + 3);
          if (puVar3 != (uint64_t *)0x0) {
            (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&unknown_var_9456_ptr,0x130,1);
          }
          puVar3 = (uint64_t *)
                   FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_9456_ptr,0x119);
          if (puVar3 == (uint64_t *)0x0) {
            return 0x26;
          }
          puVar3[1] = unaff_RBP;
          *puVar3 = &unknown_var_9360_ptr;
          *(int32_t *)(puVar3 + 2) = 1;
          *(int *)(puVar3 + 3) = (int)unaff_RBP;
          **(uint64_t **)(unaff_RDI + 0x48) = puVar3;
          *(int *)(puVar3 + 3) = (int)fVar1;
          goto LAB_18089ae18;
        }
      }
      return 0xd;
    }
  }
  else if ((in_EAX == 0x12) && (*(uint *)(unaff_RBX + 0x40) < 0x40)) {
    uVar2 = FUN_1808a8620();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    goto LAB_18089ae18;
  }
  uVar2 = FUN_18089cc80();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_18089ae18:
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}





// 函数: void FUN_18089ae2d(void)
void FUN_18089ae2d(void)

{
  return;
}





// 函数: void FUN_18089ae35(void)
void FUN_18089ae35(void)

{
  return;
}





// 函数: void FUN_18089ae3d(void)
void FUN_18089ae3d(void)

{
  return;
}





// 函数: void FUN_18089ae50(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void FUN_18089ae50(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  char param_5)

{
  int iVar1;
  int8_t auStack_78 [64];
  int8_t auStack_38 [32];
  
  iVar1 = FUN_1808ddc20(param_2,auStack_38,1,param_3);
  if (((iVar1 == 0) && (iVar1 = FUN_1808ddc20(param_2,auStack_78,0,param_4), iVar1 == 0)) &&
     (iVar1 = FUN_180899360(param_2,param_1 + 0x10), iVar1 == 0)) {
    if ((param_5 != '\0') && (iVar1 = FUN_18089d490(param_1 + 0x48,param_2), iVar1 != 0)) {
      return;
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemManager(param_2,auStack_78);
  }
  return;
}



uint64_t FUN_18089af12(void)

{
  int64_t *plVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint unaff_EDI;
  uint uVar6;
  uint uVar7;
  char cStack0000000000000030;
  uint uStack0000000000000034;
  int32_t in_stack_00000038;
  
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (in_EAX < 0x8c) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return (uint64_t)unaff_EDI;
    }
    plVar1 = (int64_t *)*unaff_RBX;
    uVar3 = unaff_EDI;
    if (*plVar1 != 0) {
      if (plVar1[2] == 0) {
LAB_18089af81:
        uVar3 = FUN_180769ed0(*plVar1,&stack0x00000030,unaff_ESI,unaff_ESI,0);
      }
      else {
        uStack0000000000000034 = 0;
        uVar3 = func_0x00018076a7d0(*plVar1,(int64_t)&stack0x00000030 + 4);
        if (uVar3 == 0) {
          if ((uint64_t)uStack0000000000000034 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089af81;
          uVar3 = 0x11;
        }
      }
    }
    uVar2 = unaff_ESI;
    if (uVar3 == 0) {
      uVar6 = (uint)(cStack0000000000000030 != '\0');
      uVar3 = uVar7;
      uVar2 = (uint)(cStack0000000000000030 == '\0');
    }
    if (uVar3 != 0) {
      return (uint64_t)uVar3;
    }
    *(uint *)(unaff_RBP + 0xc4) = (*(uint *)(unaff_RBP + 0xc4) | uVar6) & ~uVar2;
    in_EAX = *(uint *)(unaff_RBX + 8);
  }
  uVar4 = uVar5;
  if (0x8b < in_EAX) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar4 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 0xc4,4);
    }
    else {
      uVar4 = (uint64_t)unaff_EDI;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = FUN_1808afc70();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = FUN_1808a5d60();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = FUN_1808a5d60();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = FUN_18089bd70();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = uVar5;
  if (0x41 < *(uint *)(unaff_RBX + 8)) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar4 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 0xcc,4);
    }
    else {
      uVar4 = (uint64_t)unaff_EDI;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = uVar5;
  if (0x41 < *(uint *)(unaff_RBX + 8)) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar4 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 0xd0,4);
    }
    else {
      uVar4 = (uint64_t)unaff_EDI;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (0x5a < *(uint *)(unaff_RBX + 8)) {
    uVar4 = FUN_1808a4a20();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1808a4a20();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (0x6e < *(uint *)(unaff_RBX + 8)) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 200,4);
    }
    else {
      uVar5 = (uint64_t)unaff_EDI;
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar6 = uVar7;
  if ((0x8b < *(uint *)(unaff_RBX + 8)) && (uVar6 = unaff_EDI, *(int *)(unaff_RBX[1] + 0x18) == 0))
  {
    plVar1 = (int64_t *)*unaff_RBX;
    if (*plVar1 != 0) {
      if (plVar1[2] == 0) {
LAB_18089b1ab:
        unaff_EDI = FUN_180769ed0(*plVar1,&stack0x00000038,unaff_ESI,4,0);
      }
      else {
        uStack0000000000000034 = 0;
        unaff_EDI = func_0x00018076a7d0(*plVar1,(int64_t)&stack0x00000030 + 4);
        if (unaff_EDI == 0) {
          if ((uint64_t)uStack0000000000000034 + 4 <= (uint64_t)plVar1[2]) goto LAB_18089b1ab;
          unaff_EDI = 0x11;
        }
      }
    }
    uVar6 = unaff_EDI;
    if (unaff_EDI != 0) goto LAB_18089b22a;
    switch(in_stack_00000038) {
    case 0:
      unaff_ESI = uVar7;
      break;
    case 1:
      break;
    case 2:
      unaff_ESI = 2;
      break;
    case 3:
      unaff_ESI = 3;
      break;
    case 4:
      unaff_ESI = 4;
      break;
    case 5:
      unaff_ESI = 5;
      break;
    case 6:
      unaff_ESI = 6;
      break;
    default:
      uVar6 = 0xd;
      goto LAB_18089b226;
    }
    *(uint *)(unaff_RBP + 0xd4) = unaff_ESI;
    uVar6 = uVar7;
  }
LAB_18089b226:
  if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
LAB_18089b22a:
  return (uint64_t)uVar6;
}



int FUN_18089b218(void)

{
  int64_t unaff_RBP;
  int unaff_R15D;
  
  *(int32_t *)(unaff_RBP + 0xd4) = 7;
  if (unaff_R15D != 0) {
    return unaff_R15D;
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}



int FUN_18089b21d(void)

{
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int unaff_R15D;
  
  *(int32_t *)(unaff_RBP + 0xd4) = unaff_ESI;
  if (unaff_R15D != 0) {
    return unaff_R15D;
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}





// 函数: void FUN_18089b26e(void)
void FUN_18089b26e(void)

{
  return;
}



uint64_t FUN_18089b2a0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  uint uVar4;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int8_t auStack_28 [32];
  
  puVar2 = (int32_t *)FUN_180847820();
  uStack_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  uVar3 = FUN_1808ddc20(param_2,auStack_28,0,0x4c525443);
  if ((((int)uVar3 == 0) && (uVar3 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar3 == 0)) &&
     (uVar3 = FUN_180899360(param_2,param_1 + 0x20), (int)uVar3 == 0)) {
    uVar4 = 0x1c;
    if (*(uint *)(param_2 + 8) < 0x5a) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar1 = *param_2;
        uVar3 = FUN_1808aed00(uVar1,&uStack_38,4);
        if ((((int)uVar3 == 0) && (uVar3 = FUN_1808aed00(uVar1,&uStack_34,2), (int)uVar3 == 0)) &&
           (uVar3 = FUN_1808aed00(uVar1,(int64_t)&uStack_34 + 2,2), (int)uVar3 == 0)) {
          uVar3 = FUN_1808aed00(uVar1,&uStack_30,8);
        }
      }
      else {
        uVar3 = 0x1c;
      }
    }
    else {
      uVar3 = 0;
    }
    if ((int)uVar3 == 0) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar3 = FUN_180899090(*param_2,param_1 + 0x30);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((*(int *)(param_2[1] + 0x18) == 0) &&
           (uVar4 = FUN_1808aed00(*param_2,param_1 + 0x40,4), uVar4 == 0)) {
                    // WARNING: Subroutine does not return
          AdvancedSystemManager(param_2,auStack_28);
        }
      }
      return (uint64_t)uVar4;
    }
  }
  return uVar3;
}



uint64_t FUN_18089b307(void)

{
  uint64_t uVar1;
  int in_EAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint uVar3;
  bool in_CF;
  int8_t auStackX_20 [4];
  int8_t auStackX_24 [2];
  int8_t auStackX_26 [2];
  
  uVar3 = in_EAX + 0x1c;
  if (in_CF) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = *unaff_RBX;
      uVar2 = FUN_1808aed00(uVar1,auStackX_20,4);
      if ((((int)uVar2 == 0) && (uVar2 = FUN_1808aed00(uVar1,auStackX_24,2), (int)uVar2 == 0)) &&
         (uVar2 = FUN_1808aed00(uVar1,auStackX_26,2), (int)uVar2 == 0)) {
        uVar2 = FUN_1808aed00(uVar1,&stack0x00000028,8);
      }
    }
    else {
      uVar2 = (uint64_t)uVar3;
    }
  }
  else {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar2 = FUN_180899090(*unaff_RBX,unaff_RBP + 0x30);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 0x40,4), uVar3 == 0)) {
                    // WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return (uint64_t)uVar3;
}



uint64_t FUN_18089b31f(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int8_t auStackX_20 [4];
  int8_t auStackX_24 [2];
  int8_t auStackX_26 [2];
  
  uVar1 = *unaff_RBX;
  uVar3 = FUN_1808aed00(uVar1,auStackX_20,4);
  if ((((int)uVar3 == 0) && (uVar3 = FUN_1808aed00(uVar1,auStackX_24,2), (int)uVar3 == 0)) &&
     (uVar3 = FUN_1808aed00(uVar1,auStackX_26,2), (int)uVar3 == 0)) {
    uVar3 = FUN_1808aed00(uVar1,&stack0x00000028,8);
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar3 = FUN_180899090(*unaff_RBX,unaff_RBP + 0x30);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 0x40,4);
      unaff_RDI = (uint64_t)uVar2;
      if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemManager();
      }
    }
  }
  return unaff_RDI & 0xffffffff;
}



uint64_t FUN_18089b380(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar2 = FUN_180899090(*unaff_RBX,unaff_RBP + 0x30);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = FUN_1808aed00(*unaff_RBX,unaff_RBP + 0x40,4);
      unaff_RDI = (uint64_t)uVar1;
      if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemManager();
      }
    }
  }
  return unaff_RDI & 0xffffffff;
}





// 函数: void FUN_18089b3d4(void)
void FUN_18089b3d4(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}





// 函数: void FUN_18089b3e6(void)
void FUN_18089b3e6(void)

{
  return;
}





// 函数: void FUN_18089b400(int64_t param_1,uint64_t param_2)
void FUN_18089b400(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_28 [32];
  
  iVar1 = FUN_1808ddc20(param_2,auStack_28,0,0x4f525443);
  if (iVar1 == 0) {
    iVar1 = FUN_1808a79f0(param_2,param_1 + 8);
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,auStack_28);
    }
  }
  return;
}



uint64_t FUN_18089b460(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  char unaff_BPL;
  char in_stack_00000008;
  
  if (*(uint *)(param_2 + 8) < 0x55) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*param_2,param_1 + 0x50);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*param_2,param_1 + 0x54);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*param_2,param_1 + 0x78);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = FUN_1808995c0(*param_2,param_1 + 0x58);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = FUN_1808995c0(*param_2,param_1 + 0x5c);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(uint *)(param_2 + 8) < 0x53) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    lVar1 = *param_2;
    uVar2 = FUN_1808aed00(lVar1,param_1 + 0x60,4);
    if ((((int)uVar2 == 0) && (uVar2 = FUN_1808aed00(lVar1,param_1 + 100,2), (int)uVar2 == 0)) &&
       (uVar2 = FUN_1808aed00(lVar1,param_1 + 0x66,2), (int)uVar2 == 0)) {
      uVar2 = FUN_1808aed00(lVar1,param_1 + 0x68,8);
    }
    in_stack_00000008 = unaff_BPL;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*param_2,param_1 + 0x70);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*param_2,param_1 + 0x74);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if (*(uint *)(param_2 + 8) < 0x7d) {
    return 0;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  param_2 = (int64_t *)*param_2;
  if (*param_2 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (param_2[2] != 0) {
      uVar2 = func_0x00018076a7d0(*param_2,&stack0x00000018);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (param_2[2] == 0) {
        uVar2 = 0x11;
        goto LAB_1808a2e6d;
      }
    }
    uVar2 = FUN_180769ed0(*param_2,&stack0x00000008,1,1,0);
  }
LAB_1808a2e6d:
  if ((int)uVar2 == 0) {
    *(bool *)(param_1 + 0x7c) = in_stack_00000008 != (char)uVar2;
  }
  return uVar2;
}



uint64_t FUN_18089b52a(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  bool in_CF;
  char cStack0000000000000030;
  uint in_stack_00000040;
  
  if (in_CF) {
    if (*(int *)(in_RAX + 0x18) != 0) {
      return 0x1c;
    }
    lVar1 = *unaff_RBX;
    _cStack0000000000000030 = unaff_RBP;
    uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 0x60,4);
    if ((((int)uVar3 == 0) && (uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 100,2), (int)uVar3 == 0)) &&
       (uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 0x66,2), (int)uVar3 == 0)) {
      uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 0x68,8);
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  else {
    if (*(int *)(in_RAX + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x70);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x74);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  if (*(uint *)(unaff_RBX + 8) < 0x7d) {
    return 0;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)*unaff_RBX;
  if (*plVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      in_stack_00000040 = 0;
      uVar3 = func_0x00018076a7d0(*plVar2,&stack0x00000040);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar2[2] < (uint64_t)in_stack_00000040 + 1) {
        uVar3 = 0x11;
        goto LAB_1808a2e6d;
      }
    }
    uVar3 = FUN_180769ed0(*plVar2,&stack0x00000030,1,1,0);
  }
LAB_1808a2e6d:
  if ((int)uVar3 == 0) {
    *(bool *)(unaff_RDI + 0x7c) = cStack0000000000000030 != (char)uVar3;
  }
  return uVar3;
}



uint64_t FUN_18089b540(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  char unaff_BPL;
  int64_t unaff_RDI;
  uint in_stack_00000040;
  
  lVar1 = *unaff_RBX;
  uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 0x60);
  if ((((int)uVar3 == 0) && (uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 100,2), (int)uVar3 == 0)) &&
     (uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 0x66,2), (int)uVar3 == 0)) {
    uVar3 = FUN_1808aed00(lVar1,unaff_RDI + 0x68,8);
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(uint *)(unaff_RBX + 8) < 0x7d) {
    return 0;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)*unaff_RBX;
  if (*plVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      in_stack_00000040 = 0;
      uVar3 = func_0x00018076a7d0(*plVar2,&stack0x00000040);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar2[2] < (uint64_t)in_stack_00000040 + 1) {
        uVar3 = 0x11;
        goto LAB_1808a2e6d;
      }
    }
    uVar3 = FUN_180769ed0(*plVar2,&stack0x00000030,1,1,0);
  }
LAB_1808a2e6d:
  if ((int)uVar3 == 0) {
    *(bool *)(unaff_RDI + 0x7c) = unaff_BPL != (char)uVar3;
  }
  return uVar3;
}





// 函数: void FUN_18089b599(void)
void FUN_18089b599(void)

{
  return;
}



uint64_t FUN_18089b5a9(int param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  char in_stack_00000030;
  uint64_t in_stack_00000038;
  uint uStack0000000000000040;
  int32_t uStack0000000000000044;
  
  if (param_1 != 0) {
    return 0x1c;
  }
  uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x70);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x74);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(uint *)(unaff_RBX + 8) < 0x7d) {
    return 0;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  in_stack_00000038 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      uStack0000000000000040 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x00000040);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)uStack0000000000000040 + 1) {
        uVar2 = 0x11;
        goto LAB_1808a2e6d;
      }
    }
    uVar2 = FUN_180769ed0(*plVar1,&stack0x00000030,1,1,0);
  }
LAB_1808a2e6d:
  if ((int)uVar2 == 0) {
    *(bool *)(unaff_RDI + 0x7c) = in_stack_00000030 != (char)uVar2;
  }
  return uVar2;
}





// 函数: void FUN_18089b5fc(void)
void FUN_18089b5fc(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  char in_stack_00000030;
  uint64_t uStack0000000000000038;
  uint uStack0000000000000040;
  
  plVar1 = (int64_t *)*unaff_RBX;
  uStack0000000000000038 = _uStack0000000000000040;
  if (*plVar1 == 0) {
    iVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      uStack0000000000000040 = 0;
      iVar2 = func_0x00018076a7d0(*plVar1,&stack0x00000040);
      if (iVar2 != 0) {
        return;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)uStack0000000000000040 + 1) {
        iVar2 = 0x11;
        goto LAB_1808a2e6d;
      }
    }
    iVar2 = FUN_180769ed0(*plVar1,&stack0x00000030,1,1,0);
  }
LAB_1808a2e6d:
  if (iVar2 == 0) {
    *(bool *)(unaff_RDI + 0x7c) = in_stack_00000030 != '\0';
  }
  return;
}



uint64_t FUN_18089b617(void)

{
  return 0;
}





// 函数: void FUN_18089b61e(void)
void FUN_18089b61e(void)

{
  return;
}



uint64_t FUN_18089b630(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  
  uVar1 = FUN_1808ddc20(param_2,auStack_48,1,0x54495645);
  if (((((int)uVar1 == 0) &&
       (uVar1 = FUN_1808ddc20(param_2,auStack_68,0,0x42495645), (int)uVar1 == 0)) &&
      (uVar1 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar1 == 0)) &&
     (uVar1 = FUN_180899360(param_2,param_1 + 0xd8), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_1808995c0(*param_2,param_1 + 0xf8);
    if ((int)uVar1 == 0) {
      auStackX_20[0] = 0;
      uVar1 = FUN_1808afe30(*param_2,auStackX_20);
      if ((int)uVar1 == 0) {
        iVar2 = 0;
        auStackX_18[0] = 0;
        uVar3 = auStackX_20[0] & 1;
        uVar4 = auStackX_20[0] >> 1;
        if (uVar4 != 0) {
          do {
            uVar1 = FUN_1808dde10(param_2,auStackX_18[0]);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            uVar1 = FUN_1808a7f40(param_2,param_1 + 0xe8,iVar2,param_1);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            uVar1 = FUN_1808de0e0(param_2,auStackX_18);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            iVar2 = iVar2 + 1;
            auStackX_18[0] = auStackX_18[0] & -uVar3;
          } while (iVar2 < (int)uVar4);
        }
                    // WARNING: Subroutine does not return
        AdvancedSystemManager(param_2,auStack_68);
      }
    }
  }
  return uVar1;
}





// 函数: void FUN_18089b6df(void)
void FUN_18089b6df(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uStack00000000000000a8;
  
  uStack00000000000000a8 = 0;
  iVar1 = FUN_1808afe30();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = 0;
  uVar3 = uStack00000000000000a8 >> 1;
  if (uVar3 != 0) {
    do {
      iVar2 = FUN_1808dde10();
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_1808a7f40();
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_1808de0e0();
      if (iVar2 != 0) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar3);
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}





