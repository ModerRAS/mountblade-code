#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part067.c - 11 个函数

// 函数: void FUN_1807f8450(int64_t param_1)
void FUN_1807f8450(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x78),0,(int64_t)(*(int *)(param_1 + 0x10) + 1) << 3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f84f0(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int *piVar3;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  uVar4 = 0;
  lVar5 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8) * 0x10;
  if (((*(int *)(param_1 + 0x1c) != 0) &&
      (lVar8 = *(int64_t *)(param_1 + 0x38), lVar8 != *(int64_t *)(param_1 + 0x80))) &&
     (lVar8 != 0)) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&processed_var_6272_ptr,0xa4);
    *(uint64_t *)(param_1 + 0x38) = 0;
  }
  lVar8 = *(int64_t *)(param_1 + 0x68);
  if (lVar8 != 0) {
    lVar1 = *(int64_t *)(lVar5 + 0x180c35510);
    if (lVar8 == lVar1) {
      if ((*(int *)(lVar5 + 0x180c3551c) != 0) &&
         (iVar2 = *(int *)(lVar5 + 0x180c3551c) + -1, *(int *)(lVar5 + 0x180c3551c) = iVar2,
         iVar2 == 0)) {
        FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_6272_ptr,0xb3);
        *(int64_t *)(lVar5 + 0x180c35510) = 0;
      }
    }
    else {
      FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&processed_var_6272_ptr,0xac);
    }
    *(uint64_t *)(param_1 + 0x68) = 0;
  }
  if (*(int64_t *)(param_1 + 0x30) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x30),
                  &processed_var_6272_ptr,0xbc);
    *(uint64_t *)(param_1 + 0x30) = 0;
  }
  if (*(int64_t *)(param_1 + 0x80) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x80),
                  &processed_var_6272_ptr,0xc1);
    *(uint64_t *)(param_1 + 0x80) = 0;
  }
  if (*(int64_t *)(param_1 + 0x60) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x60),
                  &processed_var_6272_ptr,0xc6);
    *(uint64_t *)(param_1 + 0x60) = 0;
  }
  if (*(int64_t *)(param_1 + 0x70) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x70),
                  &processed_var_6272_ptr,0xcb);
    *(uint64_t *)(param_1 + 0x70) = 0;
  }
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    lVar5 = *(int64_t *)(param_1 + 8);
    lVar8 = lVar5;
    if (lVar5 != 0) {
      func_0x000180743c20(lVar5,0x13);
      lVar8 = *(int64_t *)(param_1 + 8);
    }
    lVar8 = (uint64_t)*(uint *)(lVar8 + 0x116b8) * 0x40;
    piVar3 = (int *)(lVar8 + 0x180c3531c);
    uVar7 = uVar4;
    do {
      if ((piVar3[-1] == *(int *)(param_1 + 0x24)) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
        puVar6 = (uint64_t *)((int64_t)(int)uVar7 * 0x10 + lVar8 + 0x180c35310);
        FUN_180789cf0(*puVar6);
        *puVar6 = 0;
        *(int32_t *)(puVar6 + 1) = 0;
        break;
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 4;
    } while ((int64_t)uVar4 < 4);
    *(uint64_t *)(param_1 + 0x48) = 0;
    if ((lVar5 != 0) && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
      SystemCoreHandler(lVar5,0x13);
    }
  }
  if (*(int64_t *)(param_1 + 0x40) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x40),
                  &rendering_buffer_2784_ptr,0x9b,unaff_RBX);
    *(uint64_t *)(param_1 + 0x40) = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f868a(void)

{
  int64_t lVar1;
  int *piVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t unaff_RDI;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t unaff_R14;
  uint64_t in_stack_00000040;
  
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  lVar6 = lVar1;
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,0x13);
    lVar6 = *(int64_t *)(unaff_RDI + 8);
  }
  uVar5 = unaff_R14 & 0xffffffff;
  lVar6 = (uint64_t)*(uint *)(lVar6 + 0x116b8) * 0x40;
  piVar2 = (int *)(lVar6 + 0x180c3531c);
  uVar3 = unaff_R14;
  while ((piVar2[-1] != *(int *)(unaff_RDI + 0x24) || (*piVar2 = *piVar2 + -1, *piVar2 != 0))) {
    uVar5 = (uint64_t)((int)uVar5 + 1);
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 4;
    if (3 < (int64_t)uVar3) {
LAB_1807f870e:
      *(uint64_t *)(unaff_RDI + 0x48) = unaff_R14;
      if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
        SystemCoreHandler(lVar1,0x13);
      }
      if (*(int64_t *)(unaff_RDI + 0x40) != 0) {
        FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RDI + 0x40),
                      &rendering_buffer_2784_ptr,0x9b,in_stack_00000040);
        *(uint64_t *)(unaff_RDI + 0x40) = 0;
      }
      return 0;
    }
  }
  puVar4 = (uint64_t *)((int64_t)(int)uVar5 * 0x10 + lVar6 + 0x180c35310);
  FUN_180789cf0(*puVar4);
  *puVar4 = unaff_R14;
  *(int *)(puVar4 + 1) = (int)unaff_R14;
  goto LAB_1807f870e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f871c(void)

{
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t in_stack_00000040;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  if (*(int64_t *)(unaff_RDI + 0x40) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RDI + 0x40),
                  &rendering_buffer_2784_ptr,0x9b,in_stack_00000040);
    *(uint64_t *)(unaff_RDI + 0x40) = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f8733(void)

{
  int64_t unaff_RDI;
  uint64_t in_stack_00000040;
  
  if (*(int64_t *)(unaff_RDI + 0x40) != 0) {
    FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RDI + 0x40),
                  &rendering_buffer_2784_ptr,0x9b,in_stack_00000040);
    *(uint64_t *)(unaff_RDI + 0x40) = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f8750(int64_t param_1,int64_t param_2,int param_3,int param_4,uint64_t param_5
                       ,uint64_t param_6,uint param_7,int param_8,uint64_t param_9,
                       uint64_t param_10,uint64_t param_11,uint64_t param_12)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int *piVar5;
  uint uVar6;
  int64_t *plVar7;
  uint uVar8;
  int64_t lVar9;
  bool bVar10;
  
  lVar9 = (uint64_t)*(uint *)(param_2 + 0x116b8) * 0x10;
  iVar1 = param_8;
  uVar2 = FUN_1807916e0();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = 0;
  lVar3 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 0x24) << 2,0x10,
                        &processed_var_6272_ptr,0x2d,0,param_7,iVar1,param_9,param_10,param_11,param_12);
  *(int64_t *)(param_1 + 0x30) = lVar3;
  if (lVar3 != 0) {
    lVar3 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 0x24) << 2,0x10
                          ,&processed_var_6272_ptr,0x2f,0,param_7,iVar1,param_9,param_10,param_11,param_12);
    *(int64_t *)(param_1 + 0x80) = lVar3;
    if (lVar3 != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        *(int64_t *)(param_1 + 0x38) = lVar3;
      }
      else {
        lVar3 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                              (*(int *)(param_1 + 0x1c) + 1) * *(int *)(param_1 + 0x10) * 4,0x10,
                              &processed_var_6272_ptr,0x33,0,param_7,iVar1,param_9,param_10,param_11,param_12
                             );
        *(int64_t *)(param_1 + 0x38) = lVar3;
        if (lVar3 == 0) {
          return 0x26;
        }
      }
      lVar3 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                            (*(int *)(param_1 + 0x10) + 1) * *(int *)(param_1 + 0x20) * 8,0x10,
                            &processed_var_6272_ptr,0x3a,0,param_7,iVar1,param_9,param_10,param_11,param_12);
      *(int64_t *)(param_1 + 0x60) = lVar3;
      if (lVar3 != 0) {
        lVar3 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                              (*(int *)(param_1 + 0x10) + 1) * *(int *)(param_1 + 0x14) * 8,0x10,
                              &processed_var_6272_ptr,0x3c,0,param_7 & 0xffffff00);
        *(int64_t *)(param_1 + 0x70) = lVar3;
        if (lVar3 != 0) {
          if ((param_4 == 0) ||
             ((*(int *)(lVar9 + 0x180c35518) != 0 && (*(int *)(lVar9 + 0x180c35518) < param_3)))) {
            lVar9 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  *(int *)(param_1 + 0x24) << 3,0x10,&processed_var_6272_ptr,0x52,0);
            *(int64_t *)(param_1 + 0x68) = lVar9;
            if (lVar9 == 0) {
              return 0x26;
            }
          }
          else {
            uVar4 = *(uint64_t *)(lVar9 + 0x180c35510);
            if ((uVar4 == 0) && (uVar4 = uVar2, *(int *)(lVar9 + 0x180c3551c) == 0)) {
              uVar4 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_4 << 4,0x10,
                                    &processed_var_6272_ptr,0x47,0);
              *(uint64_t *)(lVar9 + 0x180c35510) = uVar4;
              if (uVar4 == 0) {
                return 0x26;
              }
              *(int *)(lVar9 + 0x180c35518) = param_4;
            }
            *(uint64_t *)(param_1 + 0x68) = uVar4;
            *(int *)(lVar9 + 0x180c3551c) = *(int *)(lVar9 + 0x180c3551c) + 1;
            lVar9 = *(int64_t *)(param_1 + 0x68);
          }
          *(int64_t *)(param_1 + 0x78) = lVar9;
          iVar1 = *(int *)(param_1 + 0x20) + -1;
          *(int32_t *)(param_1 + 0x50) = 0;
          *(int *)(param_1 + 0x28) = iVar1;
          *(int *)(param_1 + 0x54) = iVar1;
          *(uint64_t *)(param_1 + 0x58) = 0;
          uVar4 = func_0x000180746360(param_2,param_1 + 0x58,0);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if ((*(int *)(param_1 + 0x1c) + 1) * *(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x58))
          {
            *(int32_t *)(param_1 + 0x58) = 0;
          }
          lVar9 = *(int64_t *)(param_1 + 8);
          bVar10 = lVar9 != 0;
          lVar3 = lVar9;
          if (bVar10) {
            func_0x000180743c20(lVar9,0x13);
            lVar3 = *(int64_t *)(param_1 + 8);
          }
          lVar3 = (uint64_t)*(uint *)(lVar3 + 0x116b8) * 0x40;
          piVar5 = (int *)(lVar3 + 0x180c35318);
          uVar4 = uVar2;
          while( true ) {
            uVar8 = (uint)uVar4;
            if ((*piVar5 == 0) || (*piVar5 == *(int *)(param_1 + 0x24))) break;
            uVar8 = uVar8 + 1;
            uVar4 = (uint64_t)uVar8;
            uVar2 = uVar2 + 1;
            piVar5 = piVar5 + 4;
            if (3 < (int64_t)uVar2) {
LAB_1807f8b27:
              if (uVar8 != 4) {
                if ((bVar10) && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
                  SystemCoreHandler(lVar9,0x13);
                }
                return 0;
              }
              uVar6 = 0x1c;
LAB_1807f8b2f:
              if ((bVar10) && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
                SystemCoreHandler(lVar9,0x13);
              }
              return (uint64_t)uVar6;
            }
          }
          plVar7 = (int64_t *)((int64_t)(int)uVar8 * 0x10 + lVar3 + 0x180c35310);
          *(int32_t *)(plVar7 + 1) = *(int32_t *)(param_1 + 0x24);
          if (*(int *)((int64_t)plVar7 + 0xc) == 0) {
            lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_6272_ptr,0x79,0
                                 );
            *plVar7 = lVar3;
            if (lVar3 == 0) {
              uVar6 = 0x26;
              goto LAB_1807f8b2f;
            }
            uVar6 = FUN_180789470(lVar3,*(int32_t *)(param_1 + 0x24),0 < param_8);
            if (uVar6 != 0) {
              FUN_180789cf0(*plVar7);
              *plVar7 = 0;
              goto LAB_1807f8b2f;
            }
          }
          *(int64_t *)(param_1 + 0x48) = *plVar7;
          *(int *)((int64_t)plVar7 + 0xc) = *(int *)((int64_t)plVar7 + 0xc) + 1;
          goto LAB_1807f8b27;
        }
      }
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f8804(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int *piVar4;
  uint64_t uVar5;
  int64_t unaff_RBX;
  int unaff_EBP;
  uint uVar6;
  int unaff_ESI;
  int64_t *plVar7;
  uint uVar8;
  uint64_t *unaff_RDI;
  int64_t lVar9;
  int unaff_R12D;
  bool bVar10;
  int32_t uStack0000000000000028;
  
  uVar5 = 0;
  uStack0000000000000028 = 0;
  lVar2 = FUN_180741d80(*(uint64_t *)(param_1 + 0x1a0),param_2 << 2,param_3,param_4,0x2d);
  *(int64_t *)(unaff_RBX + 0x30) = lVar2;
  if (lVar2 != 0) {
    uStack0000000000000028 = 0;
    lVar2 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(unaff_RBX + 0x24) << 2,
                          0x10,&processed_var_6272_ptr,0x2f);
    *(int64_t *)(unaff_RBX + 0x80) = lVar2;
    if (lVar2 != 0) {
      if (*(int *)(unaff_RBX + 0x1c) == 0) {
        *(int64_t *)(unaff_RBX + 0x38) = lVar2;
      }
      else {
        uStack0000000000000028 = 0;
        lVar2 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                              (*(int *)(unaff_RBX + 0x1c) + 1) * *(int *)(unaff_RBX + 0x10) * 4,0x10
                              ,&processed_var_6272_ptr,0x33);
        *(int64_t *)(unaff_RBX + 0x38) = lVar2;
        if (lVar2 == 0) {
          return 0x26;
        }
      }
      uStack0000000000000028 = 0;
      lVar2 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                            (*(int *)(unaff_RBX + 0x10) + 1) * *(int *)(unaff_RBX + 0x20) * 8,0x10,
                            &processed_var_6272_ptr,0x3a);
      *(int64_t *)(unaff_RBX + 0x60) = lVar2;
      if (lVar2 != 0) {
        uStack0000000000000028 = 0;
        lVar2 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                              (*(int *)(unaff_RBX + 0x10) + 1) * *(int *)(unaff_RBX + 0x14) * 8,0x10
                              ,&processed_var_6272_ptr,0x3c);
        *(int64_t *)(unaff_RBX + 0x70) = lVar2;
        if (lVar2 != 0) {
          if ((unaff_ESI == 0) || (((int)unaff_RDI[1] != 0 && ((int)unaff_RDI[1] < unaff_EBP)))) {
            uStack0000000000000028 = 0;
            lVar2 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  *(int *)(unaff_RBX + 0x24) << 3,0x10,&processed_var_6272_ptr,0x52);
            *(int64_t *)(unaff_RBX + 0x68) = lVar2;
            if (lVar2 == 0) {
              return 0x26;
            }
          }
          else {
            uVar3 = *unaff_RDI;
            if ((*unaff_RDI == 0) && (uVar3 = uVar5, *(int *)((int64_t)unaff_RDI + 0xc) == 0)) {
              uStack0000000000000028 = 0;
              uVar3 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_ESI << 4,0x10,
                                    &processed_var_6272_ptr,0x47);
              *unaff_RDI = uVar3;
              if (uVar3 == 0) {
                return 0x26;
              }
              *(int *)(unaff_RDI + 1) = unaff_ESI;
            }
            *(uint64_t *)(unaff_RBX + 0x68) = uVar3;
            *(int *)((int64_t)unaff_RDI + 0xc) = *(int *)((int64_t)unaff_RDI + 0xc) + 1;
            lVar2 = *(int64_t *)(unaff_RBX + 0x68);
          }
          *(int64_t *)(unaff_RBX + 0x78) = lVar2;
          iVar1 = *(int *)(unaff_RBX + 0x20) + -1;
          *(int32_t *)(unaff_RBX + 0x50) = 0;
          *(int *)(unaff_RBX + 0x28) = iVar1;
          *(int *)(unaff_RBX + 0x54) = iVar1;
          *(uint64_t *)(unaff_RBX + 0x58) = 0;
          uVar3 = func_0x000180746360();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if ((*(int *)(unaff_RBX + 0x1c) + 1) * *(int *)(unaff_RBX + 0x10) <=
              *(int *)(unaff_RBX + 0x58)) {
            *(int32_t *)(unaff_RBX + 0x58) = 0;
          }
          lVar2 = *(int64_t *)(unaff_RBX + 8);
          bVar10 = lVar2 != 0;
          lVar9 = lVar2;
          if (bVar10) {
            func_0x000180743c20(lVar2,0x13);
            lVar9 = *(int64_t *)(unaff_RBX + 8);
          }
          lVar9 = (uint64_t)*(uint *)(lVar9 + 0x116b8) * 0x40;
          piVar4 = (int *)(lVar9 + 0x180c35318);
          uVar3 = uVar5;
          while( true ) {
            uVar8 = (uint)uVar3;
            if ((*piVar4 == 0) || (*piVar4 == *(int *)(unaff_RBX + 0x24))) break;
            uVar8 = uVar8 + 1;
            uVar3 = (uint64_t)uVar8;
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 4;
            if (3 < (int64_t)uVar5) {
LAB_1807f8b27:
              if (uVar8 != 4) {
                if ((bVar10) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
                  SystemCoreHandler(lVar2,0x13);
                }
                return 0;
              }
              uVar6 = 0x1c;
LAB_1807f8b2f:
              if ((bVar10) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
                SystemCoreHandler(lVar2,0x13);
              }
              return (uint64_t)uVar6;
            }
          }
          plVar7 = (int64_t *)((int64_t)(int)uVar8 * 0x10 + lVar9 + 0x180c35310);
          *(int32_t *)(plVar7 + 1) = *(int32_t *)(unaff_RBX + 0x24);
          if (*(int *)((int64_t)plVar7 + 0xc) == 0) {
            lVar9 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_6272_ptr,0x79,0
                                 );
            *plVar7 = lVar9;
            if (lVar9 == 0) {
              uVar6 = 0x26;
              goto LAB_1807f8b2f;
            }
            uVar6 = FUN_180789470(lVar9,*(int32_t *)(unaff_RBX + 0x24),0 < unaff_R12D);
            if (uVar6 != 0) {
              FUN_180789cf0(*plVar7);
              *plVar7 = 0;
              goto LAB_1807f8b2f;
            }
          }
          *(int64_t *)(unaff_RBX + 0x48) = *plVar7;
          *(int *)((int64_t)plVar7 + 0xc) = *(int *)((int64_t)plVar7 + 0xc) + 1;
          goto LAB_1807f8b27;
        }
      }
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807f8a35(void)

{
  int64_t lVar1;
  int in_EAX;
  int *piVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int iVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int unaff_R12D;
  uint64_t unaff_R13;
  bool bVar9;
  
  if (in_EAX * *(int *)(unaff_RBX + 0x10) <= *(int *)(unaff_RBX + 0x58)) {
    *(int *)(unaff_RBX + 0x58) = (int)unaff_R13;
  }
  lVar1 = *(int64_t *)(unaff_RBX + 8);
  bVar9 = lVar1 != 0;
  lVar8 = lVar1;
  if (bVar9) {
    func_0x000180743c20(lVar1,0x13);
    lVar8 = *(int64_t *)(unaff_RBX + 8);
  }
  uVar7 = unaff_R13 & 0xffffffff;
  lVar8 = (uint64_t)*(uint *)(lVar8 + 0x116b8) * 0x40;
  piVar2 = (int *)(lVar8 + 0x180c35318);
  uVar3 = unaff_R13;
  while( true ) {
    uVar6 = (uint)uVar7;
    if ((*piVar2 == 0) || (*piVar2 == *(int *)(unaff_RBX + 0x24))) break;
    uVar6 = uVar6 + 1;
    uVar7 = (uint64_t)uVar6;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 4;
    if (3 < (int64_t)uVar3) {
LAB_1807f8b27:
      if (uVar6 == 4) {
        iVar4 = 0x1c;
LAB_1807f8b2f:
        if ((bVar9) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
          SystemCoreHandler(lVar1,0x13);
        }
      }
      else {
        if ((bVar9) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
          SystemCoreHandler(lVar1,0x13);
        }
        iVar4 = 0;
      }
      return iVar4;
    }
  }
  puVar5 = (uint64_t *)((int64_t)(int)uVar6 * 0x10 + lVar8 + 0x180c35310);
  *(int32_t *)(puVar5 + 1) = *(int32_t *)(unaff_RBX + 0x24);
  if (*(int *)((int64_t)puVar5 + 0xc) == (int)unaff_R13) {
    uVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_6272_ptr);
    *puVar5 = uVar3;
    if (uVar3 == 0) {
      iVar4 = 0x26;
      goto LAB_1807f8b2f;
    }
    iVar4 = FUN_180789470(uVar3,*(int32_t *)(unaff_RBX + 0x24),0 < unaff_R12D);
    if (iVar4 != 0) {
      FUN_180789cf0(*puVar5);
      *puVar5 = unaff_R13;
      goto LAB_1807f8b2f;
    }
  }
  *(uint64_t *)(unaff_RBX + 0x48) = *puVar5;
  *(int *)((int64_t)puVar5 + 0xc) = *(int *)((int64_t)puVar5 + 0xc) + 1;
  goto LAB_1807f8b27;
}






// 函数: void FUN_1807f8b50(void)
void FUN_1807f8b50(void)

{
  return;
}






// 函数: void FUN_1807f8b58(void)
void FUN_1807f8b58(void)

{
  return;
}



uint64_t FUN_1807f8b6c(void)

{
  int64_t unaff_R14;
  char unaff_R15B;
  
  if ((unaff_R15B != '\0') && (unaff_R14 != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return 0;
}



uint64_t
FUN_1807f8b90(int64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,uint64_t param_5,
             uint64_t param_6,int param_7)

{
  if (param_4 < param_7) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  memcpy(*(int64_t *)(param_1 + 0x30) + (int64_t)*(int *)(param_1 + 0x50) * 4,param_2,
         (int64_t)param_4 * 4);
}






// 函数: void FUN_1807f8e60(int64_t param_1)
void FUN_1807f8e60(int64_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_180791b40();
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x60),0,
           (int64_t)(*(int *)(param_1 + 0x10) + 1) * (int64_t)*(int *)(param_1 + 0x20) * 8);
  }
  return;
}






// 函数: void FUN_1807f8ed0(int64_t param_1)
void FUN_1807f8ed0(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(*(int64_t *)(param_1 + 0x30) + (int64_t)*(int *)(param_1 + 0x10) * 4,0);
}






// 函数: void FUN_1807f90a0(int64_t param_1)
void FUN_1807f90a0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  uVar1 = *(uint64_t *)
           (((int64_t)*(int *)(param_1 + 0x154) + (int64_t)*(int *)(param_1 + 0x150) * 2) * 8 +
           0x180c36c10);
  SystemMemoryAllocator(uVar1);
  plVar3 = (int64_t *)
           (((int64_t)*(int *)(param_1 + 0x154) + (int64_t)*(int *)(param_1 + 0x150) * 2) * 0x18 +
           0x180be6170);
  plVar4 = (int64_t *)*plVar3;
  if (plVar4 != plVar3) {
    do {
      lVar2 = plVar4[2];
      while (0 < *(int *)(lVar2 + 0x88)) {
        FUN_180772cd0((int64_t)*(int *)(param_1 + 0x154) * 0x3c + 0x11008 +
                      *(int64_t *)(lVar2 + 8));
        FUN_1807f8450(lVar2);
        LOCK();
        *(int *)(lVar2 + 0x88) = *(int *)(lVar2 + 0x88) + -1;
        UNLOCK();
        FUN_180772cf0((int64_t)*(int *)(param_1 + 0x154) * 0x3c + 0x11008 +
                      *(int64_t *)(lVar2 + 8),0x5a);
      }
      plVar4 = (int64_t *)*plVar4;
    } while (plVar4 != (int64_t *)
                       (((int64_t)*(int *)(param_1 + 0x154) +
                        (int64_t)*(int *)(param_1 + 0x150) * 2) * 0x18 + 0x180be6170));
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}






// 函数: void FUN_1807f910e(void)
void FUN_1807f910e(void)

{
  int64_t lVar1;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  
  do {
    lVar1 = unaff_RSI[2];
    while (0 < *(int *)(lVar1 + 0x88)) {
      FUN_180772cd0((int64_t)*(int *)(unaff_RDI + 0x154) * 0x3c + 0x11008 +
                    *(int64_t *)(lVar1 + 8));
      FUN_1807f8450(lVar1);
      LOCK();
      *(int *)(lVar1 + 0x88) = *(int *)(lVar1 + 0x88) + -1;
      UNLOCK();
      FUN_180772cf0((int64_t)*(int *)(unaff_RDI + 0x154) * 0x3c + 0x11008 +
                    *(int64_t *)(lVar1 + 8),0x5a);
    }
    unaff_RSI = (int64_t *)*unaff_RSI;
  } while (unaff_RSI !=
           (int64_t *)
           (((int64_t)*(int *)(unaff_RDI + 0x154) + (int64_t)*(int *)(unaff_RDI + 0x150) * 2) *
            0x18 + 0xbe6170 + unaff_R14));
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}






// 函数: void FUN_1807f91a7(void)
void FUN_1807f91a7(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t * FUN_1807f91d0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_8408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x158);
  }
  return param_1;
}






// 函数: void FUN_1807f9200(int64_t param_1)
void FUN_1807f9200(int64_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_1807897b0(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x30),
                        *(uint64_t *)(param_1 + 0x68),0,1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10) + 1;
                    // WARNING: Subroutine does not return
    memcpy(*(int64_t *)(param_1 + 0x60) + (int64_t)(iVar1 * *(int *)(param_1 + 0x28)) * 8,
           *(uint64_t *)(param_1 + 0x68),(int64_t)iVar1 << 3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f92b0(int64_t param_1)
void FUN_1807f92b0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int *piVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  SystemMemoryAllocator(*(uint64_t *)
                 ((uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8) * 8 + 0x180c36c90));
  uVar3 = *(uint64_t *)
           (((int64_t)*(int *)(param_1 + 0xa8) +
            (uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8) * 2) * 8 + 0x180c36c10);
  SystemMemoryAllocator(uVar3);
  plVar1 = (int64_t *)(param_1 + 0x90);
  **(int64_t **)(param_1 + 0x98) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x98);
  *(int64_t **)(param_1 + 0x98) = plVar1;
  *plVar1 = (int64_t)plVar1;
  uVar4 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8);
  uVar6 = 0;
  if (*(int64_t *)(param_1 + 0x78) != 0) {
    piVar5 = (int *)(uVar4 * 0x20 + 0x180c36b18);
    uVar7 = uVar6;
    do {
      if (*piVar5 == *(int *)(param_1 + 0x24)) {
        lVar8 = (int64_t)(int)uVar7;
        piVar5 = (int *)((uVar4 * 2 + lVar8) * 0x10 + 0x180c36b1c);
        *piVar5 = *piVar5 + -1;
        lVar2 = lVar8 + (uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8) * 2;
        if (*(int *)(lVar2 * 0x10 + 0x180c36b1c) == 0) {
          FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        *(uint64_t *)(lVar2 * 0x10 + 0x180c36b10),&processed_var_6448_ptr,0x102);
          *(uint64_t *)
           ((lVar8 + (uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8) * 2) * 0x10 +
           0x180c36b10) = 0;
          *(int32_t *)
           ((lVar8 + (uint64_t)*(uint *)(*(int64_t *)(param_1 + 8) + 0x116b8) * 2) * 0x10 +
           0x180c36b18) = 0;
        }
        break;
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 4;
    } while ((int64_t)uVar6 < 2);
    *(uint64_t *)(param_1 + 0x78) = 0;
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f92cd(void)
void FUN_1807f92cd(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  int *piVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t unaff_RBX;
  int64_t lVar8;
  int64_t unaff_R12;
  
  SystemMemoryAllocator(*(uint64_t *)(unaff_R12 + 0xc36c90 + (uint64_t)*(uint *)(in_RAX + 0x116b8) * 8));
  uVar3 = *(uint64_t *)
           (unaff_R12 + 0xc36c10 +
           ((int64_t)*(int *)(unaff_RBX + 0xa8) +
           (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 8);
  SystemMemoryAllocator(uVar3);
  plVar1 = (int64_t *)(unaff_RBX + 0x90);
  **(int64_t **)(unaff_RBX + 0x98) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RBX + 0x98);
  *(int64_t **)(unaff_RBX + 0x98) = plVar1;
  *plVar1 = (int64_t)plVar1;
  uVar4 = (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8);
  uVar6 = 0;
  if (*(int64_t *)(unaff_RBX + 0x78) != 0) {
    piVar5 = (int *)(uVar4 * 0x20 + 0x180c36b18);
    uVar7 = uVar6;
    do {
      if (*piVar5 == *(int *)(unaff_RBX + 0x24)) {
        lVar8 = (int64_t)(int)uVar7;
        piVar5 = (int *)(unaff_R12 + 0xc36b1c + (uVar4 * 2 + lVar8) * 0x10);
        *piVar5 = *piVar5 + -1;
        lVar2 = lVar8 + (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2;
        if (*(int *)(unaff_R12 + 0xc36b1c + lVar2 * 0x10) == 0) {
          FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        *(uint64_t *)(unaff_R12 + 0xc36b10 + lVar2 * 0x10),&processed_var_6448_ptr,0x102);
          *(uint64_t *)
           (unaff_R12 + 0xc36b10 +
           (lVar8 + (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 0x10) = 0;
          *(int32_t *)
           (unaff_R12 + 0xc36b18 +
           (lVar8 + (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 0x10) = 0;
        }
        break;
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 4;
    } while ((int64_t)uVar6 < 2);
    *(uint64_t *)(unaff_RBX + 0x78) = 0;
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




