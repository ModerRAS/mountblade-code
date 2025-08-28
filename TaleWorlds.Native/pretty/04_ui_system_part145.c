#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part145.c - 2 个函数

// 函数: void FUN_180751569(void)
void FUN_180751569(void)

{
  return;
}



uint64_t FUN_180751580(int64_t param_1,int64_t param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint auStackX_8 [2];
  int aiStack_78 [2];
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  lVar7 = *(int64_t *)(param_1 + 0x60);
  uVar11 = 0;
  iVar8 = 0;
  uVar10 = (uint64_t)param_3;
  uVar4 = 1;
  iVar5 = 1;
  if (lVar7 == 0) {
    return 0x36;
  }
  if (param_2 != 0) {
    if ((-1 < (char)*(uint *)(param_1 + 0x2c)) && (*(int64_t *)(lVar7 + 0x170) == 0)) {
      return 0x44;
    }
    iVar6 = 4;
    if ((*(uint *)(param_1 + 0x2c) >> 9 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 1) {
        iVar5 = 1;
      }
      else if (iVar1 == 2) {
        iVar5 = 2;
      }
      else if (iVar1 == 3) {
        iVar5 = 3;
      }
      else if ((iVar1 == 4) || (iVar1 == 5)) {
        iVar5 = 4;
      }
      uVar4 = iVar5 * *(int *)(param_1 + 0x68);
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar3 = (**(code **)(lVar7 + 0x88))(lVar7,*(int32_t *)(lVar7 + 0x11c),&uStack_70);
    if ((int)uVar3 == 0) {
      if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
        iVar5 = *(int *)(param_1 + 0x28);
        if (iVar5 == 1) {
          iVar6 = 1;
        }
        else if (iVar5 == 2) {
          iVar6 = 2;
        }
        else if (iVar5 == 3) {
          iVar6 = 3;
        }
        else if ((iVar5 != 4) && (iVar5 != 5)) {
          iVar6 = 1;
        }
        uVar4 = iVar6 * *(int *)(param_1 + 0x68);
        uVar10 = (uint64_t)(param_3 - param_3 % uVar4);
      }
      uVar9 = (uint)uVar10;
      while (uVar9 != 0) {
        lVar7 = (uint64_t)uVar11 + param_2;
        auStackX_8[0] = 0;
        if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
          uVar3 = FUN_1807730d0(*(int64_t *)(param_1 + 0x60),lVar7,uVar10 / uVar4,aiStack_78);
          if ((uVar3 & 0xffffffef) != 0) {
            return uVar3;
          }
          auStackX_8[0] = aiStack_78[0] * uVar4;
        }
        else {
          uVar3 = SystemDataAnalyzer(*(uint64_t *)(*(int64_t *)(param_1 + 0x60) + 0x170),lVar7,1,
                                uVar10,auStackX_8);
          if ((uVar3 & 0xffffffef) != 0) {
            return uVar3;
          }
        }
        if ((*(code **)(param_1 + 0x148) != (code *)0x0) && (auStackX_8[0] != 0)) {
          (**(code **)(param_1 + 0x148))(*(uint64_t *)(param_1 + 0x158),lVar7,auStackX_8[0]);
        }
        uVar9 = auStackX_8[0];
        if ((int)uVar3 != 0x10) {
          uVar9 = (uint)uVar10;
        }
        uVar11 = uVar11 + auStackX_8[0];
        iVar8 = iVar8 + auStackX_8[0];
        uVar9 = uVar9 - auStackX_8[0];
        uVar10 = (uint64_t)uVar9;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + auStackX_8[0] / uVar4;
        uVar2 = *(uint *)(param_1 + 0x40);
        if (*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0x40)) {
          uVar2 = *(uint *)(param_1 + 0x44);
        }
        *(uint *)(param_1 + 0x40) = uVar2;
      }
      uVar3 = uVar3 & 0xffffffff;
      if (param_4 != (int *)0x0) {
        *param_4 = iVar8;
      }
    }
    return uVar3;
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180751800(uint64_t *param_1)

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
        SystemMemoryProcessor(lVar5,10);
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
              UIComponent_EventHandler(2);
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
          SystemMemoryProcessor(param_1[0x1b],10);
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
    SystemMemoryProcessor(lVar5,10);
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180751811(uint64_t *param_1)

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
  int64_t unaff_R12;
  bool bVar13;
  
  bVar13 = unaff_R12 != 0;
  if (bVar13) {
    func_0x000180743c20();
  }
  if ((*(uint *)(param_1 + 0xb) & 0x20) == 0) {
    if (((((uint64_t *)param_1[0x15] == (uint64_t *)0x0) ||
         (param_1 != (uint64_t *)param_1[0x15])) || (param_1[0x17] == 0)) ||
       ((*(uint *)(param_1[0x17] + 0x58) & 0x20) != 0)) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
      UNLOCK();
      if ((unaff_R12 != 0) && (bVar13)) {
                    // WARNING: Subroutine does not return
        SystemMemoryProcessor();
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
              UIComponent_EventHandler(2);
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
          SystemMemoryProcessor(param_1[0x1b],10);
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
  if ((bVar13) && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807519a8(uint64_t param_1,int64_t *param_2)
void FUN_1807519a8(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint64_t *unaff_RBX;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  
  if (param_2 != (int64_t *)0x0) {
    if (*param_2 != unaff_RBX[0x1f]) {
      do {
        FUN_180750190();
        param_2 = (int64_t *)unaff_RBX[0x1e];
      } while (*param_2 != unaff_RBX[0x1f]);
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&system_string1_ptr,0x210,1);
  }
  uVar10 = 0;
  if (unaff_RBX[0x1d] != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RBX[0x1d],&system_string1_ptr,0x217,1);
  }
  if (unaff_RBX[0x20] != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RBX[0x20],&system_string1_ptr,0x21d,1);
  }
  lVar1 = unaff_RBX[0xc];
  lVar2 = unaff_RBX[0x21];
  cVar5 = (**(code **)*unaff_RBX)();
  if (((cVar5 != '\0') && (unaff_RBX[0xc] != 0)) &&
     ((puVar7 = (uint64_t *)unaff_RBX[0x17], puVar7 == (uint64_t *)0x0 ||
      ((puVar7 == unaff_RBX || (unaff_RBX[0xc] != puVar7[0xc])))))) {
    if ((unaff_RBX[0x2f] != 0) &&
       (*(int8_t *)(unaff_RBX[0x2f] + 0x88) = 1, (*(uint *)(unaff_RBX + 0xb) & 4) == 0)) {
      LOCK();
      *(uint *)(unaff_RBX + 0xb) = *(uint *)(unaff_RBX + 0xb) | 0x40;
      UNLOCK();
    }
    if (((*(byte *)(unaff_RBX[0x1b] + 0x78) & 1) == 0) &&
       ((puVar7 = unaff_RBX + 0x2c, (uint64_t *)*puVar7 != puVar7 ||
        ((uint64_t *)unaff_RBX[0x2d] != puVar7)))) {
      while ((*(uint *)(unaff_RBX + 0xb) & 0x40) == 0) {
        UIComponent_EventHandler(2);
      }
    }
    func_0x000180743c20(unaff_RBX[0x1b],10);
    plVar4 = unaff_RBX + 0x2c;
    *(int64_t *)unaff_RBX[0x2d] = *plVar4;
    *(uint64_t *)(*plVar4 + 8) = unaff_RBX[0x2d];
    unaff_RBX[0x2d] = plVar4;
    *plVar4 = (int64_t)plVar4;
    unaff_RBX[0x2e] = 0;
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(unaff_RBX[0x1b],10);
  }
  iVar12 = *(int *)(unaff_RBX + 0x16);
  if ((iVar12 != 0) && (lVar6 = unaff_RBX[0x14], lVar6 != 0)) {
    if ((*(int *)((int64_t)unaff_RBX + 0xb4) != 0) && (0 < iVar12)) {
      iVar9 = 1;
      do {
        lVar3 = *(int64_t *)(lVar6 + uVar10);
        if (lVar3 != 0) {
          if (*(int64_t *)(lVar3 + 0x60) == lVar1) {
            *(uint64_t *)(lVar3 + 0x60) = 0;
            lVar6 = unaff_RBX[0x14];
          }
          if (*(int64_t *)(*(int64_t *)(lVar6 + uVar10) + 0x108) == lVar2) {
            *(uint64_t *)(*(int64_t *)(lVar6 + uVar10) + 0x108) = 0;
            lVar6 = unaff_RBX[0x14];
          }
          cVar5 = (**(code **)**(uint64_t **)(lVar6 + uVar10))();
          if ((cVar5 != '\0') &&
             (*(int64_t *)(*(int64_t *)(uVar10 + unaff_RBX[0x14]) + 0x178) == 0)) {
            *(uint64_t *)(*(int64_t *)(uVar10 + unaff_RBX[0x14]) + 0x178) = 0;
          }
          lVar6 = unaff_RBX[0x14];
          if ((*(int64_t *)(*(int64_t *)(lVar6 + uVar10) + 0xa8) != 0) &&
             (uVar11 = uVar10, iVar12 = iVar9, iVar9 < *(int *)(unaff_RBX + 0x16))) {
            do {
              uVar11 = uVar11 + 8;
              if (*(int64_t *)(lVar6 + uVar11) == *(int64_t *)(lVar6 + uVar10)) {
                *(uint64_t *)(lVar6 + uVar11) = 0;
                lVar6 = unaff_RBX[0x14];
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(unaff_RBX + 0x16));
          }
          (**(code **)(**(int64_t **)(lVar6 + uVar10) + 0x18))
                    (*(int64_t **)(lVar6 + uVar10),CONCAT71((int7)((uint64_t)lVar6 >> 8),1));
          *(uint64_t *)(uVar10 + unaff_RBX[0x14]) = 0;
          lVar6 = unaff_RBX[0x14];
          iVar12 = *(int *)(unaff_RBX + 0x16);
        }
        iVar9 = iVar9 + 1;
        uVar10 = uVar10 + 8;
      } while (iVar9 <= iVar12);
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&system_string1_ptr,0x29a,1);
  }
  lVar1 = unaff_RBX[0xc];
  if ((lVar1 != 0) &&
     (((puVar7 = (uint64_t *)unaff_RBX[0x17], puVar7 == (uint64_t *)0x0 || (puVar7 == unaff_RBX)
       ) || (lVar1 != puVar7[0xc])))) {
    FUN_180773410(lVar1,1);
    unaff_RBX[0xc] = 0;
  }
  cVar5 = (**(code **)*unaff_RBX)();
  if (cVar5 != '\0') {
    if ((unaff_RBX[0x17] != 0) && (*(int64_t *)(unaff_RBX[0x17] + 0x178) == unaff_RBX[0x2f])) {
      unaff_RBX[0x2f] = 0;
    }
    if (unaff_RBX[0x2f] != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RBX[0x2f],&system_string1_ptr,0x2bd,1);
    }
  }
  plVar4 = (int64_t *)unaff_RBX[0x21];
  if (plVar4 != (int64_t *)0x0) {
    if ((unaff_RBX[0x17] == 0) || (*(int64_t **)(unaff_RBX[0x17] + 0x108) != plVar4)) {
      if (*plVar4 == 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&system_string1_ptr,0x2cc,1);
      }
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar4,&system_string1_ptr,0x2ca,1);
    }
    unaff_RBX[0x21] = 0;
  }
  lVar1 = unaff_RBX[0x17];
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0xb0))) {
    puVar7 = *(uint64_t **)(lVar1 + 0xa0);
    do {
      if ((*(uint64_t **)(lVar1 + 0xa0) != (uint64_t *)0x0) &&
         ((uint64_t *)*puVar7 == unaff_RBX)) {
        FUN_180752820(lVar1,uVar10,0,1);
        break;
      }
      uVar8 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar8;
      puVar7 = puVar7 + 1;
    } while ((int)uVar8 < *(int *)(lVar1 + 0xb0));
  }
  if (unaff_RBX[7] == 0) {
    unaff_RBX[6] = 0;
    SystemMemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
    plVar4 = unaff_RBX + 1;
    *(int64_t *)unaff_RBX[2] = *plVar4;
    *(uint64_t *)(*plVar4 + 8) = unaff_RBX[2];
    unaff_RBX[2] = plVar4;
    *plVar4 = (int64_t)plVar4;
    plVar4 = unaff_RBX + 0x24;
    *(int64_t *)unaff_RBX[0x25] = *plVar4;
    *(uint64_t *)(*plVar4 + 8) = unaff_RBX[0x25];
    unaff_RBX[0x25] = plVar4;
    *plVar4 = (int64_t)plVar4;
                    // WARNING: Subroutine does not return
    SystemMemoryManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RBX[7],&system_string1_ptr,0x2e5,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



