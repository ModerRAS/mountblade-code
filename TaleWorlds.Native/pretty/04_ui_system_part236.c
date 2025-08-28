#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part236.c - 6 个函数

// 函数: void FUN_180802653(void)
void FUN_180802653(void)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  uint64_t uVar10;
  int64_t lVar11;
  int32_t *puVar12;
  int32_t uVar13;
  int64_t unaff_RBX;
  uint64_t uVar14;
  int64_t unaff_RDI;
  uint64_t uVar15;
  int *unaff_R12;
  int32_t *unaff_R13;
  int iVar16;
  int32_t *unaff_R14;
  uint64_t uVar17;
  int *unaff_R15;
  int64_t lVar18;
  uint64_t *puVar19;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000040;
  int32_t *in_stack_00000048;
  uint64_t in_stack_000000d0;
  uint in_stack_00000158;
  uint64_t uVar9;
  
  plVar1 = (int64_t *)(unaff_RBX + 0x438);
  if (in_EAX == 1) {
    iVar7 = *(int *)(*plVar1 + 0x24 + unaff_RDI * 0x3c);
    if (*unaff_R15 <= iVar7) {
      iVar7 = *unaff_R15;
    }
    *unaff_R15 = iVar7;
  }
  else if ((in_EAX == 0) || (*(int *)(*plVar1 + 0x24 + unaff_RDI * 0x3c) < *unaff_R15)) {
    uVar13 = 8;
    iVar7 = *(int *)(*plVar1 + 0x24 + unaff_RDI * 0x3c);
    iVar16 = 8;
    if (iVar7 < 8) {
      iVar16 = iVar7;
    }
    *unaff_R15 = iVar16;
    switch(iVar16) {
    case 1:
      uVar13 = 2;
      break;
    case 2:
      uVar13 = 3;
      break;
    default:
      uVar13 = 1;
      break;
    case 4:
      uVar13 = 4;
      break;
    case 5:
      uVar13 = 5;
      break;
    case 6:
      uVar13 = 6;
      break;
    case 8:
      uVar13 = 7;
      break;
    case 0xc:
      break;
    }
    *unaff_R14 = uVar13;
  }
  lVar18 = unaff_RDI * 0x3c;
  *unaff_R13 = 5;
  iVar7 = FUN_1807682e0(unaff_RBX + 0x4a8,0);
  if (iVar7 == 0) {
    puVar2 = (uint64_t *)(unaff_RBX + 0x450);
    lVar11 = *plVar1 + 0x2c + lVar18;
    iVar7 = CoCreateInstance(lVar11,0,1,lVar11,puVar2);
    if (iVar7 == -0x7ffbfe10) {
      iVar7 = CoInitializeEx(0,2);
      if (iVar7 < 0) goto LAB_1808027ba;
      lVar11 = *plVar1 + 0x2c + lVar18;
      iVar7 = CoCreateInstance(lVar11,0,1,lVar11,puVar2);
    }
    if (iVar7 == 0) {
      iVar7 = (**(code **)(*(int64_t *)*puVar2 + 0x18))((int64_t *)*puVar2,in_stack_00000040);
      if (iVar7 == 0) {
                    // WARNING: Subroutine does not return
        memset(&stack0x00000050,0,0x7c);
      }
      iVar7 = (**(code **)(**(int64_t **)(unaff_RBX + 0x450) + 0x70))
                        (*(int64_t **)(unaff_RBX + 0x450),(double)*unaff_R12);
      if (iVar7 != 0) {
        *unaff_R12 = *(int *)(*plVar1 + 0x28 + lVar18);
      }
      puVar19 = (uint64_t *)&stack0x00000038;
      uVar14 = 0;
      iStack0000000000000030 = 0;
      iStack0000000000000034 = 0;
      uStack000000000000003c = 0;
      iStack0000000000000038 = 0;
      iVar7 = (**(code **)(*(int64_t *)*puVar2 + 0x58))
                        ((int64_t *)*puVar2,&stack0x00000030,(int64_t)&stack0x00000030 + 4,
                         (int64_t)&stack0x00000038 + 4,puVar19);
      if (iVar7 == 0) {
        if (((int)in_stack_00000158 < iStack0000000000000030) ||
           (iStack0000000000000034 < (int)in_stack_00000158)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((iStack0000000000000038 < 0) && ((in_stack_00000158 & in_stack_00000158 - 1) != 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((iStack0000000000000038 < 1) || ((int)in_stack_00000158 % iStack0000000000000038 == 0))
        {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (((bVar4) && (bVar5)) && (bVar6)) {
          *(uint *)(unaff_RBX + 0x470) = in_stack_00000158;
        }
        else {
          *(int32_t *)(unaff_RBX + 0x470) = uStack000000000000003c;
          puVar19 = (uint64_t *)((uint64_t)puVar19 & 0xffffffff00000000);
          iVar7 = FUN_1807869c0(unaff_RBX + 0x478,in_stack_00000158,*in_stack_00000048,
                                *unaff_R15 << 2,puVar19);
          if (iVar7 != 0) goto LAB_1808027ba;
        }
        lVar11 = *plVar1;
        iVar7 = *(int *)(lVar11 + 0x20 + lVar18);
        iVar16 = *(int *)(lVar11 + 0x24 + lVar18);
        *(int *)(unaff_RBX + 0x464) = iVar7;
        iVar16 = iVar16 + iVar7;
        uVar13 = 0x20;
        if (*(int *)(lVar11 + 0x24 + lVar18) < 0x20) {
          uVar13 = *(int32_t *)(lVar11 + 0x24 + lVar18);
        }
        *(int32_t *)(unaff_RBX + 0x468) = uVar13;
        iVar7 = (**(code **)(*(int64_t *)*puVar2 + 0xb8))();
        uVar9 = (uint64_t)puVar19 & 0xffffffff00000000;
        *(bool *)(unaff_RBX + 0x460) = iVar7 == 0;
        lVar11 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar16 * 0x18,&unknown_var_7392_ptr,
                               400,uVar9);
        *(int64_t *)(unaff_RBX + 0x440) = lVar11;
        if (lVar11 != 0) {
          uVar9 = uVar9 & 0xffffffff00000000;
          lVar11 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar16 * 0x34,
                                 &unknown_var_7392_ptr,0x196,uVar9);
          *(int64_t *)(unaff_RBX + 0x448) = lVar11;
          if (lVar11 != 0) {
            lVar11 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                   *unaff_R15 * *(int *)(unaff_RBX + 0x470) * 4,&unknown_var_7392_ptr,0x19d
                                   ,uVar9 & 0xffffffff00000000);
            *(int64_t *)(unaff_RBX + 0x458) = lVar11;
            if (lVar11 != 0) {
              lVar11 = *plVar1;
              puVar12 = *(int32_t **)(unaff_RBX + 0x440);
              uVar9 = uVar14;
              if (0 < *(int *)(lVar11 + 0x20 + lVar18)) {
                do {
                  puVar12[1] = (int)uVar9;
                  uVar8 = (int)uVar9 + 1;
                  uVar9 = (uint64_t)uVar8;
                  *puVar12 = 1;
                  puVar12 = puVar12 + 6;
                  lVar11 = *plVar1;
                } while ((int)uVar8 < *(int *)(lVar11 + 0x20 + lVar18));
              }
              uVar9 = uVar14;
              if (0 < *(int *)(lVar11 + 0x24 + lVar18)) {
                do {
                  puVar12[1] = (int)uVar9;
                  uVar8 = (int)uVar9 + 1;
                  uVar9 = (uint64_t)uVar8;
                  *puVar12 = 0;
                  puVar12 = puVar12 + 6;
                } while ((int)uVar8 < *(int *)(*plVar1 + 0x24 + lVar18));
              }
              puVar19 = (uint64_t *)(unaff_RBX + 0x418);
              ui_system_memory = unaff_RBX;
              *(void **)(unaff_RBX + 0x428) = &unknown_var_6832_ptr;
              *puVar19 = &unknown_var_6880_ptr;
              *(code **)(unaff_RBX + 0x420) = _guard_check_icall;
              *(code **)(unaff_RBX + 0x430) = FUN_180801cc0;
              iVar7 = (**(code **)(*(int64_t *)*puVar2 + 0x98))
                                ((int64_t *)*puVar2,*(uint64_t *)(unaff_RBX + 0x440),iVar16,
                                 *(int32_t *)(unaff_RBX + 0x470),puVar19);
              if (iVar7 == 0) {
                uVar10 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar16 * 8,
                                       &unknown_var_7392_ptr,0x1b9,(uint64_t)puVar19 & 0xffffffff00000000)
                ;
                *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11630) = uVar10;
                if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11630) != 0) {
                  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11628) = 0;
                  uVar9 = uVar14;
                  uVar15 = uVar14;
                  uVar17 = uVar14;
                  if (0 < iVar16) {
                    do {
                      *(int32_t *)(uVar9 + *(int64_t *)(unaff_RBX + 0x448)) =
                           *(int32_t *)(*(int64_t *)(unaff_RBX + 0x440) + 4 + uVar17);
                      *(int32_t *)(uVar9 + 4 + *(int64_t *)(unaff_RBX + 0x448)) =
                           *(int32_t *)(uVar17 + *(int64_t *)(unaff_RBX + 0x440));
                      lVar18 = (int64_t)(int)uVar15 * 0x34;
                      iVar7 = (**(code **)(*(int64_t *)*puVar2 + 0x90))
                                        ((int64_t *)*puVar2,
                                         *(int64_t *)(unaff_RBX + 0x448) + lVar18);
                      if (iVar7 != 0) break;
                      if (*(int *)(*(int64_t *)(unaff_RBX + 0x448) + 4 + uVar9) == 0) {
                        *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11630) +
                         (int64_t)*(int *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11628) * 8) =
                             *(int64_t *)(unaff_RBX + 0x448) + 0x14 + lVar18;
                        piVar3 = (int *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11628);
                        *piVar3 = *piVar3 + 1;
                      }
                      uVar14 = uVar14 + 1;
                      uVar9 = uVar9 + 0x34;
                      uVar15 = (uint64_t)((int)uVar15 + 1);
                      uVar17 = uVar17 + 0x18;
                    } while ((int64_t)uVar14 < (int64_t)iVar16);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1808027ba:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808027ca(void)
void FUN_1808027ca(void)

{
  uint64_t in_stack_000000d0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808027ec(void)
void FUN_1808027ec(void)

{
  int *piVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar10;
  int32_t uVar11;
  int32_t *puVar12;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar13;
  int64_t *unaff_RSI;
  uint64_t uVar14;
  int *unaff_R12;
  uint64_t *unaff_R13;
  int iVar15;
  uint64_t uVar16;
  int *unaff_R15;
  uint64_t *puVar17;
  int in_stack_00000030;
  int iStack0000000000000034;
  int in_stack_00000038;
  int32_t uStack000000000000003c;
  int32_t *in_stack_00000048;
  uint64_t in_stack_000000d0;
  uint in_stack_00000158;
  uint64_t uVar9;
  
  iVar6 = (**(code **)(**(int64_t **)(unaff_RBX + 0x450) + 0x70))
                    (*(int64_t **)(unaff_RBX + 0x450),(double)*unaff_R12);
  if (iVar6 != 0) {
    *unaff_R12 = *(int *)(*unaff_RSI + 0x28 + unaff_RBP);
  }
  puVar12 = &stack0x00000038;
  uVar13 = 0;
  in_stack_00000030 = 0;
  iStack0000000000000034 = 0;
  uStack000000000000003c = 0;
  in_stack_00000038 = 0;
  iVar6 = (**(code **)(*(int64_t *)*unaff_R13 + 0x58))
                    ((int64_t *)*unaff_R13,&stack0x00000030,&stack0x00000034,&stack0x0000003c,
                     puVar12);
  if (iVar6 == 0) {
    if (((int)in_stack_00000158 < in_stack_00000030) ||
       (iStack0000000000000034 < (int)in_stack_00000158)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((in_stack_00000038 < 0) && ((in_stack_00000158 & in_stack_00000158 - 1) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((in_stack_00000038 < 1) || ((int)in_stack_00000158 % in_stack_00000038 == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (((bVar3) && (bVar4)) && (bVar5)) {
      *(uint *)(unaff_RBX + 0x470) = in_stack_00000158;
    }
    else {
      *(int32_t *)(unaff_RBX + 0x470) = uStack000000000000003c;
      puVar12 = (int32_t *)((uint64_t)puVar12 & 0xffffffff00000000);
      iVar6 = FUN_1807869c0(unaff_RBX + 0x478,in_stack_00000158,*in_stack_00000048,*unaff_R15 << 2,
                            puVar12);
      if (iVar6 != 0) goto LAB_1808027ba;
    }
    lVar8 = *unaff_RSI;
    iVar6 = *(int *)(lVar8 + 0x20 + unaff_RBP);
    iVar15 = *(int *)(lVar8 + 0x24 + unaff_RBP);
    *(int *)(unaff_RBX + 0x464) = iVar6;
    iVar15 = iVar15 + iVar6;
    uVar11 = 0x20;
    if (*(int *)(lVar8 + 0x24 + unaff_RBP) < 0x20) {
      uVar11 = *(int32_t *)(lVar8 + 0x24 + unaff_RBP);
    }
    *(int32_t *)(unaff_RBX + 0x468) = uVar11;
    iVar6 = (**(code **)(*(int64_t *)*unaff_R13 + 0xb8))();
    uVar9 = (uint64_t)puVar12 & 0xffffffff00000000;
    *(bool *)(unaff_RBX + 0x460) = iVar6 == 0;
    lVar8 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar15 * 0x18,&unknown_var_7392_ptr,400,
                          uVar9);
    *(int64_t *)(unaff_RBX + 0x440) = lVar8;
    if (lVar8 != 0) {
      uVar9 = uVar9 & 0xffffffff00000000;
      lVar8 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar15 * 0x34,&unknown_var_7392_ptr,
                            0x196,uVar9);
      *(int64_t *)(unaff_RBX + 0x448) = lVar8;
      if (lVar8 != 0) {
        lVar8 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                              *unaff_R15 * *(int *)(unaff_RBX + 0x470) * 4,&unknown_var_7392_ptr,0x19d,
                              uVar9 & 0xffffffff00000000);
        *(int64_t *)(unaff_RBX + 0x458) = lVar8;
        if (lVar8 != 0) {
          lVar8 = *unaff_RSI;
          puVar12 = *(int32_t **)(unaff_RBX + 0x440);
          uVar9 = uVar13;
          if (0 < *(int *)(lVar8 + 0x20 + unaff_RBP)) {
            do {
              puVar12[1] = (int)uVar9;
              uVar7 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar7;
              *puVar12 = 1;
              puVar12 = puVar12 + 6;
              lVar8 = *unaff_RSI;
            } while ((int)uVar7 < *(int *)(lVar8 + 0x20 + unaff_RBP));
          }
          uVar9 = uVar13;
          if (0 < *(int *)(lVar8 + 0x24 + unaff_RBP)) {
            do {
              puVar12[1] = (int)uVar9;
              uVar7 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar7;
              *puVar12 = 0;
              puVar12 = puVar12 + 6;
            } while ((int)uVar7 < *(int *)(*unaff_RSI + 0x24 + unaff_RBP));
          }
          puVar17 = (uint64_t *)(unaff_RBX + 0x418);
          plVar2 = (int64_t *)*unaff_R13;
          ui_system_memory = unaff_RBX;
          *(void **)(unaff_RBX + 0x428) = &unknown_var_6832_ptr;
          *puVar17 = &unknown_var_6880_ptr;
          *(code **)(unaff_RBX + 0x420) = _guard_check_icall;
          *(code **)(unaff_RBX + 0x430) = FUN_180801cc0;
          iVar6 = (**(code **)(*plVar2 + 0x98))
                            (plVar2,*(uint64_t *)(unaff_RBX + 0x440),iVar15,
                             *(int32_t *)(unaff_RBX + 0x470),puVar17);
          if (iVar6 == 0) {
            uVar10 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar15 * 8,&unknown_var_7392_ptr
                                   ,0x1b9,(uint64_t)puVar17 & 0xffffffff00000000);
            *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11630) = uVar10;
            if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11630) != 0) {
              *(int32_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11628) = 0;
              uVar9 = uVar13;
              uVar14 = uVar13;
              uVar16 = uVar13;
              if (0 < iVar15) {
                do {
                  *(int32_t *)(uVar9 + *(int64_t *)(unaff_RBX + 0x448)) =
                       *(int32_t *)(*(int64_t *)(unaff_RBX + 0x440) + 4 + uVar16);
                  *(int32_t *)(uVar9 + 4 + *(int64_t *)(unaff_RBX + 0x448)) =
                       *(int32_t *)(uVar16 + *(int64_t *)(unaff_RBX + 0x440));
                  lVar8 = (int64_t)(int)uVar14 * 0x34;
                  iVar6 = (**(code **)(*(int64_t *)*unaff_R13 + 0x90))
                                    ((int64_t *)*unaff_R13,*(int64_t *)(unaff_RBX + 0x448) + lVar8
                                    );
                  if (iVar6 != 0) break;
                  if (*(int *)(*(int64_t *)(unaff_RBX + 0x448) + 4 + uVar9) == 0) {
                    *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11630) +
                     (int64_t)*(int *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11628) * 8) =
                         *(int64_t *)(unaff_RBX + 0x448) + 0x14 + lVar8;
                    piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x48) + 0x11628);
                    *piVar1 = *piVar1 + 1;
                  }
                  uVar13 = uVar13 + 1;
                  uVar9 = uVar9 + 0x34;
                  uVar14 = (uint64_t)((int)uVar14 + 1);
                  uVar16 = uVar16 + 0x18;
                } while ((int64_t)uVar13 < (int64_t)iVar15);
              }
            }
          }
        }
      }
    }
  }
LAB_1808027ba:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180802bae(void)
void FUN_180802bae(void)

{
  uint64_t in_stack_000000d0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180802c10(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_180802c10(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t *param_5,int *param_6,uint64_t param_7,int32_t *param_8)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  int32_t uStack_64;
  double adStack_60 [5];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  plVar2 = (int64_t *)(param_1 + 0x448);
  if (param_1 == 0) {
    plVar2 = (int64_t *)0x450;
  }
  plVar1 = (int64_t *)*plVar2;
  if (plVar1 != (int64_t *)0x0) {
    adStack_60[1] = 0.0;
    adStack_60[2] = 0.0;
    adStack_60[3] = 0.0;
    adStack_60[4] = 0.0;
    (**(code **)(*plVar1 + 0x20))(plVar1,adStack_60 + 1);
    adStack_60[0] = 0.0;
    (**(code **)(*(int64_t *)*plVar2 + 0x68))((int64_t *)*plVar2,adStack_60);
    uStack_68 = 0;
    uStack_64 = 0;
    (**(code **)(*(int64_t *)*plVar2 + 0x48))((int64_t *)*plVar2,&uStack_68,&uStack_64);
    func_0x00018076b450(param_3,adStack_60 + 1,param_4);
    *param_5 = 0xffffffffffffffff;
    param_5[1] = 0xffffffffffffffff;
    *param_6 = (int)adStack_60[0];
    *param_8 = uStack_68;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_88);
}



uint64_t
FUN_180802d50(int64_t param_1,int64_t param_2,uint param_3,uint param_4,int64_t *param_5,
             int64_t *param_6,uint *param_7,int *param_8)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_2 + 0x18);
  uVar4 = *(uint *)(param_2 + 0x24);
  if (iVar2 == 1) {
    lVar1 = 8;
  }
  else if (iVar2 == 2) {
    lVar1 = 0x10;
  }
  else if (iVar2 == 3) {
    lVar1 = 0x18;
  }
  else {
    if ((iVar2 != 4) && (iVar2 != 5)) goto LAB_180802da0;
    lVar1 = 0x20;
  }
  uVar4 = (uint)((uint64_t)uVar4 * lVar1 >> 3);
LAB_180802da0:
  uVar4 = uVar4 * *(int *)(param_2 + 0x20);
  if (uVar4 < param_4) {
    param_4 = uVar4;
  }
  if (uVar4 <= param_3) {
    *param_6 = 0;
    *param_5 = 0;
    *param_8 = 0;
    *param_7 = 0;
    return 0x1f;
  }
  plVar3 = (int64_t *)(param_1 + 0x4b0);
  if (param_1 == 0) {
    plVar3 = (int64_t *)0x4b8;
  }
  *param_5 = (uint64_t)param_3 + *plVar3;
  if (uVar4 < param_4 + param_3) {
    iVar2 = (param_4 - uVar4) + param_3;
    *param_7 = uVar4 - param_3;
    lVar1 = *plVar3;
  }
  else {
    *param_7 = param_4;
    iVar2 = 0;
    lVar1 = 0;
  }
  *param_6 = lVar1;
  *param_8 = iVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180802e50(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int aiStackX_8 [2];
  int32_t auStackX_18 [2];
  double dStackX_20;
  
  puVar7 = (uint64_t *)(param_1 + 0x448);
  if (param_1 == 0) {
    puVar7 = (uint64_t *)0x450;
  }
  dStackX_20 = 0.0;
  iVar2 = (**(code **)(*(int64_t *)*puVar7 + 0x68))((int64_t *)*puVar7,&dStackX_20);
  if (iVar2 != 0) {
    return 0x31;
  }
  aiStackX_8[0] = 0;
  auStackX_18[0] = 0;
  iVar2 = (**(code **)(*(int64_t *)*puVar7 + 0x48))((int64_t *)*puVar7,aiStackX_8,auStackX_18);
  if (iVar2 != 0) {
    return 0x31;
  }
  *(int32_t *)(param_2 + 0x18) = 5;
  iVar2 = aiStackX_8[0];
  if (*(int *)(param_2 + 0x20) < aiStackX_8[0]) {
    iVar2 = *(int *)(param_2 + 0x20);
  }
  *(int *)(param_2 + 0x20) = iVar2;
  *(int *)(param_2 + 0x1c) = (int)dStackX_20;
  piVar3 = (int *)(param_1 + 0x468);
  if (param_1 == 0) {
    piVar3 = (int *)0x470;
  }
  iVar1 = *piVar3;
  *(int *)(param_2 + 0x24) = iVar1 * 2;
  lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        iVar2 * (int)(((uint64_t)(uint)(iVar1 * 2) << 5) >> 3),&unknown_var_7392_ptr,0x2dc
                        ,0);
  plVar5 = (int64_t *)(param_1 + 0x4b0);
  if (param_1 == 0) {
    plVar5 = (int64_t *)0x4b8;
  }
  *plVar5 = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  puVar6 = (int32_t *)(param_1 + 0x4b8);
  if (param_1 == 0) {
    puVar6 = (int32_t *)0x4c0;
  }
  *puVar6 = 0;
  plVar5 = (int64_t *)(param_1 + 0x4a8);
  if (param_1 == 0) {
    plVar5 = (int64_t *)0x4b0;
  }
  *plVar5 = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180802ea1(int64_t *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int iStack0000000000000050;
  int32_t uStack0000000000000060;
  double in_stack_00000068;
  
  iStack0000000000000050 = 0;
  uStack0000000000000060 = 0;
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1,&stack0x00000050);
  if (iVar2 != 0) {
    return 0x31;
  }
  *(int32_t *)(unaff_RSI + 0x18) = 5;
  iVar2 = iStack0000000000000050;
  if (*(int *)(unaff_RSI + 0x20) < iStack0000000000000050) {
    iVar2 = *(int *)(unaff_RSI + 0x20);
  }
  *(int *)(unaff_RSI + 0x20) = iVar2;
  *(int *)(unaff_RSI + 0x1c) = (int)in_stack_00000068;
  piVar3 = (int *)(unaff_RBX + 0x468);
  if (unaff_RBX == 0) {
    piVar3 = (int *)0x470;
  }
  iVar1 = *piVar3;
  *(int *)(unaff_RSI + 0x24) = iVar1 * 2;
  lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        iVar2 * (int)(((uint64_t)(uint)(iVar1 * 2) << 5) >> 3),&unknown_var_7392_ptr,0x2dc
                        ,0);
  plVar5 = (int64_t *)(unaff_RBX + 0x4b0);
  if (unaff_RBX == 0) {
    plVar5 = (int64_t *)0x4b8;
  }
  *plVar5 = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  puVar6 = (int32_t *)(unaff_RBX + 0x4b8);
  if (unaff_RBX == 0) {
    puVar6 = (int32_t *)0x4c0;
  }
  *puVar6 = 0;
  plVar5 = (int64_t *)(unaff_RBX + 0x4a8);
  if (unaff_RBX == 0) {
    plVar5 = (int64_t *)0x4b0;
  }
  *plVar5 = unaff_RSI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180802ecf(void)

{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int in_stack_00000050;
  double in_stack_00000068;
  
  *(int32_t *)(unaff_RSI + 0x18) = 5;
  if (*(int *)(unaff_RSI + 0x20) < in_stack_00000050) {
    in_stack_00000050 = *(int *)(unaff_RSI + 0x20);
  }
  *(int *)(unaff_RSI + 0x20) = in_stack_00000050;
  *(int *)(unaff_RSI + 0x1c) = (int)in_stack_00000068;
  piVar2 = (int *)(unaff_RBX + 0x468);
  if (unaff_RBX == 0) {
    piVar2 = (int *)0x470;
  }
  iVar1 = *piVar2;
  *(int *)(unaff_RSI + 0x24) = iVar1 * 2;
  lVar3 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        in_stack_00000050 * (int)(((uint64_t)(uint)(iVar1 * 2) << 5) >> 3),
                        &unknown_var_7392_ptr,0x2dc);
  plVar4 = (int64_t *)(unaff_RBX + 0x4b0);
  if (unaff_RBX == 0) {
    plVar4 = (int64_t *)0x4b8;
  }
  *plVar4 = lVar3;
  if (lVar3 == 0) {
    return 0x26;
  }
  puVar5 = (int32_t *)(unaff_RBX + 0x4b8);
  if (unaff_RBX == 0) {
    puVar5 = (int32_t *)0x4c0;
  }
  *puVar5 = unaff_EBP;
  plVar4 = (int64_t *)(unaff_RBX + 0x4a8);
  if (unaff_RBX == 0) {
    plVar4 = (int64_t *)0x4b0;
  }
  *plVar4 = unaff_RSI;
  return unaff_EBP;
}



int32_t FUN_180802f65(void)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  uint64_t unaff_RSI;
  
  puVar1 = (int32_t *)(unaff_RBX + 0x4b8);
  if (unaff_RBX == 0) {
    puVar1 = (int32_t *)0x4c0;
  }
  *puVar1 = unaff_EBP;
  puVar2 = (uint64_t *)(unaff_RBX + 0x4a8);
  if (unaff_RBX == 0) {
    puVar2 = (uint64_t *)0x4b0;
  }
  *puVar2 = unaff_RSI;
  return unaff_EBP;
}





// 函数: void FUN_180802fa0(int64_t param_1)
void FUN_180802fa0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  puVar3 = (uint64_t *)(param_1 + 0x4a0);
  if (param_1 == 0) {
    puVar3 = (uint64_t *)0x4a8;
  }
  FUN_180768360(*puVar3);
  puVar2 = (uint64_t *)(param_1 + 0x4a8);
  if (param_1 == 0) {
    puVar2 = (uint64_t *)0x4b0;
  }
  uVar1 = *puVar3;
  *puVar2 = 0;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



uint64_t FUN_180803040(int64_t param_1)

{
  int iVar1;
  int8_t *puVar2;
  uint64_t *puVar3;
  
  puVar3 = (uint64_t *)(param_1 + 0x448);
  if (param_1 == 0) {
    puVar3 = (uint64_t *)0x450;
  }
  iVar1 = (**(code **)(*(int64_t *)*puVar3 + 0x38))();
  if (iVar1 != 0) {
    return 0x31;
  }
  puVar2 = (int8_t *)(param_1 + 0x459);
  if (param_1 == 0) {
    puVar2 = (int8_t *)0x461;
  }
  *puVar2 = 1;
  return 0;
}



uint64_t FUN_1808030a0(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  char *pcVar3;
  int8_t *puVar4;
  
  plVar2 = (int64_t *)(param_1 + 0x448);
  if (param_1 == 0) {
    plVar2 = (int64_t *)0x450;
  }
  if ((int64_t *)*plVar2 != (int64_t *)0x0) {
    pcVar3 = (char *)(param_1 + 0x459);
    if (param_1 == 0) {
      pcVar3 = (char *)0x461;
    }
    if (*pcVar3 != '\0') {
      iVar1 = (**(code **)(*(int64_t *)*plVar2 + 0x40))();
      if (iVar1 != 0) {
        return 0x31;
      }
    }
  }
  puVar4 = (int8_t *)(param_1 + 0x459);
  if (param_1 == 0) {
    puVar4 = (int8_t *)0x461;
  }
  *puVar4 = 0;
  return 0;
}





