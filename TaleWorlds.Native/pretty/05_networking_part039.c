#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part039.c - 4 个函数

// 函数: void FUN_1808616d8(void)
void FUN_1808616d8(void)

{
  int64_t *plVar1;
  uint uVar2;
  char cVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *plVar9;
  int64_t unaff_R12;
  int64_t *unaff_R13;
  int64_t *plVar10;
  int64_t *unaff_R14;
  int64_t in_stack_00000070;
  int64_t in_stack_00000078;
  
code_r0x0001808616d8:
  FUN_180862080(in_stack_00000070,unaff_R12,unaff_RBX + 0x40);
  while( true ) {
    do {
      while( true ) {
        plVar10 = unaff_R14;
        if (plVar10 == unaff_R13) goto LAB_180861693;
        plVar1 = plVar10 + 2;
        (**(code **)(*(int64_t *)plVar10[2] + 0x30))((int64_t *)plVar10[2],&stack0x00000078);
        unaff_R14 = plVar10;
        if (plVar10 != unaff_R13) {
          unaff_R14 = (int64_t *)*plVar10;
        }
        unaff_R12 = *plVar1;
        cVar3 = func_0x0001808c57f0(*(uint64_t *)(unaff_RBP + -0x78),unaff_R12);
        if (cVar3 == '\0') break;
        FUN_180862080(in_stack_00000070,*plVar1,unaff_RBX + 0x40);
      }
    } while ((*(byte *)((int64_t)plVar10 + 0x1c) & 1) != 0);
    plVar9 = (int64_t *)0x0;
    iVar6 = *(int *)(*(int64_t *)(in_stack_00000070 + 0x88) + 0xa8);
    if (iVar6 < 1) break;
    lVar8 = *(int64_t *)(*(int64_t *)(in_stack_00000070 + 0x88) + 0xa0);
    plVar7 = plVar9;
    while( true ) {
      iVar5 = (int)plVar7;
      if ((*(int64_t *)(lVar8 + (int64_t)iVar5 * 0x10) == in_stack_00000078) &&
         (*(int64_t *)(lVar8 + 8 + (int64_t)iVar5 * 0x10) == *(int64_t *)(unaff_RBP + -0x80)))
      break;
      plVar7 = (int64_t *)(uint64_t)(iVar5 + 1U);
      if (iVar6 <= (int)(iVar5 + 1U)) goto LAB_18086154d;
    }
  }
LAB_18086154d:
  plVar7 = *(int64_t **)(unaff_RBP + -0x68);
  plVar4 = (int64_t *)(*plVar7 + -0x18);
  if (*plVar7 == 0) {
    plVar4 = plVar9;
  }
  if (plVar4 != (int64_t *)0x0) {
    plVar9 = plVar4 + 3;
  }
  if (plVar9 != plVar7) {
    do {
      iVar6 = 0;
      plVar4 = plVar9 + 3;
      if (plVar9 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x30;
      }
      iVar5 = *(int *)(*plVar4 + 0x60);
      if (0 < iVar5) {
        lVar8 = *(int64_t *)(*plVar4 + 0x58);
        do {
          if ((*(int64_t *)(lVar8 + (int64_t)iVar6 * 0x10) == in_stack_00000078) &&
             (*(int64_t *)(lVar8 + 8 + (int64_t)iVar6 * 0x10) == *(int64_t *)(unaff_RBP + -0x80))
             ) goto code_r0x0001808616d8;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
        plVar7 = *(int64_t **)(unaff_RBP + -0x68);
      }
      lVar8 = *plVar9 + -0x18;
      if (*plVar9 == 0) {
        lVar8 = 0;
      }
      plVar9 = (int64_t *)(lVar8 + 0x18);
      if (lVar8 == 0) {
        plVar9 = (int64_t *)0x0;
      }
    } while (plVar9 != plVar7);
  }
  uVar2 = *(uint *)((int64_t)plVar10 + 0x1c);
  (**(code **)(*(int64_t *)*plVar1 + 0x30))((int64_t *)*plVar1,unaff_RBP + -0x58);
  iVar6 = FUN_1808caa20(in_stack_00000070 + 0x378 + (uint64_t)(~(uVar2 >> 1) & 1) * 0x80,
                        unaff_RBP + -0x58);
  if (iVar6 == 0) {
    *(int64_t *)plVar10[1] = *plVar10;
    *(int64_t *)(*plVar10 + 8) = plVar10[1];
    plVar10[1] = (int64_t)plVar10;
    *plVar10 = (int64_t)plVar10;
    *(int64_t **)plVar10[1] = plVar10;
    *(int64_t *)(*plVar10 + 8) = plVar10[1];
    plVar10[1] = (int64_t)plVar10;
    *plVar10 = (int64_t)plVar10;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar10,&unknown_var_2624_ptr,0xadc,1);
  }
LAB_180861693:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x30) ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808616f0(int64_t param_1,uint64_t param_2)

{
  *(uint64_t *)(param_1 + 0x2b0) = param_2;
  func_0x0001808577b0(param_1 + 200);
  return 0;
}



uint64_t FUN_180861720(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  lVar5 = (*(code *)**(uint64_t **)(param_1 + 8))(param_1 + 8);
  if ((*(uint *)(lVar5 + 0xf8) >> 4 & 1) == 0) {
    if (*(int *)(param_1 + 0x29c) != 2) {
      if (*(int *)(param_1 + 0x29c) < 1) {
        *(uint64_t *)(param_1 + 0x290) = param_2;
      }
      plVar8 = (int64_t *)0x0;
      *(int32_t *)(param_1 + 0x29c) = 2;
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x2a0) + -8);
      if (*(int64_t *)(param_1 + 0x2a0) == 0) {
        plVar7 = plVar8;
      }
      plVar3 = plVar8;
      if (plVar7 != (int64_t *)0x0) {
        plVar3 = plVar7 + 1;
      }
      while (plVar3 != (int64_t *)(param_1 + 0x2a0)) {
        plVar7 = plVar3 + -1;
        if (plVar3 == (int64_t *)0x0) {
          plVar7 = plVar8;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (plVar3 == (int64_t *)(param_1 + 0x2a0)) {
          return 0;
        }
        plVar7 = (int64_t *)(*plVar3 + -8);
        if (*plVar3 == 0) {
          plVar7 = plVar8;
        }
        plVar3 = plVar8;
        if (plVar7 != (int64_t *)0x0) {
          plVar3 = plVar7 + 1;
        }
      }
    }
    return 0;
  }
  if ((*(uint *)(param_1 + 0x2d8) >> 0xf & 1) == 0) {
    puVar1 = (uint64_t *)(param_1 + 0x490);
    *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x8000;
    for (puVar2 = (uint64_t *)*puVar1;
        (puVar2 != puVar1 && (FUN_180862080(param_1,puVar2[2],param_2), puVar2 != puVar1));
        puVar2 = (uint64_t *)*puVar2) {
    }
    uVar6 = FUN_1808d5520(param_1 + 0x280,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar5 = *(int64_t *)(param_1 + 0x80);
    if (lVar5 != 0) {
      uVar4 = FUN_1808605e0(param_1);
      *(int32_t *)(lVar5 + 0x80) = uVar4;
    }
  }
  return 0;
}





// 函数: void FUN_180861780(int64_t param_1,uint64_t param_2)
void FUN_180861780(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = 0;
  iVar1 = FUN_18073c380(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0xffffffff,auStackX_8
                       );
  if (iVar1 == 0) {
    FUN_180740410(auStackX_8[0],param_2);
  }
  return;
}



uint FUN_1808617d0(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_18085fea0();
  return *(uint *)(lVar1 + 0x1c) >> 2 & 0xffffff01;
}



uint64_t FUN_180861820(int64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t lStack_28;
  int64_t lStack_20;
  int64_t lStack_18;
  int64_t lStack_10;
  
  plVar3 = (int64_t *)(**(code **)*param_2)(param_2);
  (**(code **)(*plVar3 + 0x30))(plVar3,&lStack_18);
  puVar4 = (uint64_t *)(param_1 + 0x490);
  puVar1 = (uint64_t *)*puVar4;
  puVar2 = puVar1;
  while( true ) {
    if (puVar2 == puVar4) {
      return 0x1c;
    }
    (**(code **)(*(int64_t *)puVar1[2] + 0x30))((int64_t *)puVar1[2],&lStack_28);
    if ((lStack_28 == lStack_18) && (lStack_20 == lStack_10)) break;
    if (puVar1 != puVar4) {
      puVar1 = (uint64_t *)*puVar1;
      puVar2 = puVar1;
    }
  }
  if (puVar1 == (uint64_t *)0x0) {
    return 0x1c;
  }
  if (*(int *)(puVar1 + 3) < 1) {
    return 0x1c;
  }
  *(int *)(puVar1 + 3) = *(int *)(puVar1 + 3) + -1;
  return 0;
}



uint64_t FUN_1808618d0(int64_t param_1,uint64_t param_2,uint param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x480);
  if (((puVar1 != (uint64_t *)0x0) && ((param_3 & 0x66800) != 0)) &&
     (uVar2 = (**(code **)*puVar1)(puVar1,param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_180861900(int64_t param_1,int param_2,float param_3)

{
  uint64_t uVar1;
  
  if (param_2 == 10) {
    *(float *)(param_1 + 0x2f8) = param_3 * 0.01;
    uVar1 = FUN_180864850(param_1 + -8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x1e) {
      *(float *)(param_1 + 0x2fc) = param_3;
    }
    else {
      if (param_2 != 0x1f) {
        return 0x1c;
      }
      *(float *)(param_1 + 0x300) = param_3;
    }
    uVar1 = FUN_1808646a0(param_1 + -8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_180861970(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x480);
  if ((plVar1 != (int64_t *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_1808619a0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x480);
  if ((plVar1 != (int64_t *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2,param_3), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_1808619d0(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x480);
  if ((plVar1 != (int64_t *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_180861a00(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x480);
  if ((plVar1 != (int64_t *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2,param_3), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_180861a70(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  
  *(int32_t *)(param_1 + 0x2e4) = 1;
  uVar4 = FUN_18073ced0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0,0xffffffffffffffff)
  ;
  if ((((((int)uVar4 == 0) && (uVar4 = FUN_1808b2f30(param_1 + 8,0x1e), (int)uVar4 == 0)) &&
       (uVar4 = FUN_1808b2f30(param_1 + 8,0x1f), (int)uVar4 == 0)) &&
      ((uVar4 = FUN_180863bd0(param_1), (int)uVar4 == 0 &&
       (uVar4 = FUN_180864780(param_1), (int)uVar4 == 0)))) &&
     (uVar4 = FUN_18085ef10(param_1), (int)uVar4 == 0)) {
    uVar2 = *(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30);
    *(uint64_t *)(param_1 + 0x330) = uVar2;
    uVar4 = FUN_180853230(*(int64_t *)(param_1 + 0x2b0),param_2);
    if ((int)uVar4 == 0) {
      plVar1 = (int64_t *)(param_1 + 0x240);
      plVar7 = (int64_t *)0x0;
      plVar6 = (int64_t *)(*plVar1 + -0x18);
      if (*plVar1 == 0) {
        plVar6 = plVar7;
      }
      plVar5 = plVar7;
      if (plVar6 != (int64_t *)0x0) {
        plVar5 = plVar6 + 3;
      }
      while (plVar5 != plVar1) {
        plVar6 = plVar5 + -3;
        if (plVar5 == (int64_t *)0x0) {
          plVar6 = plVar7;
        }
        uVar4 = FUN_1808d5bd0(plVar6);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (plVar5 == plVar1) break;
        plVar6 = (int64_t *)(*plVar5 + -0x18);
        if (*plVar5 == 0) {
          plVar6 = plVar7;
        }
        plVar5 = plVar7;
        if (plVar6 != (int64_t *)0x0) {
          plVar5 = plVar6 + 3;
        }
      }
      uVar4 = FUN_18085c230(param_1 + 200,uVar2);
      if ((((int)uVar4 == 0) && (uVar4 = FUN_1808d52a0(param_1 + 0x280,uVar2), (int)uVar4 == 0)) &&
         (uVar4 = FUN_1808b2f30(param_1 + 8,10), (int)uVar4 == 0)) {
        plVar6 = (int64_t *)(param_1 + 0x250);
        plVar5 = (int64_t *)(*plVar6 + -8);
        if (*plVar6 == 0) {
          plVar5 = plVar7;
        }
        plVar3 = plVar7;
        if (plVar5 != (int64_t *)0x0) {
          plVar3 = plVar5 + 1;
        }
        while (plVar3 != plVar6) {
          plVar5 = plVar3 + -1;
          if (plVar3 == (int64_t *)0x0) {
            plVar5 = plVar7;
          }
          uVar4 = FUN_1808d71b0(plVar5,1);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (plVar3 == plVar6) break;
          plVar5 = (int64_t *)(*plVar3 + -8);
          if (*plVar3 == 0) {
            plVar5 = plVar7;
          }
          plVar3 = plVar7;
          if (plVar5 != (int64_t *)0x0) {
            plVar3 = plVar5 + 1;
          }
        }
        plVar6 = (int64_t *)(*plVar1 + -0x18);
        if (*plVar1 == 0) {
          plVar6 = plVar7;
        }
        plVar5 = plVar7;
        if (plVar6 != (int64_t *)0x0) {
          plVar5 = plVar6 + 3;
        }
        while (plVar5 != plVar1) {
          plVar6 = plVar5 + -3;
          if (plVar5 == (int64_t *)0x0) {
            plVar6 = plVar7;
          }
          uVar4 = FUN_1808d5da0(plVar6);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (plVar5 == plVar1) break;
          plVar6 = (int64_t *)(*plVar5 + -0x18);
          if (*plVar5 == 0) {
            plVar6 = plVar7;
          }
          plVar5 = plVar7;
          if (plVar6 != (int64_t *)0x0) {
            plVar5 = plVar6 + 3;
          }
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



uint64_t FUN_180861aa8(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t unaff_RBP;
  int64_t *plVar7;
  
  uVar4 = FUN_1808b2f30(unaff_RBP + 8);
  if (((((int)uVar4 == 0) && (uVar4 = FUN_1808b2f30(unaff_RBP + 8,0x1f), (int)uVar4 == 0)) &&
      (uVar4 = FUN_180863bd0(), (int)uVar4 == 0)) &&
     ((uVar4 = FUN_180864780(), (int)uVar4 == 0 && (uVar4 = FUN_18085ef10(), (int)uVar4 == 0)))) {
    uVar2 = *(uint64_t *)(*(int64_t *)(unaff_RBP + 0x2b0) + 0x30);
    *(uint64_t *)(unaff_RBP + 0x330) = uVar2;
    uVar4 = FUN_180853230();
    if ((int)uVar4 == 0) {
      plVar1 = (int64_t *)(unaff_RBP + 0x240);
      plVar7 = (int64_t *)0x0;
      plVar6 = (int64_t *)(*plVar1 + -0x18);
      if (*plVar1 == 0) {
        plVar6 = plVar7;
      }
      plVar5 = plVar7;
      if (plVar6 != (int64_t *)0x0) {
        plVar5 = plVar6 + 3;
      }
      while (plVar5 != plVar1) {
        plVar6 = plVar5 + -3;
        if (plVar5 == (int64_t *)0x0) {
          plVar6 = plVar7;
        }
        uVar4 = FUN_1808d5bd0(plVar6);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (plVar5 == plVar1) break;
        plVar6 = (int64_t *)(*plVar5 + -0x18);
        if (*plVar5 == 0) {
          plVar6 = plVar7;
        }
        plVar5 = plVar7;
        if (plVar6 != (int64_t *)0x0) {
          plVar5 = plVar6 + 3;
        }
      }
      uVar4 = FUN_18085c230(unaff_RBP + 200,uVar2);
      if ((((int)uVar4 == 0) && (uVar4 = FUN_1808d52a0(unaff_RBP + 0x280,uVar2), (int)uVar4 == 0))
         && (uVar4 = FUN_1808b2f30(unaff_RBP + 8,10), (int)uVar4 == 0)) {
        plVar6 = (int64_t *)(unaff_RBP + 0x250);
        plVar5 = (int64_t *)(*plVar6 + -8);
        if (*plVar6 == 0) {
          plVar5 = plVar7;
        }
        plVar3 = plVar7;
        if (plVar5 != (int64_t *)0x0) {
          plVar3 = plVar5 + 1;
        }
        while (plVar3 != plVar6) {
          plVar5 = plVar3 + -1;
          if (plVar3 == (int64_t *)0x0) {
            plVar5 = plVar7;
          }
          uVar4 = FUN_1808d71b0(plVar5,1);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (plVar3 == plVar6) break;
          plVar5 = (int64_t *)(*plVar3 + -8);
          if (*plVar3 == 0) {
            plVar5 = plVar7;
          }
          plVar3 = plVar7;
          if (plVar5 != (int64_t *)0x0) {
            plVar3 = plVar5 + 1;
          }
        }
        plVar6 = (int64_t *)(*plVar1 + -0x18);
        if (*plVar1 == 0) {
          plVar6 = plVar7;
        }
        plVar5 = plVar7;
        if (plVar6 != (int64_t *)0x0) {
          plVar5 = plVar6 + 3;
        }
        while (plVar5 != plVar1) {
          plVar6 = plVar5 + -3;
          if (plVar5 == (int64_t *)0x0) {
            plVar6 = plVar7;
          }
          uVar4 = FUN_1808d5da0(plVar6);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (plVar5 == plVar1) break;
          plVar6 = (int64_t *)(*plVar5 + -0x18);
          if (*plVar5 == 0) {
            plVar6 = plVar7;
          }
          plVar5 = plVar7;
          if (plVar6 != (int64_t *)0x0) {
            plVar5 = plVar6 + 3;
          }
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



uint64_t FUN_180861b0c(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t unaff_RBP;
  int64_t *plVar7;
  
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  *(uint64_t *)(unaff_RBP + 0x330) = uVar4;
  uVar3 = FUN_180853230();
  if ((int)uVar3 == 0) {
    plVar1 = (int64_t *)(unaff_RBP + 0x240);
    plVar7 = (int64_t *)0x0;
    plVar6 = (int64_t *)(*plVar1 + -0x18);
    if (*plVar1 == 0) {
      plVar6 = plVar7;
    }
    plVar5 = plVar7;
    if (plVar6 != (int64_t *)0x0) {
      plVar5 = plVar6 + 3;
    }
    while (plVar5 != plVar1) {
      plVar6 = plVar5 + -3;
      if (plVar5 == (int64_t *)0x0) {
        plVar6 = plVar7;
      }
      uVar3 = FUN_1808d5bd0(plVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (plVar5 == plVar1) break;
      plVar6 = (int64_t *)(*plVar5 + -0x18);
      if (*plVar5 == 0) {
        plVar6 = plVar7;
      }
      plVar5 = plVar7;
      if (plVar6 != (int64_t *)0x0) {
        plVar5 = plVar6 + 3;
      }
    }
    uVar3 = FUN_18085c230(unaff_RBP + 200,uVar4);
    if ((((int)uVar3 == 0) && (uVar3 = FUN_1808d52a0(unaff_RBP + 0x280,uVar4), (int)uVar3 == 0)) &&
       (uVar3 = FUN_1808b2f30(unaff_RBP + 8,10), (int)uVar3 == 0)) {
      plVar6 = (int64_t *)(unaff_RBP + 0x250);
      plVar5 = (int64_t *)(*plVar6 + -8);
      if (*plVar6 == 0) {
        plVar5 = plVar7;
      }
      plVar2 = plVar7;
      if (plVar5 != (int64_t *)0x0) {
        plVar2 = plVar5 + 1;
      }
      while (plVar2 != plVar6) {
        plVar5 = plVar2 + -1;
        if (plVar2 == (int64_t *)0x0) {
          plVar5 = plVar7;
        }
        uVar4 = FUN_1808d71b0(plVar5,1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (plVar2 == plVar6) break;
        plVar5 = (int64_t *)(*plVar2 + -8);
        if (*plVar2 == 0) {
          plVar5 = plVar7;
        }
        plVar2 = plVar7;
        if (plVar5 != (int64_t *)0x0) {
          plVar2 = plVar5 + 1;
        }
      }
      plVar6 = (int64_t *)(*plVar1 + -0x18);
      if (*plVar1 == 0) {
        plVar6 = plVar7;
      }
      plVar5 = plVar7;
      if (plVar6 != (int64_t *)0x0) {
        plVar5 = plVar6 + 3;
      }
      while (plVar5 != plVar1) {
        plVar6 = plVar5 + -3;
        if (plVar5 == (int64_t *)0x0) {
          plVar6 = plVar7;
        }
        uVar4 = FUN_1808d5da0(plVar6);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (plVar5 == plVar1) break;
        plVar6 = (int64_t *)(*plVar5 + -0x18);
        if (*plVar5 == 0) {
          plVar6 = plVar7;
        }
        plVar5 = plVar7;
        if (plVar6 != (int64_t *)0x0) {
          plVar5 = plVar6 + 3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_180861b29(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t unaff_RBP;
  int64_t *plVar6;
  
  plVar1 = (int64_t *)(unaff_RBP + 0x240);
  plVar6 = (int64_t *)0x0;
  plVar5 = (int64_t *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar5 = plVar6;
  }
  plVar4 = plVar6;
  if (plVar5 != (int64_t *)0x0) {
    plVar4 = plVar5 + 3;
  }
  while (plVar4 != plVar1) {
    plVar5 = plVar4 + -3;
    if (plVar4 == (int64_t *)0x0) {
      plVar5 = plVar6;
    }
    uVar3 = FUN_1808d5bd0(plVar5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (plVar4 == plVar1) break;
    plVar5 = (int64_t *)(*plVar4 + -0x18);
    if (*plVar4 == 0) {
      plVar5 = plVar6;
    }
    plVar4 = plVar6;
    if (plVar5 != (int64_t *)0x0) {
      plVar4 = plVar5 + 3;
    }
  }
  uVar3 = FUN_18085c230(unaff_RBP + 200);
  if ((((int)uVar3 == 0) && (uVar3 = FUN_1808d52a0(unaff_RBP + 0x280), (int)uVar3 == 0)) &&
     (uVar3 = FUN_1808b2f30(unaff_RBP + 8,10), (int)uVar3 == 0)) {
    plVar5 = (int64_t *)(unaff_RBP + 0x250);
    plVar4 = (int64_t *)(*plVar5 + -8);
    if (*plVar5 == 0) {
      plVar4 = plVar6;
    }
    plVar2 = plVar6;
    if (plVar4 != (int64_t *)0x0) {
      plVar2 = plVar4 + 1;
    }
    while (plVar2 != plVar5) {
      plVar4 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar4 = plVar6;
      }
      uVar3 = FUN_1808d71b0(plVar4,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (plVar2 == plVar5) break;
      plVar4 = (int64_t *)(*plVar2 + -8);
      if (*plVar2 == 0) {
        plVar4 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar4 != (int64_t *)0x0) {
        plVar2 = plVar4 + 1;
      }
    }
    plVar5 = (int64_t *)(*plVar1 + -0x18);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar4 = plVar6;
    if (plVar5 != (int64_t *)0x0) {
      plVar4 = plVar5 + 3;
    }
    while (plVar4 != plVar1) {
      plVar5 = plVar4 + -3;
      if (plVar4 == (int64_t *)0x0) {
        plVar5 = plVar6;
      }
      uVar3 = FUN_1808d5da0(plVar5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (plVar4 == plVar1) break;
      plVar5 = (int64_t *)(*plVar4 + -0x18);
      if (*plVar4 == 0) {
        plVar5 = plVar6;
      }
      plVar4 = plVar6;
      if (plVar5 != (int64_t *)0x0) {
        plVar4 = plVar5 + 3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}





// 函数: void FUN_180861cc6(void)
void FUN_180861cc6(void)

{
  return;
}





// 函数: void FUN_180861ccb(void)
void FUN_180861ccb(void)

{
  return;
}





