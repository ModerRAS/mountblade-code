#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part145.c - 11 个函数

// 函数: void FUN_180136231(int64_t param_1,int64_t param_2,int param_3)
void FUN_180136231(int64_t param_1,int64_t param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  byte *pbVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint64_t unaff_RBX;
  int64_t lVar13;
  uint64_t unaff_RDI;
  short *psVar14;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  byte bStackX_20;
  byte abStackX_21 [7];
  uint64_t in_stack_00000038;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  psVar14 = (short *)(param_2 + 0x12);
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  lVar13 = (int64_t)param_3;
  do {
    if (*(int *)(psVar14 + -9) != 0) {
      puVar7 = (int32_t *)FUN_180135960();
      if (*(int *)(psVar14 + -7) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_180121fa0(*(uint64_t *)(param_1 + 0x2df8));
      }
      *(int64_t *)(puVar7 + 2) = lVar8;
      sVar2 = psVar14[1];
      puVar7[0xe] = (float)(int)*psVar14;
      puVar7[0xf] = (float)(int)sVar2;
      sVar2 = psVar14[3];
      puVar7[0x10] = (float)(int)psVar14[2];
      puVar7[0x11] = (float)(int)sVar2;
      sVar2 = psVar14[5];
      puVar7[0x12] = (float)(int)psVar14[4];
      puVar7[0x13] = (float)(int)sVar2;
      if (lVar8 != 0) {
        if (*(int64_t *)(lVar8 + 0x10) == 0) {
          *(int32_t **)(lVar8 + 0x10) = puVar7;
        }
        else if ((lVar8 != 0) && (*(int64_t *)(lVar8 + 0x18) == 0)) {
          *(int32_t **)(lVar8 + 0x18) = puVar7;
        }
      }
      puVar7[0x26] = *(int32_t *)(psVar14 + -5);
      puVar7[0x14] = (int)(char)psVar14[-3];
      bVar1 = *(byte *)(puVar7 + 0x28);
      bVar10 = -((char)psVar14[-2] != '\0') & 0x10;
      *(byte *)(puVar7 + 0x28) = bVar10 | bVar1 & 0xef;
      bVar11 = -(*(char *)((int64_t)psVar14 + -3) != '\0') & 0x20;
      *(byte *)(puVar7 + 0x28) = bVar11 | bVar10 | bVar1 & 0xcf;
      *(byte *)(puVar7 + 0x28) =
           -((char)psVar14[-1] != '\0') & 0x40U | bVar11 | bVar10 | bVar1 & 0x8f;
      puVar6 = *(int32_t **)(puVar7 + 2);
      puVar4 = puVar7;
      while (puVar3 = puVar6, puVar3 != (int32_t *)0x0) {
        puVar4 = puVar3;
        puVar6 = *(int32_t **)(puVar3 + 2);
      }
      FUN_180121200(&bStackX_20,0x14,&unknown_var_2680_ptr,*puVar4);
      uVar12 = 0xffffffff;
      pbVar5 = abStackX_21;
      bVar1 = bStackX_20;
      while (bVar1 != 0) {
        if (((bVar1 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
          uVar12 = 0xffffffff;
        }
        uVar12 = *(uint *)(&unknown_var_6320_ptr + ((uint64_t)(uVar12 & 0xff) ^ (uint64_t)bVar1) * 4) ^
                 uVar12 >> 8;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      }
      uVar9 = FUN_180121fa0(SYSTEM_DATA_MANAGER_A + 0x1ae0,~uVar12);
      *(uint64_t *)(puVar7 + 0x1a) = uVar9;
    }
    psVar14 = psVar14 + 0x10;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000038 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18013643d(void)
void FUN_18013643d(void)

{
  return;
}





// 函数: void FUN_180136440(int64_t param_1)
void FUN_180136440(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1aa0)) {
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(param_1 + 0x1aa8));
      if (((*(int *)(lVar1 + 0x418) != 0) &&
          (*(int *)(param_1 + 0x1a90) + -1 <= *(int *)(lVar1 + 0x280))) &&
         (*(int64_t *)(lVar1 + 0x408) == 0)) {
        uVar2 = FUN_180121fa0(*(uint64_t *)(param_1 + 0x2df8));
        FUN_180136b10(uVar2,lVar1,1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x1aa0));
  }
  return;
}





// 函数: void FUN_180136457(void)
void FUN_180136457(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar3;
  
  uVar3 = (uint64_t)unaff_ESI;
  do {
    lVar1 = *(int64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x1aa8));
    if (((*(int *)(lVar1 + 0x418) != 0) &&
        (*(int *)(unaff_RDI + 0x1a90) + -1 <= *(int *)(lVar1 + 0x280))) &&
       (*(int64_t *)(lVar1 + 0x408) == 0)) {
      uVar2 = FUN_180121fa0(*(uint64_t *)(unaff_RDI + 0x2df8));
      FUN_180136b10(uVar2,lVar1,1);
    }
    unaff_ESI = unaff_ESI + 1;
    uVar3 = uVar3 + 8;
  } while ((int)unaff_ESI < *(int *)(unaff_RDI + 0x1aa0));
  return;
}





// 函数: void FUN_1801364c5(void)
void FUN_1801364c5(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801364d0(int64_t param_1,int64_t param_2)
void FUN_1801364d0(int64_t param_1,int64_t param_2)

{
  uint *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int iVar13;
  int8_t auStackX_8 [8];
  uint64_t *puStackX_10;
  int8_t *puStackX_18;
  uint64_t *puStackX_20;
  uint64_t uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  lVar6 = *(int64_t *)(param_2 + 0x18);
  lVar7 = *(int64_t *)(param_2 + 8);
  puVar5 = *(uint64_t **)(param_2 + 0x10);
  puVar9 = (uint64_t *)0x0;
  iVar13 = 0;
  puVar11 = puVar9;
  if (lVar6 != 0) {
    puVar11 = *(uint64_t **)(lVar6 + 0x410);
    *(uint64_t *)(lVar6 + 0x410) = 0;
    if (puVar11 == (uint64_t *)0x0) {
      iVar13 = *(int *)(lVar6 + 8);
    }
    else if (puVar11[2] == 0) {
      iVar13 = *(int *)(puVar11[6] + 0x18);
      if (iVar13 == 0) {
        iVar13 = *(int *)(puVar11[6] + 0x14);
      }
    }
  }
  if (puVar5 == (uint64_t *)0x0) {
    puVar5 = (uint64_t *)FUN_180135960(param_1,0);
    puVar5[7] = *(uint64_t *)(lVar7 + 0x40);
    puVar5[8] = *(uint64_t *)(lVar7 + 0x48);
    if (*(int64_t *)(lVar7 + 0x410) == 0) {
      FUN_180136b10(puVar5,lVar7,1);
      puVar1 = (uint *)(*(int64_t *)(puVar5[6] + 8) + 4);
      *puVar1 = *puVar1 & 0xffbfffff;
      *(byte *)(lVar7 + 0x432) = *(byte *)(lVar7 + 0x432) | 1;
    }
  }
  uVar10 = *(uint *)(param_2 + 0x20);
  puVar12 = puVar5;
  if (uVar10 != 0xffffffff) {
    uVar8 = (uint64_t)((uVar10 & 0xfffffffd) == 0);
    FUN_18013a1b0(param_1,puVar5,1 < uVar10,uVar8,*(int32_t *)(param_2 + 0x24),puVar11,uVar14);
    lVar7 = puVar5[uVar8 + 2];
    puVar12 = (uint64_t *)puVar5[(uVar8 ^ 1) + 2];
    puVar12[0xd] = puVar5[0xd];
    *(byte *)(lVar7 + 0xa0) =
         *(byte *)(lVar7 + 0xa0) ^ (*(byte *)(lVar7 + 0xa0) ^ *(byte *)(puVar5 + 0x14)) & 0x20;
    *(byte *)(lVar7 + 0xa0) =
         (*(byte *)(lVar7 + 0xa0) ^ *(byte *)(puVar5 + 0x14)) & 0x40 ^ *(byte *)(lVar7 + 0xa0);
    *(byte *)(puVar5 + 0x14) = *(byte *)(puVar5 + 0x14) & 0xdf;
  }
  *(byte *)(puVar12 + 0x14) = *(byte *)(puVar12 + 0x14) & 0xbf;
  if (puVar12 != puVar11) {
    iVar4 = *(int *)(puVar12 + 4);
    if ((0 < iVar4) && (puVar12[6] == 0)) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      puStackX_10 = (uint64_t *)func_0x000180120ce0(0x60,SYSTEM_DATA_MANAGER_B);
      puStackX_18 = auStackX_8;
      puVar5 = puVar9;
      if (puStackX_10 != (uint64_t *)0x0) {
        *puStackX_10 = 0;
        puStackX_10[1] = 0;
        *(int32_t *)(puStackX_10 + 5) = 0x7f7fffff;
        *(int32_t *)((int64_t)puStackX_10 + 0x2c) = 0x7f7fffff;
        *(int32_t *)(puStackX_10 + 6) = 0xff7fffff;
        *(int32_t *)((int64_t)puStackX_10 + 0x34) = 0xff7fffff;
        puStackX_10[2] = 0;
        puStackX_10[3] = 0;
        puStackX_10[4] = 0xffffffffffffffff;
        puStackX_10[7] = 0;
        puStackX_10[8] = 0;
        puStackX_10[9] = 0;
        puStackX_10[10] = 0;
        *(int32_t *)(puStackX_10 + 0xb) = 0xffff0000;
        puVar5 = puStackX_10;
      }
      puVar12[6] = puVar5;
      iVar4 = *(int *)(puVar12 + 4);
      puVar5 = puVar9;
      puStackX_20 = puStackX_10;
      if (0 < iVar4) {
        do {
          FUN_18011bbb0(puVar12[6],0,*(uint64_t *)(puVar12[5] + (int64_t)puVar9));
          uVar10 = (int)puVar5 + 1;
          puVar9 = puVar9 + 1;
          iVar4 = *(int *)(puVar12 + 4);
          puVar5 = (uint64_t *)(uint64_t)uVar10;
        } while ((int)uVar10 < iVar4);
      }
    }
    if (puVar11 == (uint64_t *)0x0) {
      if (lVar6 != 0) {
        iVar4 = *(int *)(lVar6 + 0x418);
        puVar12[0xe] = lVar6;
        FUN_180136b10(puVar12,lVar6,1);
        if (iVar4 != 0) {
          FUN_18013bf60(iVar4,*(int32_t *)puVar12);
        }
      }
    }
    else if (puVar11[2] == 0) {
      uVar2 = *(int32_t *)puVar11;
      FUN_180136f60(puVar12,puVar11);
      FUN_18013bf60(uVar2,*(int32_t *)puVar12);
      FUN_1801359f0(param_1,puVar11,1);
    }
    else {
      if (0 < iVar4) {
        puVar3 = (int32_t *)puVar11[0x10];
        FUN_180136f60(puVar12,puVar3);
        FUN_180136f60(puVar3,puVar12);
        FUN_18013bf60(*(int32_t *)puVar12,*puVar3);
      }
      if ((*(byte *)(puVar12 + 0x14) & 0x20) != 0) {
        lVar6 = FUN_180121fa0(*(uint64_t *)(param_1 + 0x2df8),
                              *(int32_t *)((int64_t)puVar11 + 0x94));
        *(byte *)(lVar6 + 0xa0) = *(byte *)(lVar6 + 0xa0) | 0x20;
        *(byte *)(puVar12 + 0x14) = *(byte *)(puVar12 + 0x14) & 0xdf;
      }
      lVar6 = puVar11[2];
      puVar12[2] = lVar6;
      lVar7 = puVar11[3];
      puVar12[3] = lVar7;
      if (lVar6 != 0) {
        *(uint64_t **)(lVar6 + 8) = puVar12;
        lVar7 = puVar12[3];
      }
      if (lVar7 != 0) {
        *(uint64_t **)(lVar7 + 8) = puVar12;
      }
      *(int32_t *)(puVar12 + 10) = *(int32_t *)(puVar11 + 10);
      puVar12[9] = puVar11[9];
      puVar11[3] = 0;
      puVar11[2] = 0;
      FUN_1801359f0(param_1,puVar11,1);
    }
  }
  if (puVar12[6] != 0) {
    *(int *)(puVar12[6] + 0x18) = iVar13;
  }
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= 0.0) {
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136850(int64_t param_1,int32_t *param_2)
void FUN_180136850(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  uint uVar7;
  int32_t *puVar8;
  int8_t auStackX_10 [8];
  int64_t lStackX_18;
  int8_t *puStackX_20;
  
  lVar2 = *(int64_t *)(param_2 + 2);
  if ((lVar2 == 0) || ((*(byte *)(param_2 + 0x28) & 0x20) != 0)) {
    uVar3 = FUN_1801358c0(param_1);
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    lStackX_18 = func_0x000180120ce0(0xa8,SYSTEM_DATA_MANAGER_B);
    puStackX_20 = auStackX_10;
    puVar6 = (int32_t *)0x0;
    puVar5 = puVar6;
    if (lStackX_18 != 0) {
      puVar5 = (int32_t *)FUN_180136a10(lStackX_18,uVar3);
    }
    *(byte *)(puVar5 + 0x28) = *(byte *)(puVar5 + 0x28) | 3;
    FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar5,puVar5);
    FUN_180136f60(puVar5,param_2);
    FUN_18013bf60(*param_2,*puVar5);
    puVar8 = puVar6;
    if (0 < (int)puVar5[8]) {
      do {
        lVar2 = *(int64_t *)((int64_t)puVar8 + *(int64_t *)(puVar5 + 10));
        *(uint64_t *)(lVar2 + 0x398) = 0;
        plVar1 = (int64_t *)(lVar2 + 0x3b8);
        *plVar1 = lVar2;
        *(int64_t *)(lVar2 + 0x3b0) = lVar2;
        *(int64_t *)(lVar2 + 0x3a8) = lVar2;
        *(int64_t *)(lVar2 + 0x3a0) = lVar2;
        uVar7 = *(uint *)(lVar2 + 0xc);
        while ((uVar7 & 0x800000) != 0) {
          lVar2 = *(int64_t *)(lVar2 + 0x398);
          *plVar1 = lVar2;
          uVar7 = *(uint *)(lVar2 + 0xc);
        }
        uVar7 = (int)puVar6 + 1;
        puVar6 = (int32_t *)(uint64_t)uVar7;
        puVar8 = puVar8 + 2;
      } while ((int)uVar7 < (int)puVar5[8]);
    }
    *(byte *)((int64_t)puVar5 + 0xa1) = *(byte *)((int64_t)puVar5 + 0xa1) | 8;
  }
  else {
    puVar5 = *(int32_t **)(lVar2 + 0x10);
    lVar4 = 0x10;
    if (puVar5 != param_2) {
      lVar4 = 0x18;
    }
    *(uint64_t *)(lVar4 + lVar2) = 0;
    uVar7 = 0x18;
    if (puVar5 != param_2) {
      uVar7 = 0x10;
    }
    FUN_18013a3d0(param_1,*(int64_t *)(param_2 + 2),
                  *(uint64_t *)((uint64_t)uVar7 + *(int64_t *)(param_2 + 2)),puVar5,
                  0xfffffffffffffffe);
    *(byte *)(*(int64_t *)(param_2 + 2) + 0xa0) = *(byte *)(*(int64_t *)(param_2 + 2) + 0xa0) | 2;
    *(uint64_t *)(param_2 + 2) = 0;
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
    *(byte *)((int64_t)param_2 + 0xa1) = *(byte *)((int64_t)param_2 + 0xa1) | 8;
  }
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= 0.0) {
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
  }
  return;
}



int32_t * FUN_180136a10(int32_t *param_1,int32_t param_2)

{
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xe) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x12) = 0;
  *(uint64_t *)(param_1 + 0x15) = 0;
  *(uint64_t *)(param_1 + 0x17) = 0;
  *(int8_t *)(param_1 + 0x19) = 1;
  *param_1 = param_2;
  param_1[1] = 0;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint64_t *)(param_1 + 2) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0xffffffff;
  *(uint64_t *)(param_1 + 0x1c) = 0;
  *(uint64_t *)(param_1 + 0x1a) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x1e) = 0;
  *(uint64_t *)(param_1 + 0x23) = 0xffffffffffffffff;
  param_1[0x22] = 0xffffffff;
  *(uint64_t *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  *(int8_t *)(param_1 + 0x28) = 4;
  *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) & 0xe0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136ab0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180136ab0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_18013ea00(*(uint64_t *)(param_1 + 0x30));
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  lVar1 = *(int64_t *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    SystemResourceCleaner(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136b10(int32_t *param_1,int64_t param_2,char param_3,uint64_t param_4)
void FUN_180136b10(int32_t *param_1,int64_t param_2,char param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t *puVar7;
  
  if (*(int64_t *)(param_2 + 0x408) != 0) {
    FUN_180136d40(*(int64_t *)(param_2 + 0x408),param_2,0,param_4,0xfffffffffffffffe);
  }
  iVar3 = param_1[8];
  iVar2 = param_1[9];
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
    FUN_18011dc70(param_1 + 8,iVar1);
    iVar3 = param_1[8];
  }
  *(int64_t *)(*(int64_t *)(param_1 + 10) + (int64_t)iVar3 * 8) = param_2;
  param_1[8] = param_1[8] + 1;
  *(int32_t **)(param_2 + 0x408) = param_1;
  *(int32_t *)(param_2 + 0x418) = *param_1;
  *(byte *)(param_2 + 0x432) = 1 < (int)param_1[8] | *(byte *)(param_2 + 0x432) & 0xfa;
  if (*(int64_t *)(param_1 + 0x1a) == 0) {
    if ((param_1[8] == 2) && (*(char *)(**(int64_t **)(param_1 + 10) + 0xb0) == '\0')) {
      *(int8_t *)(**(int64_t **)(param_1 + 10) + 0xb6) = 1;
      *(int32_t *)(**(int64_t **)(param_1 + 10) + 0xd8) = 1;
      if (*(int64_t *)(param_1 + 0x1a) != 0) goto LAB_180136c0c;
    }
    if (((*(byte *)(param_1 + 0x28) & 0x10) == 0) && (*(int64_t *)(param_1 + 2) == 0)) {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 3;
    }
  }
LAB_180136c0c:
  if (param_3 != '\0') {
    if (*(int64_t *)(param_1 + 0xc) == 0) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      puVar4 = (uint64_t *)func_0x000180120ce0(0x60,SYSTEM_DATA_MANAGER_B);
      puVar7 = (uint64_t *)0x0;
      puVar5 = puVar7;
      if (puVar4 != (uint64_t *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 5) = 0x7f7fffff;
        *(int32_t *)((int64_t)puVar4 + 0x2c) = 0x7f7fffff;
        *(int32_t *)(puVar4 + 6) = 0xff7fffff;
        *(int32_t *)((int64_t)puVar4 + 0x34) = 0xff7fffff;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0xffffffffffffffff;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        *(int32_t *)(puVar4 + 0xb) = 0xffff0000;
        puVar5 = puVar4;
      }
      *(uint64_t **)(param_1 + 0xc) = puVar5;
      *(int32_t *)(puVar5 + 3) = param_1[0x26];
      *(int32_t *)(*(int64_t *)(param_1 + 0xc) + 0x14) =
           *(int32_t *)(*(int64_t *)(param_1 + 0xc) + 0x18);
      puVar5 = puVar7;
      if (0 < param_1[8] + -1) {
        do {
          FUN_18011bbb0(*(uint64_t *)(param_1 + 0xc),0,
                        *(uint64_t *)((int64_t)puVar5 + *(int64_t *)(param_1 + 10)));
          uVar6 = (int)puVar7 + 1;
          puVar7 = (uint64_t *)(uint64_t)uVar6;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < param_1[8] + -1);
      }
    }
    FUN_18011bbb0(*(uint64_t *)(param_1 + 0xc),0x400000,param_2);
  }
  func_0x0001801372f0(param_1);
  if (*(int64_t *)(param_1 + 0x1a) != 0) {
    func_0x000180129900(param_2,*(uint *)(param_2 + 0xc) | 0x1000000);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180135a4e)
// WARNING: Removing unreachable block (ram,0x000180135a53)
// WARNING: Removing unreachable block (ram,0x000180135a58)
// WARNING: Removing unreachable block (ram,0x000180135a5e)
// WARNING: Removing unreachable block (ram,0x000180135a64)
// WARNING: Removing unreachable block (ram,0x000180135a6c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136d40(int *param_1,int64_t param_2,int32_t param_3)
void FUN_180136d40(int *param_1,int64_t param_2,int32_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  byte bVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  byte bVar10;
  int64_t *plVar11;
  int64_t lVar12;
  byte bVar13;
  int iVar14;
  int64_t lVar15;
  int iVar16;
  uint uVar17;
  uint64_t uVar18;
  int *piVar19;
  uint64_t uVar20;
  
  *(byte *)(param_2 + 0x432) = *(byte *)(param_2 + 0x432) & 0xfa;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  *(uint64_t *)(param_2 + 0x408) = 0;
  *(int32_t *)(param_2 + 0x418) = param_3;
  *(uint64_t *)(param_2 + 0x398) = 0;
  *(int64_t *)(param_2 + 0x3b8) = param_2;
  *(int64_t *)(param_2 + 0x3b0) = param_2;
  *(int64_t *)(param_2 + 0x3a8) = param_2;
  *(int64_t *)(param_2 + 0x3a0) = param_2;
  uVar17 = *(uint *)(param_2 + 0xc);
  lVar15 = param_2;
  while ((uVar17 & 0x800000) != 0) {
    lVar15 = *(int64_t *)(lVar15 + 0x398);
    *(int64_t *)(param_2 + 0x3b8) = lVar15;
    uVar17 = *(uint *)(lVar15 + 0xc);
  }
  iVar16 = param_1[8];
  iVar14 = 0;
  if (0 < iVar16) {
    plVar11 = *(int64_t **)(param_1 + 10);
    do {
      if (*plVar11 == param_2) {
        plVar11 = *(int64_t **)(param_1 + 10) + iVar14;
                    // WARNING: Subroutine does not return
        memmove(plVar11,plVar11 + 1,((int64_t)iVar16 - (int64_t)iVar14) * 8 + -8);
      }
      iVar14 = iVar14 + 1;
      plVar11 = plVar11 + 1;
    } while (iVar14 < iVar16);
  }
  if (*(int64_t *)(param_1 + 0xc) != 0) {
    FUN_18011bc70(*(int64_t *)(param_1 + 0xc),*(int32_t *)(param_2 + 8));
    iVar16 = param_1[8];
    if (iVar16 < (int)(2 - (uint)((*(byte *)(param_1 + 0x28) & 0x20) != 0))) {
      FUN_18013ea00(*(uint64_t *)(param_1 + 0xc));
      iVar16 = param_1[8];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
  }
  if (iVar16 == 0) {
    if (((*(byte *)(param_1 + 0x28) & 0x20) == 0) && (*(int *)(param_2 + 0x418) != *param_1)) {
      uVar5 = *(uint64_t *)(lVar7 + 0x2df8);
      if (*(int64_t *)(param_1 + 0x1a) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0x1a) + 0x410) = 0;
      }
      puVar6 = *(int32_t **)(param_1 + 2);
      if (puVar6 != (int32_t *)0x0) {
        piVar19 = *(int **)(puVar6 + 4);
        if (piVar19 == param_1) {
          piVar19 = *(int **)(puVar6 + 6);
        }
        puVar8 = *(int32_t **)(puVar6 + 4);
        puVar9 = *(int32_t **)(puVar6 + 6);
        uVar1 = puVar6[0x12];
        uVar2 = puVar6[0x13];
        lVar15 = *(int64_t *)(piVar19 + 4);
        *(int64_t *)(puVar6 + 4) = lVar15;
        lVar12 = *(int64_t *)(piVar19 + 6);
        *(int64_t *)(puVar6 + 6) = lVar12;
        if (lVar15 != 0) {
          *(int32_t **)(lVar15 + 8) = puVar6;
          lVar12 = *(int64_t *)(puVar6 + 6);
        }
        if (lVar12 != 0) {
          *(int32_t **)(lVar12 + 8) = puVar6;
        }
        uVar20 = 0;
        puVar6[0x14] = piVar19[0x14];
        *(uint64_t *)(puVar6 + 0x12) = *(uint64_t *)(piVar19 + 0x12);
        piVar19[6] = 0;
        piVar19[7] = 0;
        piVar19[4] = 0;
        piVar19[5] = 0;
        if (puVar8 != (int32_t *)0x0) {
          FUN_180136f60(puVar6,puVar8);
          FUN_18013bf60(*puVar8,*puVar6);
        }
        if (puVar9 != (int32_t *)0x0) {
          FUN_180136f60(puVar6,puVar9);
          FUN_18013bf60(*puVar9,*puVar6);
        }
        uVar18 = uVar20;
        if (0 < (int)puVar6[8]) {
          do {
            uVar17 = (int)uVar18 + 1;
            uVar3 = puVar6[0xf];
            lVar15 = *(int64_t *)(uVar20 + *(int64_t *)(puVar6 + 10));
            *(int32_t *)(lVar15 + 0x40) = puVar6[0xe];
            *(int32_t *)(lVar15 + 0x44) = uVar3;
            uVar3 = puVar6[0x11];
            lVar15 = *(int64_t *)(uVar20 + *(int64_t *)(puVar6 + 10));
            *(int32_t *)(lVar15 + 0x50) = puVar6[0x10];
            *(int32_t *)(lVar15 + 0x54) = uVar3;
            uVar20 = uVar20 + 8;
            uVar18 = (uint64_t)uVar17;
          } while ((int)uVar17 < (int)puVar6[8]);
        }
        bVar4 = *(byte *)(puVar6 + 0x28);
        *(byte *)(puVar6 + 0x28) = bVar4 & 0xfc;
        *(uint64_t *)(puVar6 + 0x1c) = *(uint64_t *)(piVar19 + 0x1c);
        if (((puVar8 == (int32_t *)0x0) || ((*(byte *)(puVar8 + 0x28) & 0x20) == 0)) &&
           ((puVar9 == (int32_t *)0x0 || ((*(byte *)(puVar9 + 0x28) & 0x20) == 0)))) {
          bVar13 = 0;
        }
        else {
          bVar13 = 0x20;
        }
        bVar13 = bVar4 & 0xdc | bVar13;
        *(byte *)(puVar6 + 0x28) = bVar13;
        bVar4 = *(byte *)(piVar19 + 0x28);
        puVar6[0x12] = uVar1;
        puVar6[0x13] = uVar2;
        *(byte *)(puVar6 + 0x28) = (bVar4 ^ bVar13) & 0x40 ^ bVar13;
        if (puVar8 == (int32_t *)0x0) {
          if (puVar9 == (int32_t *)0x0) {
            return;
          }
          FUN_180122160(*(uint64_t *)(lVar7 + 0x2df8),*puVar9,0);
          FUN_180136ab0(puVar9);
          if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          SystemResourceCleaner(puVar9,SYSTEM_DATA_MANAGER_B);
        }
        FUN_180122160(*(uint64_t *)(lVar7 + 0x2df8),*puVar8,0);
        FUN_180136ab0(puVar8);
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        SystemResourceCleaner(puVar8,SYSTEM_DATA_MANAGER_B);
      }
      FUN_180122160(uVar5,*param_1,0,uVar5,0xfffffffffffffffe);
      FUN_18013ea00(*(uint64_t *)(param_1 + 0xc));
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      lVar15 = *(int64_t *)(param_1 + 10);
      if (lVar15 != 0) {
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        SystemResourceCleaner(lVar15,SYSTEM_DATA_MANAGER_B);
      }
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
      if (param_1 != (int *)0x0) {
        uVar20 = (uint64_t)param_1 & 0xffffffffffc00000;
        if (uVar20 != 0) {
          lVar15 = uVar20 + 0x80 + ((int64_t)param_1 - uVar20 >> 0x10) * 0x50;
          lVar15 = lVar15 - (uint64_t)*(uint *)(lVar15 + 4);
          if ((*(void ***)(uVar20 + 0x70) == &ExceptionList) && (*(char *)(lVar15 + 0xe) == '\0')) {
            *(uint64_t *)param_1 = *(uint64_t *)(lVar15 + 0x20);
            *(int **)(lVar15 + 0x20) = param_1;
            piVar19 = (int *)(lVar15 + 0x18);
            *piVar19 = *piVar19 + -1;
            if (*piVar19 == 0) {
              SystemDataCleaner();
              return;
            }
          }
          else {
            func_0x00018064e870(uVar20,CONCAT71(0xff000000,
                                                *(void ***)(uVar20 + 0x70) == &ExceptionList),
                                param_1,uVar20,0xfffffffffffffffe);
          }
        }
        return;
      }
      return;
    }
  }
  else if (((iVar16 == 1) && ((*(byte *)(param_1 + 0x28) & 0x20) == 0)) &&
          (lVar15 = *(int64_t *)(param_1 + 0x1a), lVar15 != 0)) {
    lVar7 = **(int64_t **)(param_1 + 10);
    if ((*(char *)(lVar15 + 0xae) != '\0') && (*(int64_t *)(param_1 + 2) == 0)) {
      *(int64_t *)(*(int64_t *)(lVar15 + 0x28) + 0x78) = lVar7;
      **(int32_t **)(*(int64_t *)(param_1 + 0x1a) + 0x28) = *(int32_t *)(lVar7 + 8);
      lVar15 = *(int64_t *)(param_1 + 0x1a);
    }
    *(int8_t *)(lVar7 + 0xb2) = *(int8_t *)(lVar15 + 0xb2);
  }
  bVar4 = *(byte *)(param_1 + 0x28);
  bVar13 = bVar4 >> 4;
  if (*(int64_t *)(param_1 + 2) != 0) {
    bVar13 = bVar4 >> 5;
  }
  bVar13 = bVar13 | 0 < param_1[8];
  if ((*(int64_t *)(param_1 + 4) != 0) && ((*(byte *)(*(int64_t *)(param_1 + 4) + 0xa0) & 4) != 0)
     ) {
    bVar13 = 1;
  }
  if ((*(int64_t *)(param_1 + 6) == 0) || ((*(byte *)(*(int64_t *)(param_1 + 6) + 0xa0) & 4) == 0)
     ) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  *(byte *)(param_1 + 0x28) = ((bVar10 | bVar13) << 2 ^ bVar4) & 4 ^ bVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136f60(int64_t param_1,int64_t param_2)
void FUN_180136f60(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  byte bVar6;
  uint uVar7;
  uint64_t uVar8;
  
  uVar4 = 0;
  lVar2 = *(int64_t *)(param_2 + 0x30);
  if ((lVar2 == 0) || (*(int64_t *)(param_1 + 0x30) != 0)) {
    bVar6 = 0;
  }
  else {
    *(int64_t *)(param_1 + 0x30) = lVar2;
    bVar6 = 1;
    *(uint64_t *)(param_2 + 0x30) = 0;
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar5 = uVar4;
    uVar8 = uVar4;
    do {
      if (lVar2 == 0) {
        lVar3 = *(int64_t *)(uVar5 + *(int64_t *)(param_2 + 0x28));
      }
      else {
        lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 8) + 8 + uVar4);
      }
      *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfe;
      *(uint64_t *)(lVar3 + 0x408) = 0;
      FUN_180136b10(param_1,lVar3,bVar6 ^ 1);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar4 = uVar4 + 0x28;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *(int *)(param_2 + 0x20));
  }
  lVar3 = SYSTEM_DATA_MANAGER_A;
  lVar2 = *(int64_t *)(param_2 + 0x28);
  if (lVar2 == 0) {
    if ((bVar6 == 0) && (lVar2 = *(int64_t *)(param_2 + 0x30), lVar2 != 0)) {
      if (*(int64_t *)(param_1 + 0x30) != 0) {
        *(int32_t *)(*(int64_t *)(param_1 + 0x30) + 0x14) = *(int32_t *)(lVar2 + 0x14);
        lVar2 = *(int64_t *)(param_2 + 0x30);
      }
      FUN_18013ea00(lVar2);
      *(uint64_t *)(param_2 + 0x30) = 0;
    }
    return;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x3a8);
    *piVar1 = *piVar1 + -1;
  }
                    // WARNING: Subroutine does not return
  SystemResourceCleaner(lVar2,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



