#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller


/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager


/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor



// 99_part_12_part078_sub001.c - 4 个函数


// 99_part_12_part078.c - 4 个函数


// 函数: void FUN_1807ffdd9(void)
void FUN_1807ffdd9(void)

{
  return;
}



uint64_t FUN_1807ffdf0(int64_t *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uStackX_8;
  int64_t *plStackX_10;
  
  uVar2 = *(uint64_t *)(param_1[3] + 0x68);
  uVar1 = func_0x000180806a00();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((*(uint *)(param_1 + 7) & 0x200) == 0) {
    param_1[0x5c] = 0;
    if ((*(uint *)((int64_t)param_1 + 0x3c) & 0x10000) != 0) {
      LOCK();
      *(uint *)((int64_t)param_1 + 0xd4) = *(uint *)((int64_t)param_1 + 0xd4) | 0x100;
      UNLOCK();
    }
    if ((param_1[0x5d] != 0) && (uVar1 = SystemCore_ConfigurationManager(param_1[0x5d],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    if ((param_1[0x5e] != 0) && (uVar1 = SystemCore_ConfigurationManager(param_1[0x5e],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = SystemCore_ConfigurationManager(param_1 + 0xe,0,0,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x88))
                      (param_1,*(int32_t *)(param_1[5] + 0x4c),*(int32_t *)(param_1[5] + 0x50)
                      );
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint *)(param_1 + 0xd) = *(uint *)((int64_t)param_1 + 100) ^ 0x80000000;
    (**(code **)(param_1[0xe] + 0x20))(param_1 + 0xe,param_1[5],param_1);
    if (param_1[0x5d] != 0) {
      SystemCore_Initializer(param_1[0x5d],0,1);
    }
    if (param_1[0x5e] != 0) {
      SystemCore_Initializer(param_1[0x5e],0,1);
    }
    if (param_1[0x5d] == 0) {
      param_1[0x4d] = param_1[3];
      uVar2 = UltraHighFreq_AudioSystem1(uVar2,param_1 + 0xe,0,0,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      *(int64_t *)(param_1[0x5d] + 0x1f8) = param_1[3];
      uVar2 = UltraHighFreq_AudioSystem1(uVar2,param_1[0x5d],0,0,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (param_1[0x5e] == 0) {
        param_1[0x4d] = param_1[3];
        uVar2 = UltraHighFreq_AudioSystem1(param_1[0x5d],param_1 + 0xe,0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      else {
        *(int64_t *)(param_1[0x5e] + 0x1f8) = param_1[3];
        uVar2 = UltraHighFreq_AudioSystem1(param_1[0x5d],param_1[0x5e],0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        param_1[0x4d] = param_1[3];
        uVar2 = UltraHighFreq_AudioSystem1(param_1[0x5e],param_1 + 0xe,0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    }
  }
  else {
    if ((param_1[0x5d] != 0) && (uVar1 = SystemCore_ConfigurationManager(param_1[0x5d],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    if ((param_1[0x5e] != 0) && (uVar1 = SystemCore_ConfigurationManager(param_1[0x5e],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    if ((param_1[0x52] != 0) && (uVar1 = SystemCore_ConfigurationManager(param_1 + 0xe,0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = func_0x000180742ca0(param_1[1],*(int32_t *)(*(int64_t *)(param_1[5] + 0x60) + 0xa4),
                                &uStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180770430(uStackX_8,&plStackX_10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    param_1[0x5c] = (int64_t)plStackX_10;
    uVar1 = (**(code **)(*plStackX_10 + 0x20))(plStackX_10,param_1[5],param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(float *)(param_1 + 0xd) <= 100.0 && *(float *)(param_1 + 0xd) != 100.0) {
      *(int32_t *)(param_1 + 0xd) = 0x42c80000;
    }
    if (param_1[0x5d] == 0) {
      *(int64_t *)(param_1[0x5c] + 0x1f8) = param_1[3];
      uVar2 = UltraHighFreq_AudioSystem1(uVar2,param_1[0x5c],0,0,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      *(int64_t *)(param_1[0x5d] + 0x1f8) = param_1[3];
      uVar2 = UltraHighFreq_AudioSystem1(uVar2,param_1[0x5d],0,0,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (param_1[0x5e] == 0) {
        *(int64_t *)(param_1[0x5c] + 0x1f8) = param_1[3];
        uVar2 = UltraHighFreq_AudioSystem1(param_1[0x5d],param_1[0x5c],0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      else {
        *(int64_t *)(param_1[0x5e] + 0x1f8) = param_1[3];
        uVar2 = UltraHighFreq_AudioSystem1(param_1[0x5d],param_1[0x5e],0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(int64_t *)(param_1[0x5c] + 0x1f8) = param_1[3];
        uVar2 = UltraHighFreq_AudioSystem1(param_1[0x5e],param_1[0x5c],0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    }
  }
  iVar3 = 0;
  if ((*(uint *)((int64_t)param_1 + 0x3c) & 0x10000) == 0) {
    uVar2 = (**(code **)(*(int64_t *)param_1[3] + 0x120))
                      ((int64_t *)param_1[3],0xfffffffd,param_1 + 0x5f);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    do {
      uVar2 = FUN_1807ff980(param_1,param_1[0x5f],iVar3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  *(int32_t *)(param_1 + 0x60) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x304) =
       *(int32_t *)(*(int64_t *)(param_1[3] + 0x20) + 0x1ec);
  return 0;
}



uint64_t FUN_1807ffe16(void)

{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int iVar2;
  bool in_ZF;
  int32_t extraout_XMM0_Da;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  uint64_t in_stack_00000050;
  int64_t *in_stack_00000058;
  
  if (in_ZF) {
    unaff_RBX[0x5c] = 0;
    if ((*(uint *)((int64_t)unaff_RBX + 0x3c) & 0x10000) != 0) {
      LOCK();
      *(uint *)((int64_t)unaff_RBX + 0xd4) = *(uint *)((int64_t)unaff_RBX + 0xd4) | 0x100;
      UNLOCK();
    }
    if ((unaff_RBX[0x5d] != 0) && (uVar1 = SystemCore_ConfigurationManager(unaff_RBX[0x5d],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    if ((unaff_RBX[0x5e] != 0) && (uVar1 = SystemCore_ConfigurationManager(unaff_RBX[0x5e],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = SystemCore_ConfigurationManager(unaff_RBX + 0xe,0,0,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*unaff_RBX + 0x88))
                      (extraout_XMM0_Da,*(int32_t *)(unaff_RBX[5] + 0x4c),
                       *(int32_t *)(unaff_RBX[5] + 0x50));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint *)(unaff_RBX + 0xd) = *(uint *)((int64_t)unaff_RBX + 100) ^ 0x80000000;
    uVar3 = (**(code **)(unaff_RBX[0xe] + 0x20))(unaff_RBX + 0xe,unaff_RBX[5]);
    if (unaff_RBX[0x5d] != 0) {
      uVar3 = SystemCore_Initializer(unaff_RBX[0x5d],0,1);
    }
    if (unaff_RBX[0x5e] != 0) {
      uVar3 = SystemCore_Initializer(unaff_RBX[0x5e],0,1);
    }
    if (unaff_RBX[0x5d] == 0) {
      unaff_RBX[0x4d] = unaff_RBX[3];
      uVar1 = UltraHighFreq_AudioSystem1(uVar3,unaff_RBX + 0xe,0,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      *(int64_t *)(unaff_RBX[0x5d] + 0x1f8) = unaff_RBX[3];
      uVar1 = UltraHighFreq_AudioSystem1(uVar3,unaff_RBX[0x5d],0,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (unaff_RBX[0x5e] == 0) {
        unaff_RBX[0x4d] = unaff_RBX[3];
        uVar1 = UltraHighFreq_AudioSystem1(unaff_RBX[0x5d],unaff_RBX + 0xe,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        *(int64_t *)(unaff_RBX[0x5e] + 0x1f8) = unaff_RBX[3];
        uVar1 = UltraHighFreq_AudioSystem1(unaff_RBX[0x5d],unaff_RBX[0x5e],0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        unaff_RBX[0x4d] = unaff_RBX[3];
        uVar1 = UltraHighFreq_AudioSystem1(unaff_RBX[0x5e],unaff_RBX + 0xe,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
    }
  }
  else {
    if ((unaff_RBX[0x5d] != 0) && (uVar1 = SystemCore_ConfigurationManager(unaff_RBX[0x5d],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    if ((unaff_RBX[0x5e] != 0) && (uVar1 = SystemCore_ConfigurationManager(unaff_RBX[0x5e],0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    if ((unaff_RBX[0x52] != 0) && (uVar1 = SystemCore_ConfigurationManager(unaff_RBX + 0xe,0,0,4), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = func_0x000180742ca0(unaff_RBX[1],
                                *(int32_t *)(*(int64_t *)(unaff_RBX[5] + 0x60) + 0xa4),
                                &stack0x00000050);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180770430(in_stack_00000050,&stack0x00000058);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    unaff_RBX[0x5c] = (int64_t)in_stack_00000058;
    uVar1 = (**(code **)(*in_stack_00000058 + 0x20))(in_stack_00000058,unaff_RBX[5]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(float *)(unaff_RBX + 0xd) <= 100.0 && *(float *)(unaff_RBX + 0xd) != 100.0) {
      *(int32_t *)(unaff_RBX + 0xd) = 0x42c80000;
    }
    if (unaff_RBX[0x5d] == 0) {
      *(int64_t *)(unaff_RBX[0x5c] + 0x1f8) = unaff_RBX[3];
      uVar1 = UltraHighFreq_AudioSystem1(0x42c80000,unaff_RBX[0x5c],0,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      *(int64_t *)(unaff_RBX[0x5d] + 0x1f8) = unaff_RBX[3];
      uVar1 = UltraHighFreq_AudioSystem1(0x42c80000,unaff_RBX[0x5d],0,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (unaff_RBX[0x5e] == 0) {
        *(int64_t *)(unaff_RBX[0x5c] + 0x1f8) = unaff_RBX[3];
        uVar1 = UltraHighFreq_AudioSystem1(unaff_RBX[0x5d],unaff_RBX[0x5c],0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        *(int64_t *)(unaff_RBX[0x5e] + 0x1f8) = unaff_RBX[3];
        uVar1 = UltraHighFreq_AudioSystem1(unaff_RBX[0x5d],unaff_RBX[0x5e],0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        *(int64_t *)(unaff_RBX[0x5c] + 0x1f8) = unaff_RBX[3];
        uVar1 = UltraHighFreq_AudioSystem1(unaff_RBX[0x5e],unaff_RBX[0x5c],0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
    }
  }
  iVar2 = 0;
  if ((*(uint *)((int64_t)unaff_RBX + 0x3c) & 0x10000) == 0) {
    uVar1 = (**(code **)(*(int64_t *)unaff_RBX[3] + 0x120))
                      ((int64_t *)unaff_RBX[3],0xfffffffd,unaff_RBX + 0x5f);
    uVar3 = extraout_XMM0_Da_00;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    do {
      uVar1 = FUN_1807ff980(uVar3,unaff_RBX[0x5f],iVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      uVar3 = extraout_XMM0_Da_01;
    } while (iVar2 < 4);
  }
  *(int32_t *)(unaff_RBX + 0x60) = 0xffffffff;
  *(int32_t *)((int64_t)unaff_RBX + 0x304) =
       *(int32_t *)(*(int64_t *)(unaff_RBX[3] + 0x20) + 0x1ec);
  return 0;
}



uint64_t FUN_1807fffde(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int unaff_EDI;
  
  *(uint64_t *)(unaff_RBX + 0x268) = param_1;
  uVar1 = UltraHighFreq_AudioSystem1(*(uint64_t *)(unaff_RBX + 0x2e8),unaff_RBX + 0x70);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((*(uint *)(unaff_RBX + 0x3c) & 0x10000) == 0) {
    uVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x18) + 0x120))
                      (*(int64_t **)(unaff_RBX + 0x18),0xfffffffd,unaff_RBX + 0x2f8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    do {
      uVar1 = FUN_1807ff980();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < 4);
  }
  *(int32_t *)(unaff_RBX + 0x300) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x304) =
       *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x18) + 0x20) + 0x1ec);
  return 0;
}



uint64_t FUN_18080000e(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int unaff_EDI;
  
  *(uint64_t *)(unaff_RBX + 0x268) = param_2;
  uVar1 = UltraHighFreq_AudioSystem1(param_1,unaff_RBX + 0x70);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((*(uint *)(unaff_RBX + 0x3c) & 0x10000) == 0) {
    uVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x18) + 0x120))
                      (*(int64_t **)(unaff_RBX + 0x18),0xfffffffd,unaff_RBX + 0x2f8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    do {
      uVar1 = FUN_1807ff980();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < 4);
  }
  *(int32_t *)(unaff_RBX + 0x300) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x304) =
       *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x18) + 0x20) + 0x1ec);
  return 0;
}



uint64_t FUN_180800037(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int iVar2;
  int32_t extraout_XMM0_Da;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_00;
  uint64_t in_stack_00000050;
  int64_t *in_stack_00000058;
  
  if ((*(int64_t *)(unaff_RBX + 0x2e8) != 0) &&
     (uVar1 = SystemCore_ConfigurationManager(*(int64_t *)(unaff_RBX + 0x2e8),0,0,4), (int)uVar1 != 0)) {
    return uVar1;
  }
  if ((*(int64_t *)(unaff_RBX + 0x2f0) != 0) &&
     (uVar1 = SystemCore_ConfigurationManager(*(int64_t *)(unaff_RBX + 0x2f0),0,0,4), (int)uVar1 != 0)) {
    return uVar1;
  }
  if ((*(int64_t *)(unaff_RBX + 0x290) != 0) &&
     (uVar1 = SystemCore_ConfigurationManager(unaff_RBX + 0x70,0,0,4), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = func_0x000180742ca0(*(uint64_t *)(unaff_RBX + 8),
                              *(int32_t *)
                               (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x28) + 0x60) + 0xa4),
                              &stack0x00000050);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_180770430(in_stack_00000050,&stack0x00000058), (int)uVar1 == 0)) {
    *(int64_t **)(unaff_RBX + 0x2e0) = in_stack_00000058;
    uVar1 = (**(code **)(*in_stack_00000058 + 0x20))
                      (in_stack_00000058,*(uint64_t *)(unaff_RBX + 0x28));
    if ((int)uVar1 == 0) {
      if (*(float *)(unaff_RBX + 0x68) <= 100.0 && *(float *)(unaff_RBX + 0x68) != 100.0) {
        *(int32_t *)(unaff_RBX + 0x68) = 0x42c80000;
      }
      iVar2 = 0;
      if (*(int64_t *)(unaff_RBX + 0x2e8) == 0) {
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2e0) + 0x1f8) =
             *(uint64_t *)(unaff_RBX + 0x18);
        uVar1 = UltraHighFreq_AudioSystem1(0x42c80000,*(uint64_t *)(unaff_RBX + 0x2e0),0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2e8) + 0x1f8) =
             *(uint64_t *)(unaff_RBX + 0x18);
        uVar1 = UltraHighFreq_AudioSystem1(0x42c80000,*(uint64_t *)(unaff_RBX + 0x2e8),0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int64_t *)(unaff_RBX + 0x2f0) == 0) {
          *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2e0) + 0x1f8) =
               *(uint64_t *)(unaff_RBX + 0x18);
          uVar1 = UltraHighFreq_AudioSystem1(*(uint64_t *)(unaff_RBX + 0x2e8),
                                *(uint64_t *)(unaff_RBX + 0x2e0),0,0,0);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        else {
          *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2f0) + 0x1f8) =
               *(uint64_t *)(unaff_RBX + 0x18);
          uVar1 = UltraHighFreq_AudioSystem1(*(uint64_t *)(unaff_RBX + 0x2e8),
                                *(uint64_t *)(unaff_RBX + 0x2f0),0,0,0);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2e0) + 0x1f8) =
               *(uint64_t *)(unaff_RBX + 0x18);
          uVar1 = UltraHighFreq_AudioSystem1(*(uint64_t *)(unaff_RBX + 0x2f0),
                                *(uint64_t *)(unaff_RBX + 0x2e0),0,0,0);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
      }
      if ((*(uint *)(unaff_RBX + 0x3c) & 0x10000) == 0) {
        uVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x18) + 0x120))
                          (*(int64_t **)(unaff_RBX + 0x18),0xfffffffd,unaff_RBX + 0x2f8);
        uVar3 = extraout_XMM0_Da;
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        do {
          uVar1 = FUN_1807ff980(uVar3,*(uint64_t *)(unaff_RBX + 0x2f8),iVar2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar2 = iVar2 + 1;
          uVar3 = extraout_XMM0_Da_00;
        } while (iVar2 < 4);
      }
      *(int32_t *)(unaff_RBX + 0x300) = 0xffffffff;
      *(int32_t *)(unaff_RBX + 0x304) =
           *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x18) + 0x20) + 0x1ec);
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_1808001e4(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int unaff_EDI;
  
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2e0) + 0x1f8) = param_1;
  uVar1 = UltraHighFreq_AudioSystem1(*(uint64_t *)(unaff_RBX + 0x2e8),*(uint64_t *)(unaff_RBX + 0x2e0));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((*(uint *)(unaff_RBX + 0x3c) & 0x10000) == 0) {
    uVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x18) + 0x120))
                      (*(int64_t **)(unaff_RBX + 0x18),0xfffffffd,unaff_RBX + 0x2f8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    do {
      uVar1 = FUN_1807ff980();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < 4);
  }
  *(int32_t *)(unaff_RBX + 0x300) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x304) =
       *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x18) + 0x20) + 0x1ec);
  return 0;
}



uint64_t FUN_18080021a(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int unaff_EDI;
  
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2e0) + 0x1f8) = param_1;
  uVar1 = UltraHighFreq_AudioSystem1();
  if ((int)uVar1 == 0) {
    if ((*(uint *)(unaff_RBX + 0x3c) & 0x10000) == 0) {
      uVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x18) + 0x120))
                        (*(int64_t **)(unaff_RBX + 0x18),0xfffffffd,unaff_RBX + 0x2f8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      do {
        uVar1 = FUN_1807ff980();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        unaff_EDI = unaff_EDI + 1;
      } while (unaff_EDI < 4);
    }
    *(int32_t *)(unaff_RBX + 0x300) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x304) =
         *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x18) + 0x20) + 0x1ec);
    uVar1 = 0;
  }
  return uVar1;
}







// 函数: void FUN_1808a0080(uint64_t param_1,uint64_t param_2)
void FUN_1808a0080(uint64_t param_1,uint64_t param_2)

{
  FUN_18089f530(param_1,param_2,0x53554247,0x42534247,1);
  return;
}







// 函数: void FUN_1808a00a0(uint64_t param_1,uint64_t param_2)
void FUN_1808a00a0(uint64_t param_1,uint64_t param_2)

{
  FUN_18089f530(param_1,param_2,0x53554249,0x42534249,1);
  return;
}



uint64_t FUN_1808a00c0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t auStackX_18 [2];
  int32_t auStackX_20 [2];
  int8_t auStack_28 [32];
  
  uVar3 = DataCompressor0(param_2,auStack_28,0,0x54534e49,0);
  if ((int)uVar3 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = SystemCleanupProcessor(*param_2,param_1 + 0x60);
    if ((int)uVar3 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(int32_t *)(param_1 + 0x90);
      uVar3 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
      if ((int)uVar3 == 0) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        auStackX_18[0] = *(int32_t *)(param_1 + 0xa4);
        uVar3 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
        if (((int)uVar3 == 0) && (uVar3 = UISystem_WindowManager(param_2,param_1 + 0xb0), (int)uVar3 == 0)) {
          if ((0x81 < *(uint *)(param_2 + 8)) &&
             (uVar3 = UISystem_WindowManager(param_2,param_1 + 0xb8), (int)uVar3 != 0)) {
            return uVar3;
          }
          uVar3 = NetworkSecurityManager(param_2,param_1 + 0x94);
          if (((int)uVar3 == 0) && (uVar3 = NetworkSecurityManager(param_2,param_1 + 0x98), (int)uVar3 == 0))
          {
            if (*(int *)(param_2[1] + 0x18) != 0) {
              return 0x1c;
            }
            auStackX_18[0] = *(int32_t *)(param_1 + 0x80);
            lVar1 = *param_2;
            puVar2 = *(uint64_t **)(lVar1 + 8);
            uVar3 = (**(code **)*puVar2)(puVar2,auStackX_18,4);
            if ((int)uVar3 == 0) {
              puVar2 = *(uint64_t **)(lVar1 + 8);
              auStackX_20[0] = *(int32_t *)(param_1 + 0x84);
              uVar3 = (**(code **)*puVar2)(puVar2,auStackX_20,4);
            }
            if (((int)uVar3 == 0) &&
               (uVar3 = FUN_1808992f0(param_2,param_1 + 0x88), (int)uVar3 == 0)) {
              if (*(int *)(param_2[1] + 0x18) != 0) {
                return 0x1c;
              }
              uVar3 = SystemCleanupProcessor(*param_2,param_1 + 0x70);
              if (((((((int)uVar3 == 0) &&
                     (uVar3 = NetworkSecurityManager(param_2,param_1 + 0xa8), (int)uVar3 == 0)) &&
                    (uVar3 = NetworkSecurityManager(param_2,param_1 + 0x9c), (int)uVar3 == 0)) &&
                   ((uVar3 = UISystem_WindowManager(param_2,param_1 + 0xb4), (int)uVar3 == 0 &&
                    (uVar3 = FUN_1808a1870(param_1 + 0x30,param_2), (int)uVar3 == 0)))) &&
                  ((uVar3 = FUN_1808a7bf0(param_2,param_1 + 0xbc,0x35), (int)uVar3 == 0 &&
                   ((uVar3 = FUN_1808a7bf0(param_2,param_1 + 0xc0,0x47), (int)uVar3 == 0 &&
                    (uVar3 = FUN_1808a7c40(param_2,param_1 + 0xa0,0x48), (int)uVar3 == 0)))))) &&
                 (uVar3 = FUN_1808a7c40(param_2,param_1 + 0xac,0x50), (int)uVar3 == 0)) {
                if (0x81 < *(uint *)(param_2 + 8)) {
                  if (*(int *)(param_2[1] + 0x18) != 0) {
                    return 0x1c;
                  }
                  uVar3 = FUN_18089a880(*param_2,param_1 + 200);
                  if ((int)uVar3 != 0) {
                    return uVar3;
                  }
                }
                    // WARNING: Subroutine does not return
                SystemThreadManager(param_2,auStack_28);
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}



uint64_t FUN_1808a021e(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t uVar4;
  int32_t in_stack_00000078;
  
  lVar1 = *unaff_RBX;
  uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))();
  uVar4 = extraout_XMM0_Da;
  if ((int)uVar3 == 0) {
    puVar2 = *(uint64_t **)(lVar1 + 8);
    in_stack_00000078 = *(int32_t *)(unaff_RDI + 0x84);
    uVar3 = (**(code **)*puVar2)(puVar2,&stack0x00000078,4);
    uVar4 = extraout_XMM0_Da_00;
  }
  if (((int)uVar3 == 0) && (uVar3 = FUN_1808992f0(uVar4,unaff_RDI + 0x88), (int)uVar3 == 0)) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x70);
    if (((((((int)uVar3 == 0) &&
           (uVar3 = NetworkSecurityManager(extraout_XMM0_Da_01,unaff_RDI + 0xa8), (int)uVar3 == 0)) &&
          (uVar3 = NetworkSecurityManager(extraout_XMM0_Da_02,unaff_RDI + 0x9c), (int)uVar3 == 0)) &&
         ((uVar3 = UISystem_WindowManager(extraout_XMM0_Da_03,unaff_RDI + 0xb4), (int)uVar3 == 0 &&
          (uVar3 = FUN_1808a1870(unaff_RDI + 0x30), (int)uVar3 == 0)))) &&
        ((uVar3 = FUN_1808a7bf0(extraout_XMM0_Da_04,unaff_RDI + 0xbc,0x35), (int)uVar3 == 0 &&
         ((uVar3 = FUN_1808a7bf0(extraout_XMM0_Da_05,unaff_RDI + 0xc0,0x47), (int)uVar3 == 0 &&
          (uVar3 = FUN_1808a7c40(extraout_XMM0_Da_06,unaff_RDI + 0xa0,0x48), (int)uVar3 == 0))))))
       && (uVar3 = FUN_1808a7c40(extraout_XMM0_Da_07,unaff_RDI + 0xac,0x50), (int)uVar3 == 0)) {
      uVar4 = extraout_XMM0_Da_08;
      if (0x81 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar3 = FUN_18089a880(*unaff_RBX,unaff_RDI + 200);
        uVar4 = extraout_XMM0_Da_09;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
                    // WARNING: Subroutine does not return
      SystemThreadManager(uVar4,&stack0x00000030);
    }
  }
  return uVar3;
}



uint64_t FUN_1808a0262(void)

{
  uint64_t uVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  uVar1 = FUN_1808992f0();
  if ((int)uVar1 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*unaff_RBX,unaff_RDI + 0x70);
    if (((((((int)uVar1 == 0) && (uVar1 = NetworkSecurityManager(), (int)uVar1 == 0)) &&
          (uVar1 = NetworkSecurityManager(), (int)uVar1 == 0)) &&
         ((uVar1 = UISystem_WindowManager(), (int)uVar1 == 0 &&
          (uVar1 = FUN_1808a1870(unaff_RDI + 0x30), (int)uVar1 == 0)))) &&
        ((uVar1 = FUN_1808a7bf0(), (int)uVar1 == 0 &&
         ((uVar1 = FUN_1808a7bf0(), (int)uVar1 == 0 && (uVar1 = FUN_1808a7c40(), (int)uVar1 == 0))))
        )) && (uVar1 = FUN_1808a7c40(), (int)uVar1 == 0)) {
      if (0x81 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar1 = FUN_18089a880(*unaff_RBX,unaff_RDI + 200);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
                    // WARNING: Subroutine does not return
      SystemThreadManager();
    }
  }
  return uVar1;
}



uint64_t FUN_1808a03b0(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_18 [4];
  int8_t auStack_28 [32];
  
  uVar1 = DataCompressor0(param_2,auStack_28,0,0x5641574c,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808a27f0(*param_2,param_1 + 0x30);
      if ((int)uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x46) {
          uVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          auStackX_18[0] = *(int32_t *)(param_1 + 0x28);
          uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
        }
        else {
          uVar1 = 0x1c;
        }
        if (((int)uVar1 == 0) && (uVar1 = FUN_1808a7bf0(param_2,param_1 + 0x48,99), (int)uVar1 == 0)
           ) {
                    // WARNING: Subroutine does not return
          SystemThreadManager(param_2,auStack_28);
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808a04a0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint *puVar5;
  int32_t *puVar6;
  int16_t auStackX_18 [4];
  int32_t auStackX_20 [2];
  uint uStack_48;
  int32_t uStack_44;
  int32_t auStack_40 [2];
  int8_t auStack_38 [32];
  
  uVar4 = DataCompressor0(param_2,auStack_38,0,0x2050414d,0);
  if ((int)uVar4 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar4 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar4 == 0) {
      uVar3 = *(int *)(param_1 + 0x28) * 2;
      if ((uVar3 | 1) < 0x8000) {
        auStackX_18[0] = (int16_t)(uVar3 | 1);
        uVar4 = 2;
        puVar5 = (uint *)auStackX_18;
      }
      else {
        uVar4 = 4;
        uStack_48 = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff | 1;
        puVar5 = &uStack_48;
      }
      uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),puVar5,uVar4);
      if ((int)uVar4 == 0) {
        puVar6 = *(int32_t **)(param_1 + 0x20);
        auStackX_20[0] = 0;
        while( true ) {
          if ((puVar6 < *(int32_t **)(param_1 + 0x20)) ||
             (*(int32_t **)(param_1 + 0x20) + (int64_t)*(int *)(param_1 + 0x28) * 2 <= puVar6))
          {
                    // WARNING: Subroutine does not return
            SystemThreadManager(param_2,auStack_38);
          }
          uVar4 = UltraHighFreq_ResourceLoader1(param_2,auStackX_20[0]);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (*(int *)(param_2[1] + 0x18) != 0) break;
          lVar1 = *param_2;
          uStack_44 = *puVar6;
          puVar2 = *(uint64_t **)(lVar1 + 8);
          uVar4 = (**(code **)*puVar2)(puVar2,&uStack_44,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          puVar2 = *(uint64_t **)(lVar1 + 8);
          auStack_40[0] = puVar6[1];
          uVar4 = (**(code **)*puVar2)(puVar2,auStack_40,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = UISystem_Controller(param_2,auStackX_20);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          puVar6 = puVar6 + 2;
        }
        uVar4 = 0x1c;
      }
    }
  }
  return uVar4;
}







