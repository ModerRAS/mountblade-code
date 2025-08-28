#include "ultra_high_freq_fun_definitions.h"
#include "SystemDataAdvancedHandler_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part395_sub002_sub002.c - 1 个函数
// 函数: void function_87def8(void)
void function_87def8(void)
{
  return;
}
uint64_t function_87df01(void)
{
  return 0x1c;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_87df20(int64_t *param_1,int param_2,uint64_t *param_3)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  if ((param_2 < 0) || (iVar3 = (int)param_1[1], iVar3 < param_2)) {
    return 0x1c;
  }
  uVar4 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar4) - uVar4;
  iVar5 = iVar3 + 1;
  if (iVar1 < iVar5) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    if (iVar5 < 8) {
      iVar5 = 8;
    }
    if (iVar5 < iVar3) {
      return 0x1c;
    }
    lVar2 = 0;
    if (iVar5 != 0) {
      if ((0x3ffffffe < iVar5 * 8 - 1U) ||
         (lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5 * 8,&processed_var_8432_ptr,
                                0xf4,0,0,1), lVar2 == 0)) {
        return 0x26;
      }
      if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar2,*param_1,(int64_t)(int)param_1[1] << 3);
      }
    }
    if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = lVar2;
    *(int *)((int64_t)param_1 + 0xc) = iVar5;
  }
  iVar3 = (int)param_1[1] - param_2;
  if (iVar3 < 1) {
    *(uint64_t *)(*param_1 + (int64_t)param_2 * 8) = *param_3;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return 0;
  }
  lVar2 = *param_1 + (int64_t)param_2 * 8;
// WARNING: Subroutine does not return
  memmove(lVar2 + 8,lVar2,(int64_t)iVar3 << 3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_87df50(int param_1,uint param_2)
{
  uint in_EAX;
  int iVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int iVar3;
  uint64_t *unaff_R14;
  iVar1 = (in_EAX ^ param_2) - param_2;
  iVar3 = param_1 + 1;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    if (iVar3 < param_1) {
      return 0x1c;
    }
    lVar2 = 0;
    if (iVar3 != 0) {
      if ((0x3ffffffe < iVar3 * 8 - 1U) ||
         (lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar3 * 8,&processed_var_8432_ptr,
                                0xf4,0), lVar2 == 0)) {
        return 0x26;
      }
      if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar2,*unaff_RBX,(int64_t)(int)unaff_RBX[1] << 3);
      }
    }
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar2;
    *(int *)((int64_t)unaff_RBX + 0xc) = iVar3;
  }
  iVar3 = (int)unaff_RBX[1] - (int)unaff_RSI;
  if (iVar3 < 1) {
    *(uint64_t *)(*unaff_RBX + unaff_RSI * 8) = *unaff_R14;
    *(int *)(unaff_RBX + 1) = (int)unaff_RBX[1] + 1;
    return 0;
  }
  lVar2 = *unaff_RBX + unaff_RSI * 8;
// WARNING: Subroutine does not return
  memmove(lVar2 + 8,lVar2,(int64_t)iVar3 << 3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_87dfaf(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_18087e01e:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    iVar3 = (int)unaff_RBX[1] - (int)unaff_RSI;
    if (0 < iVar3) {
      lVar1 = *unaff_RBX + unaff_RSI * 8;
// WARNING: Subroutine does not return
      memmove(lVar1 + 8,lVar1,(int64_t)iVar3 << 3);
    }
    *(uint64_t *)(*unaff_RBX + unaff_RSI * 8) = *unaff_R14;
    *(int *)(unaff_RBX + 1) = (int)unaff_RBX[1] + 1;
    uVar2 = 0;
  }
  else {
    if (unaff_EDI * 8 - 1U < 0x3fffffff) {
      lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EDI * 8,&processed_var_8432_ptr,
                            0xf4,0);
      if (lVar1 != 0) {
        if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] << 3);
        }
        goto LAB_18087e01e;
      }
    }
    uVar2 = 0x26;
  }
  return uVar2;
}
uint64_t function_87e098(void)
{
  return 0x1c;
}
int function_87e0b0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4,
                 int64_t param_5)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t stack_array_88 [8];
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t local_var_68;
  int64_t lStack_60;
  uint64_t local_var_58;
  lVar7 = 0;
  lStack_70 = 0;
  local_var_68 = 0;
  lStack_60 = 0;
  local_var_58 = 0;
  iVar3 = SystemDeallocationProcessor(&lStack_70,0x200);
  if (iVar3 == 0) {
    if ((int)local_var_68 < 0x200) {
// WARNING: Subroutine does not return
      memset((int)local_var_68 + lStack_70,0,(int64_t)(0x200 - (int)local_var_68));
    }
    local_var_68 = CONCAT44(local_var_68._4_4_,0x200);
    iVar3 = local_var_58._4_4_;
    if (local_var_58 < 0) {
      iVar3 = -local_var_58._4_4_;
    }
    if ((iVar3 < 0x200) && (iVar3 = SystemDeallocationProcessor(&lStack_60,0x200), iVar3 != 0))
    goto LAB_18087e17a;
    if ((int)local_var_58 < 0x200) {
// WARNING: Subroutine does not return
      memset((int)local_var_58 + lStack_60,0,(int64_t)(0x200 - (int)local_var_58));
    }
    local_var_58 = CONCAT44(local_var_58._4_4_,0x200);
  }
  else {
LAB_18087e17a:
    if (iVar3 != 0) goto LAB_1808801be;
  }
  lVar4 = (**(code **)(*param_4 + 0x108))(param_4,0);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (0 < (int64_t)iVar1) {
      do {
        lStack_80 = 0;
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x30) + lVar7 * 8);
        lStack_78 = lVar2;
        iVar3 = function_885680(lVar4,lVar2,&lStack_70,&lStack_80);
        if (iVar3 != 0) {
LAB_18087e283:
          if (iVar3 != 0) goto LAB_1808801be;
          break;
        }
        function_8c5380(param_5,lVar2);
        lVar6 = lStack_80;
        if (lVar2 != lStack_80) {
          if ((lVar2 != 0) && (param_5 + 0xf8 != 0)) {
            stack_array_88[0] = 1;
            SystemStateProcessor(param_5 + 0xf8,lVar2 + 0x10,stack_array_88);
          }
          lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x30,lVar2 + 0x10);
          if (lVar5 == 0) {
            *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
            iVar3 = DataStreamProcessor(param_2 + 0x30,&lStack_78);
            if (iVar3 != 0) goto LAB_18087e283;
          }
        }
        if ((lVar6 != 0) && (iVar3 = DataStreamProcessor(param_3 + 0x30,&lStack_80), iVar3 != 0))
        goto LAB_18087e283;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar1);
    }
    lVar7 = (**(code **)(*param_4 + 0x100))(param_4,0);
    if (lVar7 != 0) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (0 < (int64_t)iVar1) {
        lVar4 = 0;
        do {
          lStack_80 = 0;
          lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x40) + lVar4 * 8);
          lStack_78 = lVar2;
          iVar3 = function_885300(lVar7,lVar2,&lStack_70,&lStack_80);
          if (iVar3 != 0) {
LAB_18087e3a2:
            if (iVar3 != 0) goto LAB_1808801be;
            break;
          }
          function_8c5380(param_5,lVar2);
          lVar6 = lStack_80;
          if (lVar2 != lStack_80) {
            if (lVar2 != 0) {
              lVar5 = param_5 + 0x120;
              if (param_5 == -0xf8) {
                lVar5 = 0;
              }
              if (lVar5 != 0) {
                stack_array_88[0] = 1;
                SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
              }
            }
            lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x40,lVar2 + 0x10);
            if (lVar5 == 0) {
              *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
              iVar3 = DataStreamProcessor(param_2 + 0x40,&lStack_78);
              if (iVar3 != 0) goto LAB_18087e3a2;
            }
          }
          if ((lVar6 != 0) && (iVar3 = DataStreamProcessor(param_3 + 0x40,&lStack_80), iVar3 != 0))
          goto LAB_18087e3a2;
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar1);
      }
      lVar7 = (**(code **)(*param_4 + 0xe8))(param_4,0);
      if (lVar7 != 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        if (0 < (int64_t)iVar1) {
          lVar4 = 0;
          do {
            lStack_80 = 0;
            lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x50) + lVar4 * 8);
            lStack_78 = lVar2;
            iVar3 = function_887d00(lVar7,lVar2,&lStack_70,&lStack_80);
            if (iVar3 != 0) {
LAB_18087e4c2:
              if (iVar3 != 0) goto LAB_1808801be;
              break;
            }
            function_8c5380(param_5,lVar2);
            lVar6 = lStack_80;
            if (lVar2 != lStack_80) {
              if (lVar2 != 0) {
                lVar5 = param_5 + 0x170;
                if (param_5 == -0xf8) {
                  lVar5 = 0;
                }
                if (lVar5 != 0) {
                  stack_array_88[0] = 1;
                  SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                }
              }
              lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x50,lVar2 + 0x10);
              if (lVar5 == 0) {
                *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                iVar3 = DataStreamProcessor(param_2 + 0x50,&lStack_78);
                if (iVar3 != 0) goto LAB_18087e4c2;
              }
            }
            if ((lVar6 != 0) && (iVar3 = DataStreamProcessor(param_3 + 0x50,&lStack_80), iVar3 != 0))
            goto LAB_18087e4c2;
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar1);
        }
        lVar7 = (**(code **)(*param_4 + 0xf8))(param_4,0);
        if (lVar7 != 0) {
          iVar1 = *(int *)(param_1 + 0x68);
          if (0 < (int64_t)iVar1) {
            lVar4 = 0;
            do {
              lStack_80 = 0;
              lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + lVar4 * 8);
              lStack_78 = lVar2;
              iVar3 = function_886100(lVar7,lVar2,&lStack_70,&lStack_80);
              if (iVar3 != 0) {
LAB_18087e5e2:
                if (iVar3 != 0) goto LAB_1808801be;
                break;
              }
              function_8c5380(param_5,lVar2);
              lVar6 = lStack_80;
              if (lVar2 != lStack_80) {
                if (lVar2 != 0) {
                  lVar5 = param_5 + 0x148;
                  if (param_5 == -0xf8) {
                    lVar5 = 0;
                  }
                  if (lVar5 != 0) {
                    stack_array_88[0] = 1;
                    SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                  }
                }
                lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x60,lVar2 + 0x10);
                if (lVar5 == 0) {
                  *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                  iVar3 = DataStreamProcessor(param_2 + 0x60,&lStack_78);
                  if (iVar3 != 0) goto LAB_18087e5e2;
                }
              }
              if ((lVar6 != 0) && (iVar3 = DataStreamProcessor(param_3 + 0x60,&lStack_80), iVar3 != 0))
              goto LAB_18087e5e2;
              lVar4 = lVar4 + 1;
            } while (lVar4 < iVar1);
          }
          lVar7 = (**(code **)(*param_4 + 0xf0))(param_4,0);
          if (lVar7 != 0) {
            iVar1 = *(int *)(param_1 + 0x78);
            if (0 < (int64_t)iVar1) {
              lVar4 = 0;
              do {
                lStack_80 = 0;
                lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + lVar4 * 8);
                lStack_78 = lVar2;
                iVar3 = function_886b80(lVar7,lVar2,&lStack_70,&lStack_80);
                if (iVar3 != 0) {
LAB_18087e705:
                  if (iVar3 != 0) goto LAB_1808801be;
                  break;
                }
                function_8c5380(param_5,lVar2);
                lVar6 = lStack_80;
                if (lVar2 != lStack_80) {
                  if (lVar2 != 0) {
                    lVar5 = param_5 + 0x198;
                    if (param_5 == -0xf8) {
                      lVar5 = 0;
                    }
                    if (lVar5 != 0) {
                      stack_array_88[0] = 1;
                      SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                    }
                  }
                  lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x70,lVar2 + 0x10);
                  if (lVar5 == 0) {
                    *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                    iVar3 = DataStreamProcessor(param_2 + 0x70,&lStack_78);
                    if (iVar3 != 0) goto LAB_18087e705;
                  }
                }
                if ((lVar6 != 0) && (iVar3 = DataStreamProcessor(param_3 + 0x70,&lStack_80), iVar3 != 0))
                goto LAB_18087e705;
                lVar4 = lVar4 + 1;
              } while (lVar4 < iVar1);
            }
            lVar7 = (**(code **)(*param_4 + 0xe0))(param_4,0);
            if (lVar7 != 0) {
              iVar1 = *(int *)(param_1 + 0x88);
              if (0 < (int64_t)iVar1) {
                lVar4 = 0;
                do {
                  lStack_80 = 0;
                  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x80) + lVar4 * 8);
                  lStack_78 = lVar2;
                  iVar3 = NetworkSystem_ProtocolProcessor(lVar7,lVar2,&lStack_70,&lStack_80);
                  if (iVar3 != 0) {
LAB_18087e844:
                    if (iVar3 != 0) goto LAB_1808801be;
                    break;
                  }
                  if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                    stack_array_88[0] = 1;
                    SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                  }
                  lVar6 = lStack_80;
                  if (lVar2 != lStack_80) {
                    if (lVar2 != 0) {
                      lVar5 = param_5 + 0x1c0;
                      if (param_5 == -0xf8) {
                        lVar5 = 0;
                      }
                      if (lVar5 != 0) {
                        stack_array_88[0] = 1;
                        SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                      }
                    }
                    lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x80,lVar2 + 0x10);
                    if (lVar5 == 0) {
                      *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                      iVar3 = DataStreamProcessor(param_2 + 0x80,&lStack_78);
                      if (iVar3 != 0) goto LAB_18087e844;
                    }
                  }
                  if ((lVar6 != 0) && (iVar3 = DataStreamProcessor(param_3 + 0x80,&lStack_80), iVar3 != 0)
                     ) goto LAB_18087e844;
                  lVar4 = lVar4 + 1;
                } while (lVar4 < iVar1);
              }
              lVar7 = (**(code **)(*param_4 + 0xd8))(param_4,0);
              if (lVar7 != 0) {
                iVar1 = *(int *)(param_1 + 0x98);
                if (0 < (int64_t)iVar1) {
                  lVar4 = 0;
                  do {
                    lStack_80 = 0;
                    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x90) + lVar4 * 8);
                    lStack_78 = lVar2;
                    iVar3 = function_887600(lVar7,lVar2,&lStack_70,&lStack_80);
                    if (iVar3 != 0) {
LAB_18087e987:
                      if (iVar3 != 0) goto LAB_1808801be;
                      break;
                    }
                    if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                      stack_array_88[0] = 1;
                      SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                    }
                    lVar6 = lStack_80;
                    if (lVar2 != lStack_80) {
                      if (lVar2 != 0) {
                        lVar5 = param_5 + 0x1e8;
                        if (param_5 == -0xf8) {
                          lVar5 = 0;
                        }
                        if (lVar5 != 0) {
                          stack_array_88[0] = 1;
                          SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                        }
                      }
                      lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x90,lVar2 + 0x10);
                      if (lVar5 == 0) {
                        *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                        iVar3 = DataStreamProcessor(param_2 + 0x90,&lStack_78);
                        if (iVar3 != 0) goto LAB_18087e987;
                      }
                    }
                    if ((lVar6 != 0) &&
                       (iVar3 = DataStreamProcessor(param_3 + 0x90,&lStack_80), iVar3 != 0))
                    goto LAB_18087e987;
                    lVar4 = lVar4 + 1;
                  } while (lVar4 < iVar1);
                }
                lVar7 = (**(code **)(*param_4 + 0xd0))(param_4,0);
                if (lVar7 != 0) {
                  iVar1 = *(int *)(param_1 + 0xa8);
                  if (0 < (int64_t)iVar1) {
                    lVar4 = 0;
                    do {
                      lStack_80 = 0;
                      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xa0) + lVar4 * 8);
                      lStack_78 = lVar2;
                      iVar3 = function_888400(lVar7,lVar2,&lStack_70,&lStack_80);
                      if (iVar3 != 0) {
LAB_18087eac7:
                        if (iVar3 != 0) goto LAB_1808801be;
                        break;
                      }
                      if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                        stack_array_88[0] = 1;
                        SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                      }
                      lVar6 = lStack_80;
                      if (lVar2 != lStack_80) {
                        if (lVar2 != 0) {
                          lVar5 = param_5 + 0x210;
                          if (param_5 == -0xf8) {
                            lVar5 = 0;
                          }
                          if (lVar5 != 0) {
                            stack_array_88[0] = 1;
                            SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                          }
                        }
                        lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0xa0,lVar2 + 0x10);
                        if (lVar5 == 0) {
                          *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                          iVar3 = DataStreamProcessor(param_2 + 0xa0,&lStack_78);
                          if (iVar3 != 0) goto LAB_18087eac7;
                        }
                      }
                      if ((lVar6 != 0) &&
                         (iVar3 = DataStreamProcessor(param_3 + 0xa0,&lStack_80), iVar3 != 0))
                      goto LAB_18087eac7;
                      lVar4 = lVar4 + 1;
                    } while (lVar4 < iVar1);
                  }
                  lVar7 = (**(code **)(*param_4 + 200))(param_4,0);
                  if (lVar7 != 0) {
                    iVar1 = *(int *)(param_1 + 0xb8);
                    if (0 < (int64_t)iVar1) {
                      lVar4 = 0;
                      do {
                        lStack_80 = 0;
                        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + lVar4 * 8);
                        lStack_78 = lVar2;
                        iVar3 = function_888780(lVar7,lVar2,&lStack_70,&lStack_80);
                        if (iVar3 != 0) {
LAB_18087ec07:
                          if (iVar3 != 0) goto LAB_1808801be;
                          break;
                        }
                        if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                          stack_array_88[0] = 1;
                          SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                        }
                        lVar6 = lStack_80;
                        if (lVar2 != lStack_80) {
                          if (lVar2 != 0) {
                            lVar5 = param_5 + 0x238;
                            if (param_5 == -0xf8) {
                              lVar5 = 0;
                            }
                            if (lVar5 != 0) {
                              stack_array_88[0] = 1;
                              SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                            }
                          }
                          lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0xb0,lVar2 + 0x10);
                          if (lVar5 == 0) {
                            *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                            iVar3 = DataStreamProcessor(param_2 + 0xb0,&lStack_78);
                            if (iVar3 != 0) goto LAB_18087ec07;
                          }
                        }
                        if ((lVar6 != 0) &&
                           (iVar3 = DataStreamProcessor(param_3 + 0xb0,&lStack_80), iVar3 != 0))
                        goto LAB_18087ec07;
                        lVar4 = lVar4 + 1;
                      } while (lVar4 < iVar1);
                    }
                    lVar7 = (**(code **)(*param_4 + 0xc0))(param_4,0);
                    if (lVar7 != 0) {
                      iVar1 = *(int *)(param_1 + 200);
                      if (0 < (int64_t)iVar1) {
                        lVar4 = 0;
                        do {
                          lStack_80 = 0;
                          lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xc0) + lVar4 * 8);
                          lStack_78 = lVar2;
                          iVar3 = function_889580(lVar7,lVar2,&lStack_70,&lStack_80);
                          if (iVar3 != 0) {
LAB_18087ed4e:
                            if (iVar3 != 0) goto LAB_1808801be;
                            break;
                          }
                          if (lVar2 != 0) {
                            lVar6 = param_5 + 0x80;
                            if (param_5 == -8) {
                              lVar6 = 0;
                            }
                            if (lVar6 != 0) {
                              stack_array_88[0] = 1;
                              SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                            }
                          }
                          lVar6 = lStack_80;
                          if (lVar2 != lStack_80) {
                            if (lVar2 != 0) {
                              lVar5 = param_5 + 0x260;
                              if (param_5 == -0xf8) {
                                lVar5 = 0;
                              }
                              if (lVar5 != 0) {
                                stack_array_88[0] = 1;
                                SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                              }
                            }
                            lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0xc0,lVar2 + 0x10);
                            if (lVar5 == 0) {
                              *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                              iVar3 = DataStreamProcessor(param_2 + 0xc0,&lStack_78);
                              if (iVar3 != 0) goto LAB_18087ed4e;
                            }
                          }
                          if ((lVar6 != 0) &&
                             (iVar3 = DataStreamProcessor(param_3 + 0xc0,&lStack_80), iVar3 != 0))
                          goto LAB_18087ed4e;
                          lVar4 = lVar4 + 1;
                        } while (lVar4 < iVar1);
                      }
                      lVar7 = (**(code **)(*param_4 + 0x50))(param_4,0);
                      if (lVar7 != 0) {
                        iVar1 = *(int *)(param_1 + 0xd8);
                        if (0 < (int64_t)iVar1) {
                          lVar4 = 0;
                          do {
                            lStack_80 = 0;
                            lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xd0) + lVar4 * 8);
                            lStack_78 = lVar2;
                            iVar3 = function_889200(lVar7,lVar2,&lStack_70,&lStack_80);
                            if (iVar3 != 0) {
LAB_18087ee97:
                              if (iVar3 != 0) goto LAB_1808801be;
                              break;
                            }
                            if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                              stack_array_88[0] = 1;
                              SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                            }
                            lVar6 = lStack_80;
                            if (lVar2 != lStack_80) {
                              if (lVar2 != 0) {
                                lVar5 = param_5 + 0x288;
                                if (param_5 == -0xf8) {
                                  lVar5 = 0;
                                }
                                if (lVar5 != 0) {
                                  stack_array_88[0] = 1;
                                  SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                }
                              }
                              lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0xd0,lVar2 + 0x10);
                              if (lVar5 == 0) {
                                *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                                iVar3 = DataStreamProcessor(param_2 + 0xd0,&lStack_78);
                                if (iVar3 != 0) goto LAB_18087ee97;
                              }
                            }
                            if ((lVar6 != 0) &&
                               (iVar3 = DataStreamProcessor(param_3 + 0xd0,&lStack_80), iVar3 != 0))
                            goto LAB_18087ee97;
                            lVar4 = lVar4 + 1;
                          } while (lVar4 < iVar1);
                        }
                        lVar7 = (**(code **)(*param_4 + 0xb0))(param_4,0);
                        if (lVar7 != 0) {
                          iVar1 = *(int *)(param_1 + 0xe8);
                          if (0 < (int64_t)iVar1) {
                            lVar4 = 0;
                            do {
                              lStack_80 = 0;
                              lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xe0) + lVar4 * 8);
                              lStack_78 = lVar2;
                              iVar3 = function_884c00(lVar7,lVar2,&lStack_70,&lStack_80);
                              if (iVar3 != 0) {
LAB_18087efd7:
                                if (iVar3 != 0) goto LAB_1808801be;
                                break;
                              }
                              if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                stack_array_88[0] = 1;
                                SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                              }
                              lVar6 = lStack_80;
                              if (lVar2 != lStack_80) {
                                if (lVar2 != 0) {
                                  lVar5 = param_5 + 0x2b0;
                                  if (param_5 == -0xf8) {
                                    lVar5 = 0;
                                  }
                                  if (lVar5 != 0) {
                                    stack_array_88[0] = 1;
                                    SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                  }
                                }
                                lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0xe0,lVar2 + 0x10);
                                if (lVar5 == 0) {
                                  *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                                  iVar3 = DataStreamProcessor(param_2 + 0xe0,&lStack_78);
                                  if (iVar3 != 0) goto LAB_18087efd7;
                                }
                              }
                              if ((lVar6 != 0) &&
                                 (iVar3 = DataStreamProcessor(param_3 + 0xe0,&lStack_80), iVar3 != 0))
                              goto LAB_18087efd7;
                              lVar4 = lVar4 + 1;
                            } while (lVar4 < iVar1);
                          }
                          lVar7 = (**(code **)(*param_4 + 0x78))(param_4,0);
                          if (lVar7 != 0) {
                            iVar1 = *(int *)(param_1 + 0xf8);
                            if (0 < (int64_t)iVar1) {
                              lVar4 = 0;
                              do {
                                lStack_80 = 0;
                                lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xf0) + lVar4 * 8);
                                lStack_78 = lVar2;
                                iVar3 = function_889900(lVar7,lVar2,&lStack_70,&lStack_80);
                                if (iVar3 != 0) {
LAB_18087f117:
                                  if (iVar3 != 0) goto LAB_1808801be;
                                  break;
                                }
                                if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                  stack_array_88[0] = 1;
                                  SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                }
                                lVar6 = lStack_80;
                                if (lVar2 != lStack_80) {
                                  if (lVar2 != 0) {
                                    lVar5 = param_5 + 0x350;
                                    if (param_5 == -0xf8) {
                                      lVar5 = 0;
                                    }
                                    if (lVar5 != 0) {
                                      stack_array_88[0] = 1;
                                      SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                    }
                                  }
                                  lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0xf0,lVar2 + 0x10);
                                  if (lVar5 == 0) {
                                    *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                                    iVar3 = DataStreamProcessor(param_2 + 0xf0,&lStack_78);
                                    if (iVar3 != 0) goto LAB_18087f117;
                                  }
                                }
                                if ((lVar6 != 0) &&
                                   (iVar3 = DataStreamProcessor(param_3 + 0xf0,&lStack_80), iVar3 != 0))
                                goto LAB_18087f117;
                                lVar4 = lVar4 + 1;
                              } while (lVar4 < iVar1);
                            }
                            lVar7 = (**(code **)(*param_4 + 0xa8))(param_4,0);
                            if (lVar7 != 0) {
                              iVar1 = *(int *)(param_1 + 0x108);
                              if (0 < (int64_t)iVar1) {
                                lVar4 = 0;
                                do {
                                  lStack_80 = 0;
                                  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x100) + lVar4 * 8);
                                  lStack_78 = lVar2;
                                  iVar3 = function_884880(lVar7,lVar2,&lStack_70,&lStack_80);
                                  if (iVar3 != 0) {
LAB_18087f257:
                                    if (iVar3 != 0) goto LAB_1808801be;
                                    break;
                                  }
                                  if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                    stack_array_88[0] = 1;
                                    SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                  }
                                  lVar6 = lStack_80;
                                  if (lVar2 != lStack_80) {
                                    if (lVar2 != 0) {
                                      lVar5 = param_5 + 0x2d8;
                                      if (param_5 == -0xf8) {
                                        lVar5 = 0;
                                      }
                                      if (lVar5 != 0) {
                                        stack_array_88[0] = 1;
                                        SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                      }
                                    }
                                    lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x100,lVar2 + 0x10);
                                    if (lVar5 == 0) {
                                      *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000;
                                      iVar3 = DataStreamProcessor(param_2 + 0x100,&lStack_78);
                                      if (iVar3 != 0) goto LAB_18087f257;
                                    }
                                  }
                                  if ((lVar6 != 0) &&
                                     (iVar3 = DataStreamProcessor(param_3 + 0x100,&lStack_80), iVar3 != 0)
                                     ) goto LAB_18087f257;
                                  lVar4 = lVar4 + 1;
                                } while (lVar4 < iVar1);
                              }
                              lVar7 = (**(code **)(*param_4 + 0xa0))(param_4,0);
                              if (lVar7 != 0) {
                                iVar1 = *(int *)(param_1 + 0x118);
                                if (0 < (int64_t)iVar1) {
                                  lVar4 = 0;
                                  do {
                                    lStack_80 = 0;
                                    lVar2 = *(int64_t *)
                                             (*(int64_t *)(param_1 + 0x110) + lVar4 * 8);
                                    lStack_78 = lVar2;
                                    iVar3 = function_883e00(lVar7,lVar2,&lStack_70,&lStack_80);
                                    if (iVar3 != 0) {
LAB_18087f397:
                                      if (iVar3 != 0) goto LAB_1808801be;
                                      break;
                                    }
                                    if ((lVar2 != 0) && (lVar6 = Function_cf8a2eb1(), lVar6 != 0))
                                    {
                                      stack_array_88[0] = 1;
                                      SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                    }
                                    lVar6 = lStack_80;
                                    if (lVar2 != lStack_80) {
                                      if (lVar2 != 0) {
                                        lVar5 = param_5 + 0x300;
                                        if (param_5 == -0xf8) {
                                          lVar5 = 0;
                                        }
                                        if (lVar5 != 0) {
                                          stack_array_88[0] = 1;
                                          SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                        }
                                      }
                                      lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x110,lVar2 + 0x10);
                                      if (lVar5 == 0) {
                                        *(ushort *)(lVar2 + 0xe) = *(ushort *)(lVar2 + 0xe) | 0x4000
                                        ;
                                        iVar3 = DataStreamProcessor(param_2 + 0x110,&lStack_78);
                                        if (iVar3 != 0) goto LAB_18087f397;
                                      }
                                    }
                                    if ((lVar6 != 0) &&
                                       (iVar3 = DataStreamProcessor(param_3 + 0x110,&lStack_80),
                                       iVar3 != 0)) goto LAB_18087f397;
                                    lVar4 = lVar4 + 1;
                                  } while (lVar4 < iVar1);
                                }
                                lVar7 = (**(code **)(*param_4 + 0x98))(param_4,0);
                                if (lVar7 != 0) {
                                  iVar1 = *(int *)(param_1 + 0x128);
                                  if (0 < (int64_t)iVar1) {
                                    lVar4 = 0;
                                    do {
                                      lStack_80 = 0;
                                      lVar2 = *(int64_t *)
                                               (*(int64_t *)(param_1 + 0x120) + lVar4 * 8);
                                      lStack_78 = lVar2;
                                      iVar3 = function_888b00(lVar7,lVar2,&lStack_70,&lStack_80);
                                      if (iVar3 != 0) {
LAB_18087f4d7:
                                        if (iVar3 != 0) goto LAB_1808801be;
                                        break;
                                      }
                                      if ((lVar2 != 0) &&
                                         (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                        stack_array_88[0] = 1;
                                        SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                      }
                                      lVar6 = lStack_80;
                                      if (lVar2 != lStack_80) {
                                        if (lVar2 != 0) {
                                          lVar5 = param_5 + 0x328;
                                          if (param_5 == -0xf8) {
                                            lVar5 = 0;
                                          }
                                          if (lVar5 != 0) {
                                            stack_array_88[0] = 1;
                                            SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                          }
                                        }
                                        lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x120,lVar2 + 0x10);
                                        if (lVar5 == 0) {
                                          *(ushort *)(lVar2 + 0xe) =
                                               *(ushort *)(lVar2 + 0xe) | 0x4000;
                                          iVar3 = DataStreamProcessor(param_2 + 0x120,&lStack_78);
                                          if (iVar3 != 0) goto LAB_18087f4d7;
                                        }
                                      }
                                      if ((lVar6 != 0) &&
                                         (iVar3 = DataStreamProcessor(param_3 + 0x120,&lStack_80),
                                         iVar3 != 0)) goto LAB_18087f4d7;
                                      lVar4 = lVar4 + 1;
                                    } while (lVar4 < iVar1);
                                  }
                                  lVar7 = (**(code **)(*param_4 + 0x90))(param_4,0);
                                  if (lVar7 != 0) {
                                    iVar1 = *(int *)(param_1 + 0x138);
                                    if (0 < (int64_t)iVar1) {
                                      lVar4 = 0;
                                      do {
                                        lStack_80 = 0;
                                        lVar2 = *(int64_t *)
                                                 (*(int64_t *)(param_1 + 0x130) + lVar4 * 8);
                                        lStack_78 = lVar2;
                                        iVar3 = function_885a00(lVar7,lVar2,&lStack_70,&lStack_80);
                                        if (iVar3 != 0) {
LAB_18087f617:
                                          if (iVar3 != 0) goto LAB_1808801be;
                                          break;
                                        }
                                        if ((lVar2 != 0) &&
                                           (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                          stack_array_88[0] = 1;
                                          SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                        }
                                        lVar6 = lStack_80;
                                        if (lVar2 != lStack_80) {
                                          if (lVar2 != 0) {
                                            lVar5 = param_5 + 0x3f0;
                                            if (param_5 == -0xf8) {
                                              lVar5 = 0;
                                            }
                                            if (lVar5 != 0) {
                                              stack_array_88[0] = 1;
                                              SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                            }
                                          }
                                          lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x130,lVar2 + 0x10);
                                          if (lVar5 == 0) {
                                            *(ushort *)(lVar2 + 0xe) =
                                                 *(ushort *)(lVar2 + 0xe) | 0x4000;
                                            iVar3 = DataStreamProcessor(param_2 + 0x130,&lStack_78);
                                            if (iVar3 != 0) goto LAB_18087f617;
                                          }
                                        }
                                        if ((lVar6 != 0) &&
                                           (iVar3 = DataStreamProcessor(param_3 + 0x130,&lStack_80),
                                           iVar3 != 0)) goto LAB_18087f617;
                                        lVar4 = lVar4 + 1;
                                      } while (lVar4 < iVar1);
                                    }
                                    lVar7 = (**(code **)(*param_4 + 0x88))(param_4,0);
                                    if (lVar7 != 0) {
                                      iVar1 = *(int *)(param_1 + 0x158);
                                      if (0 < (int64_t)iVar1) {
                                        lVar4 = 0;
                                        do {
                                          lStack_80 = 0;
                                          lVar2 = *(int64_t *)
                                                   (*(int64_t *)(param_1 + 0x150) + lVar4 * 8);
                                          lStack_78 = lVar2;
                                          iVar3 = function_886800(lVar7,lVar2,&lStack_70,&lStack_80);
                                          if (iVar3 != 0) {
LAB_18087f73b:
                                            if (iVar3 != 0) goto LAB_1808801be;
                                            break;
                                          }
                                          function_8c54a0(param_5,lVar2);
                                          lVar6 = lStack_80;
                                          if (lVar2 != lStack_80) {
                                            if (lVar2 != 0) {
                                              lVar5 = param_5 + 0x378;
                                              if (param_5 == -0xf8) {
                                                lVar5 = 0;
                                              }
                                              if (lVar5 != 0) {
                                                stack_array_88[0] = 1;
                                                SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                              }
                                            }
                                            lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x150,lVar2 + 0x10);
                                            if (lVar5 == 0) {
                                              *(ushort *)(lVar2 + 0xe) =
                                                   *(ushort *)(lVar2 + 0xe) | 0x4000;
                                              iVar3 = DataStreamProcessor(param_2 + 0x150,&lStack_78);
                                              if (iVar3 != 0) goto LAB_18087f73b;
                                            }
                                          }
                                          if ((lVar6 != 0) &&
                                             (iVar3 = DataStreamProcessor(param_3 + 0x150,&lStack_80),
                                             iVar3 != 0)) goto LAB_18087f73b;
                                          lVar4 = lVar4 + 1;
                                        } while (lVar4 < iVar1);
                                      }
                                      lVar7 = (**(code **)(*param_4 + 0x80))(param_4,0);
                                      if (lVar7 != 0) {
                                        iVar1 = *(int *)(param_1 + 0x168);
                                        if (0 < (int64_t)iVar1) {
                                          lVar4 = 0;
                                          do {
                                            lStack_80 = 0;
                                            lVar2 = *(int64_t *)
                                                     (*(int64_t *)(param_1 + 0x160) + lVar4 * 8);
                                            lStack_78 = lVar2;
                                            iVar3 = function_888080(lVar7,lVar2,&lStack_70,&lStack_80)
                                            ;
                                            if (iVar3 != 0) {
LAB_18087f85c:
                                              if (iVar3 != 0) goto LAB_1808801be;
                                              break;
                                            }
                                            function_8c54a0(param_5,lVar2);
                                            lVar6 = lStack_80;
                                            if (lVar2 != lStack_80) {
                                              if (lVar2 != 0) {
                                                lVar5 = param_5 + 0x3a0;
                                                if (param_5 == -0xf8) {
                                                  lVar5 = 0;
                                                }
                                                if (lVar5 != 0) {
                                                  stack_array_88[0] = 1;
                                                  SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                                }
                                              }
                                              lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x160,lVar2 + 0x10);
                                              if (lVar5 == 0) {
                                                *(ushort *)(lVar2 + 0xe) =
                                                     *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                iVar3 = DataStreamProcessor(param_2 + 0x160,&lStack_78);
                                                if (iVar3 != 0) goto LAB_18087f85c;
                                              }
                                            }
                                            if ((lVar6 != 0) &&
                                               (iVar3 = DataStreamProcessor(param_3 + 0x160,&lStack_80),
                                               iVar3 != 0)) goto LAB_18087f85c;
                                            lVar4 = lVar4 + 1;
                                          } while (lVar4 < iVar1);
                                        }
                                        lVar7 = (**(code **)(*param_4 + 0xb8))(param_4,0);
                                        if (lVar7 != 0) {
                                          iVar1 = *(int *)(param_1 + 0x178);
                                          if (0 < (int64_t)iVar1) {
                                            lVar4 = 0;
                                            do {
                                              lStack_80 = 0;
                                              lVar2 = *(int64_t *)
                                                       (*(int64_t *)(param_1 + 0x170) + lVar4 * 8);
                                              lStack_78 = lVar2;
                                              iVar3 = function_887980(lVar7,lVar2,&lStack_70,
                                                                    &lStack_80);
                                              if (iVar3 != 0) {
LAB_18087f9a7:
                                                if (iVar3 != 0) goto LAB_1808801be;
                                                break;
                                              }
                                              if ((lVar2 != 0) &&
                                                 (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                                stack_array_88[0] = 1;
                                                SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                              }
                                              lVar6 = lStack_80;
                                              if (lVar2 != lStack_80) {
                                                if (lVar2 != 0) {
                                                  lVar5 = param_5 + 0x3c8;
                                                  if (param_5 == -0xf8) {
                                                    lVar5 = 0;
                                                  }
                                                  if (lVar5 != 0) {
                                                    stack_array_88[0] = 1;
                                                    SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                                  }
                                                }
                                                lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x170,lVar2 + 0x10);
                                                if (lVar5 == 0) {
                                                  *(ushort *)(lVar2 + 0xe) =
                                                       *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                  iVar3 = DataStreamProcessor(param_2 + 0x170,&lStack_78);
                                                  if (iVar3 != 0) goto LAB_18087f9a7;
                                                }
                                              }
                                              if ((lVar6 != 0) &&
                                                 (iVar3 = DataStreamProcessor(param_3 + 0x170,&lStack_80),
                                                 iVar3 != 0)) goto LAB_18087f9a7;
                                              lVar4 = lVar4 + 1;
                                            } while (lVar4 < iVar1);
                                          }
                                          lVar7 = (**(code **)(*param_4 + 0x68))(param_4,0);
                                          if (lVar7 != 0) {
                                            iVar1 = *(int *)(param_1 + 0x188);
                                            if (0 < (int64_t)iVar1) {
                                              lVar4 = 0;
                                              do {
                                                lStack_80 = 0;
                                                lVar2 = *(int64_t *)
                                                         (*(int64_t *)(param_1 + 0x180) + lVar4 * 8
                                                         );
                                                lStack_78 = lVar2;
                                                iVar3 = function_884180(lVar7,lVar2,&lStack_70,
                                                                      &lStack_80);
                                                if (iVar3 != 0) {
LAB_18087fae7:
                                                  if (iVar3 != 0) goto LAB_1808801be;
                                                  break;
                                                }
                                                if ((lVar2 != 0) &&
                                                   (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                                  stack_array_88[0] = 1;
                                                  SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                                }
                                                lVar6 = lStack_80;
                                                if (lVar2 != lStack_80) {
                                                  if (lVar2 != 0) {
                                                    lVar5 = param_5 + 0x418;
                                                    if (param_5 == -0xf8) {
                                                      lVar5 = 0;
                                                    }
                                                    if (lVar5 != 0) {
                                                      stack_array_88[0] = 1;
                                                      SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88);
                                                    }
                                                  }
                                                  lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x180,lVar2 + 0x10
                                                                       );
                                                  if (lVar5 == 0) {
                                                    *(ushort *)(lVar2 + 0xe) =
                                                         *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                    iVar3 = DataStreamProcessor(param_2 + 0x180,&lStack_78
                                                                         );
                                                    if (iVar3 != 0) goto LAB_18087fae7;
                                                  }
                                                }
                                                if ((lVar6 != 0) &&
                                                   (iVar3 = DataStreamProcessor(param_3 + 0x180,&lStack_80
                                                                         ), iVar3 != 0))
                                                goto LAB_18087fae7;
                                                lVar4 = lVar4 + 1;
                                              } while (lVar4 < iVar1);
                                            }
                                            lVar7 = (**(code **)(*param_4 + 0x28))(param_4,0);
                                            if (lVar7 != 0) {
                                              iVar1 = *(int *)(param_1 + 0x198);
                                              if (0 < (int64_t)iVar1) {
                                                lVar4 = 0;
                                                do {
                                                  lStack_80 = 0;
                                                  lVar2 = *(int64_t *)
                                                           (*(int64_t *)(param_1 + 400) + lVar4 * 8
                                                           );
                                                  lStack_78 = lVar2;
                                                  iVar3 = function_886480(lVar7,lVar2,&lStack_70,
                                                                        &lStack_80);
                                                  if (iVar3 != 0) {
LAB_18087fc27:
                                                    if (iVar3 != 0) goto LAB_1808801be;
                                                    break;
                                                  }
                                                  if ((lVar2 != 0) &&
                                                     (lVar6 = Function_cf8a2eb1(), lVar6 != 0)) {
                                                    stack_array_88[0] = 1;
                                                    SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88);
                                                  }
                                                  lVar6 = lStack_80;
                                                  if (lVar2 != lStack_80) {
                                                    if (lVar2 != 0) {
                                                      lVar5 = param_5 + 0x440;
                                                      if (param_5 == -0xf8) {
                                                        lVar5 = 0;
                                                      }
                                                      if (lVar5 != 0) {
                                                        stack_array_88[0] = 1;
                                                        SystemStateProcessor(lVar5,lVar2 + 0x10,stack_array_88)
                                                        ;
                                                      }
                                                    }
                                                    lVar5 = CoreSystem_SynchronizationManager0(param_2 + 400,lVar2 + 0x10
                                                                         );
                                                    if (lVar5 == 0) {
                                                      *(ushort *)(lVar2 + 0xe) =
                                                           *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                      iVar3 = DataStreamProcessor(param_2 + 400,&lStack_78
                                                                           );
                                                      if (iVar3 != 0) goto LAB_18087fc27;
                                                    }
                                                  }
                                                  if ((lVar6 != 0) &&
                                                     (iVar3 = DataStreamProcessor(param_3 + 400,&lStack_80
                                                                           ), iVar3 != 0))
                                                  goto LAB_18087fc27;
                                                  lVar4 = lVar4 + 1;
                                                } while (lVar4 < iVar1);
                                              }
                                              lVar7 = (**(code **)(*param_4 + 0x60))(param_4,0);
                                              if (lVar7 != 0) {
                                                iVar1 = *(int *)(param_1 + 0x1a8);
                                                if (0 < (int64_t)iVar1) {
                                                  lVar4 = 0;
                                                  do {
                                                    lStack_80 = 0;
                                                    lVar2 = *(int64_t *)
                                                             (*(int64_t *)(param_1 + 0x1a0) +
                                                             lVar4 * 8);
                                                    lStack_78 = lVar2;
                                                    iVar3 = function_884f80(lVar7,lVar2,&lStack_70,
                                                                          &lStack_80);
                                                    if (iVar3 != 0) {
LAB_18087fd6e:
                                                      if (iVar3 != 0) goto LAB_1808801be;
                                                      break;
                                                    }
                                                    if (lVar2 != 0) {
                                                      lVar6 = param_5 + 0x58;
                                                      if (param_5 == -8) {
                                                        lVar6 = 0;
                                                      }
                                                      if (lVar6 != 0) {
                                                        stack_array_88[0] = 1;
                                                        SystemStateProcessor(lVar6,lVar2 + 0x10,stack_array_88)
                                                        ;
                                                      }
                                                    }
                                                    lVar6 = lStack_80;
                                                    if (lVar2 != lStack_80) {
                                                      if (lVar2 != 0) {
                                                        lVar5 = param_5 + 0x468;
                                                        if (param_5 == -0xf8) {
                                                          lVar5 = 0;
                                                        }
                                                        if (lVar5 != 0) {
                                                          stack_array_88[0] = 1;
                                                          SystemStateProcessor(lVar5,lVar2 + 0x10,
                                                                        stack_array_88);
                                                        }
                                                      }
                                                      lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x1a0,
                                                                            lVar2 + 0x10);
                                                      if (lVar5 == 0) {
                                                        *(ushort *)(lVar2 + 0xe) =
                                                             *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                        iVar3 = DataStreamProcessor(param_2 + 0x1a0,
                                                                              &lStack_78);
                                                        if (iVar3 != 0) goto LAB_18087fd6e;
                                                      }
                                                    }
                                                    if ((lVar6 != 0) &&
                                                       (iVar3 = DataStreamProcessor(param_3 + 0x1a0,
                                                                              &lStack_80),
                                                       iVar3 != 0)) goto LAB_18087fd6e;
                                                    lVar4 = lVar4 + 1;
                                                  } while (lVar4 < iVar1);
                                                }
                                                lVar7 = (**(code **)(*param_4 + 0x48))(param_4,0);
                                                if (lVar7 != 0) {
                                                  iVar1 = *(int *)(param_1 + 0x1b8);
                                                  if (0 < (int64_t)iVar1) {
                                                    lVar4 = 0;
                                                    do {
                                                      lStack_80 = 0;
                                                      lVar2 = *(int64_t *)
                                                               (*(int64_t *)(param_1 + 0x1b0) +
                                                               lVar4 * 8);
                                                      lStack_78 = lVar2;
                                                      iVar3 = function_887280(lVar7,lVar2,&lStack_70,
                                                                            &lStack_80);
                                                      if (iVar3 != 0) {
LAB_18087fec1:
                                                        if (iVar3 != 0) goto LAB_1808801be;
                                                        break;
                                                      }
                                                      if (lVar2 != 0) {
                                                        lVar6 = param_5 + 0xa8;
                                                        if (param_5 == -8) {
                                                          lVar6 = 0;
                                                        }
                                                        if (lVar6 != 0) {
                                                          stack_array_88[0] = 1;
                                                          SystemStateProcessor(lVar6,lVar2 + 0x10,
                                                                        stack_array_88);
                                                        }
                                                      }
                                                      lVar6 = lStack_80;
                                                      if (lVar2 != lStack_80) {
                                                        if (lVar2 != 0) {
                                                          lVar5 = param_5 + 0x4b8;
                                                          if (param_5 == -0xf8) {
                                                            lVar5 = 0;
                                                          }
                                                          if (lVar5 != 0) {
                                                            stack_array_88[0] = 1;
                                                            SystemStateProcessor(lVar5,lVar2 + 0x10,
                                                                          stack_array_88);
                                                          }
                                                        }
                                                        lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x1b0,
                                                                              lVar2 + 0x10);
                                                        if (lVar5 == 0) {
                                                          *(ushort *)(lVar2 + 0xe) =
                                                               *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                          iVar3 = DataStreamProcessor(param_2 + 0x1b0,
                                                                                &lStack_78);
                                                          if (iVar3 != 0) goto LAB_18087fec1;
                                                        }
                                                      }
                                                      if ((lVar6 != 0) &&
                                                         (iVar3 = DataStreamProcessor(param_3 + 0x1b0,
                                                                                &lStack_80),
                                                         iVar3 != 0)) goto LAB_18087fec1;
                                                      lVar4 = lVar4 + 1;
                                                    } while (lVar4 < iVar1);
                                                  }
                                                  lVar7 = (**(code **)(*param_4 + 0x40))(param_4,0);
                                                  if (lVar7 != 0) {
                                                    iVar1 = *(int *)(param_1 + 0x1c8);
                                                    if (0 < (int64_t)iVar1) {
                                                      lVar4 = 0;
                                                      do {
                                                        lStack_80 = 0;
                                                        lVar2 = *(int64_t *)
                                                                 (*(int64_t *)(param_1 + 0x1c0) +
                                                                 lVar4 * 8);
                                                        lStack_78 = lVar2;
                                                        iVar3 = function_886f00(lVar7,lVar2,&lStack_70
                                                                              ,&lStack_80);
                                                        if (iVar3 != 0) {
LAB_180880011:
                                                          if (iVar3 != 0) goto LAB_1808801be;
                                                          break;
                                                        }
                                                        if (lVar2 != 0) {
                                                          lVar6 = param_5 + 0xd0;
                                                          if (param_5 == -8) {
                                                            lVar6 = 0;
                                                          }
                                                          if (lVar6 != 0) {
                                                            stack_array_88[0] = 1;
                                                            SystemStateProcessor(lVar6,lVar2 + 0x10,
                                                                          stack_array_88);
                                                          }
                                                        }
                                                        lVar6 = lStack_80;
                                                        if (lVar2 != lStack_80) {
                                                          if (lVar2 != 0) {
                                                            lVar5 = param_5 + 0x4e0;
                                                            if (param_5 == -0xf8) {
                                                              lVar5 = 0;
                                                            }
                                                            if (lVar5 != 0) {
                                                              stack_array_88[0] = 1;
                                                              SystemStateProcessor(lVar5,lVar2 + 0x10,
                                                                            stack_array_88);
                                                            }
                                                          }
                                                          lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x1c0,
                                                                                lVar2 + 0x10);
                                                          if (lVar5 == 0) {
                                                            *(ushort *)(lVar2 + 0xe) =
                                                                 *(ushort *)(lVar2 + 0xe) | 0x4000;
                                                            iVar3 = DataStreamProcessor(param_2 + 0x1c0,
                                                                                  &lStack_78);
                                                            if (iVar3 != 0) goto LAB_180880011;
                                                          }
                                                        }
                                                        if ((lVar6 != 0) &&
                                                           (iVar3 = DataStreamProcessor(param_3 + 0x1c0,
                                                                                  &lStack_80),
                                                           iVar3 != 0)) goto LAB_180880011;
                                                        lVar4 = lVar4 + 1;
                                                      } while (lVar4 < iVar1);
                                                    }
                                                    lVar7 = (**(code **)(*param_4 + 0x38))
                                                                      (param_4,0);
                                                    if (lVar7 != 0) {
                                                      iVar1 = *(int *)(param_1 + 0x1d8);
                                                      if (0 < (int64_t)iVar1) {
                                                        lVar4 = 0;
                                                        do {
                                                          lStack_80 = 0;
                                                          lVar2 = *(int64_t *)
                                                                   (*(int64_t *)(param_1 + 0x1d0) +
                                                                   lVar4 * 8);
                                                          lStack_78 = lVar2;
                                                          iVar3 = function_884500(lVar7,lVar2,
                                                                                &lStack_70,
                                                                                &lStack_80);
                                                          if (iVar3 != 0) {
LAB_180880157:
                                                            if (iVar3 != 0) goto LAB_1808801be;
                                                            break;
                                                          }
                                                          if ((lVar2 != 0) &&
                                                             (lVar6 = Function_cf8a2eb1(),
                                                             lVar6 != 0)) {
                                                            stack_array_88[0] = 1;
                                                            SystemStateProcessor(lVar6,lVar2 + 0x10,
                                                                          stack_array_88);
                                                          }
                                                          lVar6 = lStack_80;
                                                          if (lVar2 != lStack_80) {
                                                            if (lVar2 != 0) {
                                                              lVar5 = param_5 + 0x508;
                                                              if (param_5 == -0xf8) {
                                                                lVar5 = 0;
                                                              }
                                                              if (lVar5 != 0) {
                                                                stack_array_88[0] = 1;
                                                                SystemStateProcessor(lVar5,lVar2 + 0x10,
                                                                              stack_array_88);
                                                              }
                                                            }
                                                            lVar5 = CoreSystem_SynchronizationManager0(param_2 + 0x1d0,
                                                                                  lVar2 + 0x10);
                                                            if (lVar5 == 0) {
                                                              *(ushort *)(lVar2 + 0xe) =
                                                                   *(ushort *)(lVar2 + 0xe) | 0x4000
                                                              ;
                                                              iVar3 = DataStreamProcessor(param_2 + 0x1d0,
                                                                                    &lStack_78);
                                                              if (iVar3 != 0) goto LAB_180880157;
                                                            }
                                                          }
                                                          if ((lVar6 != 0) &&
                                                             (iVar3 = DataStreamProcessor(param_3 + 0x1d0,
                                                                                    &lStack_80),
                                                             iVar3 != 0)) goto LAB_180880157;
                                                          lVar4 = lVar4 + 1;
                                                        } while (lVar4 < iVar1);
                                                      }
                                                      iVar3 = function_86d470(param_1,param_2,param_3,
                                                                            param_4,&lStack_70,
                                                                            param_5);
                                                      if ((iVar3 == 0) &&
                                                         (iVar3 = function_86d620(param_1,param_2,
                                                                                param_3,param_4,
                                                                                &lStack_70,param_5),
                                                         iVar3 == 0)) {
                                                        iVar3 = 0;
                                                      }
                                                      goto LAB_1808801be;
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
        }
      }
    }
  }
  iVar3 = 0x1c;
LAB_1808801be:
  SystemCore_MemoryManager(&lStack_60);
  SystemCore_MemoryManager(&lStack_70);
  return iVar3;
}
int UltraHighFreq_OperationHandler1(int64_t *param_1,uint *param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t astack_special_x_18 [2];
  lVar1 = param_1[5];
  astack_special_x_18[0] = param_3;
  if (lVar1 != 0) {
    SystemStateManager(lVar1);
  }
  iVar6 = 0;
  if (param_4 == (int64_t *)0x0) {
    iVar2 = NetworkSystem_PacketProcessor(param_1);
    if (iVar2 == 0) {
      if ((int)param_1[1] != 0) {
        lVar3 = (int64_t)
                (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
        plVar4 = (int64_t *)(*param_1 + lVar3 * 4);
        iVar2 = *(int *)(*param_1 + lVar3 * 4);
        if (iVar2 != -1) {
          lVar3 = param_1[2];
          do {
            lVar5 = (int64_t)iVar2 * 0x20;
            if ((*(int64_t *)(lVar5 + lVar3) == *(int64_t *)param_2) &&
               (*(int64_t *)(lVar5 + 8 + lVar3) == *(int64_t *)(param_2 + 2))) goto LAB_180880320;
            plVar4 = (int64_t *)(lVar3 + 0x10 + lVar5);
            iVar2 = (int)*plVar4;
          } while (iVar2 != -1);
        }
        goto LAB_18088030a;
      }
LAB_180880320:
      iVar2 = 0x1c;
    }
  }
  else {
    *param_4 = 0;
    iVar2 = NetworkSystem_PacketProcessor(param_1);
    if (iVar2 == 0) {
      if ((int)param_1[1] == 0) goto LAB_180880320;
      lVar3 = (int64_t)
              (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
      plVar4 = (int64_t *)(*param_1 + lVar3 * 4);
      iVar2 = *(int *)(*param_1 + lVar3 * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (int64_t *)((int64_t)iVar2 * 0x20 + param_1[2]);
          if ((*plVar4 == *(int64_t *)param_2) && (plVar4[1] == *(int64_t *)(param_2 + 2))) {
            *param_4 = plVar4[3];
            goto LAB_180880327;
          }
          iVar2 = (int)plVar4[2];
          plVar4 = plVar4 + 2;
        } while (iVar2 != -1);
      }
LAB_18088030a:
      iVar2 = function_84e8f0(param_1,param_2,astack_special_x_18,plVar4);
      if (iVar2 == 0) goto LAB_180880327;
    }
  }
  iVar6 = iVar2;
LAB_180880327:
  if (lVar1 == 0) {
    return iVar6;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(lVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_880350(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lStackX_18;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  plVar4 = (int64_t *)(**(code **)(*param_2 + 0x108))(param_2,0);
  if (plVar4 != (int64_t *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (0 < (int64_t)iVar1) {
      lVar6 = 0;
      do {
        lStackX_18 = 0;
        puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x30) + lVar6 * 8);
        local_var_48 = *(int32_t *)(puVar2 + 2);
        local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
        local_var_40 = *(int32_t *)(puVar2 + 3);
        local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
        uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
        lVar3 = lStackX_18;
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (lStackX_18 == 0) {
          *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
          uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
          if ((int)uVar5 != 0) goto LAB_180880413;
        }
        else {
          *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
          uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
          if ((int)uVar5 != 0) {
LAB_180880413:
            if ((int)uVar5 != 0) {
              return uVar5;
            }
          }
          if (lVar3 != 0) {
            (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,0x55d,1);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
    }
    plVar4 = (int64_t *)(**(code **)(*param_2 + 0x100))(param_2,0);
    if (plVar4 != (int64_t *)0x0) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (0 < (int64_t)iVar1) {
        lVar6 = 0;
        do {
          lStackX_18 = 0;
          puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x40) + lVar6 * 8);
          local_var_48 = *(int32_t *)(puVar2 + 2);
          local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
          local_var_40 = *(int32_t *)(puVar2 + 3);
          local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
          uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
          lVar3 = lStackX_18;
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (lStackX_18 == 0) {
            *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
            uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
            if ((int)uVar5 != 0) goto LAB_180880513;
          }
          else {
            *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
            uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
            if ((int)uVar5 != 0) {
LAB_180880513:
              if ((int)uVar5 != 0) {
                return uVar5;
              }
            }
            if (lVar3 != 0) {
              (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,0x55d,1);
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar1);
      }
      plVar4 = (int64_t *)(**(code **)(*param_2 + 0xe8))(param_2,0);
      if (plVar4 != (int64_t *)0x0) {
        iVar1 = *(int *)(param_1 + 0x58);
        if (0 < (int64_t)iVar1) {
          lVar6 = 0;
          do {
            lStackX_18 = 0;
            puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x50) + lVar6 * 8);
            local_var_48 = *(int32_t *)(puVar2 + 2);
            local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
            local_var_40 = *(int32_t *)(puVar2 + 3);
            local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
            uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
            lVar3 = lStackX_18;
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            if (lStackX_18 == 0) {
              *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
              uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
              if ((int)uVar5 != 0) goto LAB_180880613;
            }
            else {
              *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
              uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
              if ((int)uVar5 != 0) {
LAB_180880613:
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
              }
              if (lVar3 != 0) {
                (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,0x55d,1)
                ;
              }
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar1);
        }
        plVar4 = (int64_t *)(**(code **)(*param_2 + 0xf8))(param_2,0);
        if (plVar4 != (int64_t *)0x0) {
          iVar1 = *(int *)(param_1 + 0x68);
          if (0 < (int64_t)iVar1) {
            lVar6 = 0;
            do {
              lStackX_18 = 0;
              puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x60) + lVar6 * 8);
              local_var_48 = *(int32_t *)(puVar2 + 2);
              local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
              local_var_40 = *(int32_t *)(puVar2 + 3);
              local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
              uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
              lVar3 = lStackX_18;
              if ((int)uVar5 != 0) {
                return uVar5;
              }
              if (lStackX_18 == 0) {
                *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
                uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                if ((int)uVar5 != 0) goto LAB_180880713;
              }
              else {
                *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                if ((int)uVar5 != 0) {
LAB_180880713:
                  if ((int)uVar5 != 0) {
                    return uVar5;
                  }
                }
                if (lVar3 != 0) {
                  (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,0x55d,
                                1);
                }
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar1);
          }
          plVar4 = (int64_t *)(**(code **)(*param_2 + 0xf0))(param_2,0);
          if (plVar4 != (int64_t *)0x0) {
            iVar1 = *(int *)(param_1 + 0x78);
            if (0 < (int64_t)iVar1) {
              lVar6 = 0;
              do {
                lStackX_18 = 0;
                puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x70) + lVar6 * 8);
                local_var_48 = *(int32_t *)(puVar2 + 2);
                local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                local_var_40 = *(int32_t *)(puVar2 + 3);
                local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                lVar3 = lStackX_18;
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
                if (lStackX_18 == 0) {
                  *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
                  uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                  if ((int)uVar5 != 0) goto LAB_180880813;
                }
                else {
                  *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                  uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                  if ((int)uVar5 != 0) {
LAB_180880813:
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                  }
                  if (lVar3 != 0) {
                    (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,
                                  0x55d,1);
                  }
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 < iVar1);
            }
            plVar4 = (int64_t *)(**(code **)(*param_2 + 0xe0))(param_2,0);
            if (plVar4 != (int64_t *)0x0) {
              iVar1 = *(int *)(param_1 + 0x88);
              if (0 < (int64_t)iVar1) {
                lVar6 = 0;
                do {
                  lStackX_18 = 0;
                  puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x80) + lVar6 * 8);
                  local_var_48 = *(int32_t *)(puVar2 + 2);
                  local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                  local_var_40 = *(int32_t *)(puVar2 + 3);
                  local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                  uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                  lVar3 = lStackX_18;
                  if ((int)uVar5 != 0) {
                    return uVar5;
                  }
                  if (lStackX_18 == 0) {
                    *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
                    uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                    if ((int)uVar5 != 0) goto LAB_180880913;
                  }
                  else {
                    *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                    uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                    if ((int)uVar5 != 0) {
LAB_180880913:
                      if ((int)uVar5 != 0) {
                        return uVar5;
                      }
                    }
                    if (lVar3 != 0) {
                      (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,
                                    0x55d,1);
                    }
                  }
                  lVar6 = lVar6 + 1;
                } while (lVar6 < iVar1);
              }
              plVar4 = (int64_t *)(**(code **)(*param_2 + 0xd8))(param_2,0);
              if (plVar4 != (int64_t *)0x0) {
                iVar1 = *(int *)(param_1 + 0x98);
                if (0 < (int64_t)iVar1) {
                  lVar6 = 0;
                  do {
                    lStackX_18 = 0;
                    puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x90) + lVar6 * 8);
                    local_var_48 = *(int32_t *)(puVar2 + 2);
                    local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                    local_var_40 = *(int32_t *)(puVar2 + 3);
                    local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                    uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                    lVar3 = lStackX_18;
                    if ((int)uVar5 != 0) {
                      return uVar5;
                    }
                    if (lStackX_18 == 0) {
                      *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
                      uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                      if ((int)uVar5 != 0) goto LAB_180880a13;
                    }
                    else {
                      *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                      uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                      if ((int)uVar5 != 0) {
LAB_180880a13:
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                      }
                      if (lVar3 != 0) {
                        (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,
                                      0x55d,1);
                      }
                    }
                    lVar6 = lVar6 + 1;
                  } while (lVar6 < iVar1);
                }
                plVar4 = (int64_t *)(**(code **)(*param_2 + 0xd0))(param_2,0);
                if (plVar4 != (int64_t *)0x0) {
                  iVar1 = *(int *)(param_1 + 0xa8);
                  if (0 < (int64_t)iVar1) {
                    lVar6 = 0;
                    do {
                      lStackX_18 = 0;
                      puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0xa0) + lVar6 * 8);
                      local_var_48 = *(int32_t *)(puVar2 + 2);
                      local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                      local_var_40 = *(int32_t *)(puVar2 + 3);
                      local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                      uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                      lVar3 = lStackX_18;
                      if ((int)uVar5 != 0) {
                        return uVar5;
                      }
                      if (lStackX_18 == 0) {
                        *(short *)((int64_t)puVar2 + 0xe) = *(short *)((int64_t)puVar2 + 0xe) + 1;
                        uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                        if ((int)uVar5 != 0) goto LAB_180880b13;
                      }
                      else {
                        *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                        uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                        if ((int)uVar5 != 0) {
LAB_180880b13:
                          if ((int)uVar5 != 0) {
                            return uVar5;
                          }
                        }
                        if (lVar3 != 0) {
                          (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                        &processed_var_5856_ptr,0x55d,1);
                        }
                      }
                      lVar6 = lVar6 + 1;
                    } while (lVar6 < iVar1);
                  }
                  plVar4 = (int64_t *)(**(code **)(*param_2 + 200))(param_2,0);
                  if (plVar4 != (int64_t *)0x0) {
                    iVar1 = *(int *)(param_1 + 0xb8);
                    if (0 < (int64_t)iVar1) {
                      lVar6 = 0;
                      do {
                        lStackX_18 = 0;
                        puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0xb0) + lVar6 * 8);
                        local_var_48 = *(int32_t *)(puVar2 + 2);
                        local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                        local_var_40 = *(int32_t *)(puVar2 + 3);
                        local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                        uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                        lVar3 = lStackX_18;
                        if ((int)uVar5 != 0) {
                          return uVar5;
                        }
                        if (lStackX_18 == 0) {
                          *(short *)((int64_t)puVar2 + 0xe) =
                               *(short *)((int64_t)puVar2 + 0xe) + 1;
                          uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                          if ((int)uVar5 != 0) goto LAB_180880c13;
                        }
                        else {
                          *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                          uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                          if ((int)uVar5 != 0) {
LAB_180880c13:
                            if ((int)uVar5 != 0) {
                              return uVar5;
                            }
                          }
                          if (lVar3 != 0) {
                            (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                          &processed_var_5856_ptr,0x55d,1);
                          }
                        }
                        lVar6 = lVar6 + 1;
                      } while (lVar6 < iVar1);
                    }
                    plVar4 = (int64_t *)(**(code **)(*param_2 + 0xc0))(param_2,0);
                    if (plVar4 != (int64_t *)0x0) {
                      iVar1 = *(int *)(param_1 + 200);
                      if (0 < (int64_t)iVar1) {
                        lVar6 = 0;
                        do {
                          lStackX_18 = 0;
                          puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0xc0) + lVar6 * 8);
                          local_var_48 = *(int32_t *)(puVar2 + 2);
                          local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                          local_var_40 = *(int32_t *)(puVar2 + 3);
                          local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                          uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                          lVar3 = lStackX_18;
                          if ((int)uVar5 != 0) {
                            return uVar5;
                          }
                          if (lStackX_18 == 0) {
                            *(short *)((int64_t)puVar2 + 0xe) =
                                 *(short *)((int64_t)puVar2 + 0xe) + 1;
                            uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                            if ((int)uVar5 != 0) goto LAB_180880d13;
                          }
                          else {
                            *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                            uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                            if ((int)uVar5 != 0) {
LAB_180880d13:
                              if ((int)uVar5 != 0) {
                                return uVar5;
                              }
                            }
                            if (lVar3 != 0) {
                              (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                            &processed_var_5856_ptr,0x55d,1);
                            }
                          }
                          lVar6 = lVar6 + 1;
                        } while (lVar6 < iVar1);
                      }
                      plVar4 = (int64_t *)(**(code **)(*param_2 + 0x50))(param_2,0);
                      if (plVar4 != (int64_t *)0x0) {
                        iVar1 = *(int *)(param_1 + 0xd8);
                        if (0 < (int64_t)iVar1) {
                          lVar6 = 0;
                          do {
                            lStackX_18 = 0;
                            puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0xd0) + lVar6 * 8);
                            local_var_48 = *(int32_t *)(puVar2 + 2);
                            local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                            local_var_40 = *(int32_t *)(puVar2 + 3);
                            local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                            uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                            lVar3 = lStackX_18;
                            if ((int)uVar5 != 0) {
                              return uVar5;
                            }
                            if (lStackX_18 == 0) {
                              *(short *)((int64_t)puVar2 + 0xe) =
                                   *(short *)((int64_t)puVar2 + 0xe) + 1;
                              uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                              if ((int)uVar5 != 0) goto LAB_180880e13;
                            }
                            else {
                              *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                              uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                              if ((int)uVar5 != 0) {
LAB_180880e13:
                                if ((int)uVar5 != 0) {
                                  return uVar5;
                                }
                              }
                              if (lVar3 != 0) {
                                (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                              &processed_var_5856_ptr,0x55d,1);
                              }
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 < iVar1);
                        }
                        plVar4 = (int64_t *)(**(code **)(*param_2 + 0xb0))(param_2,0);
                        if (plVar4 != (int64_t *)0x0) {
                          iVar1 = *(int *)(param_1 + 0xe8);
                          if (0 < (int64_t)iVar1) {
                            lVar6 = 0;
                            do {
                              lStackX_18 = 0;
                              puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0xe0) + lVar6 * 8);
                              local_var_48 = *(int32_t *)(puVar2 + 2);
                              local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                              local_var_40 = *(int32_t *)(puVar2 + 3);
                              local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                              uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                              lVar3 = lStackX_18;
                              if ((int)uVar5 != 0) {
                                return uVar5;
                              }
                              if (lStackX_18 == 0) {
                                *(short *)((int64_t)puVar2 + 0xe) =
                                     *(short *)((int64_t)puVar2 + 0xe) + 1;
                                uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                if ((int)uVar5 != 0) goto LAB_180880f13;
                              }
                              else {
                                *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                                uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                                if ((int)uVar5 != 0) {
LAB_180880f13:
                                  if ((int)uVar5 != 0) {
                                    return uVar5;
                                  }
                                }
                                if (lVar3 != 0) {
                                  (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                                &processed_var_5856_ptr,0x55d,1);
                                }
                              }
                              lVar6 = lVar6 + 1;
                            } while (lVar6 < iVar1);
                          }
                          plVar4 = (int64_t *)(**(code **)(*param_2 + 0x78))(param_2,0);
                          if (plVar4 != (int64_t *)0x0) {
                            iVar1 = *(int *)(param_1 + 0xf8);
                            if (0 < (int64_t)iVar1) {
                              lVar6 = 0;
                              do {
                                lStackX_18 = 0;
                                puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0xf0) + lVar6 * 8)
                                ;
                                local_var_48 = *(int32_t *)(puVar2 + 2);
                                local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                local_var_40 = *(int32_t *)(puVar2 + 3);
                                local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                                lVar3 = lStackX_18;
                                if ((int)uVar5 != 0) {
                                  return uVar5;
                                }
                                if (lStackX_18 == 0) {
                                  *(short *)((int64_t)puVar2 + 0xe) =
                                       *(short *)((int64_t)puVar2 + 0xe) + 1;
                                  uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                  if ((int)uVar5 != 0) goto LAB_180881013;
                                }
                                else {
                                  *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                                  uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                                  if ((int)uVar5 != 0) {
LAB_180881013:
                                    if ((int)uVar5 != 0) {
                                      return uVar5;
                                    }
                                  }
                                  if (lVar3 != 0) {
                                    (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                                  &processed_var_5856_ptr,0x55d,1);
                                  }
                                }
                                lVar6 = lVar6 + 1;
                              } while (lVar6 < iVar1);
                            }
                            plVar4 = (int64_t *)(**(code **)(*param_2 + 0xa8))(param_2,0);
                            if (plVar4 != (int64_t *)0x0) {
                              iVar1 = *(int *)(param_1 + 0x108);
                              if (0 < (int64_t)iVar1) {
                                lVar6 = 0;
                                do {
                                  lStackX_18 = 0;
                                  puVar2 = *(uint64_t **)
                                            (*(int64_t *)(param_1 + 0x100) + lVar6 * 8);
                                  local_var_48 = *(int32_t *)(puVar2 + 2);
                                  local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                  local_var_40 = *(int32_t *)(puVar2 + 3);
                                  local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                  uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                                  lVar3 = lStackX_18;
                                  if ((int)uVar5 != 0) {
                                    return uVar5;
                                  }
                                  if (lStackX_18 == 0) {
                                    *(short *)((int64_t)puVar2 + 0xe) =
                                         *(short *)((int64_t)puVar2 + 0xe) + 1;
                                    uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                    if ((int)uVar5 != 0) goto LAB_180881113;
                                  }
                                  else {
                                    *(short *)(lStackX_18 + 0xe) = *(short *)(lStackX_18 + 0xe) + 1;
                                    uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                                    if ((int)uVar5 != 0) {
LAB_180881113:
                                      if ((int)uVar5 != 0) {
                                        return uVar5;
                                      }
                                    }
                                    if (lVar3 != 0) {
                                      (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                                    &processed_var_5856_ptr,0x55d,1);
                                    }
                                  }
                                  lVar6 = lVar6 + 1;
                                } while (lVar6 < iVar1);
                              }
                              plVar4 = (int64_t *)(**(code **)(*param_2 + 0xa0))(param_2,0);
                              if (plVar4 != (int64_t *)0x0) {
                                iVar1 = *(int *)(param_1 + 0x118);
                                if (0 < (int64_t)iVar1) {
                                  lVar6 = 0;
                                  do {
                                    lStackX_18 = 0;
                                    puVar2 = *(uint64_t **)
                                              (*(int64_t *)(param_1 + 0x110) + lVar6 * 8);
                                    local_var_48 = *(int32_t *)(puVar2 + 2);
                                    local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                    local_var_40 = *(int32_t *)(puVar2 + 3);
                                    local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                    uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18);
                                    lVar3 = lStackX_18;
                                    if ((int)uVar5 != 0) {
                                      return uVar5;
                                    }
                                    if (lStackX_18 == 0) {
                                      *(short *)((int64_t)puVar2 + 0xe) =
                                           *(short *)((int64_t)puVar2 + 0xe) + 1;
                                      uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                      if ((int)uVar5 != 0) goto LAB_180881213;
                                    }
                                    else {
                                      *(short *)(lStackX_18 + 0xe) =
                                           *(short *)(lStackX_18 + 0xe) + 1;
                                      uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18);
                                      if ((int)uVar5 != 0) {
LAB_180881213:
                                        if ((int)uVar5 != 0) {
                                          return uVar5;
                                        }
                                      }
                                      if (lVar3 != 0) {
                                        (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2
                                                      ,&processed_var_5856_ptr,0x55d,1);
                                      }
                                    }
                                    lVar6 = lVar6 + 1;
                                  } while (lVar6 < iVar1);
                                }
                                plVar4 = (int64_t *)(**(code **)(*param_2 + 0x98))(param_2,0);
                                if (plVar4 != (int64_t *)0x0) {
                                  iVar1 = *(int *)(param_1 + 0x128);
                                  if (0 < (int64_t)iVar1) {
                                    lVar6 = 0;
                                    do {
                                      lStackX_18 = 0;
                                      puVar2 = *(uint64_t **)
                                                (*(int64_t *)(param_1 + 0x120) + lVar6 * 8);
                                      local_var_48 = *(int32_t *)(puVar2 + 2);
                                      local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                      local_var_40 = *(int32_t *)(puVar2 + 3);
                                      local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                      uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,&lStackX_18)
                                      ;
                                      lVar3 = lStackX_18;
                                      if ((int)uVar5 != 0) {
                                        return uVar5;
                                      }
                                      if (lStackX_18 == 0) {
                                        *(short *)((int64_t)puVar2 + 0xe) =
                                             *(short *)((int64_t)puVar2 + 0xe) + 1;
                                        uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                        if ((int)uVar5 != 0) goto LAB_180881313;
                                      }
                                      else {
                                        *(short *)(lStackX_18 + 0xe) =
                                             *(short *)(lStackX_18 + 0xe) + 1;
                                        uVar5 = (**(code **)(*plVar4 + 8))(plVar4,puVar2,lStackX_18)
                                        ;
                                        if ((int)uVar5 != 0) {
LAB_180881313:
                                          if ((int)uVar5 != 0) {
                                            return uVar5;
                                          }
                                        }
                                        if (lVar3 != 0) {
                                          (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                        puVar2,&processed_var_5856_ptr,0x55d,1);
                                        }
                                      }
                                      lVar6 = lVar6 + 1;
                                    } while (lVar6 < iVar1);
                                  }
                                  plVar4 = (int64_t *)(**(code **)(*param_2 + 0x90))(param_2,0);
                                  if (plVar4 != (int64_t *)0x0) {
                                    iVar1 = *(int *)(param_1 + 0x138);
                                    if (0 < (int64_t)iVar1) {
                                      lVar6 = 0;
                                      do {
                                        lStackX_18 = 0;
                                        puVar2 = *(uint64_t **)
                                                  (*(int64_t *)(param_1 + 0x130) + lVar6 * 8);
                                        local_var_48 = *(int32_t *)(puVar2 + 2);
                                        local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                        local_var_40 = *(int32_t *)(puVar2 + 3);
                                        local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                        uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,
                                                              &lStackX_18);
                                        lVar3 = lStackX_18;
                                        if ((int)uVar5 != 0) {
                                          return uVar5;
                                        }
                                        if (lStackX_18 == 0) {
                                          *(short *)((int64_t)puVar2 + 0xe) =
                                               *(short *)((int64_t)puVar2 + 0xe) + 1;
                                          uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                          if ((int)uVar5 != 0) goto LAB_180881413;
                                        }
                                        else {
                                          *(short *)(lStackX_18 + 0xe) =
                                               *(short *)(lStackX_18 + 0xe) + 1;
                                          uVar5 = (**(code **)(*plVar4 + 8))
                                                            (plVar4,puVar2,lStackX_18);
                                          if ((int)uVar5 != 0) {
LAB_180881413:
                                            if ((int)uVar5 != 0) {
                                              return uVar5;
                                            }
                                          }
                                          if (lVar3 != 0) {
                                            (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                          puVar2,&processed_var_5856_ptr,0x55d,1);
                                          }
                                        }
                                        lVar6 = lVar6 + 1;
                                      } while (lVar6 < iVar1);
                                    }
                                    plVar4 = (int64_t *)(**(code **)(*param_2 + 0x70))(param_2,0);
                                    if (plVar4 != (int64_t *)0x0) {
                                      iVar1 = *(int *)(param_1 + 0x148);
                                      if (0 < (int64_t)iVar1) {
                                        lVar6 = 0;
                                        do {
                                          lStackX_18 = 0;
                                          puVar2 = *(uint64_t **)
                                                    (*(int64_t *)(param_1 + 0x140) + lVar6 * 8);
                                          local_var_48 = *(int32_t *)(puVar2 + 2);
                                          local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                          local_var_40 = *(int32_t *)(puVar2 + 3);
                                          local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                          uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,
                                                                &lStackX_18);
                                          lVar3 = lStackX_18;
                                          if ((int)uVar5 != 0) {
                                            return uVar5;
                                          }
                                          if (lStackX_18 == 0) {
                                            *(short *)((int64_t)puVar2 + 0xe) =
                                                 *(short *)((int64_t)puVar2 + 0xe) + 1;
                                            uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                            if ((int)uVar5 != 0) goto LAB_180881513;
                                          }
                                          else {
                                            *(short *)(lStackX_18 + 0xe) =
                                                 *(short *)(lStackX_18 + 0xe) + 1;
                                            uVar5 = (**(code **)(*plVar4 + 8))
                                                              (plVar4,puVar2,lStackX_18);
                                            if ((int)uVar5 != 0) {
LAB_180881513:
                                              if ((int)uVar5 != 0) {
                                                return uVar5;
                                              }
                                            }
                                            if (lVar3 != 0) {
                                              (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                            puVar2,&processed_var_5856_ptr,0x55d,1);
                                            }
                                          }
                                          lVar6 = lVar6 + 1;
                                        } while (lVar6 < iVar1);
                                      }
                                      plVar4 = (int64_t *)(**(code **)(*param_2 + 0x88))(param_2,0)
                                      ;
                                      if (plVar4 != (int64_t *)0x0) {
                                        iVar1 = *(int *)(param_1 + 0x158);
                                        if (0 < (int64_t)iVar1) {
                                          lVar6 = 0;
                                          do {
                                            lStackX_18 = 0;
                                            puVar2 = *(uint64_t **)
                                                      (*(int64_t *)(param_1 + 0x150) + lVar6 * 8);
                                            local_var_48 = *(int32_t *)(puVar2 + 2);
                                            local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                            local_var_40 = *(int32_t *)(puVar2 + 3);
                                            local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                            uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,
                                                                  &lStackX_18);
                                            lVar3 = lStackX_18;
                                            if ((int)uVar5 != 0) {
                                              return uVar5;
                                            }
                                            if (lStackX_18 == 0) {
                                              *(short *)((int64_t)puVar2 + 0xe) =
                                                   *(short *)((int64_t)puVar2 + 0xe) + 1;
                                              uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                              if ((int)uVar5 != 0) goto LAB_180881613;
                                            }
                                            else {
                                              *(short *)(lStackX_18 + 0xe) =
                                                   *(short *)(lStackX_18 + 0xe) + 1;
                                              uVar5 = (**(code **)(*plVar4 + 8))
                                                                (plVar4,puVar2,lStackX_18);
                                              if ((int)uVar5 != 0) {
LAB_180881613:
                                                if ((int)uVar5 != 0) {
                                                  return uVar5;
                                                }
                                              }
                                              if (lVar3 != 0) {
                                                (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                SystemInitializer(*(uint64_t *)
                                                               (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                                              &processed_var_5856_ptr,0x55d,1);
                                              }
                                            }
                                            lVar6 = lVar6 + 1;
                                          } while (lVar6 < iVar1);
                                        }
                                        plVar4 = (int64_t *)
                                                 (**(code **)(*param_2 + 0x80))(param_2,0);
                                        if (plVar4 != (int64_t *)0x0) {
                                          iVar1 = *(int *)(param_1 + 0x168);
                                          if (0 < (int64_t)iVar1) {
                                            lVar6 = 0;
                                            do {
                                              lStackX_18 = 0;
                                              puVar2 = *(uint64_t **)
                                                        (*(int64_t *)(param_1 + 0x160) + lVar6 * 8)
                                              ;
                                              local_var_48 = *(int32_t *)(puVar2 + 2);
                                              local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14);
                                              local_var_40 = *(int32_t *)(puVar2 + 3);
                                              local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c);
                                              uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,
                                                                    &lStackX_18);
                                              lVar3 = lStackX_18;
                                              if ((int)uVar5 != 0) {
                                                return uVar5;
                                              }
                                              if (lStackX_18 == 0) {
                                                *(short *)((int64_t)puVar2 + 0xe) =
                                                     *(short *)((int64_t)puVar2 + 0xe) + 1;
                                                uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                                if ((int)uVar5 != 0) goto LAB_180881713;
                                              }
                                              else {
                                                *(short *)(lStackX_18 + 0xe) =
                                                     *(short *)(lStackX_18 + 0xe) + 1;
                                                uVar5 = (**(code **)(*plVar4 + 8))
                                                                  (plVar4,puVar2,lStackX_18);
                                                if ((int)uVar5 != 0) {
LAB_180881713:
                                                  if ((int)uVar5 != 0) {
                                                    return uVar5;
                                                  }
                                                }
                                                if (lVar3 != 0) {
                                                  (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                  SystemInitializer(*(uint64_t *)
                                                                 (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                                                &processed_var_5856_ptr,0x55d,1);
                                                }
                                              }
                                              lVar6 = lVar6 + 1;
                                            } while (lVar6 < iVar1);
                                          }
                                          plVar4 = (int64_t *)
                                                   (**(code **)(*param_2 + 0xb8))(param_2,0);
                                          if (plVar4 != (int64_t *)0x0) {
                                            iVar1 = *(int *)(param_1 + 0x178);
                                            if (0 < (int64_t)iVar1) {
                                              lVar6 = 0;
                                              do {
                                                lStackX_18 = 0;
                                                puVar2 = *(uint64_t **)
                                                          (*(int64_t *)(param_1 + 0x170) +
                                                          lVar6 * 8);
                                                local_var_48 = *(int32_t *)(puVar2 + 2);
                                                local_var_44 = *(int32_t *)((int64_t)puVar2 + 0x14)
                                                ;
                                                local_var_40 = *(int32_t *)(puVar2 + 3);
                                                local_var_3c = *(int32_t *)((int64_t)puVar2 + 0x1c)
                                                ;
                                                uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,
                                                                      &lStackX_18);
                                                lVar3 = lStackX_18;
                                                if ((int)uVar5 != 0) {
                                                  return uVar5;
                                                }
                                                if (lStackX_18 == 0) {
                                                  *(short *)((int64_t)puVar2 + 0xe) =
                                                       *(short *)((int64_t)puVar2 + 0xe) + 1;
                                                  uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                                  if ((int)uVar5 != 0) goto LAB_180881813;
                                                }
                                                else {
                                                  *(short *)(lStackX_18 + 0xe) =
                                                       *(short *)(lStackX_18 + 0xe) + 1;
                                                  uVar5 = (**(code **)(*plVar4 + 8))
                                                                    (plVar4,puVar2,lStackX_18);
                                                  if ((int)uVar5 != 0) {
LAB_180881813:
                                                    if ((int)uVar5 != 0) {
                                                      return uVar5;
                                                    }
                                                  }
                                                  if (lVar3 != 0) {
                                                    (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                    SystemInitializer(*(uint64_t *)
                                                                   (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,
                                                                  &processed_var_5856_ptr,0x55d,1);
                                                  }
                                                }
                                                lVar6 = lVar6 + 1;
                                              } while (lVar6 < iVar1);
                                            }
                                            plVar4 = (int64_t *)
                                                     (**(code **)(*param_2 + 0x68))(param_2,0);
                                            if (plVar4 != (int64_t *)0x0) {
                                              iVar1 = *(int *)(param_1 + 0x188);
                                              if (0 < (int64_t)iVar1) {
                                                lVar6 = 0;
                                                do {
                                                  lStackX_18 = 0;
                                                  puVar2 = *(uint64_t **)
                                                            (*(int64_t *)(param_1 + 0x180) +
                                                            lVar6 * 8);
                                                  local_var_48 = *(int32_t *)(puVar2 + 2);
                                                  local_var_44 = *(int32_t *)
                                                               ((int64_t)puVar2 + 0x14);
                                                  local_var_40 = *(int32_t *)(puVar2 + 3);
                                                  local_var_3c = *(int32_t *)
                                                               ((int64_t)puVar2 + 0x1c);
                                                  uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,puVar2,
                                                                        &lStackX_18);
                                                  lVar3 = lStackX_18;
                                                  if ((int)uVar5 != 0) {
                                                    return uVar5;
                                                  }
                                                  if (lStackX_18 == 0) {
                                                    *(short *)((int64_t)puVar2 + 0xe) =
                                                         *(short *)((int64_t)puVar2 + 0xe) + 1;
                                                    uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                                    if ((int)uVar5 != 0) goto LAB_180881913;
                                                  }
                                                  else {
                                                    *(short *)(lStackX_18 + 0xe) =
                                                         *(short *)(lStackX_18 + 0xe) + 1;
                                                    uVar5 = (**(code **)(*plVar4 + 8))
                                                                      (plVar4,puVar2,lStackX_18);
                                                    if ((int)uVar5 != 0) {
LAB_180881913:
                                                      if ((int)uVar5 != 0) {
                                                        return uVar5;
                                                      }
                                                    }
                                                    if (lVar3 != 0) {
                                                      (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                      SystemInitializer(*(uint64_t *)
                                                                     (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2
                                                                    ,&processed_var_5856_ptr,0x55d,1);
                                                    }
                                                  }
                                                  lVar6 = lVar6 + 1;
                                                } while (lVar6 < iVar1);
                                              }
                                              plVar4 = (int64_t *)
                                                       (**(code **)(*param_2 + 0x28))(param_2,0);
                                              if (plVar4 != (int64_t *)0x0) {
                                                iVar1 = *(int *)(param_1 + 0x198);
                                                if (0 < (int64_t)iVar1) {
                                                  lVar6 = 0;
                                                  do {
                                                    lStackX_18 = 0;
                                                    puVar2 = *(uint64_t **)
                                                              (*(int64_t *)(param_1 + 400) +
                                                              lVar6 * 8);
                                                    local_var_48 = *(int32_t *)(puVar2 + 2);
                                                    local_var_44 = *(int32_t *)
                                                                 ((int64_t)puVar2 + 0x14);
                                                    local_var_40 = *(int32_t *)(puVar2 + 3);
                                                    local_var_3c = *(int32_t *)
                                                                 ((int64_t)puVar2 + 0x1c);
                                                    uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,
                                                                          puVar2,&lStackX_18);
                                                    lVar3 = lStackX_18;
                                                    if ((int)uVar5 != 0) {
                                                      return uVar5;
                                                    }
                                                    if (lStackX_18 == 0) {
                                                      *(short *)((int64_t)puVar2 + 0xe) =
                                                           *(short *)((int64_t)puVar2 + 0xe) + 1;
                                                      uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                                      if ((int)uVar5 != 0) goto LAB_180881a13;
                                                    }
                                                    else {
                                                      *(short *)(lStackX_18 + 0xe) =
                                                           *(short *)(lStackX_18 + 0xe) + 1;
                                                      uVar5 = (**(code **)(*plVar4 + 8))
                                                                        (plVar4,puVar2,lStackX_18);
                                                      if ((int)uVar5 != 0) {
LAB_180881a13:
                                                        if ((int)uVar5 != 0) {
                                                          return uVar5;
                                                        }
                                                      }
                                                      if (lVar3 != 0) {
                                                        (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                        SystemInitializer(*(uint64_t *)
                                                                       (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                                      puVar2,&processed_var_5856_ptr,0x55d,1)
                                                        ;
                                                      }
                                                    }
                                                    lVar6 = lVar6 + 1;
                                                  } while (lVar6 < iVar1);
                                                }
                                                plVar4 = (int64_t *)
                                                         (**(code **)(*param_2 + 0x48))(param_2,0);
                                                if (plVar4 != (int64_t *)0x0) {
                                                  iVar1 = *(int *)(param_1 + 0x1b8);
                                                  if (0 < (int64_t)iVar1) {
                                                    lVar6 = 0;
                                                    do {
                                                      lStackX_18 = 0;
                                                      puVar2 = *(uint64_t **)
                                                                (*(int64_t *)(param_1 + 0x1b0) +
                                                                lVar6 * 8);
                                                      local_var_48 = *(int32_t *)(puVar2 + 2);
                                                      local_var_44 = *(int32_t *)
                                                                   ((int64_t)puVar2 + 0x14);
                                                      local_var_40 = *(int32_t *)(puVar2 + 3);
                                                      local_var_3c = *(int32_t *)
                                                                   ((int64_t)puVar2 + 0x1c);
                                                      uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,
                                                                            puVar2,&lStackX_18);
                                                      lVar3 = lStackX_18;
                                                      if ((int)uVar5 != 0) {
                                                        return uVar5;
                                                      }
                                                      if (lStackX_18 == 0) {
                                                        *(short *)((int64_t)puVar2 + 0xe) =
                                                             *(short *)((int64_t)puVar2 + 0xe) + 1;
                                                        uVar5 = (**(code **)*plVar4)(plVar4,puVar2);
                                                        if ((int)uVar5 != 0) goto LAB_180881b13;
                                                      }
                                                      else {
                                                        *(short *)(lStackX_18 + 0xe) =
                                                             *(short *)(lStackX_18 + 0xe) + 1;
                                                        uVar5 = (**(code **)(*plVar4 + 8))
                                                                          (plVar4,puVar2,lStackX_18)
                                                        ;
                                                        if ((int)uVar5 != 0) {
LAB_180881b13:
                                                          if ((int)uVar5 != 0) {
                                                            return uVar5;
                                                          }
                                                        }
                                                        if (lVar3 != 0) {
                                                          (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                          SystemInitializer(*(uint64_t *)
                                                                         (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                                        puVar2,&processed_var_5856_ptr,0x55d,
                                                                        1);
                                                        }
                                                      }
                                                      lVar6 = lVar6 + 1;
                                                    } while (lVar6 < iVar1);
                                                  }
                                                  plVar4 = (int64_t *)
                                                           (**(code **)(*param_2 + 0x40))(param_2,0)
                                                  ;
                                                  if (plVar4 != (int64_t *)0x0) {
                                                    iVar1 = *(int *)(param_1 + 0x1c8);
                                                    if (0 < (int64_t)iVar1) {
                                                      lVar6 = 0;
                                                      do {
                                                        lStackX_18 = 0;
                                                        puVar2 = *(uint64_t **)
                                                                  (*(int64_t *)(param_1 + 0x1c0) +
                                                                  lVar6 * 8);
                                                        local_var_48 = *(int32_t *)(puVar2 + 2);
                                                        local_var_44 = *(int32_t *)
                                                                     ((int64_t)puVar2 + 0x14);
                                                        local_var_40 = *(int32_t *)(puVar2 + 3);
                                                        local_var_3c = *(int32_t *)
                                                                     ((int64_t)puVar2 + 0x1c);
                                                        uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48,
                                                                              puVar2,&lStackX_18);
                                                        lVar3 = lStackX_18;
                                                        if ((int)uVar5 != 0) {
                                                          return uVar5;
                                                        }
                                                        if (lStackX_18 == 0) {
                                                          *(short *)((int64_t)puVar2 + 0xe) =
                                                               *(short *)((int64_t)puVar2 + 0xe) +
                                                               1;
                                                          uVar5 = (**(code **)*plVar4)
                                                                            (plVar4,puVar2);
                                                          if ((int)uVar5 != 0) goto LAB_180881c13;
                                                        }
                                                        else {
                                                          *(short *)(lStackX_18 + 0xe) =
                                                               *(short *)(lStackX_18 + 0xe) + 1;
                                                          uVar5 = (**(code **)(*plVar4 + 8))
                                                                            (plVar4,puVar2,
                                                                             lStackX_18);
                                                          if ((int)uVar5 != 0) {
LAB_180881c13:
                                                            if ((int)uVar5 != 0) {
                                                              return uVar5;
                                                            }
                                                          }
                                                          if (lVar3 != 0) {
                                                            (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                            SystemInitializer(*(uint64_t *)
                                                                           (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                                          puVar2,&processed_var_5856_ptr,
                                                                          0x55d,1);
                                                          }
                                                        }
                                                        lVar6 = lVar6 + 1;
                                                      } while (lVar6 < iVar1);
                                                    }
                                                    plVar4 = (int64_t *)
                                                             (**(code **)(*param_2 + 0x38))
                                                                       (param_2,0);
                                                    if (plVar4 != (int64_t *)0x0) {
                                                      iVar1 = *(int *)(param_1 + 0x1d8);
                                                      if (0 < (int64_t)iVar1) {
                                                        lVar6 = 0;
                                                        do {
                                                          lStackX_18 = 0;
                                                          puVar2 = *(uint64_t **)
                                                                    (*(int64_t *)(param_1 + 0x1d0)
                                                                    + lVar6 * 8);
                                                          local_var_48 = *(int32_t *)(puVar2 + 2);
                                                          local_var_44 = *(int32_t *)
                                                                       ((int64_t)puVar2 + 0x14);
                                                          local_var_40 = *(int32_t *)(puVar2 + 3);
                                                          local_var_3c = *(int32_t *)
                                                                       ((int64_t)puVar2 + 0x1c);
                                                          uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],&local_var_48
                                                                                ,puVar2,&lStackX_18)
                                                          ;
                                                          lVar3 = lStackX_18;
                                                          if ((int)uVar5 != 0) {
                                                            return uVar5;
                                                          }
                                                          if (lStackX_18 == 0) {
                                                            *(short *)((int64_t)puVar2 + 0xe) =
                                                                 *(short *)((int64_t)puVar2 + 0xe)
                                                                 + 1;
                                                            uVar5 = (**(code **)*plVar4)
                                                                              (plVar4,puVar2);
                                                            if ((int)uVar5 != 0) goto LAB_180881d13;
                                                          }
                                                          else {
                                                            *(short *)(lStackX_18 + 0xe) =
                                                                 *(short *)(lStackX_18 + 0xe) + 1;
                                                            uVar5 = (**(code **)(*plVar4 + 8))
                                                                              (plVar4,puVar2,
                                                                               lStackX_18);
                                                            if ((int)uVar5 != 0) {
LAB_180881d13:
                                                              if ((int)uVar5 != 0) {
                                                                return uVar5;
                                                              }
                                                            }
                                                            if (lVar3 != 0) {
                                                              (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                              SystemInitializer(*(uint64_t *)
                                                                             (SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0
                                                                             ),puVar2,&processed_var_5856_ptr
                                                                            ,0x55d,1);
                                                            }
                                                          }
                                                          lVar6 = lVar6 + 1;
                                                        } while (lVar6 < iVar1);
                                                      }
                                                      plVar4 = (int64_t *)
                                                               (**(code **)(*param_2 + 0x30))
                                                                         (param_2,0);
                                                      if (plVar4 != (int64_t *)0x0) {
                                                        iVar1 = *(int *)(param_1 + 0x1e8);
                                                        if (0 < (int64_t)iVar1) {
                                                          lVar6 = 0;
                                                          do {
                                                            lStackX_18 = 0;
                                                            puVar2 = *(uint64_t **)
                                                                      (*(int64_t *)
                                                                        (param_1 + 0x1e0) +
                                                                      lVar6 * 8);
                                                            local_var_48 = *(int32_t *)(puVar2 + 2);
                                                            local_var_44 = *(int32_t *)
                                                                         ((int64_t)puVar2 + 0x14);
                                                            local_var_40 = *(int32_t *)(puVar2 + 3);
                                                            local_var_3c = *(int32_t *)
                                                                         ((int64_t)puVar2 + 0x1c);
                                                            uVar5 = UltraHighFreq_OperationHandler1(plVar4[1],
                                                                                  &local_var_48,puVar2,
                                                                                  &lStackX_18);
                                                            lVar3 = lStackX_18;
                                                            if ((int)uVar5 != 0) {
                                                              return uVar5;
                                                            }
                                                            if (lStackX_18 == 0) {
                                                              *(short *)((int64_t)puVar2 + 0xe) =
                                                                   *(short *)((int64_t)puVar2 + 0xe
                                                                             ) + 1;
                                                              uVar5 = (**(code **)*plVar4)
                                                                                (plVar4,puVar2);
                                                              if ((int)uVar5 != 0)
                                                              goto LAB_180881e13;
                                                            }
                                                            else {
                                                              *(short *)(lStackX_18 + 0xe) =
                                                                   *(short *)(lStackX_18 + 0xe) + 1;
                                                              uVar5 = (**(code **)(*plVar4 + 8))
                                                                                (plVar4,puVar2,
                                                                                 lStackX_18);
                                                              if ((int)uVar5 != 0) {
LAB_180881e13:
                                                                if ((int)uVar5 != 0) {
                                                                  return uVar5;
                                                                }
                                                              }
                                                              if (lVar3 != 0) {
                                                                (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
                                                                SystemInitializer(*(uint64_t *)
                                                                               (SYSTEM_MAIN_CONTROL_BLOCK +
                                                                               0x1a0),puVar2,
                                                                              &processed_var_5856_ptr,0x55d,1
                                                                             );
                                                              }
                                                            }
                                                            lVar6 = lVar6 + 1;
                                                          } while (lVar6 < iVar1);
                                                        }
                                                        uVar5 = function_86d930(param_1,param_2);
                                                        if ((int)uVar5 != 0) {
                                                          return uVar5;
                                                        }
                                                        uVar5 = function_86d7d0(param_1,param_2);
                                                        return uVar5;
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
          }
        }
      }
    }
  }
  return 0x1c;
}
uint64_t function_881eb0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  iVar4 = 0;
  while( true ) {
    iVar3 = 0;
    if ((iVar4 < 0) || (iVar3 = 0, *(int *)(param_2 + 0x1b8) <= iVar4)) {
      while( true ) {
        if ((iVar3 < 0) || (*(int *)(param_2 + 0x1c8) <= iVar3)) {
          return 0;
        }
        lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x1c0) + (int64_t)iVar3 * 8);
        if (((*(byte *)(lVar1 + 0x68) & 1) != 0) &&
           (((*(ushort *)(lVar1 + 0xe) & 0x7fff) != 0 &&
            (uVar2 = function_8be120(*(uint64_t *)(param_1 + 0x90)), (int)uVar2 != 0)))) break;
        iVar3 = iVar3 + 1;
      }
      return uVar2;
    }
    lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x1b0) + (int64_t)iVar4 * 8);
    if (((*(byte *)(lVar1 + 0x34) & 1) != 0) &&
       (((*(ushort *)(lVar1 + 0xe) & 0x7fff) != 0 &&
        (uVar2 = function_8be0f0(*(uint64_t *)(param_1 + 0x90)), (int)uVar2 != 0)))) break;
    iVar4 = iVar4 + 1;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address