/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part032.c - 5 个函数

// 函数: void FUN_18085b8e0(void)
void FUN_18085b8e0(void)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18085b920(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  plVar1 = (int64_t *)(param_1 + 0x70);
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    lVar6 = *(int64_t *)(param_1 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar8 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar8 = *(int64_t *)(param_1 + 0x78);
    lVar6 = *(int64_t *)(lVar8 + 0x10);
    uVar5 = *(uint *)(lVar8 + 0x18);
    lVar8 = *(int64_t *)(lVar8 + 0x20);
  }
  if (lVar8 != 0) {
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
  if (uVar3 < uVar5) {
    uVar7 = (uint64_t)(uVar5 - uVar3);
    if (uVar4 != 48000) {
      uVar7 = (uVar7 * uVar4) / 48000;
    }
    uVar7 = -(uVar7 & 0xffffffff);
  }
  else {
    uVar7 = (uint64_t)(uVar3 - uVar5);
    if (uVar4 != 48000) {
      uVar7 = (uVar7 * uVar4) / 48000;
    }
    uVar7 = uVar7 & 0xffffffff;
  }
  *param_2 = uVar7 + lVar6;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18085ba10(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int *piVar2;
  int32_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int32_t *puVar7;
  int32_t uVar8;
  int64_t lVar9;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_1c;
  
  lVar4 = *(int64_t *)(param_1 + 0x160);
  plVar1 = (int64_t *)(param_1 + 0x70);
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    uVar5 = *(uint64_t *)(param_1 + 0x28);
    uVar8 = *(int32_t *)(param_1 + 0x30);
    lVar9 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar9 = *(int64_t *)(param_1 + 0x78);
    uVar5 = *(uint64_t *)(lVar9 + 0x10);
    uVar8 = *(int32_t *)(lVar9 + 0x18);
    lVar9 = *(int64_t *)(lVar9 + 0x20);
  }
  if (lVar9 != 0) {
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + 1;
  }
  lVar6 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 8) + 0x30))();
  puVar7 = (int32_t *)MemoryCacheController0();
  uStack_28 = (int32_t)uVar5;
  uStack_24 = (int32_t)((uint64_t)uVar5 >> 0x20);
  uVar3 = *puVar7;
  *(int32_t *)(param_2 + 1) = *(int32_t *)(param_1 + 0x20);
  param_2[4] = 0;
  *param_2 = param_1;
  *(int32_t *)((int64_t)param_2 + 0xc) = uVar3;
  param_2[5] = lVar4 + 0x3f8;
  param_2[6] = 0;
  param_2[7] = lVar6;
  *(int32_t *)(param_2 + 2) = uStack_28;
  *(int32_t *)((int64_t)param_2 + 0x14) = uStack_24;
  *(int32_t *)(param_2 + 3) = uVar8;
  *(int32_t *)((int64_t)param_2 + 0x1c) = uStack_1c;
  param_2[8] = 0;
  *(int8_t *)(param_2 + 9) = 0;
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar9,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return param_2;
}



int64_t * FUN_18085bb20(int64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_2c;
  
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  lVar3 = *(int64_t *)(param_1 + 0x160);
  lVar4 = (**(code **)(*(int64_t *)(lVar3 + 8) + 0x30))();
  puVar5 = (int32_t *)MemoryCacheController0();
  uStack_38 = (int32_t)uVar2;
  uStack_34 = (int32_t)((uint64_t)uVar2 >> 0x20);
  *(int32_t *)((int64_t)param_2 + 0xc) = *puVar5;
  param_2[4] = 0;
  param_2[5] = lVar3 + 0x3f8;
  param_2[6] = lVar3 + 0x378;
  *param_2 = param_1;
  *(int32_t *)(param_2 + 1) = uVar1;
  *(int32_t *)(param_2 + 2) = uStack_38;
  *(int32_t *)((int64_t)param_2 + 0x14) = uStack_34;
  *(int32_t *)(param_2 + 3) = uVar1;
  *(int32_t *)((int64_t)param_2 + 0x1c) = uStack_2c;
  param_2[7] = lVar4;
  param_2[8] = 0;
  *(int8_t *)(param_2 + 9) = 0;
  func_0x0001808c7250(param_2,param_3);
  return param_2;
}





// 函数: void FUN_18085bbe0(int64_t param_1,int32_t param_2)
void FUN_18085bbe0(int64_t param_1,int32_t param_2)

{
  int32_t *puVar1;
  int iVar2;
  
  iVar2 = FUN_18085ef10(*(uint64_t *)(param_1 + 0x160));
  if (iVar2 == 0) {
    puVar1 = (int32_t *)MemoryCacheController0();
    *(int32_t *)(param_1 + 0x148) = *puVar1;
    FUN_18085bc30(param_1,param_2,0,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18085bc30(int64_t param_1,uint param_2,char param_3,char param_4,uint64_t *param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int *piVar9;
  uint *puVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int8_t auStackX_8 [8];
  uint auStackX_10 [2];
  char cStackX_18;
  char cStackX_20;
  uint64_t uStack_60;
  uint uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  uint uStack_4c;
  
  lVar14 = *(int64_t *)(param_1 + 0x160);
  auStackX_10[0] = param_2;
  cStackX_18 = param_3;
  cStackX_20 = param_4;
  if (*(int *)(lVar14 + 0x2e4) < 3) {
    *(uint *)(param_1 + 0x20) = param_2;
    if (param_4 != '\0') {
      uStack_60 = *(uint64_t *)(*(int64_t *)(lVar14 + 0x2b0) + 0x30);
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_58 = param_2;
      FUN_1808c6d60(param_1 + 0x40,&uStack_60);
      lVar14 = CONCAT44(uStack_4c,uStack_50);
      if (lVar14 != 0) {
        piVar9 = (int *)(lVar14 + 0x10);
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
      if (param_5 == (uint64_t *)0x0) {
        puVar10 = (uint *)MemoryCacheController0();
        lVar14 = (uint64_t)uStack_4c << 0x20;
        uVar13 = *puVar10;
        *(uint64_t *)(param_1 + 0x58) = 0;
        *(uint64_t *)(param_1 + 0x60) = (uint64_t)uVar13;
      }
      else {
        uVar8 = param_5[1];
        *(uint64_t *)(param_1 + 0x58) = *param_5;
        *(uint64_t *)(param_1 + 0x60) = uVar8;
        lVar14 = param_5[2];
      }
      *(int64_t *)(param_1 + 0x68) = lVar14;
    }
  }
  else {
    uVar12 = *(uint64_t *)(*(int64_t *)(lVar14 + 0x2b0) + 0x30);
    iVar6 = FUN_18085ab70();
    uVar18 = (int64_t)iVar6 + uVar12;
    uVar7 = uVar18;
    if (param_3 != '\0') {
      plVar1 = (int64_t *)(param_1 + 0x70);
      if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
        uVar7 = *(uint64_t *)(param_1 + 0x28);
        iVar6 = *(int *)(param_1 + 0x34);
        lVar14 = *(int64_t *)(param_1 + 0x38);
      }
      else {
        lVar14 = *(int64_t *)(param_1 + 0x78);
        uVar7 = *(uint64_t *)(lVar14 + 0x10);
        iVar6 = *(int *)(lVar14 + 0x1c);
        lVar14 = *(int64_t *)(lVar14 + 0x20);
      }
      if (lVar14 != 0) {
        *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
      }
      if (iVar6 != 1) {
        if (lVar14 != 0) {
          piVar9 = (int *)(lVar14 + 0x10);
          *piVar9 = *piVar9 + -1;
          if (*piVar9 == 0) {
                    // WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
          }
        }
        return 0x1c;
      }
      if (uVar7 <= uVar18) {
        uVar7 = uVar18;
      }
      if (lVar14 != 0) {
        piVar9 = (int *)(lVar14 + 0x10);
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
    }
    uVar18 = uVar7;
    if ((*(uint *)(*(int64_t *)(param_1 + 0x160) + 0x2d8) >> 1 & 1) != 0) {
      uVar18 = uVar12;
    }
    uVar8 = FUN_18085f960(*(int64_t *)(param_1 + 0x160),uVar18);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar8 = FUN_18085c6f0(param_1,uVar18,auStackX_10,0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    plVar1 = (int64_t *)(param_1 + 0x70);
    for (plVar2 = *(int64_t **)(param_1 + 0x70); plVar2 != plVar1; plVar2 = (int64_t *)*plVar2) {
      if (uVar18 < (uint64_t)plVar2[2]) {
        if (plVar2 == plVar1) {
          return 0x1c;
        }
        *(int64_t *)plVar2[1] = *plVar2;
        *(int64_t *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (int64_t)plVar2;
        *plVar2 = (int64_t)plVar2;
        lVar14 = plVar2[4];
        if (lVar14 != 0) {
          piVar9 = (int *)(lVar14 + 0x10);
          *piVar9 = *piVar9 + -1;
          if (*piVar9 == 0) {
                    // WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
          }
        }
        *(int64_t *)plVar2[1] = *plVar2;
        *(int64_t *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (int64_t)plVar2;
        *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&ui_system_data_1696_ptr,0xe1,1);
      }
      if (plVar2 == plVar1) break;
    }
    plVar2 = (int64_t *)(param_1 + 0x80);
    for (plVar16 = (int64_t *)*plVar2; plVar16 != plVar2; plVar16 = (int64_t *)*plVar16) {
      if (uVar18 < (uint64_t)plVar16[2]) {
        if (plVar16 == plVar2) {
          return 0x1c;
        }
        *(int64_t *)plVar16[1] = *plVar16;
        *(int64_t *)(*plVar16 + 8) = plVar16[1];
        plVar16[1] = (int64_t)plVar16;
        *plVar16 = (int64_t)plVar16;
        *(int64_t **)plVar16[1] = plVar16;
        *(int64_t *)(*plVar16 + 8) = plVar16[1];
        plVar16[1] = (int64_t)plVar16;
        *plVar16 = (int64_t)plVar16;
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar16,&ui_system_data_1696_ptr,0xe1,1);
      }
      if (plVar16 == plVar2) break;
    }
    uVar8 = FUN_180855810(param_1,uVar18);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    plVar17 = (int64_t *)0x0;
    plVar2 = (int64_t *)(param_1 + 0x118);
    plVar16 = (int64_t *)(*plVar2 + -0x18);
    if (*plVar2 == 0) {
      plVar16 = plVar17;
    }
    plVar19 = plVar17;
    if (plVar16 != (int64_t *)0x0) {
      plVar19 = plVar16 + 3;
    }
    while (plVar19 != plVar2) {
      iVar6 = FUN_18085ab70(param_1);
      lVar14 = (int64_t)iVar6;
      uVar13 = 0;
      if (0 < iVar6) {
        uVar13 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (uVar13 != 48000) {
          lVar14 = (lVar14 * 48000) / (int64_t)(uint64_t)uVar13;
        }
        if (0xffffffff < lVar14) {
          lVar14 = 0xffffffff;
        }
        uVar13 = (uint)lVar14;
      }
      plVar16 = plVar17;
      if (uVar13 < param_2) {
        piVar9 = (int *)FUN_18085c820(param_1,auStackX_8);
        plVar16 = (int64_t *)(uint64_t)(param_2 - *piVar9);
      }
      plVar15 = plVar19 + -3;
      if (plVar19 == (int64_t *)0x0) {
        plVar15 = plVar17;
      }
      uVar8 = FUN_1808c6cd0(plVar15,plVar16);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if (plVar19 == plVar2) break;
      plVar16 = (int64_t *)(*plVar19 + -0x18);
      if (*plVar19 == 0) {
        plVar16 = plVar17;
      }
      plVar19 = plVar17;
      if (plVar16 != (int64_t *)0x0) {
        plVar19 = plVar16 + 3;
      }
    }
    if ((cStackX_20 != '\0') && ((*(uint *)(*(int64_t *)(param_1 + 0x160) + 0x2d8) >> 1 & 1) != 0))
    {
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_60 = uVar7;
      uStack_58 = param_2;
      FUN_1808c6d60(param_1 + 0x40,&uStack_60);
      lVar14 = CONCAT44(uStack_4c,uStack_50);
      if (lVar14 != 0) {
        piVar9 = (int *)(lVar14 + 0x10);
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
      if (param_5 == (uint64_t *)0x0) {
        puVar10 = (uint *)MemoryCacheController0();
        uStack_54 = 0;
        uStack_50 = 0;
        lVar14 = (uint64_t)uStack_4c << 0x20;
        uStack_60 = 0;
        uStack_58 = *puVar10;
        *(int32_t *)(param_1 + 0x58) = 0;
        *(int32_t *)(param_1 + 0x5c) = 0;
        *(uint *)(param_1 + 0x60) = uStack_58;
        *(int32_t *)(param_1 + 100) = 0;
      }
      else {
        uVar3 = *(int32_t *)((int64_t)param_5 + 4);
        uVar4 = *(int32_t *)(param_5 + 1);
        uVar5 = *(int32_t *)((int64_t)param_5 + 0xc);
        *(int32_t *)(param_1 + 0x58) = *(int32_t *)param_5;
        *(int32_t *)(param_1 + 0x5c) = uVar3;
        *(int32_t *)(param_1 + 0x60) = uVar4;
        *(int32_t *)(param_1 + 100) = uVar5;
        lVar14 = param_5[2];
      }
      *(int64_t *)(param_1 + 0x68) = lVar14;
    }
    *(int32_t *)(param_1 + 0x138) = 0xffffffff;
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      uVar18 = *(uint64_t *)(param_1 + 0x28);
      lVar14 = *(int64_t *)(param_1 + 0x38);
    }
    else {
      uVar18 = *(uint64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
      lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
    }
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    }
    if (uVar18 <= uVar7) {
      uVar18 = uVar7;
    }
    if (lVar14 != 0) {
      piVar9 = (int *)(lVar14 + 0x10);
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
      }
    }
    uVar8 = FUN_180854810(param_1,uVar18,param_2,param_5);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    puVar11 = (int32_t *)MemoryCacheController0();
    uVar8 = 1;
    if (cStackX_18 != '\0') {
      uVar8 = 4;
    }
    uVar8 = FUN_180857e50(param_1,auStackX_10,uVar8,*puVar11);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    *(uint64_t *)(param_1 + 0x10) = uVar12;
    uVar13 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar13 != 48000) {
      uVar12 = (uVar12 * 48000) / (uint64_t)uVar13;
    }
    *(uint64_t *)(param_1 + 0x18) = uVar12;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085c230(int64_t param_1,uint64_t param_2)
void FUN_18085c230(int64_t param_1,uint64_t param_2)

{
  int *piVar1;
  int64_t *plVar2;
  uint uVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t lStackX_8;
  int64_t lStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int64_t lStack_28;
  
  plVar9 = (int64_t *)0x0;
  plVar2 = (int64_t *)(param_1 + 0x118);
  plVar8 = (int64_t *)(*plVar2 + -0x18);
  if (*plVar2 == 0) {
    plVar8 = plVar9;
  }
  plVar4 = plVar9;
  if (plVar8 != (int64_t *)0x0) {
    plVar4 = plVar8 + 3;
  }
  while (plVar4 != plVar2) {
    plVar8 = plVar4 + -3;
    if (plVar4 == (int64_t *)0x0) {
      plVar8 = plVar9;
    }
    iVar5 = FUN_1808c6c00(plVar8);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = func_0x0001808c6c40(plVar8,0,0);
    if (iVar5 != 0) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar8 = (int64_t *)(*plVar4 + -0x18);
    if (*plVar4 == 0) {
      plVar8 = plVar9;
    }
    plVar4 = plVar9;
    if (plVar8 != (int64_t *)0x0) {
      plVar4 = plVar8 + 3;
    }
  }
  *(uint64_t *)(param_1 + 0x10) = param_2;
  uVar3 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
  uVar7 = param_2;
  if (uVar3 != 48000) {
    uVar7 = (param_2 * 48000) / (uint64_t)uVar3;
  }
  *(uint64_t *)(param_1 + 0x18) = uVar7;
  FUN_1808556a0(param_1 + 0x70);
  FUN_180855780(param_1 + 0x80);
  iVar5 = SystemLockProcessor(param_1 + 0x90);
  iVar6 = 0;
  if ((iVar5 == 0) && (iVar5 = FUN_1808554a0(param_1 + 0xa0), iVar5 == 0)) {
    *(int32_t *)(param_1 + 0xb0) = 0xffffffff;
    *(int32_t *)(param_1 + 0xb4) = 0;
  }
  iVar5 = FUN_180855810(param_1,param_2);
  if (iVar5 == 0) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 0x350) == 0) {
      iVar6 = FUN_18085ab70(param_1);
    }
    lStack_38 = (int64_t)iVar6 + param_2;
    if (*(int64_t *)(param_1 + 0x58) == 0) {
      uStack_30 = *(int32_t *)(param_1 + 0x20);
      uStack_2c = 0;
      lStack_28 = 0;
      FUN_1808c6d60(param_1 + 0x28,&lStack_38);
      if (lStack_28 != 0) {
        piVar1 = (int *)(lStack_28 + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_28,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
    }
    else {
      lStackX_8 = 0;
      iVar5 = FUN_18085c4b0(param_1,*(int64_t *)(param_1 + 0x58),*(int32_t *)(param_1 + 0x60),0,
                            &lStackX_8);
      if (iVar5 != 0) {
        return;
      }
      uStack_30 = *(int32_t *)(param_1 + 0x20);
      uStack_2c = 5;
      lStack_28 = lStackX_8;
      if (lStackX_8 != 0) {
        *(int *)(lStackX_8 + 0x10) = *(int *)(lStackX_8 + 0x10) + 1;
      }
      FUN_1808c6d60(param_1 + 0x28,&lStack_38);
      if (lStack_28 != 0) {
        piVar1 = (int *)(lStack_28 + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_28,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
      FUN_180855e40(param_1,param_1 + 0x28);
    }
    iVar5 = FUN_180859a50(param_1);
    if (iVar5 == 0) {
      *(int32_t *)(param_1 + 0xc) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18085c4b0(int64_t param_1,int64_t param_2,int32_t param_3,uint param_4,int64_t *param_5)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  if (param_5 != (int64_t *)0x0) {
    *param_5 = 0;
    lVar2 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),param_2 + 0x20);
    if (lVar2 != 0) {
      plVar3 = (int64_t *)
               SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&rendering_buffer_2336_ptr,0x3ce,0,0,1
                            );
      if (plVar3 == (int64_t *)0x0) {
        return 0x26;
      }
      *plVar3 = param_2;
      *(int32_t *)(plVar3 + 1) = param_3;
      *(uint64_t *)((int64_t)plVar3 + 0xc) = 0;
      iVar1 = -1;
      if ((uint64_t)*(uint *)(lVar2 + 0x20) + (uint64_t)param_4 < 0x100000000) {
        iVar1 = *(uint *)(lVar2 + 0x20) + param_4;
      }
      *(int *)((int64_t)plVar3 + 0xc) = iVar1;
      *(int64_t *)(param_1 + 0x140) = param_2;
      *(int32_t *)(param_1 + 0x128) = 0;
      *param_5 = (int64_t)plVar3;
      return 0;
    }
  }
  return 0x1c;
}





// 函数: void FUN_18085c5b0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_18085c5b0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  int iVar1;
  
  iVar1 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,
                        *(int64_t *)(param_1 + 0x110) + 0x48,1,param_4);
  if (iVar1 == 0) {
    FUN_18085c6f0(param_1,param_2,param_3,param_4);
  }
  return;
}





// 函数: void FUN_18085c620(int64_t param_1,int64_t param_2,uint *param_3)
void FUN_18085c620(int64_t param_1,int64_t param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x140) + 0xa4);
  if (*param_3 < uVar1) {
    uVar3 = (uint64_t)(uVar1 - *param_3);
    uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar1 != 48000) {
      uVar3 = (uVar3 * uVar1) / 48000;
    }
    param_2 = param_2 + (uVar3 & 0xffffffff);
  }
  iVar2 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,
                        *(int64_t *)(param_1 + 0x110) + 0x38,0,*(byte *)(param_1 + 0x128) & 1);
  if (iVar2 == 0) {
    iVar2 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),param_2,
                          *(int64_t *)(param_1 + 0x110) + 0x48,1,*(byte *)(param_1 + 0x128) & 1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 2;
    }
  }
  return;
}



uint64_t FUN_18085c6f0(int64_t param_1,uint64_t param_2,uint *param_3,int8_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  
  lVar2 = *(int64_t *)(param_1 + 0x110);
  uVar5 = *(uint64_t *)(lVar2 + 0x38);
  do {
    if ((uVar5 < *(uint64_t *)(lVar2 + 0x38)) ||
       (*(uint64_t *)(lVar2 + 0x38) + (int64_t)*(int *)(lVar2 + 0x40) * 0x18 <= uVar5)) {
      return 0;
    }
    uVar1 = *(uint *)(uVar5 + 0x10);
    if (*param_3 < uVar1) {
LAB_18085c76e:
      uVar3 = FUN_18085f790(*(uint64_t *)(param_1 + 0x160),uVar5,param_2,0,1,param_4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      uVar4 = 0xffffffff;
      if ((uint64_t)*(uint *)(uVar5 + 0x14) + (uint64_t)uVar1 < 0x100000000) {
        uVar4 = *(uint *)(uVar5 + 0x14) + uVar1;
      }
      if (uVar4 <= *param_3) goto LAB_18085c76e;
    }
    uVar5 = uVar5 + 0x18;
  } while( true );
}



int32_t * FUN_18085c820(int64_t param_1,int32_t *param_2)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  
  iVar2 = FUN_18085ab70();
  lVar3 = (int64_t)iVar2;
  if (0 < iVar2) {
    uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar1 != 48000) {
      lVar3 = (lVar3 * 48000) / (int64_t)(uint64_t)uVar1;
    }
    if (0xffffffff < lVar3) {
      lVar3 = 0xffffffff;
    }
    *param_2 = (int)lVar3;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18085c8a0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  plVar1 = (int64_t *)(param_1 + 0x70);
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    lVar6 = *(int64_t *)(param_1 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar8 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar8 = *(int64_t *)(param_1 + 0x78);
    lVar6 = *(int64_t *)(lVar8 + 0x10);
    uVar5 = *(uint *)(lVar8 + 0x18);
    lVar8 = *(int64_t *)(lVar8 + 0x20);
  }
  if (lVar8 != 0) {
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x10c);
  uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
  if (uVar3 < uVar5) {
    uVar7 = (uint64_t)(uVar5 - uVar3);
    if (uVar4 != 48000) {
      uVar7 = (uVar7 * uVar4) / 48000;
    }
    uVar7 = -(uVar7 & 0xffffffff);
  }
  else {
    uVar7 = (uint64_t)(uVar3 - uVar5);
    if (uVar4 != 48000) {
      uVar7 = (uVar7 * uVar4) / 48000;
    }
    uVar7 = uVar7 & 0xffffffff;
  }
  *param_2 = uVar7 + lVar6;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



