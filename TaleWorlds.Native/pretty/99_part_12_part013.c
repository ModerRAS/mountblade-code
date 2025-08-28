#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part013.c - 7 个函数

// 函数: void FUN_1807d2714(void)
void FUN_1807d2714(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t in_RAX;
  int64_t lVar4;
  uint64_t uVar5;
  int *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int in_stack_00000068;
  
  *(uint64_t *)unaff_RBX = in_RAX;
  *(uint64_t *)(unaff_RBX + 2) = in_RAX;
  *(uint64_t *)(unaff_RBX + 4) = in_RAX;
  *(uint64_t *)(unaff_RBX + 6) = in_RAX;
  *unaff_RBX = 0x20;
  *(int16_t *)(unaff_RBX + 2) = 0x30a;
  unaff_RBX[3] = *(int *)(unaff_RBP + 0xc);
  unaff_RBX[5] = *(int *)(unaff_RBP + 0x10);
  unaff_RBX[6] = *(int *)(unaff_RBP + 0x14);
  unaff_RBX[4] = 3;
  uVar1 = *(uint64_t *)(unaff_RDI + 0x38);
  SystemMemoryAllocator(uVar1);
  if ((*(int *)(unaff_RDI + 0x9c) != 0) && (*(int *)(unaff_RDI + 0x80) != 0)) {
    iVar3 = *(int *)(*(int64_t *)(unaff_RDI + 0x78) +
                    (int64_t)(int)(*(int *)(unaff_RDI + 0x80) - 1U & *(uint *)(unaff_RBP + 0xc)) *
                    4);
    if (iVar3 != -1) {
      lVar2 = *(int64_t *)(unaff_RDI + 0x88);
      do {
        lVar4 = (int64_t)iVar3;
        if (*(uint *)(lVar2 + lVar4 * 0x10) == *(uint *)(unaff_RBP + 0xc)) {
          lVar2 = *(int64_t *)(lVar2 + 8 + lVar4 * 0x10);
          if (((lVar2 != 0) &&
              (iVar3 = FUN_180768620(*(uint64_t *)(lVar2 + 0x10),*(int32_t *)(unaff_RBP + 0x10)
                                    ), iVar3 == 0)) &&
             (in_stack_00000068 = iVar3,
             uVar5 = FUN_1807685b0(*(uint64_t *)(lVar2 + 0x10),unaff_RBX + 8,
                                   *(int32_t *)(unaff_RBP + 0x14),&stack0x00000068),
             (uVar5 & 0xffffffef) == 0)) {
            *unaff_RBX = *unaff_RBX + in_stack_00000068;
            unaff_RBX[7] = in_stack_00000068;
            unaff_RBX[4] = 0;
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
      } while (iVar3 != -1);
    }
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}



uint64_t FUN_1807d27b7(void)

{
  return 0x26;
}






// 函数: void FUN_1807d27ca(int64_t param_1)
void FUN_1807d27ca(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int *unaff_RBX;
  int64_t unaff_RBP;
  int in_stack_00000068;
  
  lVar1 = *(int64_t *)(param_1 + 8 + in_RAX * 8);
  if (lVar1 != 0) {
    iVar2 = FUN_180768620(*(uint64_t *)(lVar1 + 0x10),*(int32_t *)(unaff_RBP + 0x10));
    if (iVar2 == 0) {
      in_stack_00000068 = iVar2;
      uVar3 = FUN_1807685b0(*(uint64_t *)(lVar1 + 0x10),unaff_RBX + 8,
                            *(int32_t *)(unaff_RBP + 0x14),&stack0x00000068);
      if ((uVar3 & 0xffffffef) == 0) {
        *unaff_RBX = *unaff_RBX + in_stack_00000068;
        unaff_RBX[7] = in_stack_00000068;
        unaff_RBX[4] = 0;
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}






// 函数: void FUN_1807d281f(void)
void FUN_1807d281f(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}



uint64_t FUN_1807d2880(uint64_t *param_1,int8_t *param_2)

{
  int8_t uVar1;
  
  uVar1 = (**(code **)*param_1)();
  *param_2 = uVar1;
  return 0;
}



uint64_t FUN_1807d28c0(int64_t *param_1,uint *param_2,uint64_t *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  uVar4 = FUN_1807d1bf0();
  if ((int)uVar4 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    lVar8 = (int64_t)(int)((int)param_1[1] - 1U & uVar1);
    piVar12 = (int *)(*param_1 + lVar8 * 4);
    iVar2 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(param_1[2] + (int64_t)iVar2 * 0x10) == uVar1) {
          return 0x1c;
        }
        piVar12 = (int *)(param_1[2] + 4 + (int64_t)iVar2 * 0x10);
        iVar2 = *piVar12;
      } while (iVar2 != -1);
    }
    iVar2 = (int)param_1[4];
    if (iVar2 == -1) {
      uVar4 = *param_3;
      iVar2 = (int)param_1[3];
      iVar7 = iVar2 + 1;
      uVar10 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar10) - uVar10;
      if (iVar3 < iVar7) {
        iVar11 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar7;
        if (iVar7 <= iVar11) {
          iVar3 = iVar11;
        }
        if (iVar3 < 4) {
          iVar11 = 4;
        }
        else if (iVar11 < iVar7) {
          iVar11 = iVar7;
        }
        uVar5 = FUN_180748010(param_1 + 2,iVar11);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      puVar6 = (uint64_t *)((int64_t)(int)param_1[3] * 0x10 + param_1[2]);
      *puVar6 = CONCAT44(0xffffffff,uVar1);
      puVar6[1] = uVar4;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar9 = (uint *)((int64_t)iVar2 * 0x10 + param_1[2]);
      *(uint *)(param_1 + 4) = puVar9[1];
      puVar9[1] = 0xffffffff;
      *puVar9 = *param_2;
      *(uint64_t *)(puVar9 + 2) = *param_3;
    }
    *piVar12 = iVar2;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1807d28e3(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int64_t *unaff_RDI;
  uint *unaff_R14;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000028;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  uVar1 = *unaff_R14;
  lVar7 = (int64_t)(int)(in_EAX - 1U & uVar1);
  piVar11 = (int *)(*unaff_RDI + lVar7 * 4);
  iVar2 = *(int *)(*unaff_RDI + lVar7 * 4);
  if (iVar2 != -1) {
    do {
      if (*(uint *)(unaff_RDI[2] + (int64_t)iVar2 * 0x10) == uVar1) {
        return 0x1c;
      }
      piVar11 = (int *)(unaff_RDI[2] + 4 + (int64_t)iVar2 * 0x10);
      iVar2 = *piVar11;
    } while (iVar2 != -1);
  }
  iVar2 = (int)unaff_RDI[4];
  if (iVar2 == -1) {
    uStack0000000000000028 = *unaff_R15;
    iVar2 = (int)unaff_RDI[3];
    iVar6 = iVar2 + 1;
    uVar9 = (int)*(uint *)((int64_t)unaff_RDI + 0x1c) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)unaff_RDI + 0x1c) ^ uVar9) - uVar9;
    if (iVar3 < iVar6) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar6;
      if (iVar6 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar6) {
        iVar10 = iVar6;
      }
      uVar4 = FUN_180748010(unaff_RDI + 2,iVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    puVar5 = (uint64_t *)((int64_t)(int)unaff_RDI[3] * 0x10 + unaff_RDI[2]);
    *puVar5 = CONCAT44(0xffffffff,uVar1);
    puVar5[1] = uStack0000000000000028;
    *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 1;
  }
  else {
    puVar8 = (uint *)((int64_t)iVar2 * 0x10 + unaff_RDI[2]);
    *(uint *)(unaff_RDI + 4) = puVar8[1];
    puVar8[1] = 0xffffffff;
    *puVar8 = *unaff_R14;
    *(uint64_t *)(puVar8 + 2) = *unaff_R15;
  }
  *piVar11 = iVar2;
  *(int *)((int64_t)unaff_RDI + 0x24) = *(int *)((int64_t)unaff_RDI + 0x24) + 1;
  return 0;
}






// 函数: void FUN_1807d29f2(void)
void FUN_1807d29f2(void)

{
  return;
}



uint64_t FUN_1807d29fc(void)

{
  return 0x1c;
}



uint64_t FUN_1807d2a10(int64_t param_1,int64_t param_2)

{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 == '\0') {
    uVar3 = FUN_1807d22d0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  else {
    if (cVar1 == '\x01') {
      uVar3 = *(uint64_t *)(param_1 + 0x38);
      SystemMemoryAllocator(uVar3);
      if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x58) != 0)) {
        iVar6 = *(int *)(*(int64_t *)(param_1 + 0x50) +
                        (int64_t)(int)(*(int *)(param_1 + 0x58) - 1U & *(uint *)(param_2 + 0xc)) *
                        4);
        if (iVar6 != -1) {
          lVar2 = *(int64_t *)(param_1 + 0x60);
          while (lVar4 = (int64_t)iVar6,
                *(uint *)(lVar2 + lVar4 * 0x10) != *(uint *)(param_2 + 0xc)) {
            iVar6 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
            if (iVar6 == -1) {
                    // WARNING: Subroutine does not return
              SystemMemoryManager(uVar3);
            }
          }
          lVar2 = *(int64_t *)(lVar2 + 8 + lVar4 * 0x10);
          if (lVar2 != 0) {
            *(int32_t *)(lVar2 + 0x18) = *(int32_t *)(param_2 + 0x10);
            *(int32_t *)(lVar2 + 0x14) = *(int32_t *)(param_2 + 0x14);
            uVar5 = *(uint64_t *)(lVar2 + 8);
LAB_1807d2ad9:
            FUN_180768910(uVar5);
          }
        }
      }
LAB_1807d2ade:
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar3);
    }
    if (cVar1 == '\x02') {
      uVar3 = FUN_1807d2660();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      if (cVar1 == '\x03') {
        uVar3 = *(uint64_t *)(param_1 + 0x38);
        SystemMemoryAllocator(uVar3);
        if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x58) != 0)) {
          iVar6 = *(int *)(*(int64_t *)(param_1 + 0x50) +
                          (int64_t)(int)(*(int *)(param_1 + 0x58) - 1U & *(uint *)(param_2 + 0xc))
                          * 4);
          if (iVar6 != -1) {
            lVar2 = *(int64_t *)(param_1 + 0x60);
            do {
              lVar4 = (int64_t)iVar6;
              if (*(uint *)(lVar2 + lVar4 * 0x10) == *(uint *)(param_2 + 0xc)) {
                lVar2 = *(int64_t *)(lVar2 + 8 + lVar4 * 0x10);
                if (lVar2 != 0) {
                  if ((*(uint *)(param_2 + 0x18) != *(uint *)(lVar2 + 0x28)) ||
                     (*(uint *)(lVar2 + 0x28) < *(uint *)(param_2 + 0x1c))) {
                    // WARNING: Subroutine does not return
                    SystemMemoryManager(uVar3);
                  }
                  if (*(int *)(param_2 + 0x10) == 0) {
                    // WARNING: Subroutine does not return
                    memcpy(*(uint64_t *)(lVar2 + 0x20),param_2 + 0x20,*(uint *)(param_2 + 0x1c));
                  }
                  uVar5 = *(uint64_t *)(lVar2 + 8);
                  *(int *)(lVar2 + 0x30) = *(int *)(param_2 + 0x10);
                  goto LAB_1807d2ad9;
                }
                break;
              }
              iVar6 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
            } while (iVar6 != -1);
          }
        }
        goto LAB_1807d2ade;
      }
      if ((cVar1 == '\x04') && (uVar3 = FUN_1807d1ed0(), (int)uVar3 != 0)) {
        return uVar3;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d2c10(int64_t param_1)
void FUN_1807d2c10(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uStack_30;
  int aiStack_28 [4];
  
  FUN_180768380(*(uint64_t *)(param_1 + 0x38),0);
  uStack_30 = 0xffffffffffffffff;
  aiStack_28[0] = -1;
  FUN_1807d1650(param_1 + 0x50,&uStack_30,aiStack_28);
  if (aiStack_28[0] != -1) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + 8 + (int64_t)aiStack_28[0] * 0x10);
    iVar2 = FUN_1807688f0(*(uint64_t *)(lVar1 + 8));
    if (iVar2 != 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&rendering_buffer_208_ptr,0x40,1);
  }
  uStack_30 = 0xffffffffffffffff;
  aiStack_28[0] = -1;
  FUN_1807d1650(param_1 + 0x78,&uStack_30,aiStack_28);
  if (aiStack_28[0] != -1) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + 8 + (int64_t)aiStack_28[0] * 0x10);
    if ((*(int64_t *)(lVar1 + 0x10) != 0) && (iVar2 = FUN_180768420(), iVar2 != 0)) {
      return;
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&rendering_buffer_208_ptr,0x6a,1);
  }
  if (*(int64_t *)(param_1 + 0x30) == 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x28),
                  &rendering_buffer_208_ptr,0xba,1);
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x30),&rendering_buffer_208_ptr
                ,0xb7,1);
}



uint64_t * FUN_1807d2f60(uint64_t *param_1,uint64_t param_2)

{
  int iVar1;
  
  FUN_1807d3160(param_1 + 0x11);
  iVar1 = SystemStatusChecker(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_1807d3080(param_1 + 0xe);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x10) = 0xffffffff;
      *(int32_t *)((int64_t)param_1 + 0x84) = 0;
    }
  }
  FUN_1807d3080(param_1 + 0xe);
  SystemStatusChecker(param_1 + 0xc);
  *param_1 = &processed_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



uint64_t FUN_1807d2ff0(int64_t *param_1,int *param_2,int *param_3)

{
  int64_t lVar1;
  int iVar2;
  int *piVar3;
  
  if ((*param_3 == -1) ||
     (iVar2 = *(int *)(param_1[2] + 8 + (int64_t)*param_3 * 0x10), *param_3 = iVar2, iVar2 == -1))
  {
    iVar2 = 0;
    if (*param_2 != -1) {
      iVar2 = *param_2 + 1;
    }
    if (iVar2 != (int)param_1[1]) {
      lVar1 = (int64_t)iVar2;
      piVar3 = (int *)(*param_1 + lVar1 * 4);
      do {
        if (*piVar3 != -1) {
          *param_2 = iVar2;
          *param_3 = *(int *)(*param_1 + (int64_t)iVar2 * 4);
          return 0;
        }
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (lVar1 != (int)param_1[1]);
    }
    *param_2 = -1;
    *param_3 = -1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d3080(int64_t *param_1)

{
  int iVar1;
  int8_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar5 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar4 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      puVar2 = (int8_t *)((int64_t)iVar1 * 0x10 + *param_1 + 0xc);
      do {
        *(uint64_t *)(puVar2 + -0xc) = 0;
        *(int32_t *)(puVar2 + -4) = 0xffffffff;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar5 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) &&
     (uVar3 = FUN_1807d3f50(param_1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d3160(int64_t *param_1)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar1 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  if ((0 < (int)uVar1) && (uVar2 = FUN_180748010(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d3200(int64_t *param_1,int64_t param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  
  *param_3 = 0;
  plVar2 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&processed_var_448_ptr,0x11,0,0,1);
  if (plVar2 == (int64_t *)0x0) {
    uVar3 = 0x26;
  }
  else {
    plVar2[3] = 0;
    plVar1 = plVar2 + 1;
    plVar2[2] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *plVar2 = (int64_t)&memory_allocator_336_ptr;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    *(int32_t *)(plVar2 + 0x10) = 0xffffffff;
    *(int32_t *)((int64_t)plVar2 + 0x84) = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[4] = (int64_t)param_1;
    plVar2[5] = param_2;
    uVar3 = (**(code **)(*plVar2 + 0x68))(plVar2);
    if ((int)uVar3 == 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,plVar2);
      if ((int)uVar3 == 0) {
        *param_3 = plVar2;
      }
    }
  }
  return uVar3;
}



uint64_t FUN_1807d3300(int64_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  iVar8 = *(int *)((int64_t)param_1 + 0x24);
  if (iVar8 == -1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[1];
  if (iVar8 == iVar1) {
    iVar8 = iVar8 * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= iVar1) || ((int)param_1[3] != iVar1)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar6 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((int64_t)param_1 + 0x1c) ^ uVar6) - uVar6) < iVar8) &&
       (uVar3 = FUN_1807d3f50(param_1 + 2,iVar8), (int)uVar3 != 0)) {
      return uVar3;
    }
    uVar3 = FUN_1807703c0(param_1,iVar8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar9 = 0;
    uVar4 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*param_1 + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while ((int64_t)uVar4 < (int64_t)iVar8);
    }
    lVar2 = param_1[3];
    uVar4 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar2) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        uVar3 = *(uint64_t *)(uVar4 + param_1[2]);
        lVar5 = (int64_t)
                (int)(((uint)((uint64_t)uVar3 >> 0x20) ^ (uint)uVar3) & (int)param_1[1] - 1U);
        piVar7 = (int *)(*param_1 + lVar5 * 4);
        iVar8 = *(int *)(*param_1 + lVar5 * 4);
        while (iVar8 != -1) {
          piVar7 = (int *)(param_1[2] + 8 + (int64_t)iVar8 * 0x10);
          iVar8 = *piVar7;
        }
        *piVar7 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (uint64_t)((int)uVar9 + 1);
        *(int32_t *)(param_1[2] + 8 + uVar4) = 0xffffffff;
        uVar4 = uVar4 + 0x10;
      } while ((int64_t)uVar10 < (int64_t)(int)lVar2);
    }
  }
  return 0;
}



uint64_t FUN_1807d3326(void)

{
  int64_t lVar1;
  int in_EAX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  int *piVar6;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  if (unaff_EDI == in_EAX) {
    iVar7 = unaff_EDI * 2;
    if (iVar7 < 4) {
      iVar7 = 4;
    }
    if (((iVar7 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar5 = (int)*(uint *)((int64_t)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((int64_t)unaff_RBX + 0x1c) ^ uVar5) - uVar5) < iVar7) &&
       (uVar2 = FUN_1807d3f50(unaff_RBX + 2,iVar7), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar2 = FUN_1807703c0();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar8 = 0;
    uVar3 = uVar8;
    if (0 < iVar7) {
      do {
        *(int32_t *)(*unaff_RBX + uVar3 * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while ((int64_t)uVar3 < (int64_t)iVar7);
    }
    lVar1 = unaff_RBX[3];
    uVar3 = uVar8;
    uVar9 = uVar8;
    if (0 < (int)lVar1) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        uVar2 = *(uint64_t *)(uVar3 + unaff_RBX[2]);
        lVar4 = (int64_t)
                (int)(((uint)((uint64_t)uVar2 >> 0x20) ^ (uint)uVar2) & (int)unaff_RBX[1] - 1U);
        piVar6 = (int *)(*unaff_RBX + lVar4 * 4);
        iVar7 = *(int *)(*unaff_RBX + lVar4 * 4);
        while (iVar7 != -1) {
          piVar6 = (int *)(unaff_RBX[2] + 8 + (int64_t)iVar7 * 0x10);
          iVar7 = *piVar6;
        }
        *piVar6 = (int)uVar8;
        uVar9 = uVar9 + 1;
        uVar8 = (uint64_t)((int)uVar8 + 1);
        *(int32_t *)(unaff_RBX[2] + 8 + uVar3) = 0xffffffff;
        uVar3 = uVar3 + 0x10;
      } while ((int64_t)uVar9 < (int64_t)(int)lVar1);
    }
  }
  return 0;
}



uint64_t FUN_1807d3446(void)

{
  return 0x1c;
}



uint64_t
FUN_1807d3460(int64_t *param_1,int64_t *param_2,int8_t *param_3,int8_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int32_t uStack_1c;
  int64_t lVar5;
  
  if (param_4 == (int8_t *)0x0) {
    return 0x1c;
  }
  *param_4 = 0;
  uVar4 = FUN_1807d3300();
  if ((int)uVar4 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar1 = *param_2;
    lVar8 = (int64_t)(int)(((uint)((uint64_t)lVar1 >> 0x20) ^ (uint)lVar1) & (int)param_1[1] - 1U)
    ;
    piVar11 = (int *)(*param_1 + lVar8 * 4);
    iVar2 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar2 != -1) {
      lVar8 = param_1[2];
      do {
        lVar5 = (int64_t)iVar2;
        if (*(int64_t *)(lVar8 + lVar5 * 0x10) == lVar1) {
          *param_4 = *(int8_t *)(lVar8 + 0xc + lVar5 * 0x10);
          return 0;
        }
        piVar11 = (int *)(lVar8 + 8 + lVar5 * 0x10);
        iVar2 = *piVar11;
      } while (iVar2 != -1);
    }
    iVar2 = (int)param_1[4];
    if (iVar2 == -1) {
      iVar2 = (int)param_1[3];
      uStack_1c = CONCAT31(uStack_1c._1_3_,*param_3);
      iVar7 = iVar2 + 1;
      uVar9 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar9) - uVar9;
      if (iVar3 < iVar7) {
        iVar10 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar7;
        if (iVar7 <= iVar10) {
          iVar3 = iVar10;
        }
        if (iVar3 < 4) {
          iVar10 = 4;
        }
        else if (iVar10 < iVar7) {
          iVar10 = iVar7;
        }
        uVar4 = FUN_1807d3f50(param_1 + 2,iVar10);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      plVar6 = (int64_t *)((int64_t)(int)param_1[3] * 0x10 + param_1[2]);
      *plVar6 = lVar1;
      plVar6[1] = CONCAT44(uStack_1c,0xffffffff);
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      plVar6 = (int64_t *)((int64_t)iVar2 * 0x10 + param_1[2]);
      *(int *)(param_1 + 4) = (int)plVar6[1];
      *(int32_t *)(plVar6 + 1) = 0xffffffff;
      *plVar6 = *param_2;
      *(int8_t *)((int64_t)plVar6 + 0xc) = *param_3;
    }
    *piVar11 = iVar2;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t
FUN_1807d34a5(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint64_t uVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint uVar9;
  int iVar10;
  int64_t *unaff_RBX;
  int8_t *unaff_RSI;
  int *piVar11;
  uint64_t *unaff_R14;
  int8_t *unaff_R15;
  int64_t lVar3;
  
  lVar7 = (int64_t)(int)(((uint)((uint64_t)param_1 >> 0x20) ^ (uint)param_2) & in_EAX - 1U);
  piVar11 = (int *)(*unaff_RBX + lVar7 * 4);
  iVar1 = *(int *)(*unaff_RBX + lVar7 * 4);
  if (iVar1 != -1) {
    lVar7 = unaff_RBX[2];
    do {
      lVar3 = (int64_t)iVar1;
      if (*(int64_t *)(lVar7 + lVar3 * 0x10) == param_2) {
        *unaff_RSI = *(int8_t *)(lVar7 + 0xc + lVar3 * 0x10);
        return 0;
      }
      piVar11 = (int *)(lVar7 + 8 + lVar3 * 0x10);
      iVar1 = *piVar11;
    } while (iVar1 != -1);
  }
  iVar1 = (int)unaff_RBX[4];
  if (iVar1 == -1) {
    iVar1 = (int)unaff_RBX[3];
    param_5._4_4_ = CONCAT31(param_5._5_3_,*unaff_R15);
    iVar6 = iVar1 + 1;
    uVar9 = (int)*(uint *)((int64_t)unaff_RBX + 0x1c) >> 0x1f;
    iVar2 = (*(uint *)((int64_t)unaff_RBX + 0x1c) ^ uVar9) - uVar9;
    if (iVar2 < iVar6) {
      iVar10 = (int)((float)iVar2 * 1.5);
      iVar2 = iVar6;
      if (iVar6 <= iVar10) {
        iVar2 = iVar10;
      }
      if (iVar2 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar6) {
        iVar10 = iVar6;
      }
      uVar4 = FUN_1807d3f50(unaff_RBX + 2,iVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    plVar5 = (int64_t *)((int64_t)(int)unaff_RBX[3] * 0x10 + unaff_RBX[2]);
    *plVar5 = param_2;
    plVar5[1] = CONCAT44(param_5._4_4_,0xffffffff);
    *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
  }
  else {
    puVar8 = (uint64_t *)((int64_t)iVar1 * 0x10 + unaff_RBX[2]);
    *(int32_t *)(unaff_RBX + 4) = *(int32_t *)(puVar8 + 1);
    *(int32_t *)(puVar8 + 1) = 0xffffffff;
    *puVar8 = *unaff_R14;
    *(int8_t *)((int64_t)puVar8 + 0xc) = *unaff_R15;
  }
  *piVar11 = iVar1;
  *(int *)((int64_t)unaff_RBX + 0x24) = *(int *)((int64_t)unaff_RBX + 0x24) + 1;
  return 0;
}



uint64_t
FUN_1807d34ea(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RBX;
  int iVar7;
  int *unaff_RDI;
  uint64_t *unaff_R14;
  int8_t *unaff_R15;
  
  iVar7 = *(int *)(unaff_RBX + 0x20);
  if (iVar7 == -1) {
    iVar7 = *(int *)(unaff_RBX + 0x18);
    param_5._4_4_ = CONCAT31(param_5._5_3_,*unaff_R15);
    iVar4 = iVar7 + 1;
    uVar5 = (int)*(uint *)(unaff_RBX + 0x1c) >> 0x1f;
    iVar1 = (*(uint *)(unaff_RBX + 0x1c) ^ uVar5) - uVar5;
    if (iVar1 < iVar4) {
      iVar6 = (int)((float)iVar1 * 1.5);
      iVar1 = iVar4;
      if (iVar4 <= iVar6) {
        iVar1 = iVar6;
      }
      if (iVar1 < 4) {
        iVar6 = 4;
      }
      else if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      uVar2 = FUN_1807d3f50(unaff_RBX + 0x10,iVar6);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    puVar3 = (uint64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x18) * 0x10 + *(int64_t *)(unaff_RBX + 0x10));
    *puVar3 = param_2;
    puVar3[1] = CONCAT44(param_5._4_4_,0xffffffff);
    *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) + 1;
  }
  else {
    puVar3 = (uint64_t *)((int64_t)iVar7 * 0x10 + *(int64_t *)(unaff_RBX + 0x10));
    *(int32_t *)(unaff_RBX + 0x20) = *(int32_t *)(puVar3 + 1);
    *(int32_t *)(puVar3 + 1) = 0xffffffff;
    *puVar3 = *unaff_R14;
    *(int8_t *)((int64_t)puVar3 + 0xc) = *unaff_R15;
  }
  *unaff_RDI = iVar7;
  *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + 1;
  return 0;
}



uint64_t FUN_1807d354a(int64_t param_1)

{
  int64_t in_RAX;
  int8_t *unaff_RSI;
  
  *unaff_RSI = *(int8_t *)(param_1 + 0xc + in_RAX * 8);
  return 0;
}



uint64_t
FUN_1807d3555(int param_1,int param_2,uint64_t param_3,uint64_t param_4,uint64_t param_5)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int32_t *unaff_RDI;
  uint64_t uStackX_20;
  
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  uVar1 = FUN_1807d3f50(unaff_RBX + 0x10,param_2);
  if ((int)uVar1 == 0) {
    puVar2 = (uint64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x18) * 0x10 + *(int64_t *)(unaff_RBX + 0x10));
    *puVar2 = uStackX_20;
    puVar2[1] = param_5;
    *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) + 1;
    *unaff_RDI = unaff_EBP;
    *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + 1;
    uVar1 = 0;
  }
  return uVar1;
}






// 函数: void FUN_1807d35b1(void)
void FUN_1807d35b1(void)

{
  return;
}






// 函数: void FUN_1807d35b6(void)
void FUN_1807d35b6(void)

{
  return;
}



int FUN_1807d35e0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(int *)(param_2 + 1) < 1) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      iVar2 = (*(code *)**(uint64_t **)*param_2)((uint64_t *)*param_2,lVar1,0);
    }
    else {
      iVar2 = 0x1c;
    }
    if (iVar2 == 0x2d) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    *(uint64_t *)(param_1 + 0x58) = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d3650(int64_t param_1)

{
  int64_t lVar1;
  
  *(uint64_t *)(param_1 + 0x4c) = 300;
  *(int32_t *)(param_1 + 0x48) = 0;
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x6e3c,&processed_var_448_ptr,0x2c,0);
  *(int64_t *)(param_1 + 0x30) = lVar1;
  if (lVar1 == 0) {
    return 0x26;
  }
  *(int64_t *)(param_1 + 0x38) = lVar1;
  *(int64_t *)(param_1 + 0x40) = lVar1 + 0x14;
  *(uint64_t *)(param_1 + 0x58) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




