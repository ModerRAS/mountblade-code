#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part065.c - 2 个函数

// 函数: void FUN_1807f7a30(void)
void FUN_1807f7a30(void)

{
  uint64_t in_stack_00000850;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000850 ^ (uint64_t)&stack0x00000000);
}



int32_t FUN_1807f7a50(int64_t param_1)

{
  int32_t uVar1;
  int64_t lVar2;
  
  if (*(int64_t *)(param_1 + 0x198) == 0) {
    return 0x1c;
  }
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x198) + 0x12770);
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_1807d0c90(lVar2,10);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = FUN_1807d1d40(lVar2,*(uint64_t *)(param_1 + 0x1f8));
    }
  }
  *(uint64_t *)(param_1 + 0x1f8) = 0;
  return uVar1;
}



int32_t FUN_1807f7ac0(int64_t param_1,uint64_t param_2,int32_t *param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  
  *param_3 = 0;
  *(int32_t *)(param_1 + 0x1f0) = 0;
  *(uint64_t *)(param_1 + 0x1f8) = 0;
  uVar2 = 0x12;
  if (*(int64_t *)(param_1 + 0x198) == 0) {
    uVar2 = 0x1c;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x198) + 0x12770);
    if ((lVar1 != 0) && (lVar1 = FUN_1807d0c90(lVar1,10), lVar1 != 0)) {
      uVar2 = FUN_1807d2050(lVar1,param_2,param_3,(uint64_t *)(param_1 + 0x1f8));
    }
  }
  return uVar2;
}



int FUN_1807f7b50(int64_t param_1,int64_t param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int aiStackX_8 [2];
  
  *param_4 = 0;
  iVar1 = 0xd;
  if (*(int64_t *)(param_1 + 0x198) != 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x198) + 0x12770);
    if ((lVar2 != 0) && (lVar2 = FUN_1807d0c90(lVar2,10), lVar2 != 0)) {
      uVar3 = 0;
      if (param_3 != 0) {
        do {
          uVar4 = param_3;
          if (0x10000 < param_3) {
            uVar4 = 0x10000;
          }
          aiStackX_8[0] = 0;
          iVar1 = FUN_1807d2500(lVar2,*(uint64_t *)(param_1 + 0x1f8),(uint64_t)uVar3 + param_2,
                                uVar4,*(int32_t *)(param_1 + 0x1f0),aiStackX_8);
          *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + aiStackX_8[0];
          param_3 = param_3 - aiStackX_8[0];
          uVar3 = uVar3 + aiStackX_8[0];
        } while ((iVar1 == 0) && (param_3 != 0));
      }
      *param_4 = uVar3;
    }
    return iVar1;
  }
  return 0x1c;
}



int FUN_1807f7ba8(void)

{
  int64_t lVar1;
  uint unaff_EBX;
  int unaff_EBP;
  uint uVar2;
  int64_t unaff_RDI;
  uint uVar3;
  int64_t unaff_R12;
  uint unaff_R13D;
  uint *unaff_R15;
  uint *in_stack_00000088;
  
  lVar1 = FUN_1807d0c90();
  if (lVar1 != 0) {
    uVar2 = unaff_R13D;
    if (unaff_EBX != 0) {
      do {
        uVar3 = unaff_EBX;
        if (0x10000 < unaff_EBX) {
          uVar3 = 0x10000;
        }
        unaff_EBP = FUN_1807d2500(lVar1,*(uint64_t *)(unaff_RDI + 0x1f8),
                                  (uint64_t)uVar2 + unaff_R12,uVar3,
                                  *(int32_t *)(unaff_RDI + 0x1f0));
        *(int *)(unaff_RDI + 0x1f0) = *(int *)(unaff_RDI + 0x1f0) + unaff_R13D;
        unaff_EBX = unaff_EBX - unaff_R13D;
        uVar2 = uVar2 + unaff_R13D;
        unaff_R15 = in_stack_00000088;
      } while ((unaff_EBP == 0) && (unaff_EBX != 0));
    }
    *unaff_R15 = uVar2;
  }
  return unaff_EBP;
}



int FUN_1807f7bba(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int iVar1;
  int64_t unaff_RDI;
  int unaff_R13D;
  int *unaff_R15;
  int8_t *puStack0000000000000028;
  int iStack0000000000000070;
  int *in_stack_00000088;
  
  iVar1 = unaff_R13D;
  if (unaff_EBX != 0) {
    do {
      puStack0000000000000028 = (int8_t *)&stack0x00000070;
      iStack0000000000000070 = unaff_R13D;
      unaff_EBP = FUN_1807d2500();
      *(int *)(unaff_RDI + 0x1f0) = *(int *)(unaff_RDI + 0x1f0) + iStack0000000000000070;
      unaff_EBX = unaff_EBX - iStack0000000000000070;
      iVar1 = iVar1 + iStack0000000000000070;
      unaff_R15 = in_stack_00000088;
      if (unaff_EBP != 0) break;
    } while (unaff_EBX != 0);
  }
  *unaff_R15 = iVar1;
  return unaff_EBP;
}



int32_t FUN_1807f7c30(void)

{
  int32_t unaff_EBP;
  
  return unaff_EBP;
}



int32_t FUN_1807f7c35(void)

{
  int32_t unaff_EBP;
  
  return unaff_EBP;
}



uint64_t * FUN_1807f7c50(uint64_t *param_1)

{
  func_0x00018074fb20();
  *(int8_t *)((int64_t)param_1 + 0xc4) = 1;
  *param_1 = &unknown_var_5752_ptr;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807f7cb0(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint uVar8;
  int64_t *plVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  
  if (param_1[0x1b] != 0) {
    FUN_1807902d0(param_1[0x1b],param_1);
  }
  lVar5 = param_1[0x1b];
  bVar13 = lVar5 != 0;
  if (bVar13) {
    func_0x000180743c20(lVar5,10);
  }
  if ((*(uint *)(param_1 + 0xb) & 0x20) == 0) {
    if (((((uint64_t *)param_1[0x15] == (uint64_t *)0x0) ||
         (param_1 != (uint64_t *)param_1[0x15])) || (param_1[0x17] == 0)) ||
       ((*(uint *)(param_1[0x17] + 0x58) & 0x20) != 0)) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
      UNLOCK();
      if ((lVar5 != 0) && (bVar13)) {
                    // WARNING: Subroutine does not return
        SystemCoreHandler(lVar5,10);
      }
      if ((param_1[0xc] != 0) && (*(int64_t *)(param_1[0xc] + 0x170) != 0)) {
        func_0x000180768d40();
      }
      if ((param_1[0x21] != 0) &&
         (((*(int *)(param_1 + 0x22) != 0 && (*(int *)(param_1 + 0x22) != 2)) ||
          (*(char *)((int64_t)param_1 + 0x5c) != '\0')))) {
        SystemMemoryAllocator(*(uint64_t *)(*(int64_t *)(param_1[0x21] + 0x10) + 0x168));
        lVar5 = param_1[0x21];
        plVar9 = (int64_t *)(lVar5 + 0x18);
        **(int64_t **)(lVar5 + 0x20) = *plVar9;
        *(uint64_t *)(*plVar9 + 8) = *(uint64_t *)(lVar5 + 0x20);
        *(int64_t **)(lVar5 + 0x20) = plVar9;
        *plVar9 = (int64_t)plVar9;
                    // WARNING: Subroutine does not return
        SystemMemoryManager(*(uint64_t *)(*(int64_t *)(param_1[0x21] + 0x10) + 0x168));
      }
      if ((param_1[0x1b] == 0) || (iVar4 = FUN_1807902d0(param_1[0x1b],param_1), iVar4 == 0)) {
        plVar9 = (int64_t *)param_1[0x1e];
        if (plVar9 != (int64_t *)0x0) {
          lVar5 = *plVar9;
          if (lVar5 != param_1[0x1f]) {
            do {
              FUN_180750190(param_1,lVar5,1);
              plVar9 = (int64_t *)param_1[0x1e];
              lVar5 = *plVar9;
            } while (lVar5 != param_1[0x1f]);
          }
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar9,&system_string1_ptr,0x210,1);
        }
        uVar11 = 0;
        if (param_1[0x1d] != 0) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x1d],&system_string1_ptr,0x217,1
                       );
        }
        if (param_1[0x20] != 0) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x20],&system_string1_ptr,0x21d,1
                       );
        }
        lVar5 = param_1[0xc];
        lVar1 = param_1[0x21];
        cVar3 = (**(code **)*param_1)(param_1);
        if (((cVar3 != '\0') && (param_1[0xc] != 0)) &&
           ((puVar7 = (uint64_t *)param_1[0x17], puVar7 == (uint64_t *)0x0 ||
            ((puVar7 == param_1 || (param_1[0xc] != puVar7[0xc])))))) {
          if ((param_1[0x2f] != 0) &&
             (*(int8_t *)(param_1[0x2f] + 0x88) = 1, (*(uint *)(param_1 + 0xb) & 4) == 0)) {
            LOCK();
            *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x40;
            UNLOCK();
          }
          if (((*(byte *)(param_1[0x1b] + 0x78) & 1) == 0) &&
             ((puVar7 = param_1 + 0x2c, (uint64_t *)*puVar7 != puVar7 ||
              ((uint64_t *)param_1[0x2d] != puVar7)))) {
            while ((*(uint *)(param_1 + 0xb) & 0x40) == 0) {
              FUN_180768bf0(2);
            }
          }
          func_0x000180743c20(param_1[0x1b],10);
          plVar9 = param_1 + 0x2c;
          *(int64_t *)param_1[0x2d] = *plVar9;
          *(uint64_t *)(*plVar9 + 8) = param_1[0x2d];
          param_1[0x2d] = plVar9;
          *plVar9 = (int64_t)plVar9;
          param_1[0x2e] = 0;
                    // WARNING: Subroutine does not return
          SystemCoreHandler(param_1[0x1b],10);
        }
        iVar4 = *(int *)(param_1 + 0x16);
        if ((iVar4 != 0) && (lVar6 = param_1[0x14], lVar6 != 0)) {
          if ((*(int *)((int64_t)param_1 + 0xb4) != 0) && (0 < iVar4)) {
            iVar10 = 1;
            do {
              lVar2 = *(int64_t *)(lVar6 + uVar11);
              if (lVar2 != 0) {
                if (*(int64_t *)(lVar2 + 0x60) == lVar5) {
                  *(uint64_t *)(lVar2 + 0x60) = 0;
                  lVar6 = param_1[0x14];
                }
                if (*(int64_t *)(*(int64_t *)(lVar6 + uVar11) + 0x108) == lVar1) {
                  *(uint64_t *)(*(int64_t *)(lVar6 + uVar11) + 0x108) = 0;
                  lVar6 = param_1[0x14];
                }
                cVar3 = (**(code **)**(uint64_t **)(lVar6 + uVar11))();
                if ((cVar3 != '\0') &&
                   (*(int64_t *)(*(int64_t *)(uVar11 + param_1[0x14]) + 0x178) == 0)) {
                  *(uint64_t *)(*(int64_t *)(uVar11 + param_1[0x14]) + 0x178) = 0;
                }
                lVar6 = param_1[0x14];
                if ((*(int64_t *)(*(int64_t *)(lVar6 + uVar11) + 0xa8) != 0) &&
                   (uVar12 = uVar11, iVar4 = iVar10, iVar10 < *(int *)(param_1 + 0x16))) {
                  do {
                    uVar12 = uVar12 + 8;
                    if (*(int64_t *)(lVar6 + uVar12) == *(int64_t *)(lVar6 + uVar11)) {
                      *(uint64_t *)(lVar6 + uVar12) = 0;
                      lVar6 = param_1[0x14];
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)(param_1 + 0x16));
                }
                (**(code **)(**(int64_t **)(lVar6 + uVar11) + 0x18))
                          (*(int64_t **)(lVar6 + uVar11),CONCAT71((int7)((uint64_t)lVar6 >> 8),1))
                ;
                *(uint64_t *)(uVar11 + param_1[0x14]) = 0;
                lVar6 = param_1[0x14];
                iVar4 = *(int *)(param_1 + 0x16);
              }
              iVar10 = iVar10 + 1;
              uVar11 = uVar11 + 8;
            } while (iVar10 <= iVar4);
          }
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&system_string1_ptr,0x29a,1);
        }
        lVar5 = param_1[0xc];
        if ((lVar5 != 0) &&
           (((puVar7 = (uint64_t *)param_1[0x17], puVar7 == (uint64_t *)0x0 ||
             (puVar7 == param_1)) || (lVar5 != puVar7[0xc])))) {
          FUN_180773410(lVar5,1);
          param_1[0xc] = 0;
        }
        cVar3 = (**(code **)*param_1)(param_1);
        if (cVar3 != '\0') {
          if ((param_1[0x17] != 0) && (*(int64_t *)(param_1[0x17] + 0x178) == param_1[0x2f])) {
            param_1[0x2f] = 0;
          }
          if (param_1[0x2f] != 0) {
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x2f],&system_string1_ptr,0x2bd
                          ,1);
          }
        }
        plVar9 = (int64_t *)param_1[0x21];
        if (plVar9 != (int64_t *)0x0) {
          if ((param_1[0x17] == 0) || (*(int64_t **)(param_1[0x17] + 0x108) != plVar9)) {
            if (*plVar9 == 0) {
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar9,&system_string1_ptr,0x2cc,1);
            }
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar9,&system_string1_ptr,0x2ca,1);
          }
          param_1[0x21] = 0;
        }
        lVar5 = param_1[0x17];
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0xb0))) {
          puVar7 = *(uint64_t **)(lVar5 + 0xa0);
          do {
            if ((*(uint64_t **)(lVar5 + 0xa0) != (uint64_t *)0x0) &&
               ((uint64_t *)*puVar7 == param_1)) {
              FUN_180752820(lVar5,uVar11,0,1);
              break;
            }
            uVar8 = (int)uVar11 + 1;
            uVar11 = (uint64_t)uVar8;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < *(int *)(lVar5 + 0xb0));
        }
        if (param_1[7] == 0) {
          param_1[6] = 0;
          SystemMemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
          plVar9 = param_1 + 1;
          *(int64_t *)param_1[2] = *plVar9;
          *(uint64_t *)(*plVar9 + 8) = param_1[2];
          param_1[2] = plVar9;
          *plVar9 = (int64_t)plVar9;
          plVar9 = param_1 + 0x24;
          *(int64_t *)param_1[0x25] = *plVar9;
          *(uint64_t *)(*plVar9 + 8) = param_1[0x25];
          param_1[0x25] = plVar9;
          *plVar9 = (int64_t)plVar9;
                    // WARNING: Subroutine does not return
          SystemMemoryManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
        }
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[7],&system_string1_ptr,0x2e5,1);
      }
    }
    else {
      iVar4 = 0x3e;
    }
  }
  else {
    iVar4 = 0x1e;
  }
  if ((bVar13) && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(lVar5,10);
  }
  return iVar4;
}



uint64_t
thunk_FUN_180752300(uint64_t *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  
  if (((((param_3 - 1U & 0xfffffffc) != 0) || (param_3 == 3)) || ((param_5 - 1U & 0xfffffffc) != 0))
     || (param_5 == 3)) {
    return 0x13;
  }
  uVar8 = 0x20;
  uVar7 = param_2;
  if (param_3 != 2) {
    uVar7 = 0;
    if (param_3 == 4) {
      if (*(uint *)(param_1 + 0xd) != 0) {
        iVar1 = *(int *)(param_1 + 5);
        if (iVar1 == 1) {
          uVar6 = 8;
        }
        else if (iVar1 == 2) {
          uVar6 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar6 = 0x18;
        }
        else {
          uVar6 = uVar8;
          if ((iVar1 != 4) && (uVar7 = param_2, iVar1 != 5)) goto LAB_1807523ea;
        }
        uVar7 = (uint)((((uint64_t)param_2 << 3) / uVar6 & 0xffffffff) /
                      (uint64_t)*(uint *)(param_1 + 0xd));
      }
    }
    else if (param_3 == 1) {
      uVar7 = (uint)(int64_t)((float)param_2 * 0.001 * *(float *)((int64_t)param_1 + 0x6c));
    }
  }
LAB_1807523ea:
  uVar9 = param_4;
  if (param_5 != 2) {
    uVar9 = 0;
    if (param_5 == 4) {
      if (*(uint *)(param_1 + 0xd) != 0) {
        iVar1 = *(int *)(param_1 + 5);
        if (iVar1 == 1) {
          uVar8 = 8;
        }
        else if (iVar1 == 2) {
          uVar8 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar8 = 0x18;
        }
        else if ((iVar1 != 4) && (uVar9 = param_4, iVar1 != 5)) goto LAB_18075246d;
        uVar9 = (uint)((((uint64_t)param_4 << 3) / uVar8 & 0xffffffff) /
                      (uint64_t)*(uint *)(param_1 + 0xd));
      }
    }
    else if (param_5 == 1) {
      uVar9 = (uint)(int64_t)((float)param_4 * 0.001 * *(float *)((int64_t)param_1 + 0x6c));
    }
  }
LAB_18075246d:
  uVar2 = *(uint *)((int64_t)param_1 + 0x44);
  uVar3 = 0;
  if (uVar7 < uVar2) {
    uVar3 = uVar7;
  }
  uVar7 = uVar2 - 1;
  if (uVar9 < uVar2) {
    uVar7 = uVar9;
  }
  uVar9 = uVar2 - 1;
  if (uVar7 != 0) {
    uVar9 = uVar7;
  }
  if (uVar3 < uVar9) {
    *(uint *)((int64_t)param_1 + 0x4c) = uVar3;
    *(uint *)(param_1 + 10) = (uVar9 - uVar3) + 1;
    cVar4 = (**(code **)*param_1)(param_1);
    if ((cVar4 != '\0') &&
       (((*(int *)((int64_t)param_1 + 0x4c) != 0 ||
         (*(int *)(param_1 + 10) != *(int *)((int64_t)param_1 + 0x44))) &&
        ((*(byte *)((int64_t)param_1 + 0x2c) & 6) != 0)))) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
      UNLOCK();
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x1f;
  }
  return uVar5;
}



uint64_t thunk_FUN_1807524e0(uint64_t *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  if ((param_2 & 7) == 0) goto LAB_180752566;
  uVar4 = *(uint *)((int64_t)param_1 + 0x2c) & 0xfffffff8;
  *(uint *)((int64_t)param_1 + 0x2c) = uVar4;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      uVar4 = uVar4 | 2;
      goto LAB_18075251c;
    }
    if ((param_2 & 4) != 0) {
      uVar4 = uVar4 | 4;
      goto LAB_18075251c;
    }
  }
  else {
    uVar4 = uVar4 | 1;
LAB_18075251c:
    *(uint *)((int64_t)param_1 + 0x2c) = uVar4;
  }
  cVar3 = (**(code **)*param_1)();
  if (cVar3 != '\0') {
    if (((param_2 & 6) != 0) && (-1 < (char)*(int32_t *)(param_1 + 0xb))) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffb7;
      UNLOCK();
      if (param_1[0x17] != 0) {
        LOCK();
        puVar1 = (uint *)(param_1[0x17] + 0x58);
        *puVar1 = *puVar1 & 0xffffffb7;
        UNLOCK();
      }
    }
    *(uint *)(param_1[0x2f] + 0x38) = *(uint *)(param_1[0x2f] + 0x38) & 0xfffffff8;
    *(uint *)(param_1[0x2f] + 0x38) =
         *(uint *)(param_1[0x2f] + 0x38) | *(uint *)((int64_t)param_1 + 0x2c) & 7;
  }
LAB_180752566:
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfffbffff;
      *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x80000;
    }
  }
  else {
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfff7ffff;
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x40000;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        if ((param_2 >> 0x17 & 1) == 0) {
          if ((param_2 >> 0x1a & 1) != 0) {
            *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xff0fffff;
            *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x4000000;
          }
        }
        else {
          *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfb8fffff;
          *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x800000;
        }
      }
      else {
        *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfb4fffff;
        *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x400000;
      }
    }
    else {
      *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfb2fffff;
      *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x200000;
    }
  }
  else {
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfb1fffff;
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x100000;
  }
  uVar4 = *(uint *)((int64_t)param_1 + 0x2c) | 0x40000000;
  if ((param_2 & 0x40000000) == 0) {
    uVar4 = *(uint *)((int64_t)param_1 + 0x2c) & 0xbfffffff;
  }
  uVar2 = uVar4 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar2 = uVar4 & 0x7fffffff;
  }
  *(uint *)((int64_t)param_1 + 0x2c) = uVar2;
  cVar3 = (**(code **)*param_1)(param_1);
  if (cVar3 == '\0') {
    if ((param_2 >> 0x11 & 1) == 0) {
      uVar4 = *(uint *)((int64_t)param_1 + 0x2c) & 0xfffdffff;
    }
    else {
      uVar4 = *(uint *)((int64_t)param_1 + 0x2c) | 0x20000;
    }
    *(uint *)((int64_t)param_1 + 0x2c) = uVar4;
  }
  if ((param_2 & 8) != 0) {
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xffffffef;
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 8;
    return 0;
  }
  if ((param_2 & 0x10) != 0) {
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) & 0xfffffff7;
    *(uint *)((int64_t)param_1 + 0x2c) = *(uint *)((int64_t)param_1 + 0x2c) | 0x10;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f7db0(short *param_1)
void FUN_1807f7db0(short *param_1)

{
  short sVar1;
  short *psVar2;
  int64_t lVar3;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    sVar1 = *psVar2;
  }
  lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        (int)((int64_t)psVar2 - (int64_t)param_1 >> 1) * 2 + 2,&unknown_var_6160_ptr,0xca
                        ,0,0,1);
  if (lVar3 != 0) {
    lVar3 = lVar3 - (int64_t)param_1;
    do {
      sVar1 = *param_1;
      *(short *)(lVar3 + (int64_t)param_1) = sVar1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
  }
  return;
}






