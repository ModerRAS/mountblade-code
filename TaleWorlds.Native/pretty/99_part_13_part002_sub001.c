#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part002_sub001.c - 7 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_13_part002.c - 7 个函数


// 函数: void FUN_1808a6a31(void)
void FUN_1808a6a31(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a6a40(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  int64_t lStackX_10;
  uint auStackX_20 [2];
  
  iVar5 = 0;
  auStackX_20[0] = 0;
  lStackX_10 = param_2;
  uVar1 = FUN_1808afe30(*param_1,auStackX_20);
  if ((int)uVar1 == 0) {
    uVar6 = auStackX_20[0] & 1;
    uVar7 = auStackX_20[0] >> 1;
    auStackX_8[0] = 0;
    if (uVar7 != 0) {
      do {
        uVar1 = FUN_1808dde10(param_1,auStackX_8[0]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (int64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_816_ptr,0x269,0,
                               (char)uVar1,1);
        if (plVar2 == (int64_t *)0x0) {
          return 0x26;
        }
        *plVar2 = (int64_t)plVar2;
        plVar2[1] = (int64_t)plVar2;
        plVar2[2] = 0;
        plVar2[3] = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
        if (*(int *)(param_1[1] + 0x18) == 0) {
          iVar4 = FUN_1808a2740(*param_1,plVar2 + 2);
          if (iVar4 != 0) goto LAB_1808a6b62;
          if (*(int *)(param_1[1] + 0x18) != 0) {
            iVar4 = 0x1c;
            goto LAB_1808a6b62;
          }
          iVar4 = FUN_1808a2740(*param_1,plVar2 + 4);
          if (iVar4 != 0) goto LAB_1808a6b62;
        }
        else {
          iVar4 = 0x1c;
LAB_1808a6b62:
          if (iVar4 != 0) {
            FUN_180840270(plVar2 + 4);
            FUN_180840270(plVar2 + 2);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
          }
        }
        plVar3 = (int64_t *)*plVar2;
        if (plVar3 != plVar2) {
          iVar4 = 0;
          do {
            plVar3 = (int64_t *)*plVar3;
            iVar4 = iVar4 + 1;
          } while (plVar3 != plVar2);
          if (iVar4 != 0) {
            FUN_180840270(plVar2 + 4);
            FUN_180840270(plVar2 + 2);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
          }
        }
        plVar2[1] = *(int64_t *)(lStackX_10 + 8);
        *plVar2 = lStackX_10;
        *(int64_t **)(lStackX_10 + 8) = plVar2;
        *(int64_t **)plVar2[1] = plVar2;
        uVar1 = FUN_1808de0e0(param_1,auStackX_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        auStackX_8[0] = auStackX_8[0] & -uVar6;
      } while (iVar5 < (int)uVar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a6a69(void)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  uint uStack0000000000000080;
  int64_t in_stack_00000088;
  uint in_stack_00000098;
  
  uStack0000000000000080 = (uint)unaff_RDI;
  uVar6 = unaff_RDI & 0xffffffff;
  if (in_stack_00000098 >> 1 == 0) {
LAB_1808a6cd2:
    uVar1 = 0;
  }
  else {
    while (uVar1 = FUN_1808dde10(), (int)uVar1 == 0) {
      plVar2 = (int64_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_816_ptr,0x269,
                             (int)unaff_RDI);
      if (plVar2 == (int64_t *)0x0) {
        return 0x26;
      }
      *plVar2 = (int64_t)plVar2;
      plVar2[1] = (int64_t)plVar2;
      plVar2[2] = unaff_RDI;
      plVar2[3] = 0;
      plVar2[4] = unaff_RDI;
      plVar2[5] = 0;
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        iVar4 = FUN_1808a2740(*unaff_RSI,plVar2 + 2);
        if (iVar4 != 0) goto LAB_1808a6b62;
        if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
          iVar4 = 0x1c;
          goto LAB_1808a6b62;
        }
        iVar4 = FUN_1808a2740(*unaff_RSI,plVar2 + 4);
        if (iVar4 != 0) goto LAB_1808a6b62;
      }
      else {
        iVar4 = 0x1c;
LAB_1808a6b62:
        if (iVar4 != 0) {
          FUN_180840270(plVar2 + 4);
          FUN_180840270(plVar2 + 2);
          *(int64_t *)plVar2[1] = *plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
          *(int64_t **)plVar2[1] = plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
        }
      }
      plVar3 = (int64_t *)*plVar2;
      if (plVar3 != plVar2) {
        iVar4 = 0;
        do {
          plVar3 = (int64_t *)*plVar3;
          iVar4 = iVar4 + 1;
        } while (plVar3 != plVar2);
        if (iVar4 != 0) {
          FUN_180840270(plVar2 + 4);
          FUN_180840270(plVar2 + 2);
          *(int64_t *)plVar2[1] = *plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
          *(int64_t **)plVar2[1] = plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
        }
      }
      plVar2[1] = *(int64_t *)(in_stack_00000088 + 8);
      *plVar2 = in_stack_00000088;
      *(int64_t **)(in_stack_00000088 + 8) = plVar2;
      *(int64_t **)plVar2[1] = plVar2;
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uStack0000000000000080 = uStack0000000000000080 & -(in_stack_00000098 & 1);
      if ((int)(in_stack_00000098 >> 1) <= (int)uVar5) goto LAB_1808a6cd2;
      unaff_RDI = 0;
    }
  }
  return uVar1;
}







// 函数: void FUN_1808a6cf5(void)
void FUN_1808a6cf5(void)

{
  return;
}



uint64_t FUN_1808a6d00(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  int16_t auStackX_18 [4];
  
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    auStackX_18[0] = (int16_t)uVar3;
    puVar4 = (uint *)auStackX_18;
    uVar5 = 2;
  }
  else {
    puVar4 = auStackX_10;
    uVar5 = 4;
    auStackX_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    auStackX_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar5 = FUN_1808a27f0(*param_1,puVar1 + 2);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a6df4;
        }
        uVar5 = FUN_1808a27f0(*param_1,puVar1 + 4);
        if ((int)uVar5 != 0) goto LAB_1808a6df4;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a6df4:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_1808a6d84(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  uint64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  
  puVar1 = (uint64_t *)*unaff_R14;
  uStack0000000000000050 = unaff_EBX;
  do {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = FUN_1808ddf00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar2 = FUN_1808a27f0(*unaff_RDI,puVar1 + 2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        goto LAB_1808a6df4;
      }
      uVar2 = FUN_1808a27f0(*unaff_RDI,puVar1 + 4);
      if ((int)uVar2 != 0) goto LAB_1808a6df4;
    }
    else {
      uVar2 = 0x1c;
LAB_1808a6df4:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_1808de160();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}







// 函数: void FUN_1808a6e37(void)
void FUN_1808a6e37(void)

{
  return;
}



uint64_t FUN_1808a6e50(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar3);
    puVar4 = auStackX_18;
    uVar5 = 2;
  }
  else {
    puVar4 = auStackX_10;
    uVar5 = 4;
    auStackX_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    auStackX_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        auStackX_18[0] = *(uint *)((int64_t)puVar1 + 0x24);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_18,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a6f95;
        }
        uVar5 = FUN_180899ef0(*param_1,puVar1 + 2);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a6f95;
        }
        auStackX_10[0] = *(uint *)(puVar1 + 4);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_10,4);
        if ((int)uVar5 != 0) goto LAB_1808a6f95;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a6f95:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_1808a6ed4(int32_t param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_03;
  uint uStack0000000000000050;
  int32_t in_stack_00000058;
  int32_t in_stack_00000060;
  
  puVar1 = (uint64_t *)*unaff_R14;
  uStack0000000000000050 = unaff_EBX;
  do {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = FUN_1808ddf00(param_1,uStack0000000000000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      in_stack_00000060 = *(int32_t *)((int64_t)puVar1 + 0x24);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RDI + 8))
                        (*(uint64_t **)(*unaff_RDI + 8),&stack0x00000060,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_00;
        goto LAB_1808a6f95;
      }
      uVar2 = FUN_180899ef0(*unaff_RDI,puVar1 + 2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_01;
        goto LAB_1808a6f95;
      }
      in_stack_00000058 = *(int32_t *)(puVar1 + 4);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RDI + 8))
                        (*(uint64_t **)(*unaff_RDI + 8),&stack0x00000058,4);
      uVar3 = extraout_XMM0_Da_02;
      if ((int)uVar2 != 0) goto LAB_1808a6f95;
    }
    else {
      uVar2 = 0x1c;
      uVar3 = extraout_XMM0_Da;
LAB_1808a6f95:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_1808de160(uVar3,&stack0x00000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
    param_1 = extraout_XMM0_Da_03;
  } while( true );
}







// 函数: void FUN_1808a6fd8(void)
void FUN_1808a6fd8(void)

{
  return;
}



uint64_t FUN_1808a6ff0(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  int32_t auStack_38 [4];
  
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar3);
    puVar4 = auStackX_18;
    uVar5 = 2;
  }
  else {
    puVar4 = auStackX_10;
    uVar5 = 4;
    auStackX_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    auStackX_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        auStackX_18[0] = *(uint *)((int64_t)puVar1 + 0x2c);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_18,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a7170;
        }
        uVar5 = FUN_180899ef0(*param_1,puVar1 + 3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a7170;
        }
        auStackX_10[0] = *(uint *)(puVar1 + 5);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_10,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a7170;
        }
        auStack_38[0] = *(int32_t *)(puVar1 + 6);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStack_38,4);
        if ((int)uVar5 != 0) goto LAB_1808a7170;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a7170:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t
FUN_1808a7073(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int unaff_EBP;
  uint unaff_EDI;
  uint64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_04;
  uint uStack0000000000000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000070;
  
  puVar1 = (uint64_t *)*unaff_R15;
  uStack0000000000000060 = unaff_EDI;
  do {
    if (puVar1 == unaff_R15) {
      return 0;
    }
    uVar2 = FUN_1808ddf00(param_1,uStack0000000000000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      in_stack_00000070 = *(int32_t *)((int64_t)puVar1 + 0x2c);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000070,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_00;
        goto LAB_1808a7170;
      }
      uVar2 = FUN_180899ef0(*unaff_RBX,puVar1 + 3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_01;
        goto LAB_1808a7170;
      }
      in_stack_00000068 = *(int32_t *)(puVar1 + 5);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000068,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_02;
        goto LAB_1808a7170;
      }
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000020,4,param_4,
                         *(int32_t *)(puVar1 + 6));
      uVar3 = extraout_XMM0_Da_03;
      if ((int)uVar2 != 0) goto LAB_1808a7170;
    }
    else {
      uVar2 = 0x1c;
      uVar3 = extraout_XMM0_Da;
LAB_1808a7170:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_1808de160(uVar3,&stack0x00000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000060 = uStack0000000000000060 & -unaff_EBP;
    if (puVar1 == unaff_R15) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
    param_1 = extraout_XMM0_Da_04;
  } while( true );
}







// 函数: void FUN_1808a71b2(void)
void FUN_1808a71b2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a71c0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  iVar5 = 0;
  auStackX_20[0] = 0;
  uVar1 = FUN_1808afe30(*param_1,auStackX_20);
  if ((int)uVar1 == 0) {
    uVar7 = auStackX_20[0] & 1;
    auStackX_8[0] = 0;
    uVar6 = auStackX_20[0] >> 1;
    if (uVar6 != 0) {
      do {
        uVar1 = FUN_1808dde10(param_1,auStackX_8[0]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (int64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_816_ptr,0x269,0,
                               (char)uVar1,1);
        if (plVar2 == (int64_t *)0x0) {
          return 0x26;
        }
        *plVar2 = (int64_t)plVar2;
        plVar2[1] = (int64_t)plVar2;
        *(int32_t *)(plVar2 + 2) = 0;
        plVar2[3] = 0;
        *(int32_t *)(plVar2 + 4) = 0;
        if (*(int *)(param_1[1] + 0x18) == 0) {
          iVar4 = FUN_1808aed00(*param_1,plVar2 + 2,4);
          if (iVar4 != 0) goto LAB_1808a72d9;
          if (*(int *)(param_1[1] + 0x18) != 0) {
            iVar4 = 0x1c;
            goto LAB_1808a72d9;
          }
          iVar4 = FUN_1808993e0(plVar2 + 3,*param_1);
          if (iVar4 != 0) goto LAB_1808a72d9;
        }
        else {
          iVar4 = 0x1c;
LAB_1808a72d9:
          if (iVar4 != 0) {
            FUN_1808b0fb0(plVar2 + 3,0);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
          }
        }
        plVar3 = (int64_t *)*plVar2;
        iVar4 = 0;
        if (plVar3 != plVar2) {
          do {
            plVar3 = (int64_t *)*plVar3;
            iVar4 = iVar4 + 1;
          } while (plVar3 != plVar2);
          if (iVar4 != 0) {
            FUN_1808b0fb0(plVar2 + 3,0);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
          }
        }
        plVar2[1] = *(int64_t *)(param_2 + 8);
        *plVar2 = param_2;
        *(int64_t **)(param_2 + 8) = plVar2;
        *(int64_t **)plVar2[1] = plVar2;
        uVar1 = FUN_1808de0e0(param_1,auStackX_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        auStackX_8[0] = auStackX_8[0] & -uVar7;
      } while (iVar5 < (int)uVar6);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a71ea(void)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *unaff_RSI;
  int32_t uVar8;
  uint64_t unaff_RDI;
  int64_t unaff_R13;
  uint uStack0000000000000080;
  uint in_stack_00000098;
  
  uStack0000000000000080 = (uint)unaff_RDI;
  uVar7 = unaff_RDI & 0xffffffff;
  if (in_stack_00000098 >> 1 != 0) {
    do {
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar8 = (int32_t)unaff_RDI;
      plVar3 = (int64_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_816_ptr,0x269,uVar8
                            );
      if (plVar3 == (int64_t *)0x0) {
        return 0x26;
      }
      *plVar3 = (int64_t)plVar3;
      plVar3[1] = (int64_t)plVar3;
      *(int32_t *)(plVar3 + 2) = uVar8;
      plVar3[3] = unaff_RDI;
      *(int32_t *)(plVar3 + 4) = uVar8;
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        iVar1 = FUN_1808aed00(*unaff_RSI,plVar3 + 2,4);
        if (iVar1 != 0) goto LAB_1808a72d9;
        if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
          iVar1 = 0x1c;
          goto LAB_1808a72d9;
        }
        iVar1 = FUN_1808993e0(plVar3 + 3,*unaff_RSI);
        if (iVar1 != 0) goto LAB_1808a72d9;
      }
      else {
        iVar1 = 0x1c;
LAB_1808a72d9:
        if (iVar1 != 0) {
          FUN_1808b0fb0(plVar3 + 3,0);
          *(int64_t *)plVar3[1] = *plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
          *(int64_t **)plVar3[1] = plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_2144_ptr,0xc6,1);
        }
      }
      plVar4 = (int64_t *)*plVar3;
      unaff_RDI = 0;
      uVar6 = unaff_RDI;
      if (plVar4 != plVar3) {
        do {
          plVar4 = (int64_t *)*plVar4;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (uint64_t)uVar5;
        } while (plVar4 != plVar3);
        if (uVar5 != 0) {
          FUN_1808b0fb0(plVar3 + 3,0);
          *(int64_t *)plVar3[1] = *plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
          *(int64_t **)plVar3[1] = plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_2144_ptr,0xc6,1);
        }
      }
      plVar3[1] = *(int64_t *)(unaff_R13 + 8);
      *plVar3 = unaff_R13;
      *(int64_t **)(unaff_R13 + 8) = plVar3;
      *(int64_t **)plVar3[1] = plVar3;
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar5;
      uStack0000000000000080 = uStack0000000000000080 & -(in_stack_00000098 & 1);
    } while ((int)uVar5 < (int)(in_stack_00000098 >> 1));
  }
  return 0;
}







// 函数: void FUN_1808a7366(void)
void FUN_1808a7366(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





