// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
// 99_part_13_part013.c - 5 个函数
// 函数: void function_8ac4be(void)
void function_8ac4be(void)
{
  uint64_t *unaff_RBX;
  (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8ac500(int64_t param_1,int64_t param_2,int32_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_78 [2];
  uint64_t local_var_70;
  uint64_t *plocal_var_68;
  int8_t stack_array_60 [32];
  int8_t stack_array_40 [40];
  uVar2 = DataFlowProcessor(param_1,stack_array_40,1,param_3);
  if ((int)uVar2 == 0) {
    iVar6 = 0;
    aiStack_78[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStack_78);
    if (aiStack_78[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_78[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar2 = RenderingTextureManager0(param_2,aiStack_78[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          if (0 < aiStack_78[0]) {
            do {
              lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&processed_var_816_ptr,
                                    0x30a,0,0,1);
              if (lVar3 == 0) {
                return 0x26;
              }
              puVar4 = (uint64_t *)function_8ebeb0(lVar3);
              plocal_var_68 = puVar4;
              if (*(uint *)(param_1 + 0x40) < 0x45) {
                uVar1 = function_8a3cd0(puVar4,param_1,0x20414356);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  local_var_70 = 0;
                  uVar1 = function_8b0490(puVar4,0,&local_var_70);
                  uVar2 = (uint64_t)uVar1;
                  if (uVar1 == 0) {
                    uVar2 = 0;
                  }
                }
              }
              else {
                uVar1 = DataFlowProcessor(param_1,stack_array_60,1,0x20414356);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  uVar1 = function_8a3cd0(puVar4,param_1,0x42414356);
                  uVar2 = (uint64_t)uVar1;
                  if (uVar1 == 0) {
                    uVar1 = function_89d250(puVar4,param_1);
                    uVar2 = (uint64_t)uVar1;
                    if (uVar1 == 0) {
// WARNING: Subroutine does not return
                      AdvancedSystemManager(param_1,stack_array_60);
                    }
                  }
                }
              }
              if ((int)uVar2 != 0) {
label_8ac6fe:
                if (puVar4 == (uint64_t *)0x0) {
                  return uVar2;
                }
                (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              uVar1 = DataStreamProcessor(param_2,&plocal_var_68);
              uVar2 = (uint64_t)uVar1;
              if (uVar1 != 0) goto label_8ac6fe;
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_78[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_40);
      }
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8ac52c(void)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  int iStack0000000000000040;
  uint64_t local_var_48;
  uint64_t *local_buffer_50;
  iVar6 = 0;
  iStack0000000000000040 = 0;
  uVar1 = SystemCore_EncryptionManager();
  if (iStack0000000000000040 < 0) {
    uVar2 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_R14 + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R14 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar2 = RenderingTextureManager0(), (int)uVar2 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        if (0 < iStack0000000000000040) {
          do {
            lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&processed_var_816_ptr,0x30a,
                                  0);
            if (lVar3 == 0) {
              return 0x26;
            }
            puVar4 = (uint64_t *)function_8ebeb0(lVar3);
            local_buffer_50 = puVar4;
            if (*(uint *)(unaff_RSI + 0x40) < 0x45) {
              uVar1 = function_8a3cd0(puVar4);
              uVar2 = (uint64_t)uVar1;
              if (uVar1 == 0) {
                local_var_48 = 0;
                uVar1 = function_8b0490(puVar4,0,&local_buffer_00000048);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  uVar2 = 0;
                }
              }
            }
            else {
              uVar1 = DataFlowProcessor();
              uVar2 = (uint64_t)uVar1;
              if (uVar1 == 0) {
                uVar1 = function_8a3cd0(puVar4);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  uVar1 = function_89d250(puVar4);
                  uVar2 = (uint64_t)uVar1;
                  if (uVar1 == 0) {
// WARNING: Subroutine does not return
                    AdvancedSystemManager();
                  }
                }
              }
            }
            if ((int)uVar2 != 0) {
label_8ac6fe:
              if (puVar4 == (uint64_t *)0x0) {
                return uVar2;
              }
              (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            uVar1 = DataStreamProcessor();
            uVar2 = (uint64_t)uVar1;
            if (uVar1 != 0) goto label_8ac6fe;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack0000000000000040);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8ac587(int param_1)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint unaff_EBX;
  uint64_t uVar4;
  int64_t unaff_RSI;
  uint64_t uVar5;
  uint64_t unaff_R15;
  int local_var_40;
  uint64_t local_var_48;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return (uint64_t)unaff_EBX;
    }
    uVar4 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x68,&processed_var_816_ptr,0x30a);
        if (lVar2 == 0) {
          return 0x26;
        }
        puVar3 = (uint64_t *)function_8ebeb0(lVar2);
        if (*(uint *)(unaff_RSI + 0x40) < 0x45) {
          uVar1 = function_8a3cd0(puVar3);
          uVar5 = (uint64_t)uVar1;
          if (uVar1 == 0) {
            local_var_48 = unaff_R15;
            uVar1 = function_8b0490(puVar3,0,&local_buffer_00000048);
            uVar5 = (uint64_t)uVar1;
            if (uVar1 == 0) {
              uVar5 = unaff_R15 & 0xffffffff;
            }
          }
        }
        else {
          uVar1 = DataFlowProcessor();
          uVar5 = (uint64_t)uVar1;
          if (uVar1 == 0) {
            uVar1 = function_8a3cd0(puVar3);
            uVar5 = (uint64_t)uVar1;
            if (uVar1 == 0) {
              uVar1 = function_89d250(puVar3);
              uVar5 = (uint64_t)uVar1;
              if (uVar1 == 0) {
// WARNING: Subroutine does not return
                AdvancedSystemManager();
              }
            }
          }
        }
        if ((int)uVar5 != 0) {
label_8ac6fe:
          if (puVar3 == (uint64_t *)0x0) {
            return uVar5;
          }
          (**(code **)*puVar3)(puVar3,0);
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar1 = DataStreamProcessor();
        uVar5 = (uint64_t)uVar1;
        if (uVar1 != 0) goto label_8ac6fe;
        uVar1 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar1;
      } while ((int)uVar1 < local_var_40);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void function_8ac6e3(void)
void function_8ac6e3(void)
{
  return;
}
// 函数: void function_8ac6f3(void)
void function_8ac6f3(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_8ac6fe(void)
{
  uint64_t *unaff_RBX;
  int32_t unaff_EDI;
  if (unaff_RBX != (uint64_t *)0x0) {
    (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_EDI;
}
uint64_t function_8ac750(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint astack_special_x_8 [2];
  uVar1 = *(uint *)(param_2 + 1);
  astack_special_x_8[0] = uVar1;
  uVar3 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),astack_special_x_8,4);
  if ((int)uVar3 == 0) {
    if (0 < (int)uVar1) {
      lVar5 = 0;
      lVar7 = lVar5;
      do {
        lVar4 = *param_2 + lVar7;
        uVar3 = SystemCleanupProcessor(param_1,lVar4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (uVar2 < 0x8000) {
          astack_special_x_8[0] = CONCAT22(astack_special_x_8[0]._2_2_,(short)uVar2);
          uVar6 = 2;
        }
        else {
          uVar6 = 4;
          astack_special_x_8[0] = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff;
        }
        uVar3 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),astack_special_x_8,uVar6);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = ResourceLoadingManager(param_1,lVar4 + 0x14);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = ResourceLoadingManager(param_1,lVar4 + 0x18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(lVar4 + 0x18) != 0) {
          uVar3 = ResourceLoadingManager(param_1,lVar4 + 0x1c);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = ResourceLoadingManager(param_1,lVar4 + 0x20);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = ResourceLoadingManager(param_1,lVar4 + 0x24);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x28;
      } while (lVar5 < (int)uVar1);
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_8ac783(void)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t unaff_RDI;
  int32_t uVar5;
  int64_t *unaff_R12;
  int64_t lVar6;
  uint local_buffer_50;
  if (0 < (int)unaff_RBX) {
    lVar4 = 0;
    lVar6 = lVar4;
    do {
      lVar2 = *unaff_R12;
      uVar3 = SystemCleanupProcessor();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar1 = *(uint *)(lVar2 + lVar6 + 0x10);
      if (uVar1 < 0x8000) {
        local_buffer_50 = CONCAT22(local_buffer_50._2_2_,(short)uVar1);
        uVar5 = 2;
      }
      else {
        uVar5 = 4;
        local_buffer_50 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
      }
      uVar3 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000050,uVar5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = ResourceLoadingManager();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = ResourceLoadingManager();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(lVar2 + lVar6 + 0x18) != 0) {
        uVar3 = ResourceLoadingManager();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = ResourceLoadingManager();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = ResourceLoadingManager();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar4 < unaff_RBX);
  }
  return 0;
}
// 函数: void function_8ac891(void)
void function_8ac891(void)
{
  return;
}
uint64_t function_8ac8a0(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int aiStackX_8 [2];
  iVar1 = (int)param_2[1];
  aiStackX_8[0] = iVar1;
  uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),aiStackX_8,4);
  if ((int)uVar2 == 0) {
    if (0 < iVar1) {
      lVar4 = 0;
      lVar5 = lVar4;
      do {
        lVar3 = *param_2 + lVar5;
        uVar2 = function_8b00b0(param_1,lVar3);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        aiStackX_8[0] = *(int *)(lVar3 + 4);
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        aiStackX_8[0] = *(int *)(lVar3 + 8);
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        aiStackX_8[0] = *(int *)(lVar3 + 0xc);
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        aiStackX_8[0] = *(int *)(lVar3 + 0x10);
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        aiStackX_8[0] = *(int *)(lVar3 + 0x14);
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),lVar3 + 0x18,0x108);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        aiStackX_8[0] = *(int *)(lVar3 + 0x120);
        uVar2 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x128;
      } while (lVar4 < iVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t function_8ac8d3(int32_t param_1)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RDI;
  int64_t lVar4;
  int64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t local_var_40;
  if (0 < (int)unaff_RBX) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      lVar2 = *unaff_R15 + lVar4;
      uVar1 = function_8b00b0(param_1,lVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_var_40 = *(int32_t *)(lVar2 + 4);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000040,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_var_40 = *(int32_t *)(lVar2 + 8);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000040,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_var_40 = *(int32_t *)(lVar2 + 0xc);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000040,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_var_40 = *(int32_t *)(lVar2 + 0x10);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000040,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_var_40 = *(int32_t *)(lVar2 + 0x14);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000040,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),lVar2 + 0x18,0x108);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_var_40 = *(int32_t *)(lVar2 + 0x120);
      uVar1 = (**(code **)**(uint64_t **)(unaff_RDI + 8))
                        (*(uint64_t **)(unaff_RDI + 8),&local_buffer_00000040,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x128;
      param_1 = extraout_XMM0_Da;
    } while (lVar3 < unaff_RBX);
  }
  return 0;
}
// 函数: void function_8aca27(void)
void function_8aca27(void)
{
  return;
}
uint64_t function_8aca30(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int aiStackX_8 [2];
  int64_t *plStackX_10;
  iVar1 = (int)param_2[1];
  aiStackX_8[0] = iVar1;
  plStackX_10 = param_2;
  uVar3 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),aiStackX_8,4);
  if ((int)uVar3 == 0) {
    if (0 < iVar1) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        lVar5 = *param_2 + lVar7;
        uVar3 = SystemCleanupProcessor(param_1,lVar5);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = ResourceLoadingManager(param_1,lVar5 + 0x10);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = function_8b00b0(param_1,lVar5 + 0x14);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = function_89a750(param_1,lVar5 + 0x18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar2 = *(int *)(lVar5 + 0x28);
        aiStackX_8[0] = iVar2;
        uVar3 = (**(code **)**(uint64_t **)(param_1 + 8))
                          (*(uint64_t **)(param_1 + 8),aiStackX_8,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            lVar4 = (int64_t)iVar6 * 0x1c + *(int64_t *)(lVar5 + 0x20);
            uVar3 = SystemCleanupProcessor(param_1,lVar4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = ResourceLoadingManager(param_1,lVar4 + 0x10);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = function_89a750(param_1,lVar4 + 0x14);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x30;
        param_2 = plStackX_10;
      } while (lVar8 < iVar1);
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_8aca66(void)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int iVar4;
  int64_t *unaff_RDI;
  int64_t lVar5;
  int64_t lVar6;
  int local_var_60;
  int64_t *local_var_68;
  if (0 < (int)unaff_RBX) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *unaff_RDI;
      uVar3 = SystemCleanupProcessor();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = ResourceLoadingManager();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = function_8b00b0();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = function_89a750();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar1 = *(int *)(lVar2 + lVar5 + 0x28);
      local_var_60 = iVar1;
      uVar3 = (**(code **)**(uint64_t **)(unaff_RSI + 8))
                        (*(uint64_t **)(unaff_RSI + 8),&local_buffer_00000060,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          uVar3 = SystemCleanupProcessor();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = ResourceLoadingManager();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = function_89a750();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x30;
      unaff_RDI = local_var_68;
    } while (lVar6 < unaff_RBX);
  }
  return 0;
}