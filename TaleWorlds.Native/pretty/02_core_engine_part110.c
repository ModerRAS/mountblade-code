#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part110.c - 13 个函数

// 函数: void FUN_180126002(void)
void FUN_180126002(void)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int *unaff_RBP;
  int unaff_ESI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  
  uVar4 = unaff_RDI;
  do {
    if (*(int *)(uVar4 + *(int64_t *)(unaff_RBP + 6)) == 1) {
      FUN_1801364d0();
    }
    unaff_ESI = unaff_ESI + 1;
    uVar4 = uVar4 + 0x40;
  } while (unaff_ESI < unaff_RBP[4]);
  iVar1 = unaff_RBP[5];
  if (iVar1 < 0) {
    uVar4 = unaff_RDI & 0xffffffff;
    uVar3 = iVar1 / 2 + iVar1;
    if (0 < (int)uVar3) {
      uVar4 = (uint64_t)uVar3;
    }
    FUN_18013e6c0(unaff_RBP + 4,uVar4);
  }
  unaff_RBP[4] = (int)unaff_RDI;
  uVar4 = unaff_RDI;
  if ((int)unaff_RDI < *unaff_RBP) {
    do {
      lVar2 = *(int64_t *)(unaff_RDI + 8 + *(int64_t *)(unaff_RBP + 2));
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xa0) & 0x10) == 0)) &&
         (*(int64_t *)(lVar2 + 8) == 0)) {
        FUN_1801373f0();
      }
      uVar3 = (int)uVar4 + 1;
      unaff_RDI = unaff_RDI + 0x10;
      uVar4 = (uint64_t)uVar3;
    } while ((int)uVar3 < *unaff_RBP);
  }
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(lVar2 + 0x1c08) = 0x43c80000;
  *(int32_t *)(lVar2 + 0x1bd4) = 4;
  FUN_1801299b0(&rendering_buffer_2432_ptr,0,0);
  *(int8_t *)(unaff_RBX + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012603d(void)
void FUN_18012603d(void)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int *unaff_RBP;
  uint64_t unaff_RDI;
  
  iVar1 = unaff_RBP[5];
  if (iVar1 < 0) {
    uVar4 = unaff_RDI & 0xffffffff;
    uVar3 = iVar1 / 2 + iVar1;
    if (0 < (int)uVar3) {
      uVar4 = (uint64_t)uVar3;
    }
    FUN_18013e6c0(unaff_RBP + 4,uVar4);
  }
  unaff_RBP[4] = (int)unaff_RDI;
  uVar4 = unaff_RDI;
  if ((int)unaff_RDI < *unaff_RBP) {
    do {
      lVar2 = *(int64_t *)(unaff_RDI + 8 + *(int64_t *)(unaff_RBP + 2));
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xa0) & 0x10) == 0)) &&
         (*(int64_t *)(lVar2 + 8) == 0)) {
        FUN_1801373f0();
      }
      uVar3 = (int)uVar4 + 1;
      unaff_RDI = unaff_RDI + 0x10;
      uVar4 = (uint64_t)uVar3;
    } while ((int)uVar3 < *unaff_RBP);
  }
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(lVar2 + 0x1c08) = 0x43c80000;
  *(int32_t *)(lVar2 + 0x1bd4) = 4;
  FUN_1801299b0(&rendering_buffer_2432_ptr,0,0);
  *(int8_t *)(unaff_RBX + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012606a(void)
void FUN_18012606a(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int *unaff_RBP;
  uint uVar2;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  
  uVar3 = unaff_RDI;
  do {
    lVar1 = *(int64_t *)(unaff_RDI + 8 + *(int64_t *)(unaff_RBP + 2));
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0xa0) & 0x10) == 0)) && (*(int64_t *)(lVar1 + 8) == 0)
       ) {
      FUN_1801373f0();
    }
    lVar1 = SYSTEM_DATA_MANAGER_A;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
    unaff_RDI = unaff_RDI + 0x10;
  } while ((int)uVar2 < *unaff_RBP);
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(lVar1 + 0x1c08) = 0x43c80000;
  *(int32_t *)(lVar1 + 0x1bd4) = 4;
  FUN_1801299b0(&rendering_buffer_2432_ptr,0,0);
  *(int8_t *)(unaff_RBX + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801260f0(int8_t *param_1)
void FUN_1801260f0(int8_t *param_1)

{
  int *piVar1;
  byte bVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint64_t uVar10;
  uint64_t *puStackX_8;
  uint64_t *puStackX_10;
  uint64_t **ppuStackX_18;
  uint64_t *puStackX_20;
  void *puStack_78;
  uint64_t uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  uint64_t uStack_50;
  
  puVar6 = (uint64_t *)0x0;
  uStack_50 = 0;
  puStack_78 = &rendering_buffer_2420_ptr;
  uVar8 = 0xffffffff;
  pbVar9 = &rendering_buffer_2421_ptr;
  uVar10 = 0x57;
  do {
    if ((((char)uVar10 == '#') && (*pbVar9 == 0x23)) && (pbVar9[1] == 0x23)) {
      uVar8 = 0xffffffff;
    }
    uVar8 = *(uint *)(&processed_var_6320_ptr + (uVar8 & 0xff ^ uVar10) * 4) ^ uVar8 >> 8;
    bVar2 = *pbVar9;
    uVar10 = (uint64_t)bVar2;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != 0);
  uStack_70 = (uint64_t)~uVar8;
  pcStack_68 = FUN_18013cf40;
  pcStack_60 = FUN_18013d010;
  pcStack_58 = FUN_18013d200;
  FUN_18013dc40(param_1 + 0x2e18,&puStack_78,pbVar9,uVar10,0xfffffffffffffffe);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  puStackX_10 = (uint64_t *)func_0x000180120ce0(0xf0,SYSTEM_DATA_MANAGER_B);
  ppuStackX_18 = &puStackX_8;
  puStackX_8 = puVar6;
  puStackX_20 = puStackX_10;
  if (puStackX_10 != (uint64_t *)0x0) {
    puStackX_8 = (uint64_t *)FUN_18011fd90(puStackX_10);
  }
  *(int32_t *)puStackX_8 = 0x11111111;
  *(int32_t *)(puStackX_8 + 10) = 0;
  FUN_18013d860(param_1 + 0x1c68,&puStackX_8);
  *(uint64_t *)(param_1 + 0x1610) = **(uint64_t **)(param_1 + 0x1c70);
  piVar1 = (int *)(param_1 + 0x1618);
  uVar3 = **(uint64_t **)(param_1 + 0x1c70);
  iVar4 = *(int *)(param_1 + 0x161c);
  iVar5 = *piVar1;
  if (iVar5 == iVar4) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar7 = iVar5 + 1;
    if (iVar5 + 1 < iVar4) {
      iVar7 = iVar4;
    }
    FUN_18011dc70(piVar1,iVar7);
    iVar5 = *piVar1;
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1620) + (int64_t)iVar5 * 8) = uVar3;
  *piVar1 = *piVar1 + 1;
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  puStackX_10 = (uint64_t *)func_0x000180120ce0(0x38,SYSTEM_DATA_MANAGER_B);
  ppuStackX_18 = &puStackX_8;
  if (puStackX_10 != (uint64_t *)0x0) {
    *puStackX_10 = 0;
    puStackX_10[1] = 0;
    puStackX_10[2] = 0;
    puStackX_10[3] = 0;
    puStackX_10[4] = 0;
    puStackX_10[5] = 0;
    *(int8_t *)(puStackX_10 + 6) = 0;
    puVar6 = puStackX_10;
  }
  *(uint64_t **)(param_1 + 0x2df8) = puVar6;
  uStack_50 = 0;
  puStack_78 = &rendering_buffer_2712_ptr;
  uVar8 = 0xffffffff;
  pbVar9 = &rendering_buffer_2713_ptr;
  uVar10 = 0x44;
  do {
    if ((((char)uVar10 == '#') && (*pbVar9 == 0x23)) && (pbVar9[1] == 0x23)) {
      uVar8 = 0xffffffff;
    }
    uVar8 = *(uint *)(&processed_var_6320_ptr + (uVar8 & 0xff ^ uVar10) * 4) ^ uVar8 >> 8;
    bVar2 = *pbVar9;
    uVar10 = (uint64_t)bVar2;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != 0);
  uStack_70 = (uint64_t)~uVar8;
  pcStack_68 = (code *)&processed_var_5264_ptr;
  pcStack_60 = FUN_18013c020;
  pcStack_58 = FUN_18013c4e0;
  puStackX_20 = puStackX_10;
  FUN_18013dc40(param_1 + 0x2e18,&puStack_78);
  *param_1 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180126380(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180126380(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if ((*(int8_t **)(param_1 + 0xa0) != (int8_t *)0x0) && (param_1[3] != '\0')) {
    **(int8_t **)(param_1 + 0xa0) = 0;
    lVar1 = *(int64_t *)(param_1 + 0xa0);
    if (lVar1 != 0) {
      FUN_180294430(lVar1);
      lVar3 = *(int64_t *)(lVar1 + 0x68);
      if (lVar3 != 0) {
        if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
          *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) =
               *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar8);
      }
      lVar3 = *(int64_t *)(lVar1 + 0x58);
      if (lVar3 == 0) {
        lVar3 = *(int64_t *)(lVar1 + 0x48);
        if (lVar3 == 0) {
          if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
            *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) =
                 *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar8);
        }
        if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
          *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) =
               *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar8);
      }
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar8);
    }
  }
  uVar6 = 0;
  param_1[0xa0] = '\0';
  lVar1 = (int64_t)SYSTEM_DATA_MANAGER_A;
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  if (*param_1 != '\0') {
    if ((param_1[0x2e00] != '\0') && (*(int64_t *)(param_1 + 0x20) != 0)) {
      SYSTEM_DATA_MANAGER_A = param_1;
      FUN_18013cdc0();
    }
    uVar5 = uVar6;
    uVar7 = uVar6;
    SYSTEM_DATA_MANAGER_A = param_1;
    if (0 < *(int *)(param_1 + 0x1c68)) {
      do {
        pcVar2 = SYSTEM_DATA_MANAGER_A;
        lVar3 = *(int64_t *)(uVar7 + *(int64_t *)(param_1 + 0x1c70));
        if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x15e0) != (code *)0x0) {
          (**(code **)(SYSTEM_DATA_MANAGER_A + 0x15e0))(lVar3);
        }
        if (*(code **)(pcVar2 + 0x1548) != (code *)0x0) {
          (**(code **)(pcVar2 + 0x1548))(lVar3);
        }
        *(uint64_t *)(lVar3 + 0x40) = 0;
        *(uint64_t *)(lVar3 + 0x30) = 0;
        *(int8_t *)(lVar3 + 0x76) = 0;
        *(int16_t *)(lVar3 + 0x49) = 0;
        *(int8_t *)(lVar3 + 0x48) = 0;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar7 = uVar7 + 8;
      } while ((int)uVar4 < *(int *)(param_1 + 0x1c68));
    }
    SYSTEM_DATA_MANAGER_A = (char *)lVar1;
    FUN_180135510(param_1);
    uVar5 = uVar6;
    uVar7 = uVar6;
    if (0 < *(int *)(param_1 + 0x1aa0)) {
      do {
        lVar1 = *(int64_t *)(uVar7 + *(int64_t *)(param_1 + 0x1aa8));
        if (lVar1 != 0) {
          FUN_180123a60(lVar1);
          if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
            *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) =
                 *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar7 = uVar7 + 8;
      } while ((int)uVar4 < *(int *)(param_1 + 0x1aa0));
    }
    lVar1 = *(int64_t *)(param_1 + 0x1aa8);
    if (lVar1 != 0) {
      param_1[0x1aa0] = '\0';
      param_1[0x1aa1] = '\0';
      param_1[0x1aa2] = '\0';
      param_1[0x1aa3] = '\0';
      param_1[0x1aa4] = '\0';
      param_1[0x1aa5] = '\0';
      param_1[0x1aa6] = '\0';
      param_1[0x1aa7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1ab8);
    if (lVar1 != 0) {
      param_1[0x1ab0] = '\0';
      param_1[0x1ab1] = '\0';
      param_1[0x1ab2] = '\0';
      param_1[0x1ab3] = '\0';
      param_1[0x1ab4] = '\0';
      param_1[0x1ab5] = '\0';
      param_1[0x1ab6] = '\0';
      param_1[0x1ab7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1ac8);
    if (lVar1 != 0) {
      param_1[0x1ac0] = '\0';
      param_1[0x1ac1] = '\0';
      param_1[0x1ac2] = '\0';
      param_1[0x1ac3] = '\0';
      param_1[0x1ac4] = '\0';
      param_1[0x1ac5] = '\0';
      param_1[0x1ac6] = '\0';
      param_1[0x1ac7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    param_1[0x1af8] = '\0';
    param_1[0x1af9] = '\0';
    param_1[0x1afa] = '\0';
    param_1[0x1afb] = '\0';
    param_1[0x1afc] = '\0';
    param_1[0x1afd] = '\0';
    param_1[0x1afe] = '\0';
    param_1[0x1aff] = '\0';
    lVar1 = *(int64_t *)(param_1 + 0x1ad8);
    if (lVar1 != 0) {
      param_1[0x1ad0] = '\0';
      param_1[0x1ad1] = '\0';
      param_1[0x1ad2] = '\0';
      param_1[0x1ad3] = '\0';
      param_1[0x1ad4] = '\0';
      param_1[0x1ad5] = '\0';
      param_1[0x1ad6] = '\0';
      param_1[0x1ad7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1ae8);
    if (lVar1 != 0) {
      param_1[0x1ae0] = '\0';
      param_1[0x1ae1] = '\0';
      param_1[0x1ae2] = '\0';
      param_1[0x1ae3] = '\0';
      param_1[0x1ae4] = '\0';
      param_1[0x1ae5] = '\0';
      param_1[0x1ae6] = '\0';
      param_1[0x1ae7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    param_1[0x1c98] = '\0';
    param_1[0x1c99] = '\0';
    param_1[0x1c9a] = '\0';
    param_1[0x1c9b] = '\0';
    param_1[0x1c9c] = '\0';
    param_1[0x1c9d] = '\0';
    param_1[0x1c9e] = '\0';
    param_1[0x1c9f] = '\0';
    param_1[0x1b10] = '\0';
    param_1[0x1b11] = '\0';
    param_1[0x1b12] = '\0';
    param_1[0x1b13] = '\0';
    param_1[0x1b14] = '\0';
    param_1[0x1b15] = '\0';
    param_1[0x1b16] = '\0';
    param_1[0x1b17] = '\0';
    param_1[0x1b08] = '\0';
    param_1[0x1b09] = '\0';
    param_1[0x1b0a] = '\0';
    param_1[0x1b0b] = '\0';
    param_1[0x1b0c] = '\0';
    param_1[0x1b0d] = '\0';
    param_1[0x1b0e] = '\0';
    param_1[0x1b0f] = '\0';
    param_1[0x1b00] = '\0';
    param_1[0x1b01] = '\0';
    param_1[0x1b02] = '\0';
    param_1[0x1b03] = '\0';
    param_1[0x1b04] = '\0';
    param_1[0x1b05] = '\0';
    param_1[0x1b06] = '\0';
    param_1[0x1b07] = '\0';
    param_1[7000] = '\0';
    param_1[0x1b59] = '\0';
    param_1[0x1b5a] = '\0';
    param_1[0x1b5b] = '\0';
    param_1[0x1b5c] = '\0';
    param_1[0x1b5d] = '\0';
    param_1[0x1b5e] = '\0';
    param_1[0x1b5f] = '\0';
    param_1[0x1b50] = '\0';
    param_1[0x1b51] = '\0';
    param_1[0x1b52] = '\0';
    param_1[0x1b53] = '\0';
    param_1[0x1b54] = '\0';
    param_1[0x1b55] = '\0';
    param_1[0x1b56] = '\0';
    param_1[6999] = '\0';
    param_1[0x1b78] = '\0';
    param_1[0x1b79] = '\0';
    param_1[0x1b7a] = '\0';
    param_1[0x1b7b] = '\0';
    param_1[0x1b7c] = '\0';
    param_1[0x1b7d] = '\0';
    param_1[0x1b7e] = '\0';
    param_1[0x1b7f] = '\0';
    lVar1 = *(int64_t *)(param_1 + 0x1b88);
    if (lVar1 != 0) {
      param_1[0x1b80] = '\0';
      param_1[0x1b81] = '\0';
      param_1[0x1b82] = '\0';
      param_1[0x1b83] = '\0';
      param_1[0x1b84] = '\0';
      param_1[0x1b85] = '\0';
      param_1[0x1b86] = '\0';
      param_1[0x1b87] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1b98);
    if (lVar1 != 0) {
      param_1[0x1b90] = '\0';
      param_1[0x1b91] = '\0';
      param_1[0x1b92] = '\0';
      param_1[0x1b93] = '\0';
      param_1[0x1b94] = '\0';
      param_1[0x1b95] = '\0';
      param_1[0x1b96] = '\0';
      param_1[0x1b97] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1ba8);
    if (lVar1 != 0) {
      param_1[0x1ba0] = '\0';
      param_1[0x1ba1] = '\0';
      param_1[0x1ba2] = '\0';
      param_1[0x1ba3] = '\0';
      param_1[0x1ba4] = '\0';
      param_1[0x1ba5] = '\0';
      param_1[0x1ba6] = '\0';
      param_1[0x1ba7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1bb8);
    if (lVar1 != 0) {
      param_1[0x1bb0] = '\0';
      param_1[0x1bb1] = '\0';
      param_1[0x1bb2] = '\0';
      param_1[0x1bb3] = '\0';
      param_1[0x1bb4] = '\0';
      param_1[0x1bb5] = '\0';
      param_1[0x1bb6] = '\0';
      param_1[0x1bb7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1bc8);
    if (lVar1 != 0) {
      param_1[0x1bc0] = '\0';
      param_1[0x1bc1] = '\0';
      param_1[0x1bc2] = '\0';
      param_1[0x1bc3] = '\0';
      param_1[0x1bc4] = '\0';
      param_1[0x1bc5] = '\0';
      param_1[0x1bc6] = '\0';
      param_1[0x1bc7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    param_1[0x1c88] = '\0';
    param_1[0x1c89] = '\0';
    param_1[0x1c8a] = '\0';
    param_1[0x1c8b] = '\0';
    param_1[0x1c8c] = '\0';
    param_1[0x1c8d] = '\0';
    param_1[0x1c8e] = '\0';
    param_1[0x1c8f] = '\0';
    param_1[0x1c80] = '\0';
    param_1[0x1c81] = '\0';
    param_1[0x1c82] = '\0';
    param_1[0x1c83] = '\0';
    param_1[0x1c84] = '\0';
    param_1[0x1c85] = '\0';
    param_1[0x1c86] = '\0';
    param_1[0x1c87] = '\0';
    param_1[0x1c78] = '\0';
    param_1[0x1c79] = '\0';
    param_1[0x1c7a] = '\0';
    param_1[0x1c7b] = '\0';
    param_1[0x1c7c] = '\0';
    param_1[0x1c7d] = '\0';
    param_1[0x1c7e] = '\0';
    param_1[0x1c7f] = '\0';
    uVar5 = uVar6;
    uVar7 = uVar6;
    if (0 < *(int *)(param_1 + 0x1c68)) {
      do {
        FUN_18013e910(*(uint64_t *)(uVar5 + *(int64_t *)(param_1 + 0x1c70)));
        uVar4 = (int)uVar7 + 1;
        uVar5 = uVar5 + 8;
        uVar7 = (uint64_t)uVar4;
      } while ((int)uVar4 < *(int *)(param_1 + 0x1c68));
    }
    lVar1 = *(int64_t *)(param_1 + 0x1c70);
    if (lVar1 != 0) {
      param_1[0x1c68] = '\0';
      param_1[0x1c69] = '\0';
      param_1[0x1c6a] = '\0';
      param_1[0x1c6b] = '\0';
      param_1[0x1c6c] = '\0';
      param_1[0x1c6d] = '\0';
      param_1[0x1c6e] = '\0';
      param_1[0x1c6f] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x2dd8);
    if (lVar1 != 0) {
      param_1[0x2dd0] = '\0';
      param_1[0x2dd1] = '\0';
      param_1[0x2dd2] = '\0';
      param_1[0x2dd3] = '\0';
      param_1[0x2dd4] = '\0';
      param_1[0x2dd5] = '\0';
      param_1[0x2dd6] = '\0';
      param_1[0x2dd7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1eb8);
    if (lVar1 != 0) {
      param_1[0x1eb0] = '\0';
      param_1[0x1eb1] = '\0';
      param_1[0x1eb2] = '\0';
      param_1[0x1eb3] = '\0';
      param_1[0x1eb4] = '\0';
      param_1[0x1eb5] = '\0';
      param_1[0x1eb6] = '\0';
      param_1[0x1eb7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1ec8);
    if (lVar1 != 0) {
      param_1[0x1ec0] = '\0';
      param_1[0x1ec1] = '\0';
      param_1[0x1ec2] = '\0';
      param_1[0x1ec3] = '\0';
      param_1[0x1ec4] = '\0';
      param_1[0x1ec5] = '\0';
      param_1[0x1ec6] = '\0';
      param_1[0x1ec7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x1ed8);
    if (lVar1 != 0) {
      param_1[0x1ed0] = '\0';
      param_1[0x1ed1] = '\0';
      param_1[0x1ed2] = '\0';
      param_1[0x1ed3] = '\0';
      param_1[0x1ed4] = '\0';
      param_1[0x1ed5] = '\0';
      param_1[0x1ed6] = '\0';
      param_1[0x1ed7] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    uVar5 = uVar6;
    if (0 < *(int *)(param_1 + 0x2e28)) {
      do {
        lVar1 = *(int64_t *)(uVar6 + *(int64_t *)(param_1 + 0x2e30));
        if (lVar1 != 0) {
          if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
            *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) =
                 *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
        }
        uVar4 = (int)uVar5 + 1;
        uVar6 = uVar6 + 0x38;
        uVar5 = (uint64_t)uVar4;
      } while ((int)uVar4 < *(int *)(param_1 + 0x2e28));
    }
    lVar1 = *(int64_t *)(param_1 + 0x2e30);
    if (lVar1 != 0) {
      param_1[0x2e28] = '\0';
      param_1[0x2e29] = '\0';
      param_1[0x2e2a] = '\0';
      param_1[0x2e2b] = '\0';
      param_1[0x2e2c] = '\0';
      param_1[0x2e2d] = '\0';
      param_1[0x2e2e] = '\0';
      param_1[0x2e2f] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    lVar1 = *(int64_t *)(param_1 + 0x2e20);
    if (lVar1 != 0) {
      param_1[0x2e18] = '\0';
      param_1[0x2e19] = '\0';
      param_1[0x2e1a] = '\0';
      param_1[0x2e1b] = '\0';
      param_1[0x2e1c] = '\0';
      param_1[0x2e1d] = '\0';
      param_1[0x2e1e] = '\0';
      param_1[0x2e1f] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    if (*(int64_t *)(param_1 + 0x2e40) != 0) {
      lVar1 = *(int64_t *)(param_1 + 0x2e40);
      lVar3 = __acrt_iob_func(1);
      if (lVar1 != lVar3) {
        fclose(lVar1);
        param_1[0x2e40] = '\0';
        param_1[0x2e41] = '\0';
        param_1[0x2e42] = '\0';
        param_1[0x2e43] = '\0';
        param_1[0x2e44] = '\0';
        param_1[0x2e45] = '\0';
        param_1[0x2e46] = '\0';
        param_1[0x2e47] = '\0';
      }
    }
    lVar1 = *(int64_t *)(param_1 + 0x2e50);
    if (lVar1 != 0) {
      param_1[0x2e48] = '\0';
      param_1[0x2e49] = '\0';
      param_1[0x2e4a] = '\0';
      param_1[0x2e4b] = '\0';
      param_1[0x2e4c] = '\0';
      param_1[0x2e4d] = '\0';
      param_1[0x2e4e] = '\0';
      param_1[0x2e4f] = '\0';
      if (SYSTEM_DATA_MANAGER_A != (char *)0x0) {
        *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)((int64_t)SYSTEM_DATA_MANAGER_A + 0x3a8) + -1
        ;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B);
    }
    *param_1 = '\0';
  }
  return;
}





// 函数: void FUN_180126b00(int *param_1,int64_t param_2)
void FUN_180126b00(int *param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  
  iVar3 = *param_1;
  iVar2 = param_1[1];
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_18011dc70(param_1,iVar1);
    iVar3 = *param_1;
  }
  *(int64_t *)(*(int64_t *)(param_1 + 2) + (int64_t)iVar3 * 8) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0xaf) != '\0') {
    iVar3 = *(int *)(param_2 + 0x188);
    if (1 < iVar3) {
      qsort(*(uint64_t *)(param_2 + 400),(int64_t)iVar3,8,&processed_var_7904_ptr);
    }
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(*(int64_t *)(param_2 + 400) + lVar4 * 8) + 0xaf) != '\0') {
          FUN_180126b00(param_1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  return;
}





// 函数: void FUN_180126b5b(void)
void FUN_180126b5b(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RSI;
  
  iVar1 = *(int *)(unaff_RSI + 0x188);
  if (1 < iVar1) {
    qsort(*(uint64_t *)(unaff_RSI + 400),(int64_t)iVar1,8,&processed_var_7904_ptr);
  }
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(char *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 400) + lVar2 * 8) + 0xaf) != '\0') {
        FUN_180126b00();
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}





// 函数: void FUN_180126bce(void)
void FUN_180126bce(void)

{
  return;
}





// 函数: void FUN_180126be0(int *param_1,int *param_2)
void FUN_180126be0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    if (((*(int *)(*(int64_t *)(param_2 + 2) + -0x30 + (int64_t)iVar3 * 0x30) != 0) ||
        (*(int64_t *)(*(int64_t *)(param_2 + 2) + -0x10 + (int64_t)iVar3 * 0x30) != 0)) ||
       (*param_2 = iVar3 + -1, iVar3 + -1 != 0)) {
      iVar3 = *param_1;
      iVar2 = param_1[1];
      if (iVar3 == iVar2) {
        if (iVar2 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar2 / 2 + iVar2;
        }
        iVar1 = iVar3 + 1;
        if (iVar3 + 1 < iVar2) {
          iVar1 = iVar2;
        }
        FUN_18011dc70(param_1,iVar1);
        iVar3 = *param_1;
      }
      *(int **)(*(int64_t *)(param_1 + 2) + (int64_t)iVar3 * 8) = param_2;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180126c70(int64_t param_1,int param_2)
void FUN_180126c70(int64_t param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  
  *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a0) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a0) + 1;
  FUN_180126be0(*(int64_t *)(param_1 + 0x28) + 0xb8 + (int64_t)param_2 * 0x10,
                *(uint64_t *)(param_1 + 0x2e8));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x188)) {
    lVar3 = 0;
    do {
      lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 400));
      if ((*(char *)(lVar1 + 0xaf) != '\0') && (*(char *)(lVar1 + 0xb6) == '\0')) {
        FUN_180126c70(lVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x188));
  }
  return;
}





// 函数: void FUN_180126cbd(void)
void FUN_180126cbd(void)

{
  int64_t lVar1;
  uint unaff_EBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  uint64_t uVar2;
  
  uVar2 = (uint64_t)unaff_EBX;
  do {
    lVar1 = *(int64_t *)(uVar2 + *(int64_t *)(unaff_RSI + 400));
    if ((*(char *)(lVar1 + 0xaf) != '\0') && (*(char *)(lVar1 + 0xb6) == '\0')) {
      FUN_180126c70(lVar1,unaff_EBP);
    }
    unaff_EBX = unaff_EBX + 1;
    uVar2 = uVar2 + 8;
  } while ((int)unaff_EBX < *(int *)(unaff_RSI + 0x188));
  return;
}





// 函数: void FUN_180126cfb(void)
void FUN_180126cfb(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180126d10(uint64_t *param_1,uint64_t *param_2,int8_t param_3)
void FUN_180126d10(uint64_t *param_1,uint64_t *param_2,int8_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar2 = *(int64_t *)(lVar2 + 0x1af8);
  FUN_180291b40(*(uint64_t *)(lVar2 + 0x2e8),*param_1,*param_2,param_3);
  puVar1 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar2 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar2 + 0x2e8) + 0x60) * 0x10);
  uVar3 = puVar1[1];
  *(uint64_t *)(lVar2 + 0x228) = *puVar1;
  *(uint64_t *)(lVar2 + 0x230) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



