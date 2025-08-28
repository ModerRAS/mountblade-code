#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part128.c - 4 个函数

// 函数: void FUN_1807426bf(void)
void FUN_1807426bf(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *unaff_RBX;
  uint uVar9;
  uint64_t uVar10;
  int unaff_ESI;
  int *unaff_RDI;
  uint64_t uVar11;
  uint uVar12;
  uint uVar13;
  bool in_ZF;
  bool bVar14;
  uint64_t in_stack_00000160;
  
  if ((in_ZF) && (iVar1 = FUN_1807682e0(unaff_RBX + 0x6f,1), iVar1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(in_stack_00000160 ^ (uint64_t)&stack0x00000000);
  }
  SystemStateManager(unaff_RBX[0x6f]);
  if ((unaff_RBX[0x6b] == 0) && ((*(byte *)(unaff_RBX + 0x66) & 1) == 0)) {
    uVar9 = 0;
    iVar1 = func_0x00018076c250();
  }
  else {
    uVar9 = unaff_RDI[-1];
    iVar1 = unaff_RDI[-2];
  }
  *(int *)(unaff_RBX + 0x68) = (int)unaff_RBX[0x68] - iVar1;
  if ((code *)unaff_RBX[0x6c] == (code *)0x0) {
    if ((code *)unaff_RBX[0x6b] != (code *)0x0) {
      uVar9 = uVar9 & *(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24);
      piVar3 = (int *)(*(code *)unaff_RBX[0x6b])(unaff_ESI + 8,uVar9,0);
      if (piVar3 != (int *)0x0) {
        *piVar3 = unaff_ESI + 8;
        piVar3[1] = uVar9;
                    // WARNING: Subroutine does not return
        memmove(piVar3 + 2);
      }
      goto LAB_180742a3a;
    }
    if ((*(byte *)(unaff_RBX + 0x66) & 1) == 0) {
      unaff_RDI = (int *)func_0x00018076cc30(unaff_RBX[0x6e]);
      if (unaff_RDI == (int *)0x0) goto LAB_180742a3a;
      unaff_ESI = func_0x00018076c250(unaff_RDI);
    }
    else {
      uVar9 = unaff_RDI[-1];
      uVar13 = uVar9 & 7;
      uVar10 = (int64_t)((int)unaff_RBX[0x70] + -1 + iVar1) / (int64_t)(int)unaff_RBX[0x70];
      uVar7 = uVar10 & 0xffffffff;
      uVar12 = (uint)uVar10;
      uVar2 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 7U)) >> 3;
      uVar10 = (uint64_t)(int)uVar2;
      if ((uVar9 & 0x1f) != 0) {
        uVar6 = 0x20 - (uVar9 & 0x1f);
        if ((int)uVar6 <= (int)uVar12) {
          uVar7 = (uint64_t)uVar6;
        }
        if ((int)uVar7 != 0) {
          uVar12 = uVar12 - (int)uVar7;
          uVar11 = uVar10;
          do {
            *(byte *)(*unaff_RBX + uVar11) =
                 *(byte *)(*unaff_RBX + uVar11) & ~(byte)(1 << (uVar13 & 0x1f));
            uVar6 = uVar13 + 1;
            bVar14 = (int)(uVar13 - 7) < 0;
            uVar2 = (uint)uVar10 + 1;
            if ((int)uVar6 < 8) {
              uVar2 = (uint)uVar10;
            }
            uVar13 = 0;
            if (SBORROW4(uVar6,8) != bVar14) {
              uVar13 = uVar6;
            }
            uVar10 = (uint64_t)uVar2;
            uVar4 = uVar11 + 1;
            if (SBORROW4(uVar6,8) != bVar14) {
              uVar4 = uVar11;
            }
            uVar6 = (int)uVar7 - 1;
            uVar7 = (uint64_t)uVar6;
            uVar11 = uVar4;
          } while (uVar6 != 0);
        }
      }
      iVar1 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 7U)) >> 3;
      if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
        memset((int64_t)(int)uVar2 + *unaff_RBX,0,(int64_t)iVar1);
      }
      uVar12 = uVar12 & 0x1f;
      if (uVar12 != 0) {
        lVar8 = (int64_t)(int)uVar2;
        do {
          *(byte *)(*unaff_RBX + lVar8) =
               *(byte *)(*unaff_RBX + lVar8) & ~(byte)(1 << (uVar13 & 0x1f));
          uVar2 = uVar13 + 1;
          iVar1 = uVar13 - 7;
          lVar5 = lVar8 + 1;
          if ((int)uVar2 < 8) {
            lVar5 = lVar8;
          }
          uVar13 = 0;
          if (SBORROW4(uVar2,8) != iVar1 < 0) {
            uVar13 = uVar2;
          }
          uVar12 = uVar12 - 1;
          lVar8 = lVar5;
        } while (uVar12 != 0);
      }
      if ((int)uVar9 < (int)unaff_RBX[0x69]) {
        *(uint *)(unaff_RBX + 0x69) = uVar9;
      }
      iVar1 = FUN_180742190();
      if (iVar1 < 0) {
        iVar1 = FUN_180742190();
        if (-1 < iVar1) {
          FUN_180742af0();
          if ((*(byte *)(unaff_RBX + 0x66) & 1) == 0) {
            piVar3 = (int *)((int64_t)((int)unaff_RBX[0x70] * iVar1) + unaff_RBX[1]);
          }
          else {
            piVar3 = unaff_RDI + -2;
          }
          piVar3[1] = iVar1;
          *piVar3 = unaff_ESI;
          if ((*(byte *)(unaff_RBX + 0x66) & 1) == 0) {
                    // WARNING: Subroutine does not return
            memmove(piVar3 + 2);
          }
        }
      }
      else {
        FUN_180742af0();
        *(int *)((int64_t)((int)unaff_RBX[0x70] * iVar1) + 4 + unaff_RBX[1]) = iVar1;
      }
    }
  }
  else {
    unaff_ESI = unaff_ESI + 8;
    uVar9 = uVar9 & *(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24);
    piVar3 = (int *)(*(code *)unaff_RBX[0x6c])(unaff_RDI + -2,unaff_ESI,uVar9,0);
    if (piVar3 == (int *)0x0) goto LAB_180742a3a;
    *piVar3 = unaff_ESI;
    unaff_RDI = piVar3 + 2;
    piVar3[1] = uVar9;
  }
  if (unaff_RDI != (int *)0x0) {
    *(int *)(unaff_RBX + 0x68) = (int)unaff_RBX[0x68] + unaff_ESI;
    if (*(uint *)((int64_t)unaff_RBX + 0x344) < *(uint *)(unaff_RBX + 0x68)) {
      *(uint *)((int64_t)unaff_RBX + 0x344) = *(uint *)(unaff_RBX + 0x68);
    }
                    // WARNING: Subroutine does not return
    SystemConfigManager(unaff_RBX[0x6f]);
  }
LAB_180742a3a:
                    // WARNING: Subroutine does not return
  SystemConfigManager(unaff_RBX[0x6f]);
}





// 函数: void FUN_180742aca(void)
void FUN_180742aca(void)

{
  uint64_t in_stack_00000160;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000160 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180742af0(int64_t *param_1,uint param_2,int param_3,uint param_4)
void FUN_180742af0(int64_t *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar10 = param_2 & 7;
  uVar3 = (int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  uVar11 = (uint64_t)(int)uVar3;
  uVar13 = param_4;
  if ((param_2 & 0x1f) != 0) {
    uVar8 = 0x20 - (param_2 & 0x1f);
    if ((int)param_4 < (int)uVar8) {
      uVar8 = param_4;
    }
    if (uVar8 != 0) {
      uVar13 = param_4 - uVar8;
      uVar12 = uVar11;
      do {
        bVar2 = *(byte *)(*param_1 + uVar12);
        if (param_3 == 0) {
          bVar2 = bVar2 & ~(byte)(1 << (uVar10 & 0x1f));
        }
        else {
          bVar2 = bVar2 | (byte)(1 << (uVar10 & 0x1f));
        }
        *(byte *)(*param_1 + uVar12) = bVar2;
        uVar1 = uVar10 + 1;
        bVar14 = (int)(uVar10 - 7) < 0;
        uVar3 = (uint)uVar11 + 1;
        if ((int)uVar1 < 8) {
          uVar3 = (uint)uVar11;
        }
        uVar10 = 0;
        if (SBORROW4(uVar1,8) != bVar14) {
          uVar10 = uVar1;
        }
        uVar11 = (uint64_t)uVar3;
        uVar6 = uVar12 + 1;
        if (SBORROW4(uVar1,8) != bVar14) {
          uVar6 = uVar12;
        }
        uVar8 = uVar8 - 1;
        uVar12 = uVar6;
      } while (uVar8 != 0);
    }
  }
  iVar4 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 7U)) >> 3;
  if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)uVar3 + *param_1,-(param_3 != 0),(int64_t)iVar4);
  }
  uVar13 = uVar13 & 0x1f;
  if (uVar13 != 0) {
    lVar9 = (int64_t)(int)uVar3;
    do {
      bVar2 = *(byte *)(*param_1 + lVar9);
      if (param_3 == 0) {
        bVar2 = bVar2 & ~(byte)(1 << (uVar10 & 0x1f));
      }
      else {
        bVar2 = bVar2 | (byte)(1 << (uVar10 & 0x1f));
      }
      *(byte *)(*param_1 + lVar9) = bVar2;
      uVar3 = uVar10 + 1;
      iVar4 = uVar10 - 7;
      lVar7 = lVar9 + 1;
      if ((int)uVar3 < 8) {
        lVar7 = lVar9;
      }
      uVar10 = 0;
      if (SBORROW4(uVar3,8) != iVar4 < 0) {
        uVar10 = uVar3;
      }
      uVar13 = uVar13 - 1;
      lVar9 = lVar7;
    } while (uVar13 != 0);
  }
  uVar10 = *(uint *)(param_1 + 0x69);
  if (param_3 == 0) {
    if ((int)param_2 < (int)uVar10) {
      *(uint *)(param_1 + 0x69) = param_2;
    }
  }
  else {
    if (param_2 == uVar10) {
      uVar10 = param_2 + param_4;
      *(uint *)(param_1 + 0x69) = uVar10;
    }
    if ((*(byte *)((int64_t)((int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3) + *param_1) &
        (byte)(1 << ((byte)uVar10 & 7))) != 0) {
      uVar5 = FUN_180742190(param_1,uVar10,*(int32_t *)((int64_t)param_1 + 0x33c),1);
      *(int32_t *)(param_1 + 0x69) = uVar5;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180742cd0(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,int32_t param_5)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  if (*(int64_t *)((int64_t)param_2 * 8 + 0x10f90 + param_1) == 0) {
    plVar1 = (int64_t *)
             FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x3c0,&unknown_var_8208_ptr,0x264,0);
    if (plVar1 == (int64_t *)0x0) {
      return 0x26;
    }
    func_0x000180741c80(plVar1 + 6);
    *plVar1 = param_1;
    uVar2 = FUN_1807706d0(plVar1,param_2,param_3,param_4,param_5);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int64_t **)((int64_t)param_2 * 8 + 0x10f90 + param_1) = plVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180742d90(int64_t param_1,int param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(param_1 + (int64_t)param_2 * 8 + 0x10f90);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180770580(lVar1);
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_8208_ptr,0x28c,1);
    }
  }
  return uVar2;
}



uint64_t
FUN_180742e00(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4,char param_5)

{
  uint64_t uVar1;
  
  if (param_4 != (int64_t *)0x0) {
    if (param_5 != '\0') {
      *param_4 = 0;
    }
    if (param_2 != 0) {
      uVar1 = FUN_1807716e0(*(uint64_t *)(param_1 + 0x11418));
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(int64_t *)(*param_4 + 0xa8) = param_1;
      return 0;
    }
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180742e60(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  
  iVar3 = (*(int *)(param_1 + 0x107b0) * *(int *)(param_1 + 0x6d8) + 8) *
          *(int *)(param_1 + 0x11658);
  lVar1 = FUN_180741e10(param_1 + 0x10bd0,iVar3 * 4 + 0x200,&system_buffer_ptr,0,0,0,1);
  if (lVar1 == 0) {
    return 0x26;
  }
  plVar2 = (int64_t *)
           FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_8208_ptr,0x7e,0);
  if (plVar2 != (int64_t *)0x0) {
    plVar2[2] = 0;
    plVar2[3] = lVar1;
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    plVar2[1] = *(int64_t *)(param_1 + 0x10790);
    *plVar2 = param_1 + 0x10788;
    *(int64_t **)(param_1 + 0x10790) = plVar2;
    *(int64_t **)plVar2[1] = plVar2;
                    // WARNING: Subroutine does not return
    memset(lVar1,0,(int64_t)iVar3 * 4 + 0x200);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(param_1 + 0x10bd0,lVar1,&system_buffer_ptr,0,1);
}





// 函数: void FUN_180742eec(int64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180742eec(int64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int64_t *plVar1;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  int32_t unaff_000000a4;
  
  plVar1 = (int64_t *)FUN_180742050(*(uint64_t *)(param_1 + 0x1a0),param_4 + -0x5e);
  if (plVar1 != (int64_t *)0x0) {
    plVar1[2] = CONCAT44(unaff_000000a4,unaff_R12D);
    plVar1[3] = unaff_RBP;
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar1[1] = *(int64_t *)(unaff_RDI + 0x10790);
    *plVar1 = unaff_RDI + 0x10788;
    *(int64_t **)(unaff_RDI + 0x10790) = plVar1;
    *(int64_t **)plVar1[1] = plVar1;
                    // WARNING: Subroutine does not return
    memset();
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(unaff_RDI + 0x10bd0);
}





