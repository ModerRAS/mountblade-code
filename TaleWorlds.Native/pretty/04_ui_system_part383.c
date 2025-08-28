#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part383.c - 4 个函数

// 函数: void FUN_1808753d0(longlong param_1,uint64_t param_2)
void FUN_1808753d0(longlong param_1,uint64_t param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int32_t auStackX_8 [2];
  
  if (((*(byte *)(param_1 + 0x310) & 8) != 0) &&
     (pcVar1 = *(code **)(param_1 + 0x308), pcVar1 != (code *)0x0)) {
    iVar2 = func_0x00018088c570(param_1,auStackX_8);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = (*pcVar1)(auStackX_8[0],8,0,*(uint64_t *)(param_1 + 0x318));
    if (iVar2 != 0) {
      return;
    }
  }
  uVar3 = 0;
  do {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                      (*(longlong **)(param_1 + 0x88),8,uVar3 & 0xff,0xffffffff,param_2);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180875520(longlong *param_1)

{
  uint uVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lStackX_8;
  uint64_t in_stack_ffffffffffffffb8;
  ulonglong uVar9;
  
  uVar1 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (param_1 == (longlong *)0x0) {
    return 0x1f;
  }
  iVar8 = 0;
  lStackX_8 = 0;
  uVar2 = FUN_1807388c0(&lStackX_8,0x20214);
  lVar7 = lStackX_8;
  if ((int)uVar2 == 0) {
    uVar9 = (ulonglong)uVar1 << 0x20;
    lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x7c8,&unknown_var_5856_ptr,0xb4,uVar9,0,
                          1);
    if (lVar3 != 0) {
      lVar3 = func_0x0001808bad50(lVar3);
      uVar9 = uVar9 & 0xffffffff00000000;
      lVar4 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd0,&unknown_var_5856_ptr,0xbb,uVar9,0
                            ,1);
      if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_180865b00(lVar4);
        uVar9 = uVar9 & 0xffffffff00000000;
        puVar6 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&unknown_var_5856_ptr,0xc0,
                               uVar9,0,1);
        if (puVar6 != (uint64_t *)0x0) {
          puVar6[1] = 0;
          *puVar6 = &unknown_var_4744_ptr;
          lVar7 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc40,&unknown_var_5856_ptr,0xc4,
                                uVar9 & 0xffffffff00000000,0,1);
          if (lVar7 == 0) {
            (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&unknown_var_2144_ptr,0xc6,1);
          }
          lVar7 = FUN_1808719a0(lVar7,lStackX_8,lVar3,plVar5,puVar6);
          uVar1 = ui_system_config;
          while( true ) {
            ui_system_config = uVar1 + 1 & 0x80000007;
            if ((int)ui_system_config < 0) {
              ui_system_config = (ui_system_config - 1 | 0xfffffff8) + 1;
            }
            if (*(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) == 0) break;
            iVar8 = iVar8 + 1;
            uVar1 = ui_system_config;
            if (7 < iVar8) {
              FUN_180873460(lVar7);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar7,&unknown_var_5856_ptr,0xd8,1);
            }
          }
          *(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) = lVar7;
          *(uint *)(lVar7 + 0x18) = uVar1;
          func_0x00018088be40(lVar7 + 0x2c0);
          *param_1 = lVar7;
          return 0;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (lVar3 != 0) {
        FUN_1808bbb80(lVar3);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_2144_ptr,0xc6,1);
      }
    }
    uVar2 = 0x26;
    if (lVar7 != 0) {
      FUN_18073b520(lVar7);
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180875538(void)

{
  uint uVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_R12;
  uint64_t in_stack_00000020;
  ulonglong uVar9;
  longlong lStack0000000000000070;
  
  uVar1 = (uint)((ulonglong)in_stack_00000020 >> 0x20);
  iVar8 = 0;
  lStack0000000000000070 = 0;
  uVar2 = FUN_1807388c0(&stack0x00000070,0x20214);
  lVar7 = lStack0000000000000070;
  if ((int)uVar2 == 0) {
    uVar9 = (ulonglong)uVar1 << 0x20;
    lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x7c8,&unknown_var_5856_ptr,0xb4,uVar9);
    if (lVar3 != 0) {
      lVar3 = func_0x0001808bad50(lVar3);
      uVar9 = uVar9 & 0xffffffff00000000;
      lVar4 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd0,&unknown_var_5856_ptr,0xbb,uVar9);
      if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_180865b00(lVar4);
        uVar9 = uVar9 & 0xffffffff00000000;
        puVar6 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&unknown_var_5856_ptr,0xc0,
                               uVar9);
        if (puVar6 != (uint64_t *)0x0) {
          puVar6[1] = 0;
          *puVar6 = &unknown_var_4744_ptr;
          lVar7 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc40,&unknown_var_5856_ptr,0xc4,
                                uVar9 & 0xffffffff00000000);
          if (lVar7 == 0) {
            (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&unknown_var_2144_ptr,0xc6,1);
          }
          lVar7 = FUN_1808719a0(lVar7,lStack0000000000000070,lVar3,plVar5,puVar6);
          uVar1 = ui_system_config;
          while( true ) {
            ui_system_config = uVar1 + 1 & 0x80000007;
            if ((int)ui_system_config < 0) {
              ui_system_config = (ui_system_config - 1 | 0xfffffff8) + 1;
            }
            if (*(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) == 0) break;
            iVar8 = iVar8 + 1;
            uVar1 = ui_system_config;
            if (7 < iVar8) {
              FUN_180873460(lVar7);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar7,&unknown_var_5856_ptr,0xd8,1);
            }
          }
          *(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) = lVar7;
          *(uint *)(lVar7 + 0x18) = uVar1;
          func_0x00018088be40(lVar7 + 0x2c0);
          *unaff_R12 = lVar7;
          return 0;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (lVar3 != 0) {
        FUN_1808bbb80(lVar3);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_2144_ptr,0xc6,1);
      }
    }
    uVar2 = 0x26;
    if (lVar7 != 0) {
      FUN_18073b520(lVar7);
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180875569(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int8_t uVar8;
  int iVar9;
  ulonglong unaff_RDI;
  longlong *unaff_R12;
  uint64_t in_stack_00000020;
  uint64_t uVar10;
  int32_t uVar11;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  longlong in_stack_00000070;
  
  uStack0000000000000030 = 1;
  uVar8 = (int8_t)unaff_RDI;
  iVar9 = (int)unaff_RDI;
  uVar10 = CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),iVar9);
  uStack0000000000000028 = uVar8;
  lVar2 = FUN_180741e10(*(uint64_t *)(param_1 + 0x1a0),0x7c8,param_3,0xb4,uVar10);
  uVar11 = (int32_t)((ulonglong)uVar10 >> 0x20);
  if (lVar2 != 0) {
    lVar2 = func_0x0001808bad50(lVar2);
    uStack0000000000000030 = 1;
    uStack0000000000000028 = uVar8;
    lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd0,&unknown_var_5856_ptr,0xbb,
                          CONCAT44(uVar11,iVar9));
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_180865b00(lVar3);
      uStack0000000000000030 = 1;
      uStack0000000000000028 = uVar8;
      puVar5 = (uint64_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar9 + 0x10,&unknown_var_5856_ptr,
                             0xc0,unaff_RDI & 0xffffffff);
      if (puVar5 != (uint64_t *)0x0) {
        puVar5[1] = unaff_RDI;
        *puVar5 = &unknown_var_4744_ptr;
        uStack0000000000000030 = 1;
        uStack0000000000000028 = uVar8;
        lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc40,&unknown_var_5856_ptr,0xc4,
                              unaff_RDI & 0xffffffff);
        if (lVar3 == 0) {
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&unknown_var_2144_ptr,0xc6,1);
        }
        lVar2 = FUN_1808719a0(lVar3,in_stack_00000070,lVar2,plVar4,puVar5);
        uVar7 = unaff_RDI & 0xffffffff;
        uVar1 = ui_system_config;
        while( true ) {
          ui_system_config = uVar1 + 1 & 0x80000007;
          if ((int)ui_system_config < 0) {
            ui_system_config = (ui_system_config - 1 | 0xfffffff8) + 1;
          }
          if (*(ulonglong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) == unaff_RDI) break;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar1 = ui_system_config;
          if (7 < (int)uVar6) {
            FUN_180873460(lVar2);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_5856_ptr,0xd8,1);
          }
        }
        *(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) = lVar2;
        *(uint *)(lVar2 + 0x18) = uVar1;
        func_0x00018088be40(lVar2 + 0x2c0);
        *unaff_R12 = lVar2;
        goto LAB_1808757a2;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (lVar2 != 0) {
      FUN_1808bbb80(lVar2);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xc6,1);
    }
  }
  unaff_RDI = 0x26;
  if (in_stack_00000070 != 0) {
    FUN_18073b520(in_stack_00000070);
  }
LAB_1808757a2:
  return unaff_RDI & 0xffffffff;
}





// 函数: void FUN_1808757c0(void)
void FUN_1808757c0(void)

{
  return;
}



int32_t FUN_1808757cc(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong unaff_RSI;
  int32_t unaff_EDI;
  longlong *unaff_R12;
  
  *(longlong *)(param_3 + param_2 * 8) = unaff_RSI;
  *(int *)(unaff_RSI + 0x18) = (int)param_2;
  func_0x00018088be40(unaff_RSI + 0x2c0);
  *unaff_R12 = unaff_RSI;
  return unaff_EDI;
}



uint64_t FUN_180875800(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == (longlong *)0x0) {
    return 0x1c;
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x1a8))); iVar5 = iVar5 + 1) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar5 * 8);
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x60))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x38))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x108))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x48))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x58))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xe8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x68))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xf8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x78))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xf0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x88))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xe0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x98))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xa8))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xd0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xb8))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 200))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 200))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xc0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xd8))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x50))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xe8))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xb0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xf8))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x78))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x108))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xa8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x118))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0xa0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x128))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x138))); iVar5 = iVar5 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x90))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  iVar5 = 0;
  do {
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x148) <= iVar5)) {
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x158))); iVar5 = iVar5 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar5 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x88))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x168))); iVar5 = iVar5 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar5 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x80))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x178))); iVar5 = iVar5 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar5 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x188))); iVar5 = iVar5 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x68))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x198))); iVar5 = iVar5 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 400) + (longlong)iVar5 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (iVar4 = 0, -1 < iVar5 && (iVar4 = 0, iVar5 < *(int *)(param_1 + 0x1b8)));
          iVar5 = iVar5 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar5 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x48))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (; (-1 < iVar4 && (iVar4 < *(int *)(param_1 + 0x1c8))); iVar4 = iVar4 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar4 * 8) != 0) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x40))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      uVar3 = FUN_180871220(param_1,param_2);
      if (((int)uVar3 == 0) && (uVar3 = FUN_1808712a0(param_1,param_2), (int)uVar3 == 0)) {
        uVar3 = FUN_180871320(param_1,param_2);
      }
      return uVar3;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 8);
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x70))(param_2,0);
      uVar3 = func_0x0001808db610(plVar2,lVar1,param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}





// 函数: void FUN_180875d28(void)
void FUN_180875d28(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  do {
    iVar2 = unaff_EBP;
    if ((unaff_ESI < 0) || (*(int *)(unaff_RBX + 0x148) <= unaff_ESI)) {
      for (; (iVar3 = unaff_EBP, -1 < iVar2 && (iVar2 < *(int *)(unaff_RBX + 0x158)));
          iVar2 = iVar2 + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x150) + (longlong)iVar2 * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x88))();
          iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar3 != 0) {
            return;
          }
        }
      }
      for (; (iVar2 = unaff_EBP, -1 < iVar3 && (iVar3 < *(int *)(unaff_RBX + 0x168)));
          iVar3 = iVar3 + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x160) + (longlong)iVar3 * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x80))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      for (; (iVar3 = unaff_EBP, -1 < iVar2 && (iVar2 < *(int *)(unaff_RBX + 0x178)));
          iVar2 = iVar2 + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x170) + (longlong)iVar2 * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0xb8))();
          iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar3 != 0) {
            return;
          }
        }
      }
      for (; (iVar2 = unaff_EBP, -1 < iVar3 && (iVar3 < *(int *)(unaff_RBX + 0x188)));
          iVar3 = iVar3 + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x180) + (longlong)iVar3 * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x68))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      for (; (iVar3 = unaff_EBP, -1 < iVar2 && (iVar2 < *(int *)(unaff_RBX + 0x198)));
          iVar2 = iVar2 + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 400) + (longlong)iVar2 * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x28))();
          iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar3 != 0) {
            return;
          }
        }
      }
      for (; (-1 < iVar3 && (iVar3 < *(int *)(unaff_RBX + 0x1b8))); iVar3 = iVar3 + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x1b0) + (longlong)iVar3 * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x48))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      for (; (-1 < unaff_EBP && (unaff_EBP < *(int *)(unaff_RBX + 0x1c8)));
          unaff_EBP = unaff_EBP + 1) {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x1c0) + (longlong)unaff_EBP * 8) != 0) {
          plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x40))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      iVar2 = FUN_180871220();
      if ((iVar2 == 0) && (iVar2 = FUN_1808712a0(), iVar2 == 0)) {
        FUN_180871320();
      }
      return;
    }
    lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x140) + (longlong)unaff_ESI * 8);
    if (lVar1 != 0) {
      plVar4 = (longlong *)(**(code **)(*unaff_RDI + 0x70))();
      iVar2 = func_0x0001808db610(plVar4,lVar1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (iVar2 != 0) {
        return;
      }
    }
    unaff_ESI = unaff_ESI + 1;
  } while( true );
}





// 函数: void FUN_180875fa1(void)
void FUN_180875fa1(void)

{
  return;
}





