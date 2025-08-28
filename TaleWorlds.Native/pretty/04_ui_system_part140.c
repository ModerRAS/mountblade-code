#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part140.c - 2 个函数

// 函数: void FUN_18074c0e9(void)
void FUN_18074c0e9(void)

{
  return;
}



uint64_t FUN_18074c0f3(void)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  short sVar8;
  uint uVar9;
  int64_t *plVar10;
  int64_t *unaff_RBX;
  char unaff_BPL;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar11;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int in_stack_00000098;
  int in_stack_000000a0;
  int32_t uStack00000000000000a8;
  int32_t uStack00000000000000ac;
  
  if ((unaff_BPL != '\0') && (unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  plVar1 = unaff_RBX + 0x22;
  for (plVar10 = (int64_t *)*plVar1; plVar10 != plVar1; plVar10 = (int64_t *)*plVar10) {
    lVar6 = plVar10[2];
    sVar8 = (short)((uint64_t)lVar6 >> 0x10);
    _uStack00000000000000a8 = lVar6;
    if (in_stack_00000098 <= sVar8) {
      uStack00000000000000ac = (int32_t)((uint64_t)lVar6 >> 0x20);
      uStack00000000000000a8 = CONCAT22(sVar8 + 1,(short)lVar6);
      plVar10[2] = _uStack00000000000000a8;
    }
  }
  iVar3 = func_0x00018075e5b0();
  if (iVar3 == 0) {
    puVar2 = (uint64_t *)(unaff_RSI + 0x90);
    if (((((uint64_t *)*puVar2 != puVar2) || (*(uint64_t **)(unaff_RSI + 0x98) != puVar2)) ||
        (0x7ffe < in_stack_000000a0)) || (0x7ffe < in_stack_00000098)) {
      return 0x1c;
    }
    uStack00000000000000ac = (int32_t)((uint64_t)_uStack00000000000000a8 >> 0x20);
    uStack00000000000000a8 = CONCAT22((short)in_stack_00000098,(short)in_stack_000000a0);
    *(int64_t *)(unaff_RSI + 0xa0) = _uStack00000000000000a8;
    plVar10 = (int64_t *)*plVar1;
    if (plVar10 != plVar1) {
      uVar4 = (uint64_t)plVar10[2] >> 0x10 & 0xffff;
      uVar11 = (uint64_t)plVar10[2] >> 0x10;
      do {
        sVar8 = (short)uVar11;
        if (in_stack_00000098 <= (short)uVar4) break;
        plVar10 = (int64_t *)*plVar10;
        uVar4 = (uint64_t)plVar10[2] >> 0x10;
        sVar8 = (short)((uint64_t)plVar10[2] >> 0x10);
        uVar11 = uVar4;
      } while (plVar10 != plVar1);
      if ((plVar10 != plVar1) && (sVar8 == in_stack_00000098)) {
        return 0x1c;
      }
    }
    *(int64_t *)(unaff_RSI + 0x98) = plVar10[1];
    *puVar2 = plVar10;
    plVar10[1] = (int64_t)puVar2;
    **(int64_t **)(unaff_RSI + 0x98) = (int64_t)puVar2;
    uVar5 = (**(code **)(*unaff_RBX + 0x208))();
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  lVar6 = SystemResourceManager(unaff_RBX[1] + 0x10848,(int)unaff_RBX[3] * 8 + 8,&system_buffer_ptr,0);
  if (lVar6 == 0) {
    uVar5 = 0x26;
  }
  else {
    *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
    uVar4 = unaff_R12 & 0xffffffff;
    uVar11 = unaff_R12;
    if ((int)unaff_R12 < (int)unaff_RBX[3]) {
      do {
        lVar7 = unaff_RSI;
        if ((int)uVar4 != in_stack_00000098) {
          lVar7 = unaff_R13;
          if (unaff_RBX[2] != 0) {
            lVar7 = *(int64_t *)(unaff_RBX[2] + uVar11);
          }
          uVar11 = uVar11 + 8;
        }
        *(int64_t *)(lVar6 + unaff_R12) = lVar7;
        uVar9 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar9;
        unaff_R12 = unaff_R12 + 8;
      } while ((int)uVar9 < (int)unaff_RBX[3]);
    }
    if (unaff_RBX[2] != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(unaff_RBX[1] + 0x10848,unaff_RBX[2],&system_buffer_ptr,0,1);
    }
    unaff_RBX[2] = lVar6;
    if (((in_stack_00000098 != 0) && (in_stack_00000098 != (int)unaff_RBX[3] + -1)) ||
       (uVar5 = (**(code **)(*unaff_RBX + 0x1e8))(), (int)uVar5 == 0)) {
      uVar5 = 0;
    }
  }
  return uVar5;
}



uint64_t FUN_18074c34b(void)

{
  return 0x1f;
}



uint64_t FUN_18074c360(int64_t *param_1,uint64_t param_2,uint param_3)

{
  uint64_t uVar1;
  uint64_t uStackX_20;
  
  if ((param_3 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&uStackX_20);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18076e380(uStackX_20,param_2,param_3);
    if ((int)uVar1 == 0) {
      uVar1 = (**(code **)(*param_1 + 0x208))(param_1);
    }
  }
  return uVar1;
}



uint64_t FUN_18074c3f0(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                       uint64_t param_5,uint64_t param_6)

{
  uint uVar1;
  uint64_t uVar2;
  
  uVar2 = FUN_180743cc0(*(uint64_t *)(param_1 + 8),0);
  if ((int)uVar2 == 0) {
    uVar1 = (**(code **)(param_1 + 0x170))(param_2,param_3,param_4,param_5,param_6);
    uVar2 = FUN_180743da0(*(uint64_t *)(param_1 + 8));
    if ((int)uVar2 == 0) {
      uVar2 = (uint64_t)uVar1;
    }
  }
  return uVar2;
}



uint64_t FUN_18074c470(int64_t *param_1,int32_t *param_2,int32_t *param_3)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 != (int32_t *)0x0) {
      *param_2 = (int)param_1[0x10];
      param_2[1] = *(int32_t *)((int64_t)param_1 + 0x84);
      param_2[2] = (int)param_1[0x11];
    }
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)((int64_t)param_1 + 0x8c);
      param_3[1] = (int)param_1[0x12];
      param_3[2] = *(int32_t *)((int64_t)param_1 + 0x94);
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18074c510(int64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 != (uint64_t *)0x0) {
      *param_2 = *(uint64_t *)((int64_t)param_1 + 0xb4);
      *(int32_t *)(param_2 + 1) = *(int32_t *)((int64_t)param_1 + 0xbc);
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t
FUN_18074c570(int64_t *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      uVar1 = 0x28;
    }
    else {
      if (param_2 != (int32_t *)0x0) {
        *param_2 = (int)param_1[0x15];
      }
      if (param_3 != (int32_t *)0x0) {
        *param_3 = *(int32_t *)((int64_t)param_1 + 0xac);
      }
      if (param_4 != (int32_t *)0x0) {
        *param_4 = (int)param_1[0x16];
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_18074c620(int64_t *param_1,byte *param_2,int32_t *param_3,int32_t *param_4)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      uVar1 = 0x28;
    }
    else {
      if (param_2 != (byte *)0x0) {
        *param_2 = (byte)(*(uint *)(param_1 + 9) >> 0x14) & 1;
      }
      if (param_3 != (int32_t *)0x0) {
        *param_3 = (int)param_1[0x1f];
      }
      if (param_4 != (int32_t *)0x0) {
        *param_4 = *(int32_t *)((int64_t)param_1 + 0xfc);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_18074c6b0(int64_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 == (int32_t *)0x0) {
      return 0x1f;
    }
    *param_2 = *(int32_t *)((int64_t)param_1 + 0xf4);
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18074c720(int64_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 == (int32_t *)0x0) {
      return 0x1f;
    }
    *param_2 = (int)param_1[0x1e];
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18074c790(int64_t *param_1,int32_t *param_2,int32_t *param_3)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 != (int32_t *)0x0) {
      *param_2 = *(int32_t *)((int64_t)param_1 + 0x9c);
    }
    if (param_3 != (int32_t *)0x0) {
      *param_3 = (int)param_1[0x14];
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18074c810(int64_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  byte abStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar1 == 0) {
    if ((abStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 == (int32_t *)0x0) {
      return 0x1f;
    }
    *param_2 = *(int32_t *)((int64_t)param_1 + 0xec);
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18074c880(int64_t *param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int aiStackX_18 [2];
  
  aiStackX_18[0] = 0;
  if (param_3 == (int64_t *)0x0) {
    return 0x1f;
  }
  lVar1 = param_1[0xc];
  lVar2 = param_1[0xd];
  lVar3 = param_1[0xe];
  if (lVar1 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x128))(param_1,aiStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (param_2 + 1U < 2) {
      *param_3 = lVar1;
      return 0;
    }
    if ((param_2 == aiStackX_18[0] + -1) || (param_2 == -3)) {
      *param_3 = lVar2;
      return 0;
    }
    if (param_2 == -2) {
      *param_3 = lVar3;
      return 0;
    }
    if (param_2 < aiStackX_18[0]) {
      *param_3 = *(int64_t *)(param_1[2] + (int64_t)param_2 * 8);
      return 0;
    }
  }
  return 9;
}





// 函数: void FUN_18074c9d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18074c9d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uStackX_8;
  
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&uStackX_8);
  if (iVar1 == 0) {
    FUN_18076e620(uStackX_8,param_2,param_3,param_4);
  }
  return;
}



uint64_t FUN_18074cb20(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  short sVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  bool bVar11;
  int aiStackX_18 [2];
  uint64_t uStackX_20;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  int64_t lStack_38;
  
  lVar1 = param_1[0xe];
  if (param_1[0xc] == 0) {
LAB_18074cc3e:
    uVar4 = 9;
  }
  else {
    if (param_1[0xc] != param_1[0xd]) {
      uVar4 = 0;
      lStack_38 = lVar1;
      if (param_2 != 0) {
        lStack_58 = 0;
        lStack_48 = 0;
        if ((*(uint *)(param_2 + 100) >> 5 & 1) != 0) {
          return 10;
        }
        uVar2 = (**(code **)(*param_1 + 0x128))(param_1,aiStackX_18);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = uVar4;
        if (0 < aiStackX_18[0]) {
LAB_18074cc10:
          iVar8 = (int)uVar2;
          lStack_50 = 0;
          uVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar2,&lStack_50);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (lStack_50 != param_2) goto code_r0x00018074cc33;
          if (iVar8 < aiStackX_18[0]) {
            if (iVar8 == 0) {
              plVar9 = &lStack_58;
              aiStackX_18[0] = 1;
LAB_18074cc84:
              (**(code **)(*param_1 + 0x120))(param_1,aiStackX_18[0],plVar9);
            }
            else if (iVar8 == aiStackX_18[0] + -1) {
              aiStackX_18[0] = aiStackX_18[0] + -2;
              plVar9 = &lStack_48;
              goto LAB_18074cc84;
            }
            lVar1 = param_1[1];
            bVar11 = lVar1 != 0;
            if (bVar11) {
              func_0x000180743c20(lVar1,1);
            }
            LOCK();
            *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffffbf;
            UNLOCK();
            *(uint64_t *)(param_2 + 0x1f8) = 0;
            uVar7 = FUN_180762070(param_2,0,0);
            uVar2 = (uint64_t)uVar7;
            if (uVar7 != 0) {
LAB_18074cd03:
              if (!bVar11) {
                return uVar2;
              }
              if (lVar1 == 0) {
                return uVar2;
              }
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar1,1);
            }
            uVar7 = FUN_18075fce0(param_2,param_2,0);
            uVar2 = (uint64_t)uVar7;
            if (uVar7 != 0) goto LAB_18074cd03;
            if (lStack_58 != 0) {
              uVar7 = FUN_18076f4f0(lStack_38,lStack_58 + 8,0);
              uVar2 = (uint64_t)uVar7;
              if (uVar7 != 0) goto LAB_18074cd03;
            }
            if ((bVar11) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar1,1);
            }
            plVar9 = (int64_t *)(param_2 + 0x90);
            **(int64_t **)(param_2 + 0x98) = *plVar9;
            *(uint64_t *)(*plVar9 + 8) = *(uint64_t *)(param_2 + 0x98);
            *(int64_t **)(param_2 + 0x98) = plVar9;
            *plVar9 = (int64_t)plVar9;
            for (plVar9 = (int64_t *)param_1[0x22]; plVar9 != param_1 + 0x22;
                plVar9 = (int64_t *)*plVar9) {
              lVar1 = plVar9[2];
              sVar5 = (short)((uint64_t)lVar1 >> 0x10);
              uStackX_20 = lVar1;
              if (iVar8 < sVar5) {
                uStackX_20._4_4_ = (int32_t)((uint64_t)lVar1 >> 0x20);
                uStackX_20._0_4_ = CONCAT22(sVar5 + -1,(short)lVar1);
                plVar9[2] = uStackX_20;
              }
            }
            uVar2 = uVar4;
            if (2 < (int)param_1[3]) {
              uVar2 = SystemResourceManager(param_1[1] + 0x10848,(int)param_1[3] * 8 + -8,&system_buffer_ptr,0,0
                                    ,0,1);
              if (uVar2 == 0) {
                return 0x26;
              }
              if (0 < (int)param_1[3] + -1) {
                uVar3 = uVar4;
                uVar10 = uVar4;
                do {
                  uVar6 = uVar4 + 1;
                  if (uVar3 != (int64_t)iVar8) {
                    uVar6 = uVar4;
                  }
                  *(uint64_t *)(uVar2 + uVar3 * 8) = *(uint64_t *)(param_1[2] + uVar6 * 8);
                  uVar7 = (int)uVar10 + 1;
                  uVar10 = (uint64_t)uVar7;
                  uVar4 = uVar6 + 1;
                  uVar3 = uVar3 + 1;
                } while ((int)uVar7 < (int)param_1[3] + -1);
              }
            }
            if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
              SystemDataValidator(param_1[1] + 0x10848,param_1[2],&system_buffer_ptr,0,1);
            }
            param_1[2] = uVar2;
            if (((lStack_58 != 0) || (lStack_48 != 0)) &&
               (uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1), (int)uVar4 != 0)) {
              return uVar4;
            }
            *(int *)(param_1 + 3) = (int)param_1[3] + -1;
            goto LAB_18074ce9b;
          }
        }
        goto LAB_18074cc3e;
      }
      uVar2 = (**(code **)(*param_1 + 0x128))(param_1,&uStackX_20);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = uVar4;
      if (0 < (int)uStackX_20) {
        do {
          uVar3 = (**(code **)(*param_1 + 0x120))(param_1,uVar2,&lStack_40);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (lStack_40 == lVar1) {
            uVar2 = (uint64_t)((int)uVar2 + 1);
          }
          else {
            (**(code **)(*param_1 + 0x118))(param_1);
          }
          uVar7 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar7;
        } while ((int)uVar7 < (int)uStackX_20);
      }
LAB_18074ce9b:
      uVar4 = (**(code **)(*param_1 + 0x208))(param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
code_r0x00018074cc33:
  uVar2 = (uint64_t)(iVar8 + 1U);
  if (aiStackX_18[0] <= (int)(iVar8 + 1U)) goto LAB_18074cc3e;
  goto LAB_18074cc10;
}





