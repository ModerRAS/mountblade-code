#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part003.c - 10 个函数

// 函数: void FUN_1808a75ad(void)
void FUN_1808a75ad(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a75c0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  auStackX_20[0] = 0;
  uVar1 = FUN_1808afe30(*param_1,auStackX_20);
  if ((int)uVar1 == 0) {
    iVar6 = 0;
    uVar5 = auStackX_20[0] & 1;
    auStackX_8[0] = 0;
    uVar7 = auStackX_20[0] >> 1;
    if (uVar7 != 0) {
      do {
        uVar1 = FUN_1808dde10(param_1,auStackX_8[0]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        puVar2 = (int32_t *)FUN_180847820();
        uStack_48 = *puVar2;
        uStack_44 = puVar2[1];
        uStack_40 = puVar2[2];
        uStack_3c = puVar2[3];
        puVar2 = (int32_t *)FUN_180847820();
        uStack_38 = *puVar2;
        uStack_34 = puVar2[1];
        uStack_30 = puVar2[2];
        uStack_2c = puVar2[3];
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar1 = *param_1;
          uVar3 = FUN_1808aed00(uVar1,&uStack_48,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808aed00(uVar1,&uStack_44,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808aed00(uVar1,(int64_t)&uStack_44 + 2,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808aed00(uVar1,&uStack_40,8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar1 = FUN_180899090(uVar1,&uStack_38);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          plVar4 = (int64_t *)
                   FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_1696_ptr,0xbf,0,
                                 0,1);
          if (plVar4 == (int64_t *)0x0) {
            uVar1 = 0x26;
          }
          else {
            *plVar4 = (int64_t)plVar4;
            plVar4[1] = (int64_t)plVar4;
            *(int32_t *)(plVar4 + 2) = uStack_48;
            *(int32_t *)((int64_t)plVar4 + 0x14) = uStack_44;
            *(int32_t *)(plVar4 + 3) = uStack_40;
            *(int32_t *)((int64_t)plVar4 + 0x1c) = uStack_3c;
            plVar4[4] = CONCAT44(uStack_34,uStack_38);
            plVar4[5] = CONCAT44(uStack_2c,uStack_30);
            plVar4[1] = *(int64_t *)(param_2 + 8);
            *plVar4 = param_2;
            *(int64_t **)(param_2 + 8) = plVar4;
            *(int64_t **)plVar4[1] = plVar4;
            uVar1 = 0;
          }
          if ((int)uVar1 != 0) goto LAB_1808a7763;
        }
        else {
          uVar1 = 0x1c;
LAB_1808a7763:
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        uVar1 = FUN_1808de0e0(param_1,auStackX_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar6 = iVar6 + 1;
        auStackX_8[0] = auStackX_8[0] & -uVar5;
      } while (iVar6 < (int)uVar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a75ed(int32_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  uint uVar5;
  uint64_t *unaff_RDI;
  uint unaff_R12D;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar6;
  int32_t extraout_XMM0_Da_00;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint uStack0000000000000090;
  uint in_stack_000000a8;
  
  uStack0000000000000090 = unaff_R12D;
  uVar5 = unaff_R12D;
  if (in_stack_000000a8 >> 1 != 0) {
    do {
      uVar2 = FUN_1808dde10(param_1,uStack0000000000000090);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      puVar3 = (int32_t *)FUN_180847820();
      uStack0000000000000040 = *puVar3;
      uStack0000000000000044 = puVar3[1];
      uStack0000000000000048 = puVar3[2];
      uStack000000000000004c = puVar3[3];
      puVar3 = (int32_t *)FUN_180847820();
      uVar6 = *puVar3;
      uStack0000000000000054 = puVar3[1];
      uStack0000000000000058 = puVar3[2];
      uStack000000000000005c = puVar3[3];
      uStack0000000000000050 = uVar6;
      if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_R12D) {
        uVar1 = *unaff_RDI;
        uVar2 = FUN_1808aed00(uVar1,&stack0x00000040,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,(int64_t)&stack0x00000040 + 4,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,(int64_t)&stack0x00000040 + 6,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,&stack0x00000048,8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_180899090(uVar1,&stack0x00000050);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        plVar4 = (int64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_1696_ptr,0xbf);
        if (plVar4 == (int64_t *)0x0) {
          uVar2 = 0x26;
          uVar6 = extraout_XMM0_Da;
        }
        else {
          *plVar4 = (int64_t)plVar4;
          plVar4[1] = (int64_t)plVar4;
          *(int32_t *)(plVar4 + 2) = uStack0000000000000040;
          *(int32_t *)((int64_t)plVar4 + 0x14) = uStack0000000000000044;
          *(int32_t *)(plVar4 + 3) = uStack0000000000000048;
          *(int32_t *)((int64_t)plVar4 + 0x1c) = uStack000000000000004c;
          plVar4[4] = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          plVar4[5] = CONCAT44(uStack000000000000005c,uStack0000000000000058);
          plVar4[1] = *(int64_t *)(unaff_R15 + 8);
          *plVar4 = unaff_R15;
          *(int64_t **)(unaff_R15 + 8) = plVar4;
          *(int64_t **)plVar4[1] = plVar4;
          uVar2 = (uint64_t)unaff_R12D;
          uVar6 = uStack0000000000000040;
        }
        if ((int)uVar2 != 0) goto LAB_1808a7763;
      }
      else {
        uVar2 = 0x1c;
LAB_1808a7763:
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      uVar2 = FUN_1808de0e0(uVar6,&stack0x00000090);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar5 = uVar5 + 1;
      uStack0000000000000090 = uStack0000000000000090 & -(in_stack_000000a8 & 1);
      param_1 = extraout_XMM0_Da_00;
    } while ((int)uVar5 < (int)(in_stack_000000a8 >> 1));
  }
  return 0;
}






// 函数: void FUN_1808a77b2(void)
void FUN_1808a77b2(void)

{
  return;
}



uint64_t FUN_1808a77c0(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint64_t uVar6;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  int16_t auStackX_18 [4];
  
  iVar3 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar3 = iVar3 + 1;
  }
  uVar4 = iVar3 * 2 | param_3;
  if (uVar4 < 0x8000) {
    auStackX_18[0] = (int16_t)uVar4;
    puVar5 = (uint *)auStackX_18;
    uVar6 = 2;
  }
  else {
    puVar5 = auStackX_10;
    uVar6 = 4;
    auStackX_10[0] = (uVar4 & 0xffffc000 | 0x4000) * 2 | uVar4 & 0x7fff;
  }
  uVar6 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar5,uVar6);
  if ((int)uVar6 == 0) {
    puVar1 = (uint64_t *)*param_2;
    auStackX_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar6 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      lVar2 = *param_1;
      uVar6 = FUN_180899ef0(lVar2,puVar1 + 2);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_180899ef0(lVar2,puVar1 + 4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_1808a7843(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t *unaff_R14;
  uint64_t *unaff_R15;
  uint uStack0000000000000050;
  
  puVar1 = (uint64_t *)*unaff_R14;
  uStack0000000000000050 = unaff_EBX;
  while( true ) {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = FUN_1808ddf00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_R15[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = *unaff_R15;
    uVar3 = FUN_180899ef0(uVar2,puVar1 + 2);
    if ((int)uVar3 != 0) break;
    uVar2 = FUN_180899ef0(uVar2,puVar1 + 4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808de160();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000050 = uStack0000000000000050 & -unaff_EBP;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return uVar3;
}






// 函数: void FUN_1808a78d5(void)
void FUN_1808a78d5(void)

{
  return;
}



uint64_t FUN_1808a78e0(void)

{
  return 0x1c;
}



uint64_t FUN_1808a78f0(int64_t *param_1,uint64_t *param_2)

{
  uint uVar1;
  uint *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int16_t auStackX_8 [4];
  int32_t auStackX_10 [2];
  uint auStackX_18 [2];
  int32_t auStackX_20 [2];
  
  uVar1 = *(int *)(param_2 + 1) * 2;
  if ((uVar1 | 1) < 0x8000) {
    auStackX_8[0] = (int16_t)(uVar1 | 1);
    uVar4 = 2;
    puVar2 = (uint *)auStackX_8;
  }
  else {
    uVar4 = 4;
    auStackX_18[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
    puVar2 = auStackX_18;
  }
  uVar4 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar2,uVar4);
  if ((int)uVar4 == 0) {
    puVar3 = (int32_t *)*param_2;
    auStackX_10[0] = 0;
    for (; ((int32_t *)*param_2 <= puVar3 &&
           (puVar3 < (int32_t *)*param_2 + *(int *)(param_2 + 1))); puVar3 = puVar3 + 1) {
      uVar4 = FUN_1808ddf00(param_1,auStackX_10[0],puVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_20[0] = *puVar3;
      uVar4 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),auStackX_20,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808de160(param_1,auStackX_10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808a7959(uint64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int32_t uStack0000000000000048;
  int32_t in_stack_00000058;
  
  puVar2 = (int32_t *)*unaff_RSI;
  uStack0000000000000048 = param_2;
  while( true ) {
    if ((puVar2 < (int32_t *)*unaff_RSI) ||
       ((int32_t *)*unaff_RSI + *(int *)(unaff_RSI + 1) <= puVar2)) {
      return 0;
    }
    uVar1 = FUN_1808ddf00();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) != 0) break;
    in_stack_00000058 = *puVar2;
    uVar1 = (**(code **)**(uint64_t **)(*unaff_RDI + 8))
                      (*(uint64_t **)(*unaff_RDI + 8),&stack0x00000058,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1808de160();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar2 = puVar2 + 1;
  }
  return 0x1c;
}



uint64_t FUN_1808a79e0(void)

{
  return 0;
}






// 函数: void FUN_1808a79e7(void)
void FUN_1808a79e7(void)

{
  return;
}



uint64_t FUN_1808a79f0(uint64_t *param_1,int64_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint auStackX_8 [2];
  uint auStackX_18 [2];
  
  auStackX_18[0] = 0;
  uVar2 = FUN_1808afe30(*param_1,auStackX_18);
  uVar1 = auStackX_18[0];
  if ((int)uVar2 == 0) {
    uVar3 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
    uVar5 = auStackX_18[0] & 1;
    uVar6 = auStackX_18[0] >> 1;
    if (((int)uVar6 <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar3) - uVar3)) ||
       (uVar2 = FUN_180748010(param_2,uVar6), (int)uVar2 == 0)) {
      iVar4 = (int)param_2[1];
      if (iVar4 < (int)uVar6) {
                    // WARNING: Subroutine does not return
        memset((int64_t)iVar4 * 0x10 + *param_2,0,(int64_t)(int)(uVar6 - iVar4) << 4);
      }
      *(uint *)(param_2 + 1) = uVar6;
      iVar4 = 0;
      auStackX_8[0] = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar2 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = FUN_180899090(*param_1,(int64_t)iVar4 * 0x10 + *param_2);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar4 = iVar4 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar5;
        } while (iVar4 < (int)uVar6);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_1808a7a1f(void)

{
  uint in_EAX;
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint64_t *unaff_RDI;
  int64_t *unaff_R14;
  uint in_stack_00000050;
  
  uVar3 = in_stack_00000050 >> 1;
  if (((int)uVar3 <= (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) ||
     (uVar1 = FUN_180748010(), (int)uVar1 == 0)) {
    iVar2 = (int)unaff_R14[1];
    if (iVar2 < (int)uVar3) {
                    // WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x10 + *unaff_R14,0,(int64_t)(int)(uVar3 - iVar2) << 4);
    }
    *(uint *)(unaff_R14 + 1) = uVar3;
    iVar2 = 0;
    if (in_stack_00000050 >> 1 != 0) {
      do {
        uVar1 = FUN_1808dde10();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
          uVar1 = FUN_180899090(*unaff_RDI,(int64_t)iVar2 * 0x10 + *unaff_R14);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1808de0e0();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar3);
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808a7a7a(void)

{
  uint in_EAX;
  uint64_t uVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  uint64_t *unaff_RDI;
  int64_t *unaff_R14;
  uint uStack0000000000000040;
  
  iVar2 = 0;
  uStack0000000000000040 = in_EAX;
  if (unaff_ESI != 0) {
    do {
      uVar1 = FUN_1808dde10();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar1 = FUN_180899090(*unaff_RDI,(int64_t)iVar2 * 0x10 + *unaff_R14);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      uStack0000000000000040 = uStack0000000000000040 & -unaff_EBP;
    } while (iVar2 < unaff_ESI);
  }
  return 0;
}






// 函数: void FUN_1808a7aed(void)
void FUN_1808a7aed(void)

{
  return;
}






// 函数: void FUN_1808a7af7(void)
void FUN_1808a7af7(void)

{
  return;
}



uint64_t FUN_1808a7b00(int64_t *param_1,uint64_t *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int16_t auStackX_8 [4];
  int32_t auStackX_10 [2];
  uint auStackX_18 [4];
  
  uVar1 = (int)param_2[1] * 2;
  if ((uVar1 | 1) < 0x8000) {
    auStackX_8[0] = (int16_t)(uVar1 | 1);
    uVar4 = 2;
    puVar2 = (uint *)auStackX_8;
  }
  else {
    uVar4 = 4;
    auStackX_18[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
    puVar2 = auStackX_18;
  }
  uVar4 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar2,uVar4);
  if ((int)uVar4 == 0) {
    uVar3 = *param_2;
    auStackX_10[0] = 0;
    for (; (*param_2 <= uVar3 && (uVar3 < (int64_t)(int)param_2[1] * 0x10 + *param_2));
        uVar3 = uVar3 + 0x10) {
      uVar4 = FUN_1808ddf00(param_1,auStackX_10[0]);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar4 = FUN_180899ef0(*param_1,uVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808de160(param_1,auStackX_10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808a7b69(uint64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t uStack0000000000000048;
  
  uVar2 = *unaff_RSI;
  uStack0000000000000048 = param_2;
  while( true ) {
    if ((uVar2 < *unaff_RSI) || ((int64_t)(int)unaff_RSI[1] * 0x10 + *unaff_RSI <= uVar2)) {
      return 0;
    }
    uVar1 = FUN_1808ddf00();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) != 0) break;
    uVar1 = FUN_180899ef0(*unaff_RDI,uVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1808de160();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = uVar2 + 0x10;
  }
  return 0x1c;
}



uint64_t FUN_1808a7be1(void)

{
  return 0;
}






// 函数: void FUN_1808a7be8(void)
void FUN_1808a7be8(void)

{
  return;
}



uint64_t FUN_1808a7bf0(int64_t *param_1,int32_t *param_2,uint param_3)

{
  uint64_t uVar1;
  int32_t auStackX_18 [4];
  
  if (*(uint *)(param_1 + 8) < param_3) {
    return 0;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_18[0] = *param_2;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_18,4)
  ;
  return uVar1;
}



uint64_t FUN_1808a7c40(int64_t *param_1,int32_t *param_2,uint param_3)

{
  uint64_t uVar1;
  int32_t auStackX_18 [4];
  
  if (*(uint *)(param_1 + 8) < param_3) {
    return 0;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_18[0] = *param_2;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_18,4)
  ;
  return uVar1;
}



uint64_t FUN_1808a7c90(int64_t *param_1,int8_t *param_2,uint param_3)

{
  uint64_t uVar1;
  int8_t auStackX_18 [16];
  
  if (*(uint *)(param_1 + 8) < param_3) {
    return 0;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_18[0] = *param_2;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_18,1)
  ;
  return uVar1;
}



uint64_t FUN_1808a7ce0(int64_t *param_1,int64_t *param_2,int param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint auStackX_8 [2];
  uint auStackX_18 [2];
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  param_1 = (int64_t *)*param_1;
  lVar1 = *param_2 + (int64_t)param_3 * 0x14;
  uVar2 = FUN_1808aed00(param_1,lVar1,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1808aed00(param_1,lVar1 + 4,2);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1808aed00(param_1,lVar1 + 6,2);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1808aed00(param_1,lVar1 + 8,8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*param_1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      auStackX_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*param_1,auStackX_18);
      if ((int)uVar2 != 0) goto LAB_1808a7de6;
      if ((uint64_t)param_1[2] < (uint64_t)auStackX_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_1808a7dcd;
      }
    }
    uVar2 = FUN_180769ed0(*param_1,auStackX_8,1,4,0);
  }
LAB_1808a7dcd:
  if (((int)uVar2 == 0) && (uVar2 = 0xd, auStackX_18[0] = auStackX_8[0], auStackX_8[0] < 0x1f)) {
    uVar2 = 0;
  }
LAB_1808a7de6:
  *(short *)(lVar1 + 0x10) = (short)auStackX_18[0];
  return uVar2;
}






// 函数: void FUN_1808a7d01(int64_t *param_1,int64_t *param_2)
void FUN_1808a7d01(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t in_RAX;
  uint in_stack_00000040;
  uint in_stack_00000050;
  
  param_1 = (int64_t *)*param_1;
  lVar1 = *param_2 + in_RAX * 0x14;
  iVar2 = FUN_1808aed00(param_1,lVar1);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_1808aed00(param_1,lVar1 + 4,2);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_1808aed00(param_1,lVar1 + 6,2);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_1808aed00(param_1,lVar1 + 8,8);
  if (iVar2 != 0) {
    return;
  }
  if (*param_1 == 0) {
    iVar2 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      in_stack_00000050 = 0;
      iVar2 = func_0x00018076a7d0(*param_1,&stack0x00000050);
      if (iVar2 != 0) goto LAB_1808a7de6;
      if ((uint64_t)param_1[2] < (uint64_t)in_stack_00000050 + 4) {
        iVar2 = 0x11;
        goto LAB_1808a7dcd;
      }
    }
    iVar2 = FUN_180769ed0(*param_1,&stack0x00000040,1,4,0);
  }
LAB_1808a7dcd:
  if (iVar2 == 0) {
    in_stack_00000050 = in_stack_00000040;
  }
LAB_1808a7de6:
  *(short *)(lVar1 + 0x10) = (short)in_stack_00000050;
  return;
}






// 函数: void FUN_1808a7d73(int64_t param_1)
void FUN_1808a7d73(int64_t param_1)

{
  int iVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  uint in_stack_00000040;
  uint in_stack_00000050;
  
  if (param_1 == 0) {
    iVar1 = 0x1c;
  }
  else {
    if (unaff_RBX[2] != 0) {
      in_stack_00000050 = 0;
      iVar1 = func_0x00018076a7d0(param_1,&stack0x00000050);
      if (iVar1 != 0) goto LAB_1808a7de6;
      if ((uint64_t)unaff_RBX[2] < (uint64_t)in_stack_00000050 + 4) {
        iVar1 = 0x11;
        goto LAB_1808a7dcd;
      }
    }
    iVar1 = FUN_180769ed0(*unaff_RBX,&stack0x00000040,1,4,0);
  }
LAB_1808a7dcd:
  if (iVar1 == 0) {
    in_stack_00000050 = in_stack_00000040;
  }
LAB_1808a7de6:
  *(short *)(unaff_RDI + 0x10) = (short)in_stack_00000050;
  return;
}






// 函数: void FUN_1808a7def(void)
void FUN_1808a7def(void)

{
  return;
}






