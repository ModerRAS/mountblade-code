#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part067.c - 6 个函数

// 函数: void FUN_18009df90(float *param_1,float *param_2,float *param_3)
void FUN_18009df90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float *pfVar8;
  uint64_t uVar9;
  bool bVar10;
  
  uVar9 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < (int64_t)uVar9) {
    uVar7 = ((int64_t)(uVar9 - 2) >> 1) + 1;
    uVar4 = uVar7 * 2 + 2;
    do {
      fVar1 = param_1[uVar7 - 1];
      uVar7 = uVar7 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar7;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar9) {
        uVar6 = uVar2 - 1;
        if (param_1[uVar2 - 1] < param_1[uVar2] || param_1[uVar2 - 1] == param_1[uVar2]) {
          uVar6 = uVar2;
        }
        param_1[uVar5] = param_1[uVar6];
        uVar5 = uVar6;
        uVar2 = uVar6 * 2 + 2;
      }
      if (uVar2 == uVar9) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar7 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (fVar1 <= param_1[uVar2]) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = fVar1;
    } while (uVar7 != 0);
  }
  uVar7 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (3 - (int64_t)param_2)) >> 2;
  if (param_3 < param_2) {
    uVar4 = uVar7;
  }
  uVar5 = uVar7;
  pfVar8 = param_2;
  if (uVar4 != 0) {
    do {
      fVar1 = *pfVar8;
      if (fVar1 < *param_1) {
        uVar6 = 2;
        *pfVar8 = *param_1;
        bVar10 = uVar9 == 2;
        uVar2 = uVar7;
        uVar3 = uVar7;
        if (2 < (int64_t)uVar9) {
          do {
            uVar2 = uVar6 - 1;
            if (param_1[uVar6 - 1] < param_1[uVar6] || param_1[uVar6 - 1] == param_1[uVar6]) {
              uVar2 = uVar6;
            }
            uVar6 = uVar2 * 2 + 2;
            param_1[uVar3] = param_1[uVar2];
            bVar10 = uVar6 == uVar9;
            uVar3 = uVar2;
          } while ((int64_t)uVar6 < (int64_t)uVar9);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar6 - 1];
          uVar2 = uVar6 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar6 = (int64_t)(uVar2 - 1) >> 1;
          if (fVar1 <= param_1[uVar6]) break;
          param_1[uVar2] = param_1[uVar6];
          uVar2 = uVar6;
        }
        param_1[uVar2] = fVar1;
      }
      uVar5 = uVar5 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar9) {
    param_2 = param_2 + -1;
    do {
      fVar1 = *param_2;
      uVar9 = uVar9 - 1;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar9 == 2;
      uVar2 = uVar7;
      uVar4 = uVar7;
      if (2 < (int64_t)uVar9) {
        do {
          uVar4 = uVar5 - 1;
          if (param_1[uVar5 - 1] < param_1[uVar5] || param_1[uVar5 - 1] == param_1[uVar5]) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar9;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar9);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar9 = (int64_t)(uVar4 - 1) >> 1;
        if (fVar1 <= param_1[uVar9]) break;
        param_1[uVar4] = param_1[uVar9];
        uVar4 = uVar9;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = fVar1;
      uVar9 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < (int64_t)uVar9);
  }
  return;
}



int64_t * FUN_18009e230(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t *plVar5;
  byte *pbVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  int8_t auStackX_8 [8];
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [8];
  int8_t auStackX_20 [8];
  
  lVar2 = *param_3;
  do {
    lVar3 = *param_1;
    plVar5 = (int64_t *)FUN_180058080(param_4 + 0x90,auStackX_8,lVar3 + 0x20);
    plVar5 = (int64_t *)FUN_180058080(*(int32_t *)(*plVar5 + 0x40),auStackX_10,lVar2 + 0x20);
    if (extraout_XMM0_Da == *(float *)(*plVar5 + 0x40)) {
      if (*(int *)(lVar3 + 0x30) == 0) {
        bVar4 = false;
      }
      else if (*(int *)(lVar2 + 0x30) == 0) {
        bVar4 = true;
      }
      else {
        pbVar6 = *(byte **)(lVar3 + 0x28);
        lVar8 = *(int64_t *)(lVar2 + 0x28) - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar4 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar4 = *(float *)(*plVar5 + 0x40) < extraout_XMM0_Da;
    }
    if (bVar4) {
      param_1 = param_1 + 1;
    }
    else {
      do {
        lVar8 = param_2[-1];
        param_2 = param_2 + -1;
        plVar5 = (int64_t *)FUN_180058080(param_4 + 0x90,auStackX_18,lVar2 + 0x20);
        plVar5 = (int64_t *)FUN_180058080(*(int32_t *)(*plVar5 + 0x40),auStackX_20,lVar8 + 0x20)
        ;
        if (extraout_XMM0_Da_00 == *(float *)(*plVar5 + 0x40)) {
          if (*(int *)(lVar2 + 0x30) == 0) {
            bVar4 = false;
          }
          else if (*(int *)(lVar8 + 0x30) == 0) {
            bVar4 = true;
          }
          else {
            pbVar6 = *(byte **)(lVar2 + 0x28);
            lVar9 = *(int64_t *)(lVar8 + 0x28) - (int64_t)pbVar6;
            do {
              bVar1 = *pbVar6;
              uVar7 = (uint)pbVar6[lVar9];
              if (bVar1 != uVar7) break;
              pbVar6 = pbVar6 + 1;
            } while (uVar7 != 0);
            bVar4 = 0 < (int)(bVar1 - uVar7);
          }
        }
        else {
          bVar4 = *(float *)(*plVar5 + 0x40) < extraout_XMM0_Da_00;
        }
      } while (bVar4);
      if (param_2 <= param_1) {
        return param_1;
      }
      *param_1 = lVar8;
      param_1 = param_1 + 1;
      *param_2 = lVar3;
    }
  } while( true );
}



int * FUN_18009e3a0(int *param_1,int *param_2,int *param_3,uint64_t *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  
  iVar1 = *param_3;
  do {
    puVar4 = (uint64_t *)param_4[2];
    iVar2 = *param_1;
    puVar5 = puVar4;
    puVar7 = param_4;
    if (puVar4 == (uint64_t *)0x0) {
LAB_18009e3f9:
      puVar7 = param_4;
    }
    else {
      do {
        if (*(int *)(puVar5 + 4) < iVar1) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar7 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar7 == param_4) || (iVar1 < *(int *)(puVar7 + 4))) goto LAB_18009e3f9;
    }
    puVar6 = param_4;
    puVar5 = puVar4;
    if (puVar4 == (uint64_t *)0x0) {
LAB_18009e42e:
      puVar6 = param_4;
    }
    else {
      do {
        if (*(int *)(puVar5 + 4) < iVar2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar6 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar6 == param_4) || (iVar2 < *(int *)(puVar6 + 4))) goto LAB_18009e42e;
    }
    if (*(float *)((int64_t)puVar6 + 0x24) <= *(float *)((int64_t)puVar7 + 0x24)) {
      do {
        iVar3 = param_2[-1];
        param_2 = param_2 + -1;
        puVar5 = puVar4;
        puVar7 = param_4;
        if (puVar4 == (uint64_t *)0x0) {
LAB_18009e489:
          puVar7 = param_4;
        }
        else {
          do {
            if (*(int *)(puVar5 + 4) < iVar3) {
              puVar5 = (uint64_t *)*puVar5;
            }
            else {
              puVar7 = puVar5;
              puVar5 = (uint64_t *)puVar5[1];
            }
          } while (puVar5 != (uint64_t *)0x0);
          if ((puVar7 == param_4) || (iVar3 < *(int *)(puVar7 + 4))) goto LAB_18009e489;
        }
        puVar6 = param_4;
        puVar5 = puVar4;
        if (puVar4 == (uint64_t *)0x0) {
LAB_18009e4bf:
          puVar6 = param_4;
        }
        else {
          do {
            if (*(int *)(puVar5 + 4) < iVar1) {
              puVar5 = (uint64_t *)*puVar5;
            }
            else {
              puVar6 = puVar5;
              puVar5 = (uint64_t *)puVar5[1];
            }
          } while (puVar5 != (uint64_t *)0x0);
          if ((puVar6 == param_4) || (iVar1 < *(int *)(puVar6 + 4))) goto LAB_18009e4bf;
        }
      } while (*(float *)((int64_t)puVar7 + 0x24) < *(float *)((int64_t)puVar6 + 0x24));
      if (param_2 <= param_1) {
        return param_1;
      }
      *param_1 = iVar3;
      param_1 = param_1 + 1;
      *param_2 = iVar2;
    }
    else {
      param_1 = param_1 + 1;
    }
  } while( true );
}





// 函数: void FUN_18009e500(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_18009e500(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t *param_5,int64_t param_6)

{
  int64_t lVar1;
  byte bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  byte *pbVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  int8_t auStackX_8 [8];
  int64_t lStackX_10;
  
  lVar5 = param_6;
  lVar1 = param_4 * 2;
  plVar6 = param_5;
  while (lVar4 = lVar1 + 2, lStackX_10 = param_2, param_5 = plVar6, lVar4 < param_3) {
    lVar10 = *(int64_t *)(param_1 + lVar4 * 8);
    lVar11 = *(int64_t *)(param_1 + -8 + lVar4 * 8);
    FUN_180058080(lVar5 + 0x90,&param_6,lVar10 + 0x20);
    plVar6 = (int64_t *)FUN_180058080(lVar5 + 0x90,auStackX_8,lVar11 + 0x20);
    if (extraout_XMM0_Da == *(float *)(*plVar6 + 0x40)) {
      if (*(int *)(lVar10 + 0x30) == 0) {
        bVar3 = false;
      }
      else if (*(int *)(lVar11 + 0x30) == 0) {
        bVar3 = true;
      }
      else {
        pbVar8 = *(byte **)(lVar10 + 0x28);
        lVar10 = *(int64_t *)(lVar11 + 0x28) - (int64_t)pbVar8;
        do {
          bVar2 = *pbVar8;
          uVar9 = (uint)pbVar8[lVar10];
          if (bVar2 != uVar9) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
        bVar3 = 0 < (int)(bVar2 - uVar9);
      }
    }
    else {
      bVar3 = *(float *)(*plVar6 + 0x40) < extraout_XMM0_Da;
    }
    lVar10 = lVar1 + 1;
    if (!bVar3) {
      lVar10 = lVar4;
    }
    *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + lVar10 * 8);
    param_2 = lStackX_10;
    param_4 = lVar10;
    plVar6 = param_5;
    lVar1 = lVar10 * 2;
  }
  if (lVar4 == param_3) {
    *(uint64_t *)(param_1 + param_4 * 8) = *(uint64_t *)(param_1 + -8 + lVar4 * 8);
    param_4 = lVar1 + 1;
  }
  if (param_2 < param_4) {
    do {
      lVar1 = *plVar6;
      lVar10 = param_4 + -1 >> 1;
      lVar4 = *(int64_t *)(param_1 + lVar10 * 8);
      FUN_180058080(lVar5 + 0x90,&lStackX_10,lVar4 + 0x20);
      plVar7 = (int64_t *)FUN_180058080(lVar5 + 0x90,&param_5,lVar1 + 0x20);
      if (extraout_XMM0_Da_00 == *(float *)(*plVar7 + 0x40)) {
        if (*(int *)(lVar4 + 0x30) == 0) {
          bVar3 = false;
        }
        else if (*(int *)(lVar1 + 0x30) == 0) {
          bVar3 = true;
        }
        else {
          pbVar8 = *(byte **)(lVar4 + 0x28);
          lVar11 = *(int64_t *)(lVar1 + 0x28) - (int64_t)pbVar8;
          do {
            bVar2 = *pbVar8;
            uVar9 = (uint)pbVar8[lVar11];
            if (bVar2 != uVar9) break;
            pbVar8 = pbVar8 + 1;
          } while (uVar9 != 0);
          bVar3 = 0 < (int)(bVar2 - uVar9);
        }
      }
      else {
        bVar3 = *(float *)(*plVar7 + 0x40) < extraout_XMM0_Da_00;
      }
      if (!bVar3) {
        *(int64_t *)(param_1 + param_4 * 8) = lVar1;
        return;
      }
      *(int64_t *)(param_1 + param_4 * 8) = lVar4;
      param_4 = lVar10;
    } while (param_2 < lVar10);
    *(int64_t *)(param_1 + lVar10 * 8) = *plVar6;
  }
  else {
    *(int64_t *)(param_1 + param_4 * 8) = *plVar6;
  }
  return;
}





// 函数: void FUN_18009e700(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int *param_5,
void FUN_18009e700(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int *param_5,
                  uint64_t *param_6)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  
  lVar9 = param_4 * 2;
  while (lVar3 = lVar9 + 2, lVar3 < param_3) {
    puVar8 = (uint64_t *)param_6[2];
    iVar4 = *(int *)(param_1 + -4 + lVar3 * 4);
    iVar1 = *(int *)(param_1 + lVar3 * 4);
    puVar5 = puVar8;
    puVar6 = param_6;
    if (puVar8 == (uint64_t *)0x0) {
LAB_18009e789:
      puVar6 = param_6;
    }
    else {
      do {
        if (*(int *)(puVar5 + 4) < iVar4) {
          puVar2 = (uint64_t *)*puVar5;
        }
        else {
          puVar2 = (uint64_t *)puVar5[1];
          puVar6 = puVar5;
        }
        puVar5 = puVar2;
      } while (puVar2 != (uint64_t *)0x0);
      if ((puVar6 == param_6) || (iVar4 < *(int *)(puVar6 + 4))) goto LAB_18009e789;
    }
    puVar5 = param_6;
    if (puVar8 == (uint64_t *)0x0) {
LAB_18009e7bc:
      puVar5 = param_6;
    }
    else {
      do {
        if (*(int *)(puVar8 + 4) < iVar1) {
          puVar8 = (uint64_t *)*puVar8;
        }
        else {
          puVar5 = puVar8;
          puVar8 = (uint64_t *)puVar8[1];
        }
      } while (puVar8 != (uint64_t *)0x0);
      if ((puVar5 == param_6) || (iVar1 < *(int *)(puVar5 + 4))) goto LAB_18009e7bc;
    }
    lVar7 = lVar9 + 1;
    if (*(float *)((int64_t)puVar5 + 0x24) < *(float *)((int64_t)puVar6 + 0x24) ||
        *(float *)((int64_t)puVar5 + 0x24) == *(float *)((int64_t)puVar6 + 0x24)) {
      lVar7 = lVar3;
    }
    *(int32_t *)(param_1 + param_4 * 4) = *(int32_t *)(param_1 + lVar7 * 4);
    param_4 = lVar7;
    lVar9 = lVar7 * 2;
  }
  if (lVar3 == param_3) {
    *(int32_t *)(param_1 + param_4 * 4) = *(int32_t *)(param_1 + -4 + lVar3 * 4);
    param_4 = lVar9 + 1;
  }
  if (param_2 < param_4) {
    do {
      lVar9 = param_4 + -1 >> 1;
      puVar8 = (uint64_t *)param_6[2];
      iVar4 = *param_5;
      iVar1 = *(int *)(param_1 + lVar9 * 4);
      puVar5 = puVar8;
      puVar6 = param_6;
      if (puVar8 == (uint64_t *)0x0) {
LAB_18009e859:
        puVar6 = param_6;
      }
      else {
        do {
          if (*(int *)(puVar5 + 4) < iVar4) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar6 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        } while (puVar5 != (uint64_t *)0x0);
        if ((puVar6 == param_6) || (iVar4 < *(int *)(puVar6 + 4))) goto LAB_18009e859;
      }
      puVar5 = param_6;
      if (puVar8 == (uint64_t *)0x0) {
LAB_18009e88c:
        puVar5 = param_6;
      }
      else {
        do {
          if (*(int *)(puVar8 + 4) < iVar1) {
            puVar8 = (uint64_t *)*puVar8;
          }
          else {
            puVar5 = puVar8;
            puVar8 = (uint64_t *)puVar8[1];
          }
        } while (puVar8 != (uint64_t *)0x0);
        if ((puVar5 == param_6) || (iVar1 < *(int *)(puVar5 + 4))) goto LAB_18009e88c;
      }
      if (*(float *)((int64_t)puVar5 + 0x24) <= *(float *)((int64_t)puVar6 + 0x24)) {
        *(int *)(param_1 + param_4 * 4) = iVar4;
        return;
      }
      *(int *)(param_1 + param_4 * 4) = iVar1;
      param_4 = lVar9;
    } while (param_2 < lVar9);
    iVar4 = *param_5;
  }
  else {
    iVar4 = *param_5;
  }
  *(int *)(param_1 + param_4 * 4) = iVar4;
  return;
}



uint64_t *
FUN_18009e8e0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  uVar2 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar3 = *(int32_t *)(param_2 + 2);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x14);
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((int64_t)param_1 + 0xc) = uVar2;
  *(int32_t *)(param_1 + 2) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x14) = uVar4;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  plVar1 = (int64_t *)param_2[4];
  param_1[4] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_180627ae0(param_1 + 5,param_2 + 5,param_3,param_4,uVar5);
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x4c);
  uVar3 = *(int32_t *)(param_2 + 10);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x54);
  *(int32_t *)(param_1 + 9) = *(int32_t *)(param_2 + 9);
  *(int32_t *)((int64_t)param_1 + 0x4c) = uVar2;
  *(int32_t *)(param_1 + 10) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x54) = uVar4;
  plVar1 = (int64_t *)param_2[0xb];
  param_1[0xb] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}





// 函数: void FUN_18009e960(int64_t param_1)
void FUN_18009e960(int64_t param_1)

{
  if (*(int64_t **)(param_1 + 0x58) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x58) + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  if (*(int64_t **)(param_1 + 0x20) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009e9e0(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18009e9e0(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  uint64_t uStack_18;
  
  uVar1 = system_resource_state;
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uStack_98 = 0;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  uStack_88 = param_2;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_68 = (int32_t)lVar2;
    strcpy_s(auStack_60,0x40);
  }
  FUN_1800b31f0(uVar1,param_2,&puStack_78,1);
  uStack_98 = 1;
  puStack_78 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_b8);
}



int32_t * FUN_18009eae0(int32_t *param_1,int32_t *param_2)

{
  int64_t *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(int8_t *)(param_1 + 8) = *(int8_t *)(param_2 + 8);
  *(int8_t *)((int64_t)param_1 + 0x21) = *(int8_t *)((int64_t)param_2 + 0x21);
  *(int8_t *)((int64_t)param_1 + 0x22) = *(int8_t *)((int64_t)param_2 + 0x22);
  *(int8_t *)((int64_t)param_1 + 0x23) = *(int8_t *)((int64_t)param_2 + 0x23);
  plVar1 = *(int64_t **)(param_2 + 10);
  *(int64_t **)(param_1 + 10) = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  param_1[0xc] = param_2[0xc];
  *(int8_t *)(param_1 + 0xd) = *(int8_t *)(param_2 + 0xd);
  return param_1;
}





// 函数: void FUN_18009eb80(int64_t param_1)
void FUN_18009eb80(int64_t param_1)

{
  if (*(int64_t **)(param_1 + 0x28) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x38))();
  }
  return;
}



uint64_t * FUN_18009ebb0(uint64_t *param_1)

{
  int64_t *plVar1;
  
  param_1[5] = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 1;
  *(uint64_t *)((int64_t)param_1 + 0xc) = 1;
  *(uint64_t *)((int64_t)param_1 + 0x14) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c) = 0;
  *(int32_t *)(param_1 + 4) = 1;
  plVar1 = (int64_t *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 6) = 0xffffffff;
  *(int8_t *)((int64_t)param_1 + 0x34) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18009ec20(uint64_t *param_1)

{
  __0__basic_streambuf_DU__char_traits_D_std___std__IEAA_XZ();
  *param_1 = &unknown_var_2440_ptr;
  *(int8_t *)((int64_t)param_1 + 0x7c) = 0;
  *(int8_t *)((int64_t)param_1 + 0x71) = 0;
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ();
  param_1[0x10] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x74) = core_system_config_config;
  param_1[0xd] = 0;
  return param_1;
}



int64_t FUN_18009ec80(int64_t param_1,uint64_t param_2,int32_t param_3)

{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int8_t auStack_20 [8];
  int64_t *plStack_18;
  
  if (*(int64_t *)(param_1 + 0x80) == 0) {
    lVar2 = __Fiopen_std__YAPEAU_iobuf__PEB_WHH_Z(param_2,param_3,0x40,param_2,0xfffffffffffffffe);
    if (lVar2 != 0) {
      FUN_1800a1920(param_1,lVar2,1);
      uVar3 = _getloc___basic_streambuf_DU__char_traits_D_std___std__QEBA_AVlocale_2_XZ
                        (param_1,auStack_20);
      uVar3 = FUN_18009f9d0(uVar3);
      cVar1 = _always_noconv_codecvt_base_std__QEBA_NXZ(uVar3);
      if (cVar1 == '\0') {
        *(uint64_t *)(param_1 + 0x68) = uVar3;
        __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(param_1);
      }
      else {
        *(uint64_t *)(param_1 + 0x68) = 0;
      }
      if (plStack_18 != (int64_t *)0x0) {
        puVar4 = (uint64_t *)(**(code **)(*plStack_18 + 0x10))();
        if (puVar4 != (uint64_t *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return 0;
}



int64_t FUN_18009ed60(int64_t param_1,uint64_t param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_18009fbe0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108);
  }
  return param_1;
}



uint64_t FUN_18009edb0(uint64_t param_1,uint64_t param_2)

{
  FUN_18009fb60();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



uint FUN_18009ee30(int64_t param_1,uint param_2)

{
  int8_t *puVar1;
  uint64_t uVar2;
  int8_t *puVar3;
  int iVar4;
  
  uVar2 = **(uint64_t **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(uint64_t **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(int64_t **)(param_1 + 0x38) = **(int64_t **)(param_1 + 0x38) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(int64_t *)(param_1 + 0x80) != 0) && (param_2 != 0xffffffff)) {
    if ((*(int64_t *)(param_1 + 0x68) == 0) && (iVar4 = ungetc(param_2 & 0xff), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (int8_t *)(param_1 + 0x70);
    if ((int8_t *)**(int64_t **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (int8_t *)**(int64_t **)(param_1 + 0x18);
      if (puVar3 != puVar1) {
        *(int8_t **)(param_1 + 0x88) = puVar3;
        *(int64_t *)(param_1 + 0x90) =
             (int64_t)**(int **)(param_1 + 0x50) + **(int64_t **)(param_1 + 0x38);
      }
      **(int64_t **)(param_1 + 0x18) = (int64_t)puVar1;
      **(int64_t **)(param_1 + 0x38) = (int64_t)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
      return param_2;
    }
  }
  return 0xffffffff;
}



uint64_t FUN_18009ef20(int64_t param_1)

{
  int8_t *puVar1;
  byte *pbVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  pbVar2 = (byte *)**(uint64_t **)(param_1 + 0x38);
  if ((pbVar2 != (byte *)0x0) && (pbVar2 < pbVar2 + **(int **)(param_1 + 0x50))) {
    return (uint64_t)*pbVar2;
  }
  uVar6 = FUN_18009f170(param_1);
  uVar7 = uVar6 & 0xffffffff;
  if ((uint)uVar6 == 0xffffffff) {
    return uVar6;
  }
  uVar3 = **(uint64_t **)(param_1 + 0x38);
  if (((uVar3 != 0) && (**(uint64_t **)(param_1 + 0x18) < uVar3)) &&
     ((uint)*(byte *)(uVar3 - 1) == (uint)uVar6)) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(int64_t **)(param_1 + 0x38) = **(int64_t **)(param_1 + 0x38) + -1;
    return uVar6 & 0xffffffff;
  }
  if (*(int64_t *)(param_1 + 0x80) != 0) {
    if ((*(int64_t *)(param_1 + 0x68) == 0) && (iVar5 = ungetc(uVar6 & 0xff), iVar5 != -1)) {
      return uVar7;
    }
    puVar1 = (int8_t *)(param_1 + 0x70);
    if ((int8_t *)**(int64_t **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)uVar7;
      puVar4 = (int8_t *)**(int64_t **)(param_1 + 0x18);
      if (puVar4 != puVar1) {
        *(int8_t **)(param_1 + 0x88) = puVar4;
        *(int64_t *)(param_1 + 0x90) =
             (int64_t)**(int **)(param_1 + 0x50) + **(int64_t **)(param_1 + 0x38);
      }
      **(int64_t **)(param_1 + 0x18) = (int64_t)puVar1;
      **(int64_t **)(param_1 + 0x38) = (int64_t)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
    }
  }
  return uVar7;
}



uint64_t FUN_18009ef50(void)

{
  int8_t *puVar1;
  uint64_t uVar2;
  int8_t *puVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t unaff_RBX;
  uint64_t uVar6;
  
  uVar5 = FUN_18009f170();
  uVar6 = uVar5 & 0xffffffff;
  if ((uint)uVar5 == 0xffffffff) {
    return uVar5;
  }
  uVar2 = **(uint64_t **)(unaff_RBX + 0x38);
  if (((uVar2 != 0) && (**(uint64_t **)(unaff_RBX + 0x18) < uVar2)) &&
     ((uint)*(byte *)(uVar2 - 1) == (uint)uVar5)) {
    **(int **)(unaff_RBX + 0x50) = **(int **)(unaff_RBX + 0x50) + 1;
    **(int64_t **)(unaff_RBX + 0x38) = **(int64_t **)(unaff_RBX + 0x38) + -1;
    return uVar5 & 0xffffffff;
  }
  if (*(int64_t *)(unaff_RBX + 0x80) != 0) {
    if ((*(int64_t *)(unaff_RBX + 0x68) == 0) && (iVar4 = ungetc(uVar5 & 0xff), iVar4 != -1)) {
      return uVar6;
    }
    puVar1 = (int8_t *)(unaff_RBX + 0x70);
    if ((int8_t *)**(int64_t **)(unaff_RBX + 0x38) != puVar1) {
      *puVar1 = (char)uVar6;
      puVar3 = (int8_t *)**(int64_t **)(unaff_RBX + 0x18);
      if (puVar3 != puVar1) {
        *(int8_t **)(unaff_RBX + 0x88) = puVar3;
        *(int64_t *)(unaff_RBX + 0x90) =
             (int64_t)**(int **)(unaff_RBX + 0x50) + **(int64_t **)(unaff_RBX + 0x38);
      }
      **(int64_t **)(unaff_RBX + 0x18) = (int64_t)puVar1;
      **(int64_t **)(unaff_RBX + 0x38) = (int64_t)puVar1;
      **(int **)(unaff_RBX + 0x50) = ((int)unaff_RBX - (int)puVar1) + 0x71;
    }
  }
  return uVar6;
}



uint FUN_18009ef6c(void)

{
  int8_t *puVar1;
  uint64_t uVar2;
  int8_t *puVar3;
  int iVar4;
  int64_t unaff_RBX;
  uint unaff_EDI;
  
  uVar2 = **(uint64_t **)(unaff_RBX + 0x38);
  if (((uVar2 != 0) && (**(uint64_t **)(unaff_RBX + 0x18) < uVar2)) &&
     (*(byte *)(uVar2 - 1) == unaff_EDI)) {
    **(int **)(unaff_RBX + 0x50) = **(int **)(unaff_RBX + 0x50) + 1;
    **(int64_t **)(unaff_RBX + 0x38) = **(int64_t **)(unaff_RBX + 0x38) + -1;
    return unaff_EDI;
  }
  if (*(int64_t *)(unaff_RBX + 0x80) != 0) {
    if ((*(int64_t *)(unaff_RBX + 0x68) == 0) && (iVar4 = ungetc(unaff_EDI & 0xff), iVar4 != -1)) {
      return unaff_EDI;
    }
    puVar1 = (int8_t *)(unaff_RBX + 0x70);
    if ((int8_t *)**(int64_t **)(unaff_RBX + 0x38) != puVar1) {
      *puVar1 = (char)unaff_EDI;
      puVar3 = (int8_t *)**(int64_t **)(unaff_RBX + 0x18);
      if (puVar3 != puVar1) {
        *(int8_t **)(unaff_RBX + 0x88) = puVar3;
        *(int64_t *)(unaff_RBX + 0x90) =
             (int64_t)**(int **)(unaff_RBX + 0x50) + **(int64_t **)(unaff_RBX + 0x38);
      }
      **(int64_t **)(unaff_RBX + 0x18) = (int64_t)puVar1;
      **(int64_t **)(unaff_RBX + 0x38) = (int64_t)puVar1;
      **(int **)(unaff_RBX + 0x50) = ((int)unaff_RBX - (int)puVar1) + 0x71;
    }
  }
  return unaff_EDI;
}



uint FUN_18009efa3(void)

{
  int8_t *puVar1;
  int8_t *puVar2;
  int iVar3;
  int64_t unaff_RBX;
  uint unaff_EDI;
  
  if (*(int64_t *)(unaff_RBX + 0x80) != 0) {
    if ((*(int64_t *)(unaff_RBX + 0x68) == 0) && (iVar3 = ungetc(unaff_EDI & 0xff), iVar3 != -1)) {
      return unaff_EDI;
    }
    puVar1 = (int8_t *)(unaff_RBX + 0x70);
    if ((int8_t *)**(int64_t **)(unaff_RBX + 0x38) != puVar1) {
      *puVar1 = (char)unaff_EDI;
      puVar2 = (int8_t *)**(int64_t **)(unaff_RBX + 0x18);
      if (puVar2 != puVar1) {
        *(int8_t **)(unaff_RBX + 0x88) = puVar2;
        *(int64_t *)(unaff_RBX + 0x90) =
             (int64_t)**(int **)(unaff_RBX + 0x50) + **(int64_t **)(unaff_RBX + 0x38);
      }
      **(int64_t **)(unaff_RBX + 0x18) = (int64_t)puVar1;
      **(int64_t **)(unaff_RBX + 0x38) = (int64_t)puVar1;
      **(int **)(unaff_RBX + 0x50) = ((int)unaff_RBX - (int)puVar1) + 0x71;
    }
  }
  return unaff_EDI;
}





