#include "TaleWorlds.Native.Split.h"

// 99_part_12_part060.c - 5 个函数

// 函数: void FUN_1807f36c0(int64_t *param_1,uint64_t param_2)
void FUN_1807f36c0(int64_t *param_1,uint64_t param_2)

{
  int32_t uStackX_14;
  
  func_0x000180806ca0();
  uStackX_14 = (int32_t)((uint64_t)param_2 >> 0x20);
                    // WARNING: Could not recover jumptable at 0x0001807f36e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0xd0))(param_1,uStackX_14,2);
  return;
}



int32_t FUN_1807f36f0(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  int32_t uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 0x80) == 0) {
    if (*(int64_t *)(param_1 + 0x28) == 0) {
      uVar1 = 0x1f;
    }
    else {
      if ((*(int *)(*(int64_t *)(param_1 + 0x28) + 0x110) != 7) || (param_4 != '\0')) {
        func_0x000180743c20(*(uint64_t *)(param_1 + 8),8);
                    // WARNING: Subroutine does not return
        SystemCoreHandler(*(uint64_t *)(param_1 + 8),8);
      }
      uVar1 = 0x2e;
    }
  }
  else {
    uVar1 = 0x1e;
  }
  return uVar1;
}



int32_t FUN_1807f372b(int64_t param_1)

{
  int32_t uVar1;
  int64_t unaff_RBX;
  char unaff_R12B;
  
  if (*(int64_t *)(param_1 + 0x28) == 0) {
    uVar1 = 0x1f;
  }
  else {
    if ((*(int *)(*(int64_t *)(param_1 + 0x28) + 0x110) != 7) || (unaff_R12B != '\0')) {
      func_0x000180743c20(*(uint64_t *)(param_1 + 8),8);
                    // WARNING: Subroutine does not return
      SystemCoreHandler(*(uint64_t *)(unaff_RBX + 8),8);
    }
    uVar1 = 0x2e;
  }
  return uVar1;
}






// 函数: void FUN_1807f3b13(void)
void FUN_1807f3b13(void)

{
  return;
}



uint64_t FUN_1807f3b70(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  
  if (*(int64_t **)(param_1 + 0xc0) == (int64_t *)0x0) {
    return 0x1e;
  }
  uVar3 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x30))();
  if ((int)uVar3 == 0) {
    lVar1 = *(int64_t *)(param_1 + 8);
    if (lVar1 != 0) {
      func_0x000180743c20(lVar1,8);
    }
    uVar2 = func_0x000180806cb0(param_1);
    if (uVar2 != 0) {
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        SystemCoreHandler(lVar1,8);
      }
      return (uint64_t)uVar2;
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,8);
    }
    uVar3 = 0;
  }
  return uVar3;
}



int FUN_1807f3b98(void)

{
  int64_t lVar1;
  int in_EAX;
  int iVar2;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,in_EAX + 8);
  }
  iVar2 = func_0x000180806cb0();
  if (iVar2 != 0) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,8);
    }
    return iVar2;
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(lVar1,8);
  }
  return 0;
}



uint64_t FUN_1807f3bde(void)

{
  int64_t unaff_RBX;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return 0;
}






// 函数: void FUN_1807f3bf7(void)
void FUN_1807f3bf7(void)

{
  return;
}






// 函数: void FUN_1807f3c00(int64_t param_1)
void FUN_1807f3c00(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  
  cVar2 = FUN_180767db0(*(int64_t *)(param_1 + 8) + 0x10);
  *(int8_t *)(param_1 + 0x88) = 1;
  if (((*(uint *)(param_1 + 0x38) & 0x10000) == 0) || (cVar2 != '\0')) {
    if ((*(int64_t *)(param_1 + 0x28) != 0) &&
       ((lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x60), lVar1 != 0 &&
        (*(int64_t *)(lVar1 + 0x170) != 0)))) {
      func_0x000180768d40();
    }
    func_0x000180743c20(*(uint64_t *)(param_1 + 8),9);
  }
  func_0x000180743c20(*(uint64_t *)(param_1 + 8),8);
  if (*(int64_t **)(param_1 + 0xc0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x48))();
    *(uint64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x28) = 0;
    *(uint64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x30) = 0;
    *(uint64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x18) = 0;
    *(uint64_t *)(param_1 + 0xc0) = 0;
  }
  FUN_180806cc0(param_1);
                    // WARNING: Subroutine does not return
  SystemCoreHandler(*(uint64_t *)(param_1 + 8),8);
}



uint FUN_1807f3d70(int64_t param_1)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  char acStackX_8 [8];
  uint64_t uStackX_10;
  
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar9 = 0;
  uStackX_10 = 0;
  bVar12 = lVar2 != 0;
  if (bVar12) {
    func_0x000180743c20(lVar2,8);
  }
  lVar3 = *(int64_t *)(param_1 + 0x28);
  uVar6 = uVar9;
  if (lVar3 != 0) {
    lVar4 = *(int64_t *)(lVar3 + 0x180);
    if (*(int *)(lVar3 + 0x110) == 0) {
      LOCK();
      *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) & 0xfffffbff;
      UNLOCK();
      if ((*(byte *)(param_1 + 0x3c) & 0x80) == 0) {
        plVar5 = *(int64_t **)(param_1 + 0xc0);
        if (plVar5 != (int64_t *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0xb0))(plVar5,acStackX_8,0);
          if (uVar6 != 0) goto LAB_1807f4116;
          if (acStackX_8[0] == '\0') {
            *(int8_t *)(param_1 + 0x88) = 1;
          }
        }
        if (*(char *)(param_1 + 0x88) == '\0') {
          if ((*(int64_t **)(param_1 + 0xc0) == (int64_t *)0x0) ||
             ((uVar6 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x40))(), uVar6 == 0 &&
              (uVar6 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x80))
                                 (*(int64_t **)(param_1 + 0xc0),&uStackX_10), uVar6 == 0)))) {
            do {
              if ((lVar2 != 0) && (bVar12)) {
                    // WARNING: Subroutine does not return
                SystemCoreHandler(lVar2,8);
              }
              uVar6 = *(uint *)(param_1 + 0x9c);
              puVar1 = (uint *)(lVar3 + 0x18c);
              uVar8 = *(uint *)(param_1 + 0xa0);
              if (((uVar6 <= uVar8) || (uVar6 - uVar8 < *puVar1)) &&
                 ((uVar6 == 0 || ((uVar8 <= uVar6 || (uVar8 - uVar6 < *puVar1)))))) {
LAB_1807f4006:
                iVar7 = uStackX_10._4_4_ - *(int *)(param_1 + 0x94);
                if (iVar7 < 0) {
                  iVar7 = iVar7 + *(int *)(lVar4 + 0x50);
                }
                iVar11 = 0;
                if (-1 < iVar7) {
                  iVar11 = iVar7;
                }
                if ((lVar2 != 0) && (!bVar12)) {
                  func_0x000180743c20(lVar2,8);
                  bVar12 = true;
                }
                uVar9 = *(uint *)(param_1 + 0x5c);
                iVar7 = *(int *)(param_1 + 0x58);
                if (*(uint *)(lVar3 + 0x44) < iVar7 + uVar9) {
                  uVar9 = *(uint *)(lVar3 + 0x44) - iVar7;
                  *(uint *)(param_1 + 0x5c) = uVar9;
                }
                uVar6 = *(uint *)(param_1 + 0x38) & 2;
                if ((uVar6 == 0) || (*(int *)(param_1 + 0x54) == 0)) {
                  uVar8 = *(int *)(lVar3 + 0x44) - 1;
                }
                else {
                  uVar8 = iVar7 + -1 + uVar9;
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar11;
                uVar10 = *(uint *)(param_1 + 0x4c);
                if (uVar8 < uVar10) {
                  if ((uVar6 == 0) || (uVar6 = *(uint *)(param_1 + 0x54), uVar6 == 0)) {
                    if (*(int *)(lVar3 + 0x44) == -1) {
                      *(uint64_t *)(param_1 + 0x48) = 0;
                    }
                    else if ((*(uint *)(lVar3 + 0x58) & 8) != 0) {
                      plVar5 = *(int64_t **)(param_1 + 0xc0);
                      *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(lVar3 + 0x44);
                      *(int32_t *)(param_1 + 0x48) = 0;
                      if (plVar5 != (int64_t *)0x0) {
                        (**(code **)(*plVar5 + 0x50))(plVar5,1);
                      }
                      *(int8_t *)(param_1 + 0x88) = 1;
                    }
                  }
                  else {
                    uVar8 = (uVar10 - iVar7) / uVar9;
                    if (0 < (int)uVar6) {
                      if (uVar6 <= uVar8) {
                        uVar8 = uVar6;
                      }
                      *(uint *)(param_1 + 0x54) = uVar6 - uVar8;
                    }
                    *(uint *)(param_1 + 0x4c) = uVar10 - uVar9 * uVar8;
                  }
                }
                if ((lVar2 != 0) && (bVar12)) {
                    // WARNING: Subroutine does not return
                  SystemCoreHandler(lVar2,8);
                }
                *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + iVar11;
                *(uint64_t *)(param_1 + 0x90) = uStackX_10;
                uVar6 = 0;
                break;
              }
              if ((lVar2 != 0) && (!bVar12)) {
                func_0x000180743c20(lVar2,8);
                bVar12 = true;
              }
              if (((*(byte *)(param_1 + 0x3c) & 0x80) != 0) ||
                 ((char)*(int32_t *)(lVar3 + 0x58) < '\0')) goto LAB_1807f4006;
              uVar6 = *(uint *)(param_1 + 0x98);
              uVar8 = *(uint *)(lVar4 + 0x44);
              uVar10 = uVar9;
              if ((uVar6 <= uVar8) && (uVar10 = *puVar1, uVar8 < uVar6 + *puVar1)) {
                uVar10 = uVar8 - uVar6;
              }
              if ((lVar2 != 0) && (bVar12)) {
                    // WARNING: Subroutine does not return
                SystemCoreHandler(lVar2,8);
              }
              uVar6 = FUN_180773af0(lVar3,uVar6,uVar10,0);
              if ((lVar2 != 0) && (!bVar12)) {
                func_0x000180743c20(lVar2,8);
                bVar12 = true;
              }
              if ((uVar6 & 0xffffffef) != 0) goto LAB_1807f3fc0;
              LOCK();
              *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 0x10;
              UNLOCK();
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + uVar10;
              if (*(uint *)(lVar4 + 0x44) <= *(uint *)(param_1 + 0x98)) {
                *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) - *(uint *)(lVar4 + 0x44);
              }
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + uVar10;
            } while( true );
          }
        }
        else {
          LOCK();
          *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 8;
          UNLOCK();
          uVar6 = 0;
        }
      }
    }
    else {
      if (*(int *)(lVar3 + 0x110) == 7) {
        LOCK();
        *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 0x400;
        UNLOCK();
      }
      uVar6 = 0x2e;
    }
  }
  goto LAB_1807f4116;
LAB_1807f3fc0:
  plVar5 = *(int64_t **)(param_1 + 0xc0);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,1);
  }
  LOCK();
  *(int32_t *)(lVar3 + 0x110) = 2;
  UNLOCK();
  if (*(int64_t *)(lVar3 + 0x108) != 0) {
    *(uint *)(*(int64_t *)(lVar3 + 0x108) + 0x124) = uVar6;
  }
  *(int8_t *)(param_1 + 0x88) = 1;
  LOCK();
  *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 8;
  UNLOCK();
LAB_1807f4116:
  if ((bVar12) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(lVar2,8);
  }
  return uVar6;
}



uint64_t FUN_1807f3d7f(int64_t param_1)

{
  uint *puVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int64_t unaff_RSI;
  int iVar10;
  uint64_t uVar11;
  int iVar12;
  uint64_t unaff_R15;
  bool bVar13;
  char in_stack_00000060;
  
  bVar13 = unaff_RSI != 0;
  if (bVar13) {
    func_0x000180743c20();
  }
  lVar3 = *(int64_t *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = *(int64_t *)(lVar3 + 0x180);
    if (*(int *)(lVar3 + 0x110) == 0) {
      LOCK();
      *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) & 0xfffffbff;
      UNLOCK();
      if ((*(byte *)(param_1 + 0x3c) & 0x80) == 0) {
        plVar5 = *(int64_t **)(param_1 + 0xc0);
        if (plVar5 != (int64_t *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0xb0))(plVar5,&stack0x00000060,0);
          if (uVar6 != 0) {
            unaff_R15 = (uint64_t)uVar6;
            goto LAB_1807f4116;
          }
          if (in_stack_00000060 == (char)unaff_R15) {
            *(int8_t *)(param_1 + 0x88) = 1;
          }
        }
        if (*(char *)(param_1 + 0x88) == '\0') {
          if (*(int64_t **)(param_1 + 0xc0) == (int64_t *)0x0) {
LAB_1807f3e95:
            do {
              if ((unaff_RSI != 0) && (bVar13)) {
                    // WARNING: Subroutine does not return
                SystemCoreHandler();
              }
              uVar6 = *(uint *)(param_1 + 0x9c);
              puVar1 = (uint *)(lVar3 + 0x18c);
              uVar9 = *(uint *)(param_1 + 0xa0);
              iVar12 = (int)unaff_R15;
              if (((uVar6 <= uVar9) || (uVar6 - uVar9 < *puVar1)) &&
                 (((uVar6 == 0 || (uVar9 <= uVar6)) || (uVar9 - uVar6 < *puVar1)))) {
LAB_1807f4006:
                iVar7 = (int)(unaff_R15 >> 0x20) - *(int *)(param_1 + 0x94);
                if (iVar7 < 0) {
                  iVar7 = iVar7 + *(int *)(lVar4 + 0x50);
                }
                iVar10 = iVar12;
                if (-1 < iVar7) {
                  iVar10 = iVar7;
                }
                if ((unaff_RSI != 0) && (!bVar13)) {
                  func_0x000180743c20();
                  bVar13 = true;
                }
                uVar6 = *(uint *)(param_1 + 0x5c);
                iVar7 = *(int *)(param_1 + 0x58);
                if (*(uint *)(lVar3 + 0x44) < iVar7 + uVar6) {
                  uVar6 = *(uint *)(lVar3 + 0x44) - iVar7;
                  *(uint *)(param_1 + 0x5c) = uVar6;
                }
                uVar9 = *(uint *)(param_1 + 0x38) & 2;
                if ((uVar9 == 0) || (*(int *)(param_1 + 0x54) == iVar12)) {
                  uVar8 = *(int *)(lVar3 + 0x44) - 1;
                }
                else {
                  uVar8 = iVar7 + -1 + uVar6;
                }
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar10;
                uVar2 = *(uint *)(param_1 + 0x4c);
                if (uVar8 < uVar2) {
                  if ((uVar9 == 0) || (uVar9 = *(uint *)(param_1 + 0x54), uVar9 == 0)) {
                    if (*(int *)(lVar3 + 0x44) == -1) {
                      *(uint64_t *)(param_1 + 0x48) = unaff_R15;
                    }
                    else if ((*(uint *)(lVar3 + 0x58) & 8) != 0) {
                      plVar5 = *(int64_t **)(param_1 + 0xc0);
                      *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(lVar3 + 0x44);
                      *(int *)(param_1 + 0x48) = iVar12;
                      if (plVar5 != (int64_t *)0x0) {
                        (**(code **)(*plVar5 + 0x50))(plVar5,1);
                      }
                      *(int8_t *)(param_1 + 0x88) = 1;
                    }
                  }
                  else {
                    uVar8 = (uVar2 - iVar7) / uVar6;
                    if (0 < (int)uVar9) {
                      if (uVar9 <= uVar8) {
                        uVar8 = uVar9;
                      }
                      *(uint *)(param_1 + 0x54) = uVar9 - uVar8;
                    }
                    *(uint *)(param_1 + 0x4c) = uVar2 - uVar6 * uVar8;
                  }
                }
                if ((unaff_RSI != 0) && (bVar13)) {
                    // WARNING: Subroutine does not return
                  SystemCoreHandler();
                }
                *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + iVar10;
                *(uint64_t *)(param_1 + 0x90) = unaff_R15;
                goto LAB_1807f4116;
              }
              if ((unaff_RSI != 0) && (!bVar13)) {
                func_0x000180743c20();
                bVar13 = true;
              }
              if (((*(byte *)(param_1 + 0x3c) & 0x80) != 0) ||
                 ((char)*(int32_t *)(lVar3 + 0x58) < '\0')) goto LAB_1807f4006;
              uVar6 = *(uint *)(param_1 + 0x98);
              uVar9 = *(uint *)(lVar4 + 0x44);
              uVar11 = (uint64_t)*puVar1;
              if (uVar9 < uVar6) {
                uVar11 = unaff_R15 & 0xffffffff;
              }
              else if (uVar9 < uVar6 + *puVar1) {
                uVar11 = (uint64_t)(uVar9 - uVar6);
              }
              if ((unaff_RSI != 0) && (bVar13)) {
                    // WARNING: Subroutine does not return
                SystemCoreHandler();
              }
              uVar6 = FUN_180773af0(lVar3,uVar6,uVar11,0);
              if ((unaff_RSI != 0) && (!bVar13)) {
                func_0x000180743c20();
                bVar13 = true;
              }
              if ((uVar6 & 0xffffffef) != 0) goto LAB_1807f3fc0;
              LOCK();
              *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 0x10;
              UNLOCK();
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + (int)uVar11;
              if (*(uint *)(lVar4 + 0x44) <= *(uint *)(param_1 + 0x98)) {
                *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) - *(uint *)(lVar4 + 0x44);
              }
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + (int)uVar11;
            } while( true );
          }
          uVar6 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x40))();
          if (uVar6 == 0) {
            uVar6 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x80))
                              (*(int64_t **)(param_1 + 0xc0),&stack0x00000068);
            if (uVar6 == 0) goto LAB_1807f3e95;
            unaff_R15 = (uint64_t)uVar6;
          }
          else {
            unaff_R15 = (uint64_t)uVar6;
          }
        }
        else {
          LOCK();
          *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 8;
          UNLOCK();
        }
      }
    }
    else {
      if (*(int *)(lVar3 + 0x110) == 7) {
        LOCK();
        *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 0x400;
        UNLOCK();
      }
      unaff_R15 = 0x2e;
    }
  }
  goto LAB_1807f4116;
LAB_1807f3fc0:
  plVar5 = *(int64_t **)(param_1 + 0xc0);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,1);
  }
  LOCK();
  *(int32_t *)(lVar3 + 0x110) = 2;
  UNLOCK();
  if (*(int64_t *)(lVar3 + 0x108) != 0) {
    *(uint *)(*(int64_t *)(lVar3 + 0x108) + 0x124) = uVar6;
  }
  *(int8_t *)(param_1 + 0x88) = 1;
  LOCK();
  *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 8;
  UNLOCK();
  unaff_R15 = (uint64_t)uVar6;
LAB_1807f4116:
  if ((bVar13) && (unaff_RSI != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return unaff_R15 & 0xffffffff;
}



int32_t FUN_1807f4139(void)

{
  int64_t unaff_RSI;
  int32_t unaff_R15D;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return unaff_R15D;
}






// 函数: void FUN_1807f41c0(int64_t param_1)
void FUN_1807f41c0(int64_t param_1)

{
  int iVar1;
  int aiStackX_8 [6];
  int aiStackX_20 [2];
  
  *(int32_t *)(param_1 + 0x28) = 1000;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  iVar1 = FUN_1807f5530();
  if (iVar1 == 0) {
    iVar1 = func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),aiStackX_8);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = func_0x000180769aa0(*(uint64_t *)(param_1 + 0x170),aiStackX_20);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = func_0x00018076a6c0(*(uint64_t *)(param_1 + 0x170),aiStackX_20[0] + aiStackX_8[0]);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




