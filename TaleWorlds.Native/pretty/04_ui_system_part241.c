#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 04_ui_system_part241.c - 1 个函数

// 函数: void FUN_180805dbf(void)
void FUN_180805dbf(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x37) ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180805de0(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = 0;
  iVar1 = (**(code **)(**(int64_t **)(*param_1 + 0x28) + 0x50))
                    (*(int64_t **)(*param_1 + 0x28),1,auStackX_8);
  if (iVar1 == -0x7776fefd) {
    return 0x37;
  }
  if (iVar1 < 0) {
    return 0x31;
  }
  *param_2 = auStackX_8[0];
  return 0;
}



uint64_t FUN_180805e40(int64_t *param_1,int64_t *param_2)

{
  int iVar1;
  
  if (*(char *)(*param_1 + 0xa8) == '\0') {
    iVar1 = (**(code **)(*param_2 + 0x20))(param_2,0);
    if (((iVar1 + 0x80000000U & 0x80000000) == 0) && (iVar1 != -0x7776feff)) {
      return 0x31;
    }
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return 0;
}



uint64_t FUN_180805ea0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int32_t auStackX_10 [2];
  uint64_t auStackX_18 [2];
  
  fVar4 = *(float *)((int64_t)param_3 + 0xc);
  fVar5 = *(float *)(param_3 + 2);
  fVar3 = *(float *)((int64_t)param_3 + 0x14);
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar4 = fVar4 * fVar2;
    fVar5 = fVar5 * fVar2;
    fVar3 = fVar3 * fVar2;
  }
  else {
    fVar5 = 1.0;
    fVar4 = 0.0;
    fVar3 = 0.0;
  }
  iVar1 = (**(code **)(*param_2 + 0x38))(param_2,fVar4,fVar5,-fVar3);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_2 + 0x40))(param_2,*(int32_t *)(param_3 + 3));
    if (-1 < iVar1) {
      auStackX_18[0] = 0;
      auStackX_10[0] = 0;
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2,auStackX_18,auStackX_10);
      if (-1 < iVar1) {
                    // WARNING: Subroutine does not return
        memcpy(auStackX_18[0],*param_3,(uint64_t)*(uint *)(param_3 + 1) << 2);
      }
    }
  }
  return 0x31;
}



uint64_t FUN_180805fe0(int64_t *param_1)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint auStackX_8 [2];
  int64_t *plStackX_10;
  uint64_t uStackX_18;
  int64_t *plStackX_20;
  
  lVar1 = *param_1;
  uVar4 = 0;
  if (0 < *(int *)(lVar1 + 0x2d0)) {
    puVar5 = (uint64_t *)(lVar1 + 0x2d8);
    uVar3 = uVar4;
    do {
      CoTaskMemFree(*puVar5);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 1;
    } while ((int)uVar3 < *(int *)(lVar1 + 0x2d0));
  }
  *(int32_t *)(lVar1 + 0x2d0) = 0;
  plStackX_10 = (int64_t *)0x0;
  iVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x2c0) + 0x20))
                    (*(int64_t **)(lVar1 + 0x2c0),1,0,&plStackX_10);
  if (iVar2 != -0x7ff8fb70) {
    if (iVar2 < 0) {
      return 0x39;
    }
    iVar2 = *(int *)(lVar1 + 0x2d0);
    *(int *)(lVar1 + 0x2d0) = iVar2 + 1;
    iVar2 = (**(code **)(*plStackX_10 + 0x28))(plStackX_10,lVar1 + 0x2d8 + (int64_t)iVar2 * 8);
    if (iVar2 < 0) {
      return 0x39;
    }
    (**(code **)(*plStackX_10 + 0x10))();
  }
  plStackX_20 = (int64_t *)0x0;
  iVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x2c0) + 0x18))
                    (*(int64_t **)(lVar1 + 0x2c0),2,1,&plStackX_20);
  if (-1 < iVar2) {
    auStackX_8[0] = 0;
    iVar2 = (**(code **)(*plStackX_20 + 0x18))(plStackX_20,auStackX_8);
    if (-1 < iVar2) {
      if (auStackX_8[0] != 0) {
        do {
          if (0x1f < *(int *)(lVar1 + 0x2d0)) break;
          iVar2 = (**(code **)(*plStackX_20 + 0x20))(plStackX_20,uVar4,&plStackX_10);
          if (iVar2 < 0) {
            return 0x31;
          }
          uStackX_18 = 0;
          iVar2 = (**(code **)(*plStackX_10 + 0x28))(plStackX_10,&uStackX_18);
          if (iVar2 < 0) {
            return 0x39;
          }
          if ((*(int *)(lVar1 + 0x2d0) < 0x20) &&
             ((*(int64_t *)(lVar1 + 0x2d8) == 0 ||
              (iVar2 = func_0x0001807f7d80(uStackX_18), iVar2 != 0)))) {
            *(uint64_t *)(lVar1 + 0x2d8 + (int64_t)*(int *)(lVar1 + 0x2d0) * 8) = uStackX_18;
            *(int *)(lVar1 + 0x2d0) = *(int *)(lVar1 + 0x2d0) + 1;
          }
          else {
            CoTaskMemFree(uStackX_18);
          }
          (**(code **)(*plStackX_10 + 0x10))();
          uVar4 = uVar4 + 1;
        } while (uVar4 < auStackX_8[0]);
      }
      CoTaskMemFree(0);
      (**(code **)(*plStackX_20 + 0x10))();
      return 0;
    }
  }
  return 0x39;
}



uint64_t FUN_180805fed(void)

{
  int iVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint in_stack_00000050;
  int64_t *in_stack_00000058;
  int64_t *in_stack_00000060;
  int64_t *in_stack_00000068;
  
  uVar4 = (uint)unaff_RBP;
  uVar3 = (uint64_t)unaff_RBP & 0xffffffff;
  if ((int)uVar4 < *(int *)(unaff_RBX + 0x2d0)) {
    puVar5 = (uint64_t *)(unaff_RBX + 0x2d8);
    do {
      CoTaskMemFree(*puVar5);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      puVar5 = puVar5 + 1;
    } while ((int)uVar2 < *(int *)(unaff_RBX + 0x2d0));
  }
  *(uint *)(unaff_RBX + 0x2d0) = uVar4;
  in_stack_00000058 = unaff_RBP;
  iVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x2c0) + 0x20))
                    (*(int64_t **)(unaff_RBX + 0x2c0),1,0,&stack0x00000058);
  if (iVar1 != -0x7ff8fb70) {
    if (iVar1 < 0) {
      return 0x39;
    }
    iVar1 = *(int *)(unaff_RBX + 0x2d0);
    *(int *)(unaff_RBX + 0x2d0) = iVar1 + 1;
    iVar1 = (**(code **)(*in_stack_00000058 + 0x28))
                      (in_stack_00000058,unaff_RBX + 0x2d8 + (int64_t)iVar1 * 8);
    if (iVar1 < 0) {
      return 0x39;
    }
    (**(code **)(*in_stack_00000058 + 0x10))();
  }
  in_stack_00000068 = unaff_RBP;
  iVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x2c0) + 0x18))
                    (*(int64_t **)(unaff_RBX + 0x2c0),2,1,&stack0x00000068);
  if ((iVar1 < 0) ||
     (in_stack_00000050 = uVar4,
     iVar1 = (**(code **)(*in_stack_00000068 + 0x18))(in_stack_00000068,&stack0x00000050), iVar1 < 0
     )) {
    return 0x39;
  }
  uVar3 = (uint64_t)unaff_RBP & 0xffffffff;
  if (uVar4 < in_stack_00000050) {
    do {
      if (0x1f < *(int *)(unaff_RBX + 0x2d0)) break;
      iVar1 = (**(code **)(*in_stack_00000068 + 0x20))(in_stack_00000068,uVar3,&stack0x00000058);
      if (iVar1 < 0) {
        return 0x31;
      }
      in_stack_00000060 = unaff_RBP;
      iVar1 = (**(code **)(*in_stack_00000058 + 0x28))(in_stack_00000058,&stack0x00000060);
      if (iVar1 < 0) {
        return 0x39;
      }
      if ((*(int *)(unaff_RBX + 0x2d0) < 0x20) &&
         ((*(int64_t *)(unaff_RBX + 0x2d8) == 0 ||
          (iVar1 = func_0x0001807f7d80(in_stack_00000060), iVar1 != 0)))) {
        *(int64_t **)(unaff_RBX + 0x2d8 + (int64_t)*(int *)(unaff_RBX + 0x2d0) * 8) =
             in_stack_00000060;
        *(int *)(unaff_RBX + 0x2d0) = *(int *)(unaff_RBX + 0x2d0) + 1;
      }
      else {
        CoTaskMemFree(in_stack_00000060);
      }
      (**(code **)(*in_stack_00000058 + 0x10))();
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
    } while (uVar4 < in_stack_00000050);
  }
  CoTaskMemFree(0);
  (**(code **)(*in_stack_00000068 + 0x10))();
  return 0;
}



uint64_t FUN_18080604a(void)

{
  int in_EAX;
  int iVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  uint uVar2;
  uint64_t uVar3;
  uint in_stack_00000050;
  int64_t *in_stack_00000058;
  int64_t *in_stack_00000060;
  int64_t *in_stack_00000068;
  
  if (-1 < in_EAX) {
    iVar1 = *(int *)(unaff_RBX + 0x2d0);
    *(int *)(unaff_RBX + 0x2d0) = iVar1 + 1;
    iVar1 = (**(code **)(*in_stack_00000058 + 0x28))
                      (in_stack_00000058,unaff_RBX + 0x2d8 + (int64_t)iVar1 * 8);
    if (-1 < iVar1) {
      (**(code **)(*in_stack_00000058 + 0x10))();
      in_stack_00000068 = unaff_RBP;
      iVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x2c0) + 0x18))
                        (*(int64_t **)(unaff_RBX + 0x2c0),2,1,&stack0x00000068);
      if (-1 < iVar1) {
        in_stack_00000050 = (uint)unaff_RBP;
        iVar1 = (**(code **)(*in_stack_00000068 + 0x18))(in_stack_00000068,&stack0x00000050);
        if (-1 < iVar1) {
          uVar3 = (uint64_t)unaff_RBP & 0xffffffff;
          if ((uint)unaff_RBP < in_stack_00000050) {
            do {
              if (0x1f < *(int *)(unaff_RBX + 0x2d0)) break;
              iVar1 = (**(code **)(*in_stack_00000068 + 0x20))
                                (in_stack_00000068,uVar3,&stack0x00000058);
              if (iVar1 < 0) {
                return 0x31;
              }
              in_stack_00000060 = unaff_RBP;
              iVar1 = (**(code **)(*in_stack_00000058 + 0x28))(in_stack_00000058,&stack0x00000060);
              if (iVar1 < 0) {
                return 0x39;
              }
              if ((*(int *)(unaff_RBX + 0x2d0) < 0x20) &&
                 ((*(int64_t *)(unaff_RBX + 0x2d8) == 0 ||
                  (iVar1 = func_0x0001807f7d80(in_stack_00000060), iVar1 != 0)))) {
                *(int64_t **)(unaff_RBX + 0x2d8 + (int64_t)*(int *)(unaff_RBX + 0x2d0) * 8) =
                     in_stack_00000060;
                *(int *)(unaff_RBX + 0x2d0) = *(int *)(unaff_RBX + 0x2d0) + 1;
              }
              else {
                CoTaskMemFree(in_stack_00000060);
              }
              (**(code **)(*in_stack_00000058 + 0x10))();
              uVar2 = (int)uVar3 + 1;
              uVar3 = (uint64_t)uVar2;
            } while (uVar2 < in_stack_00000050);
          }
          CoTaskMemFree(0);
          (**(code **)(*in_stack_00000068 + 0x10))();
          return 0;
        }
      }
    }
  }
  return 0x39;
}



uint64_t
FUN_1808061c0(int64_t *param_1,int param_2,uint64_t param_3,int param_4,uint *param_5,
             int32_t *param_6,uint64_t param_7,uint *param_8)

{
  int64_t lVar1;
  ushort uVar2;
  int64_t lVar3;
  ushort *puVar4;
  int64_t *plVar5;
  ushort uVar6;
  uint *puVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  void *puVar12;
  int64_t *plStackX_8;
  int aiStackX_10 [2];
  int64_t *plStack_48;
  int64_t *plStack_40;
  int64_t lStack_38;
  uint64_t uStack_30;
  void *puStack_28;
  uint64_t uStack_20;
  
  puVar7 = param_5;
  lVar3 = *param_1;
  uVar11 = 0x811c9dc5;
  lVar1 = lVar3 + (int64_t)param_2 * 8;
  puVar4 = *(ushort **)(lVar1 + 0x2d8);
  uVar2 = *puVar4;
  uVar9 = uVar2;
  while (uVar2 != 0) {
    cVar8 = (char)uVar9;
    puVar4 = puVar4 + 1;
    uVar6 = uVar2 >> 8;
    uVar2 = *puVar4;
    uVar9 = uVar2 & 0xff;
    uVar11 = (((int)cVar8 ^ uVar11) * 0x1000193 ^ (int)(char)uVar6) * 0x1000193;
  }
  param_5 = (uint *)0x0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = uVar11;
  plVar5 = *(int64_t **)(lVar3 + 0x2c0);
  iVar10 = (**(code **)(*plVar5 + 0x28))(plVar5,*(uint64_t *)(lVar1 + 0x2d8),&param_5);
  if (iVar10 < 0) {
    return 0x39;
  }
  plStackX_8 = (int64_t *)0x0;
  iVar10 = (**(code **)(*(int64_t *)param_5 + 0x20))(param_5,0,&plStackX_8);
  if (-1 < iVar10) {
    uStack_30 = 0;
    puStack_28 = (void *)0x0;
    uStack_20 = 0;
    iVar10 = (**(code **)(*plStackX_8 + 0x28))(plStackX_8,&processed_var_9960_ptr,&uStack_30);
    if (-1 < iVar10) {
      puVar12 = &processed_var_7632_ptr;
      if ((short)uStack_30 == 0x1f) {
        puVar12 = puStack_28;
      }
      WideCharToMultiByte(0xfde9,0,puVar12,0xffffffff,param_3,param_4 + -1,0,0);
      iVar10 = PropVariantClear(&uStack_30);
      if (-1 < iVar10) {
        (**(code **)(*plStackX_8 + 0x10))();
        plStack_48 = (int64_t *)0x0;
        iVar10 = (*(code *)**(uint64_t **)param_5)(param_5,&processed_var_7856_ptr,&plStack_48);
        if (iVar10 < 0) {
          return 0x39;
        }
        iVar10 = (**(code **)(*plStack_48 + 0x18))(plStack_48,aiStackX_10);
        if (iVar10 < 0) {
          return 0x39;
        }
        if (aiStackX_10[0] == 0) {
          FUN_18076b3b0(param_3,&processed_var_7616_ptr,param_4);
        }
        plStack_40 = (int64_t *)0x0;
        iVar10 = (**(code **)(*(int64_t *)param_5 + 0x18))
                           (param_5,&processed_var_7600_ptr,0x17,0,&plStack_40);
        if (iVar10 < 0) {
          return 0x39;
        }
        lStack_38 = 0;
        iVar10 = (**(code **)(*plStack_40 + 0x40))(plStack_40,&lStack_38);
        if (iVar10 < 0) {
          return 0x39;
        }
        *param_6 = *(int32_t *)(lStack_38 + 4);
        *param_8 = (uint)*(ushort *)(lStack_38 + 2);
        CoTaskMemFree();
        (**(code **)(*plStack_48 + 0x10))();
        (**(code **)(*plStack_40 + 0x10))();
        (**(code **)(*(int64_t *)param_5 + 0x10))();
        return 0;
      }
    }
  }
  return 0x31;
}



uint64_t FUN_180806400(int64_t *param_1,int32_t *param_2,int32_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int aiStackX_8 [2];
  
  lVar1 = *param_1;
  lVar2 = *(int64_t *)(lVar1 + 0x2c8);
  if (*(int *)(lVar2 + 8) != 0) {
    aiStackX_8[0] = 0;
    SystemCore_PerformanceMonitor(aiStackX_8);
    if (1000 < (uint)(aiStackX_8[0] - *(int *)(lVar2 + 8))) {
      *(int32_t *)(lVar2 + 8) = 0;
      *param_3 = 1;
      uVar3 = FUN_180805fe0(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_18080646d;
    }
  }
  *param_3 = 0;
LAB_18080646d:
  *param_2 = *(int32_t *)(lVar1 + 0x2d0);
  return 0;
}



uint64_t FUN_180806490(uint64_t param_1,int64_t param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int64_t *)**(uint64_t **)(param_2 + 0x28) + 0x30))();
  if (iVar1 < 0) {
    return 0x31;
  }
  *param_3 = *(uint *)(param_2 + 0x14) % *(uint *)(param_2 + 0x24);
  return 0;
}



uint64_t
FUN_1808064f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint param_4,int64_t *param_5,
             uint64_t param_6,uint *param_7)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int32_t auStackX_10 [2];
  int64_t alStack_28 [2];
  
  lVar1 = *(int64_t *)(param_2 + 0x28);
  alStack_28[0] = 0;
  auStackX_10[0] = 0;
  iVar2 = (**(code **)(**(int64_t **)(lVar1 + 8) + 0x18))
                    (*(int64_t **)(lVar1 + 8),alStack_28,lVar1 + 0x10,auStackX_10,0,0);
  if (iVar2 < 0) {
    uVar3 = 0x31;
  }
  else {
    uVar4 = *(int *)(param_2 + 0x20) * *(int *)(lVar1 + 0x10) * 4 - *(uint *)(lVar1 + 0x14);
    *param_5 = (uint64_t)*(uint *)(lVar1 + 0x14) + alStack_28[0];
    if (param_4 < uVar4) {
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + param_4;
      *(int32_t *)(lVar1 + 0x10) = 0;
      uVar4 = param_4;
    }
    else {
      *(int32_t *)(lVar1 + 0x14) = 0;
    }
    *param_7 = uVar4;
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808065a0(int64_t *param_1,int *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int aiStackX_8 [2];
  int aiStackX_18 [4];
  uint64_t in_stack_ffffffffffffffa8;
  int64_t lStack_38;
  int64_t *plStack_30;
  int64_t *aplStack_28 [2];
  
  lVar1 = *param_1;
  uVar5 = 0;
  aplStack_28[0] = (int64_t *)0x0;
  lStack_38 = 0;
  plStack_30 = (int64_t *)0x0;
  puVar4 = (uint64_t *)
           SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&processed_var_7872_ptr,0x56e,
                         in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  if (puVar4 == (uint64_t *)0x0) {
    uVar5 = 0x26;
  }
  else {
    *(uint64_t **)(param_2 + 10) = puVar4;
    plVar2 = *(int64_t **)(lVar1 + 0x2c0);
    iVar3 = (**(code **)(*plVar2 + 0x28))
                      (plVar2,*(uint64_t *)(lVar1 + 0x2d8 + (int64_t)*param_2 * 8),aplStack_28);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*aplStack_28[0] + 0x18))(aplStack_28[0],&processed_var_7600_ptr,0x17,0,puVar4);
      if (-1 < iVar3) {
        iVar3 = (**(code **)*aplStack_28[0])(aplStack_28[0],&processed_var_7856_ptr,&plStack_30);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*plStack_30 + 0x18))(plStack_30,aiStackX_8);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*(int64_t *)*puVar4 + 0x40))((int64_t *)*puVar4,&lStack_38);
            if (-1 < iVar3) {
              uVar6 = uVar5;
              if (aiStackX_8[0] == 0) {
                uVar6 = 0x20000;
              }
              iVar3 = (**(code **)(*(int64_t *)*puVar4 + 0x18))
                                ((int64_t *)*puVar4,0,uVar6,800000,0,lStack_38,0);
              if (-1 < iVar3) {
                iVar3 = (**(code **)(*(int64_t *)*puVar4 + 0x70))
                                  ((int64_t *)*puVar4,&processed_var_7816_ptr,puVar4 + 1);
                if (-1 < iVar3) {
                  iVar3 = (**(code **)(*(int64_t *)*puVar4 + 0x50))();
                  if (-1 < iVar3) {
                    iVar3 = (**(code **)(*(int64_t *)*puVar4 + 0x20))
                                      ((int64_t *)*puVar4,aiStackX_18);
                    if (-1 < iVar3) {
                      param_2[7] = *(int *)(lStack_38 + 4);
                      param_2[8] = (uint)*(ushort *)(lStack_38 + 2);
                      param_2[6] = 5;
                      param_2[9] = aiStackX_18[0] * 2;
                      goto LAB_180806740;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 0x39;
  }
LAB_180806740:
  if (lStack_38 != 0) {
    CoTaskMemFree();
  }
  if (plStack_30 != (int64_t *)0x0) {
    (**(code **)(*plStack_30 + 0x10))();
  }
  if (aplStack_28[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_28[0] + 0x10))();
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180806780(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_2 + 0x28);
  if (plVar1 != (int64_t *)0x0) {
    if ((int64_t *)*plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar1 + 0x58))();
    }
    if ((int64_t *)plVar1[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar1[1] + 0x10))();
    }
    if ((int64_t *)*plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar1 + 0x10))();
    }
    if (*(int64_t *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_2 + 0x28),
                    &processed_var_7872_ptr,0x5c2,1);
    }
  }
  return 0;
}



uint64_t FUN_180806cc0(int64_t *param_1)

{
  int *piVar1;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)(param_1[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((int64_t)param_1 + 0x3c) = *(uint *)((int64_t)param_1 + 0x3c) & 0xfffdfe8f;
  *(uint *)((int64_t)param_1 + 0x3c) = *(uint *)((int64_t)param_1 + 0x3c) | 0x80;
  (**(code **)(*param_1 + 200))();
  return 0;
}





