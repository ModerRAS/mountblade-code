#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part331_sub002_sub002.c - 1 个函数

// 函数: void FUN_18084d068(void)
void FUN_18084d068(void)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint *unaff_RDI;
  uint uVar8;
  int64_t *plVar9;
  int unaff_R12D;
  uint64_t *unaff_R14;
  int *unaff_R15;
  uint in_stack_00000050;
  
  do {
    SystemInitializer(&system_ptr_ea98);
    if (ui_system_ui == -1) {
      ui_system_ui = unaff_R12D;
      FUN_1808fcb30(&system_ptr_ea98);
    }
    do {
      uVar3 = (uint)unaff_RBP;
      if (*(int *)(unaff_RBX + 0x14) != ui_system_ui) {
        plVar2 = *(int64_t **)(unaff_RSI + 0x78);
        plVar9 = plVar2;
        while( true ) {
          if ((plVar9 < plVar2) || (plVar2 + (int64_t)*(int *)(unaff_RSI + 0x80) * 5 <= plVar9))
          goto LAB_18084cfd9;
          if ((*plVar9 == unaff_RBX[4]) && (plVar9[1] == unaff_RBX[5])) break;
          plVar9 = plVar9 + 5;
        }
        if (plVar9 != (int64_t *)0x0) {
          in_stack_00000050 = uVar3;
          if ((uint64_t)*(uint *)(unaff_RBX + 0x15) + (uint64_t)*(uint *)(plVar9 + 4) <= unaff_RBP
             ) {
            in_stack_00000050 = *(uint *)(plVar9 + 4) + *(uint *)(unaff_RBX + 0x15);
          }
          puVar5 = &stack0x00000050;
          if (in_stack_00000050 < *unaff_RDI) {
            puVar5 = unaff_RDI;
          }
          *unaff_RDI = *puVar5;
        }
      }
LAB_18084cfd9:
      if (unaff_RBX != unaff_R14) {
        unaff_RBX = (uint64_t *)*unaff_RBX;
      }
      if (unaff_RBX == unaff_R14) {
        for (uVar7 = *(uint64_t *)(unaff_RSI + 0x78);
            (*(uint64_t *)(unaff_RSI + 0x78) <= uVar7 &&
            (uVar7 < *(uint64_t *)(unaff_RSI + 0x78) + (int64_t)*(int *)(unaff_RSI + 0x80) * 0x28)
            ); uVar7 = uVar7 + 0x28) {
          uVar1 = (uint64_t)*(uint *)(uVar7 + 0x20) + (uint64_t)*(uint *)(uVar7 + 0x24);
          uVar8 = *(uint *)(uVar7 + 0x20) + *(uint *)(uVar7 + 0x24);
          uVar6 = uVar3;
          if (uVar1 <= unaff_RBP) {
            uVar6 = uVar8;
          }
          uVar4 = *unaff_RDI;
          if ((*unaff_RDI <= uVar6) && (uVar4 = uVar8, unaff_RBP < uVar1)) {
            uVar4 = uVar3;
          }
          *unaff_RDI = uVar4;
        }
        return;
      }
      uVar3 = *unaff_RDI;
      if (uVar3 <= *(uint *)(unaff_RBX + 6)) {
        uVar3 = *(uint *)(unaff_RBX + 6);
      }
      *unaff_RDI = uVar3;
      if (uVar3 <= *(uint *)((int64_t)unaff_RBX + 0x34)) {
        uVar3 = *(uint *)((int64_t)unaff_RBX + 0x34);
      }
      *unaff_RDI = uVar3;
    } while (ui_system_ui <= *unaff_R15);
  } while( true );
}



uint64_t FUN_18084d140(int64_t param_1,uint param_2,int *param_3,uint *param_4)

{
  float fVar1;
  uint uVar2;
  int8_t *puVar3;
  bool bVar4;
  uint uVar5;
  int32_t *puVar6;
  int8_t *puVar7;
  uint uVar8;
  int8_t *puVar9;
  int8_t *puVar10;
  int8_t *puVar11;
  int iVar12;
  int iVar13;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  if (param_4 == (uint *)0x0) {
    return 0x1c;
  }
  puVar10 = (int8_t *)0x0;
  puVar6 = (int32_t *)FUN_18084da10();
  FUN_180847820();
  puVar3 = *(int8_t **)(param_1 + 0x88);
  uStack_38 = 0x400000004;
  uStack_2c = 0x42f00000;
  uStack_30 = *puVar6;
  puVar9 = puVar3;
  puVar11 = puVar10;
  while (((puVar7 = puVar9, puVar9 = puVar10, puVar3 <= puVar7 &&
          (puVar7 < puVar3 + (int64_t)*(int *)(param_1 + 0x90) * 0x20)) &&
         (puVar9 = puVar7, *(uint *)(puVar7 + 0x18) <= param_2))) {
    puVar11 = puVar7;
    puVar9 = puVar7 + 0x20;
  }
  if (puVar11 == (int8_t *)0x0) {
    bVar4 = false;
    puVar11 = puVar9;
    if (*(int *)(param_1 + 0x90) != 0) goto LAB_18084d224;
  }
  else {
    bVar4 = true;
LAB_18084d224:
    if (puVar11 != (int8_t *)0x0) goto LAB_18084d22e;
  }
  puVar11 = auStack_48;
LAB_18084d22e:
  fVar1 = *(float *)(puVar11 + 0x1c);
  if (fVar1 == 0.0) {
    if ((param_2 != *(uint *)(puVar11 + 0x18)) && (puVar9 != (int8_t *)0x0)) {
      *param_4 = *(uint *)(puVar9 + 0x18);
      return 0;
    }
    *param_4 = param_2;
    return 0;
  }
  if (((0.0 < fVar1) && (*(int *)(puVar11 + 0x10) != 0)) &&
     ((iVar13 = *(int *)(puVar11 + 0x14), iVar13 != 0 && (iVar13 < 0x11)))) {
    iVar12 = param_3[1];
    if (*param_3 == 1) {
      iVar12 = iVar12 * ((*(int *)(puVar11 + 0x10) * 8) / iVar13);
    }
    fVar1 = (1.44e+06 / fVar1) * (float)iVar12;
    if ((bVar4) || (*(int *)(param_1 + 0x90) == 0)) {
      uVar2 = *(uint *)(puVar11 + 0x18);
      iVar13 = (int)((float)(param_2 - uVar2) / fVar1);
      do {
        uVar8 = (uint)((float)iVar13 * fVar1 + 0.5);
        uVar5 = 0xffffffff;
        if ((uint64_t)uVar8 + (uint64_t)uVar2 < 0x100000000) {
          uVar5 = uVar8 + uVar2;
        }
        iVar13 = iVar13 + 1;
      } while (uVar5 < param_2);
      if ((puVar9 != (int8_t *)0x0) && (*(uint *)(puVar9 + 0x18) < uVar5)) {
        uVar5 = *(uint *)(puVar9 + 0x18);
      }
    }
    else {
      if (puVar11 != puVar9) {
        return 0x1c;
      }
      uVar2 = *(uint *)(puVar11 + 0x18);
      iVar13 = (int)((float)(uVar2 - param_2) / fVar1);
      uVar8 = uVar2;
      while (uVar5 = uVar8, uVar8 = (uint)((float)iVar13 * fVar1 + 0.5), uVar8 <= uVar2) {
        iVar13 = iVar13 + 1;
        uVar8 = uVar2 - uVar8;
        if (uVar8 <= param_2) {
          *param_4 = uVar5;
          return 0;
        }
      }
    }
    *param_4 = uVar5;
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_18084d169(void)

{
  float fVar1;
  uint uVar2;
  int8_t *puVar3;
  bool bVar4;
  uint uVar5;
  int64_t in_RAX;
  int8_t *puVar6;
  uint uVar7;
  uint unaff_EBX;
  int8_t *puVar8;
  int8_t *unaff_RSI;
  int8_t *puVar9;
  uint64_t unaff_RDI;
  int iVar10;
  int iVar11;
  int8_t *puVar12;
  int *unaff_R13;
  int64_t unaff_R14;
  uint *unaff_R15;
  int8_t auStackX_20 [8];
  int32_t uStack000000000000003c;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  *(int32_t *)(in_RAX + 0x20) = 4;
  *(int32_t *)(in_RAX + 0x24) = 4;
  FUN_18084da10();
  FUN_180847820();
  puVar3 = *(int8_t **)(unaff_R14 + 0x88);
  uStack000000000000003c = 0x42f00000;
  puVar8 = puVar3;
  puVar9 = unaff_RSI;
  puVar12 = (int8_t *)((uint64_t)unaff_RSI & 0xffffffff);
  while (((puVar6 = puVar8, puVar8 = (int8_t *)((uint64_t)unaff_RSI & 0xffffffff),
          puVar3 <= puVar6 && (puVar6 < puVar3 + (int64_t)*(int *)(unaff_R14 + 0x90) * 0x20)) &&
         (puVar8 = puVar6, *(uint *)(puVar6 + 0x18) <= unaff_EBX))) {
    puVar9 = puVar6;
    puVar12 = puVar6;
    puVar8 = puVar6 + 0x20;
  }
  if (puVar12 == (int8_t *)0x0) {
    bVar4 = false;
    puVar9 = puVar8;
    if (*(int *)(unaff_R14 + 0x90) != 0) goto LAB_18084d224;
  }
  else {
    bVar4 = true;
LAB_18084d224:
    if (puVar9 != (int8_t *)0x0) goto LAB_18084d22e;
  }
  puVar9 = auStackX_20;
LAB_18084d22e:
  fVar1 = *(float *)(puVar9 + 0x1c);
  if (fVar1 == 0.0) {
    if ((unaff_EBX != *(uint *)(puVar9 + 0x18)) && (puVar8 != (int8_t *)0x0)) {
      *unaff_R15 = *(uint *)(puVar8 + 0x18);
      return 0;
    }
    *unaff_R15 = unaff_EBX;
    return 0;
  }
  if (((0.0 < fVar1) && (*(int *)(puVar9 + 0x10) != 0)) &&
     ((iVar11 = *(int *)(puVar9 + 0x14), iVar11 != 0 && (iVar11 < 0x11)))) {
    iVar10 = unaff_R13[1];
    if (*unaff_R13 == 1) {
      iVar10 = iVar10 * ((*(int *)(puVar9 + 0x10) * 8) / iVar11);
    }
    fVar1 = (1.44e+06 / fVar1) * (float)iVar10;
    if ((bVar4) || (*(int *)(unaff_R14 + 0x90) == 0)) {
      uVar2 = *(uint *)(puVar9 + 0x18);
      iVar11 = (int)((float)(unaff_EBX - uVar2) / fVar1);
      do {
        uVar7 = (uint)((float)iVar11 * fVar1 + 0.5);
        uVar5 = 0xffffffff;
        if ((uint64_t)uVar7 + (uint64_t)uVar2 < 0x100000000) {
          uVar5 = uVar7 + uVar2;
        }
        iVar11 = iVar11 + 1;
      } while (uVar5 < unaff_EBX);
      if ((puVar8 != (int8_t *)0x0) && (*(uint *)(puVar8 + 0x18) < uVar5)) {
        uVar5 = *(uint *)(puVar8 + 0x18);
      }
    }
    else {
      if (puVar9 != puVar8) {
        return 0x1c;
      }
      uVar2 = *(uint *)(puVar9 + 0x18);
      iVar11 = (int)((float)(uVar2 - unaff_EBX) / fVar1);
      uVar7 = uVar2;
      while (uVar5 = uVar7, uVar7 = (uint)((float)iVar11 * fVar1 + 0.5), uVar7 <= uVar2) {
        iVar11 = iVar11 + 1;
        uVar7 = uVar2 - uVar7;
        if (uVar7 <= unaff_EBX) {
          *unaff_R15 = uVar5;
          return 0;
        }
      }
    }
    *unaff_R15 = uVar5;
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_18084d1d0(int8_t *param_1,uint64_t param_2,int8_t *param_3)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int8_t *puVar5;
  uint uVar6;
  uint unaff_EBX;
  int8_t *unaff_RBP;
  int8_t *puVar7;
  int8_t *unaff_RSI;
  int iVar8;
  int iVar9;
  int8_t *in_R10;
  int8_t *in_R11;
  int *unaff_R13;
  int64_t unaff_R14;
  uint *unaff_R15;
  int8_t auStackX_20 [8];
  
  while (((puVar5 = param_1, puVar7 = unaff_RBP, in_R10 <= param_3 &&
          (param_3 < in_R10 + (int64_t)*(int *)(unaff_R14 + 0x90) * 0x20)) &&
         (puVar7 = puVar5, *(uint *)(puVar5 + 0x18) <= unaff_EBX))) {
    param_3 = puVar5 + 0x20;
    unaff_RSI = puVar5;
    in_R11 = puVar5;
    param_1 = param_3;
  }
  if (in_R11 == (int8_t *)0x0) {
    bVar3 = false;
    unaff_RSI = puVar7;
    if (*(int *)(unaff_R14 + 0x90) != 0) goto LAB_18084d224;
  }
  else {
    bVar3 = true;
LAB_18084d224:
    if (unaff_RSI != (int8_t *)0x0) goto LAB_18084d22e;
  }
  unaff_RSI = auStackX_20;
LAB_18084d22e:
  fVar1 = *(float *)(unaff_RSI + 0x1c);
  if (fVar1 == 0.0) {
    if ((unaff_EBX != *(uint *)(unaff_RSI + 0x18)) && (puVar7 != (int8_t *)0x0)) {
      *unaff_R15 = *(uint *)(puVar7 + 0x18);
      return 0;
    }
    *unaff_R15 = unaff_EBX;
    return 0;
  }
  if (((0.0 < fVar1) && (*(int *)(unaff_RSI + 0x10) != 0)) &&
     ((iVar9 = *(int *)(unaff_RSI + 0x14), iVar9 != 0 && (iVar9 < 0x11)))) {
    iVar8 = unaff_R13[1];
    if (*unaff_R13 == 1) {
      iVar8 = iVar8 * ((*(int *)(unaff_RSI + 0x10) * 8) / iVar9);
    }
    fVar1 = (1.44e+06 / fVar1) * (float)iVar8;
    if ((bVar3) || (*(int *)(unaff_R14 + 0x90) == 0)) {
      uVar2 = *(uint *)(unaff_RSI + 0x18);
      iVar9 = (int)((float)(unaff_EBX - uVar2) / fVar1);
      do {
        uVar6 = (uint)((float)iVar9 * fVar1 + 0.5);
        uVar4 = 0xffffffff;
        if ((uint64_t)uVar6 + (uint64_t)uVar2 < 0x100000000) {
          uVar4 = uVar6 + uVar2;
        }
        iVar9 = iVar9 + 1;
      } while (uVar4 < unaff_EBX);
      if ((puVar7 != (int8_t *)0x0) && (*(uint *)(puVar7 + 0x18) < uVar4)) {
        uVar4 = *(uint *)(puVar7 + 0x18);
      }
    }
    else {
      if (unaff_RSI != puVar7) {
        return 0x1c;
      }
      uVar2 = *(uint *)(unaff_RSI + 0x18);
      iVar9 = (int)((float)(uVar2 - unaff_EBX) / fVar1);
      uVar6 = uVar2;
      while (uVar4 = uVar6, uVar6 = (uint)((float)iVar9 * fVar1 + 0.5), uVar6 <= uVar2) {
        iVar9 = iVar9 + 1;
        uVar6 = uVar2 - uVar6;
        if (uVar6 <= unaff_EBX) {
          *unaff_R15 = uVar4;
          return 0;
        }
      }
    }
    *unaff_R15 = uVar4;
    return 0;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084d3f0(int64_t *param_1,int param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t lVar10;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar7 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x18 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        iVar3 = (int)param_1[1];
        lVar8 = (int64_t)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar10 = *param_1 - lVar7;
          puVar9 = (int32_t *)(lVar7 + 0x10);
          do {
            puVar2 = (int32_t *)(lVar10 + -0x10 + (int64_t)puVar9);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            puVar1 = puVar9 + 6;
            puVar9[-4] = *puVar2;
            puVar9[-3] = uVar4;
            puVar9[-2] = uVar5;
            puVar9[-1] = uVar6;
            *puVar9 = *(int32_t *)(lVar10 + -0x18 + (int64_t)puVar1);
            puVar9[1] = *(int32_t *)(lVar10 + -0x14 + (int64_t)puVar1);
            lVar8 = lVar8 + -1;
            puVar9 = puVar1;
          } while (lVar8 != 0);
        }
        goto LAB_18084d4b4;
      }
    }
    return 0x26;
  }
LAB_18084d4b4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar7;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084d414(uint64_t param_1,int param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int64_t lVar10;
  
  lVar7 = 0;
  if (unaff_EDI == 0) {
LAB_18084d4b4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x18 - 1U < 0x3fffffff) {
    lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,0xf4
                          ,0);
    if (lVar7 != 0) {
      iVar3 = (int)unaff_RBX[1];
      lVar8 = (int64_t)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar10 = *unaff_RBX - lVar7;
        puVar9 = (int32_t *)(lVar7 + 0x10);
        do {
          puVar2 = (int32_t *)(lVar10 + -0x10 + (int64_t)puVar9);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar1 = puVar9 + 6;
          puVar9[-4] = *puVar2;
          puVar9[-3] = uVar4;
          puVar9[-2] = uVar5;
          puVar9[-1] = uVar6;
          *puVar9 = *(int32_t *)(lVar10 + -0x18 + (int64_t)puVar1);
          puVar9[1] = *(int32_t *)(lVar10 + -0x14 + (int64_t)puVar1);
          lVar8 = lVar8 + -1;
          puVar9 = puVar1;
        } while (lVar8 != 0);
      }
      goto LAB_18084d4b4;
    }
  }
  return 0x26;
}



uint64_t FUN_18084d4ff(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084d520(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x28 - 1U < 0x3fffffff) {
      lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x28,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] * 0x28);
        }
        goto LAB_18084d5b4;
      }
    }
    return 0x26;
  }
LAB_18084d5b4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084d544(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_18084d5b4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x28 - 1U < 0x3fffffff) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x28,&unknown_var_8432_ptr,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] * 0x28);
      }
      goto LAB_18084d5b4;
    }
  }
  return 0x26;
}



uint64_t FUN_18084d5ff(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084d620(int64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar12 = 0;
  lVar7 = lVar12;
  if (param_2 == 0) {
LAB_18084d7db:
    if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)param_1 + 0xc) = param_2;
  }
  else {
    if (param_2 * 0x20 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x20,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          lVar11 = *param_1;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (uint64_t *)(lVar7 + 0x30);
            do {
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x30);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x10;
              puVar10[-6] = *puVar2;
              puVar10[-5] = uVar9;
              puVar10[-4] = *(uint64_t *)((int64_t)puVar10 + lVar13 + -0x20);
              *(int32_t *)(puVar10 + -3) = *(int32_t *)((int64_t)puVar10 + lVar13 + -0x18);
              *(int32_t *)((int64_t)puVar10 + -0x14) =
                   *(int32_t *)((int64_t)puVar10 + lVar13 + -0x14);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x10);
              uVar9 = puVar2[1];
              puVar10[-2] = *puVar2;
              puVar10[-1] = uVar9;
              *puVar10 = *(uint64_t *)(lVar13 + -0x80 + (int64_t)puVar1);
              *(int32_t *)(puVar10 + 1) = *(int32_t *)(lVar13 + -0x78 + (int64_t)puVar1);
              *(int32_t *)((int64_t)puVar10 + 0xc) =
                   *(int32_t *)(lVar13 + -0x74 + (int64_t)puVar1);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + 0x10);
              uVar9 = puVar2[1];
              puVar10[2] = *puVar2;
              puVar10[3] = uVar9;
              puVar10[4] = *(uint64_t *)(lVar13 + -0x60 + (int64_t)puVar1);
              *(int32_t *)(puVar10 + 5) = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x28);
              *(int32_t *)((int64_t)puVar10 + 0x2c) =
                   *(int32_t *)((int64_t)puVar10 + lVar13 + 0x2c);
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar13 + 0x30);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              *(int32_t *)(puVar10 + 6) = *puVar3;
              *(int32_t *)((int64_t)puVar10 + 0x34) = uVar4;
              *(int32_t *)(puVar10 + 7) = uVar5;
              *(int32_t *)((int64_t)puVar10 + 0x3c) = uVar6;
              puVar10[8] = *(uint64_t *)((int64_t)puVar10 + lVar13 + 0x40);
              *(int32_t *)(puVar10 + 9) = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x48);
              *(int32_t *)((int64_t)puVar10 + 0x4c) =
                   *(int32_t *)((int64_t)puVar10 + lVar13 + 0x4c);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (uint64_t *)(lVar7 + 0x10 + lVar12 * 0x20);
            do {
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar11 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 4;
              *(int32_t *)(puVar10 + -2) = *puVar3;
              *(int32_t *)((int64_t)puVar10 + -0xc) = uVar4;
              *(int32_t *)(puVar10 + -1) = uVar5;
              *(int32_t *)((int64_t)puVar10 + -4) = uVar6;
              *puVar10 = *(uint64_t *)(lVar11 + -0x20 + (int64_t)puVar1);
              *(int32_t *)(puVar10 + 1) = *(int32_t *)(lVar11 + -0x18 + (int64_t)puVar1);
              *(int32_t *)((int64_t)puVar10 + 0xc) =
                   *(int32_t *)(lVar11 + -0x14 + (int64_t)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_18084d7db;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084d644(uint64_t param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  
  lVar12 = 0;
  lVar7 = lVar12;
  if (unaff_EBP == 0) {
LAB_18084d7db:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EBP;
  }
  else {
    if (param_2 * 0x20 - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x20,&unknown_var_8432_ptr,
                            0xf4,0);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)unaff_RBX[1];
        if ((int)unaff_RBX[1] != 0) {
          lVar11 = *unaff_RBX;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (uint64_t *)(lVar7 + 0x30);
            do {
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x30);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x10;
              puVar10[-6] = *puVar2;
              puVar10[-5] = uVar9;
              puVar10[-4] = *(uint64_t *)((int64_t)puVar10 + lVar13 + -0x20);
              *(int32_t *)(puVar10 + -3) = *(int32_t *)((int64_t)puVar10 + lVar13 + -0x18);
              *(int32_t *)((int64_t)puVar10 + -0x14) =
                   *(int32_t *)((int64_t)puVar10 + lVar13 + -0x14);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x10);
              uVar9 = puVar2[1];
              puVar10[-2] = *puVar2;
              puVar10[-1] = uVar9;
              *puVar10 = *(uint64_t *)(lVar13 + -0x80 + (int64_t)puVar1);
              *(int32_t *)(puVar10 + 1) = *(int32_t *)(lVar13 + -0x78 + (int64_t)puVar1);
              *(int32_t *)((int64_t)puVar10 + 0xc) =
                   *(int32_t *)(lVar13 + -0x74 + (int64_t)puVar1);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + 0x10);
              uVar9 = puVar2[1];
              puVar10[2] = *puVar2;
              puVar10[3] = uVar9;
              puVar10[4] = *(uint64_t *)(lVar13 + -0x60 + (int64_t)puVar1);
              *(int32_t *)(puVar10 + 5) = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x28);
              *(int32_t *)((int64_t)puVar10 + 0x2c) =
                   *(int32_t *)((int64_t)puVar10 + lVar13 + 0x2c);
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar13 + 0x30);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              *(int32_t *)(puVar10 + 6) = *puVar3;
              *(int32_t *)((int64_t)puVar10 + 0x34) = uVar4;
              *(int32_t *)(puVar10 + 7) = uVar5;
              *(int32_t *)((int64_t)puVar10 + 0x3c) = uVar6;
              puVar10[8] = *(uint64_t *)((int64_t)puVar10 + lVar13 + 0x40);
              *(int32_t *)(puVar10 + 9) = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x48);
              *(int32_t *)((int64_t)puVar10 + 0x4c) =
                   *(int32_t *)((int64_t)puVar10 + lVar13 + 0x4c);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (uint64_t *)(lVar7 + 0x10 + lVar12 * 0x20);
            do {
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar11 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 4;
              *(int32_t *)(puVar10 + -2) = *puVar3;
              *(int32_t *)((int64_t)puVar10 + -0xc) = uVar4;
              *(int32_t *)(puVar10 + -1) = uVar5;
              *(int32_t *)((int64_t)puVar10 + -4) = uVar6;
              *puVar10 = *(uint64_t *)(lVar11 + -0x20 + (int64_t)puVar1);
              *(int32_t *)(puVar10 + 1) = *(int32_t *)(lVar11 + -0x18 + (int64_t)puVar1);
              *(int32_t *)((int64_t)puVar10 + 0xc) =
                   *(int32_t *)(lVar11 + -0x14 + (int64_t)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_18084d7db;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}



uint64_t FUN_18084d82b(void)

{
  return 0x26;
}



int32_t FUN_18084d840(int64_t param_1,uint param_2,uint param_3,double *param_4)

{
  int8_t *puVar1;
  uint uVar2;
  uint uVar3;
  int32_t *puVar4;
  uint uVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  if (param_4 != (double *)0x0) {
    puVar4 = (int32_t *)FUN_18084da10();
    FUN_180847820();
    iVar9 = 0;
    puVar1 = *(int8_t **)(param_1 + 0x88);
    uStack_38 = 0x400000004;
    uStack_2c = 0x42f00000;
    uStack_30 = *puVar4;
    puVar7 = puVar1;
    puVar6 = (int8_t *)0x0;
    while (((puVar8 = puVar7, puVar7 = (int8_t *)0x0, iVar10 = 0, puVar1 <= puVar8 &&
            (puVar8 < puVar1 + (int64_t)*(int *)(param_1 + 0x90) * 0x20)) &&
           (puVar7 = puVar8, iVar10 = iVar9, *(uint *)(puVar8 + 0x18) <= param_2))) {
      iVar9 = iVar9 + 1;
      puVar6 = puVar8;
      puVar7 = puVar8 + 0x20;
    }
    if ((puVar6 == (int8_t *)0x0) &&
       ((*(int *)(param_1 + 0x90) == 0 || (puVar6 = puVar7, puVar7 == (int8_t *)0x0)))) {
      puVar6 = auStack_48;
    }
    dVar12 = 0.0;
    if (param_3 != 0) {
      do {
        puVar8 = (int8_t *)0x0;
        uVar5 = param_3;
        if (puVar7 != (int8_t *)0x0) {
          uVar5 = *(int *)(puVar7 + 0x18) - param_2;
          param_2 = *(uint *)(puVar7 + 0x18);
          iVar10 = iVar10 + 1;
          if (iVar10 < *(int *)(param_1 + 0x90)) {
            puVar8 = puVar1 + (int64_t)iVar10 * 0x20;
          }
        }
        uVar3 = param_3 - uVar5;
        bVar11 = uVar5 < param_3;
        uVar2 = param_3;
        param_3 = 0;
        if (bVar11) {
          uVar2 = uVar5;
          param_3 = uVar3;
        }
        dVar12 = dVar12 + (double)uVar2 *
                          (((double)*(float *)(puVar6 + 0x1c) * (double)*(int *)(puVar6 + 0x10)) /
                          (double)*(int *)(puVar6 + 0x14)) * 3.4722222222222224e-07;
        puVar6 = puVar7;
        puVar7 = puVar8;
      } while (param_3 != 0);
    }
    *param_4 = dVar12;
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_18084d86d(void)

{
  int8_t *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_EBP;
  int8_t *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int iVar8;
  uint unaff_R12D;
  double *unaff_R13;
  int iVar9;
  int64_t unaff_R15;
  bool bVar10;
  double dVar11;
  int8_t auStackX_20 [8];
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000088;
  int32_t uStack000000000000008c;
  
  uStack0000000000000088 = 4;
  uStack000000000000008c = 4;
  FUN_18084da10();
  FUN_180847820();
  iVar8 = 0;
  puVar1 = *(int8_t **)(unaff_R15 + 0x88);
  uStack000000000000003c = 0x42f00000;
  puVar6 = puVar1;
  puVar5 = (int8_t *)0x0;
  while (((puVar7 = puVar6, puVar6 = (int8_t *)0x0, iVar9 = 0, puVar1 <= puVar7 &&
          (puVar7 < puVar1 + (int64_t)*(int *)(unaff_R15 + 0x90) * 0x20)) &&
         (puVar6 = puVar7, iVar9 = iVar8, *(uint *)(puVar7 + 0x18) <= unaff_R12D))) {
    iVar8 = iVar8 + 1;
    puVar5 = puVar7;
    puVar6 = puVar7 + 0x20;
  }
  if ((puVar5 == (int8_t *)0x0) &&
     ((*(int *)(unaff_R15 + 0x90) == 0 || (puVar5 = puVar6, puVar6 == (int8_t *)0x0)))) {
    puVar5 = auStackX_20;
  }
  dVar11 = 0.0;
  if (unaff_EBP != 0) {
    do {
      puVar7 = (int8_t *)0x0;
      uVar4 = unaff_EBP;
      if (puVar6 != (int8_t *)0x0) {
        uVar4 = *(int *)(puVar6 + 0x18) - unaff_R12D;
        unaff_R12D = *(uint *)(puVar6 + 0x18);
        iVar9 = iVar9 + 1;
        if (iVar9 < *(int *)(unaff_R15 + 0x90)) {
          puVar7 = puVar1 + (int64_t)iVar9 * 0x20;
        }
      }
      uVar3 = unaff_EBP - uVar4;
      bVar10 = uVar4 < unaff_EBP;
      uVar2 = unaff_EBP;
      if (bVar10) {
        uVar2 = uVar4;
      }
      unaff_EBP = 0;
      if (bVar10) {
        unaff_EBP = uVar3;
      }
      dVar11 = dVar11 + (double)uVar2 *
                        (((double)*(float *)(puVar5 + 0x1c) * (double)*(int *)(puVar5 + 0x10)) /
                        (double)*(int *)(puVar5 + 0x14)) * 3.4722222222222224e-07;
      puVar5 = puVar6;
      puVar6 = puVar7;
    } while (unaff_EBP != 0);
  }
  *unaff_R13 = dVar11;
  return 0;
}



uint64_t FUN_18084d93b(uint64_t param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBP;
  int8_t *puVar4;
  int8_t *unaff_RDI;
  int8_t *puVar5;
  int64_t in_R11;
  int unaff_R12D;
  double *unaff_R13;
  int unaff_R14D;
  int64_t unaff_R15;
  bool bVar6;
  double dVar7;
  int8_t auStackX_20 [8];
  
  if ((*(int *)(unaff_R15 + 0x90) == param_2) ||
     (puVar4 = unaff_RDI, unaff_RDI == (int8_t *)0x0)) {
    puVar4 = auStackX_20;
  }
  dVar7 = 0.0;
  if (unaff_EBP != 0) {
    do {
      puVar5 = (int8_t *)0x0;
      uVar3 = unaff_EBP;
      if (unaff_RDI != (int8_t *)0x0) {
        uVar3 = *(int *)(unaff_RDI + 0x18) - unaff_R12D;
        unaff_R12D = *(int *)(unaff_RDI + 0x18);
        unaff_R14D = unaff_R14D + 1;
        if (unaff_R14D < *(int *)(unaff_R15 + 0x90)) {
          puVar5 = (int8_t *)((int64_t)unaff_R14D * 0x20 + in_R11);
        }
      }
      uVar2 = unaff_EBP - uVar3;
      bVar6 = uVar3 < unaff_EBP;
      uVar1 = unaff_EBP;
      if (bVar6) {
        uVar1 = uVar3;
      }
      unaff_EBP = 0;
      if (bVar6) {
        unaff_EBP = uVar2;
      }
      dVar7 = dVar7 + (double)uVar1 *
                      (((double)*(float *)(puVar4 + 0x1c) * (double)*(int *)(puVar4 + 0x10)) /
                      (double)*(int *)(puVar4 + 0x14)) * 3.4722222222222224e-07;
      puVar4 = unaff_RDI;
      unaff_RDI = puVar5;
    } while (unaff_EBP != 0);
  }
  *unaff_R13 = dVar7;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_18084da10(void)

{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < ui_system_ui) {
    SystemInitializer(&system_ptr_ea98);
    if (ui_system_ui == -1) {
      ui_system_ui = 0;
      FUN_1808fcb30(&system_ptr_ea98);
    }
  }
  return &system_ptr_ea94;
}



uint64_t * FUN_18084da70(uint64_t *param_1)

{
  FUN_1808b0200(param_1,0x16);
  *(int32_t *)((int64_t)param_1 + 0x4c) = 0x7f7fffff;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &unknown_var_1840_ptr;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_18084e110(param_1 + 10,&unknown_var_2168_ptr);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





