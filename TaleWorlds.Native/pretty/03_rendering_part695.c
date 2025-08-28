/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor


#include "TaleWorlds.Native.Split.h"

// 03_rendering_part695.c - 8 个函数

// 函数: void SystemNetworkHandler(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int param_4)
void SystemNetworkHandler(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  param_1[2] = (int64_t)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(int8_t *)(param_1 + 3) = 0;
  if (param_4 == 0) {
    param_2[1] = param_1;
    if (param_2 != param_3) {
      if (param_2 == (uint64_t *)param_3[1]) {
        param_3[1] = param_1;
      }
      goto LAB_18066be05;
    }
    param_3[2] = param_1;
  }
  else {
    *param_2 = param_1;
    if (param_2 != (uint64_t *)*param_3) goto LAB_18066be05;
  }
  *param_3 = param_1;
LAB_18066be05:
  plVar5 = (int64_t *)param_3[2];
  if (param_1 == plVar5) {
    *(int8_t *)(plVar5 + 3) = 1;
    return;
  }
  do {
    plVar1 = (int64_t *)param_1[2];
    if ((char)plVar1[3] != '\0') break;
    plVar8 = (int64_t *)plVar1[2];
    plVar7 = plVar1 + 2;
    plVar6 = (int64_t *)plVar8[1];
    if (plVar1 == plVar6) {
      lVar2 = *plVar8;
      if ((lVar2 == 0) || (*(char *)(lVar2 + 0x18) != '\0')) {
        plVar6 = plVar1;
        if ((plVar1 != (int64_t *)0x0) && (plVar4 = (int64_t *)*plVar1, param_1 == plVar4)) {
          *plVar1 = plVar4[1];
          if (plVar4[1] != 0) {
            *(int64_t **)(plVar4[1] + 0x10) = plVar1;
          }
          plVar4[2] = *plVar7;
          plVar6 = plVar4;
          if (plVar1 != plVar5) {
            puVar3 = (uint64_t *)*plVar7;
            plVar6 = plVar5;
            if (plVar1 == (int64_t *)puVar3[1]) {
              puVar3[1] = plVar4;
            }
            else {
              *puVar3 = plVar4;
            }
          }
          plVar4[1] = (int64_t)plVar1;
          *plVar7 = (int64_t)plVar4;
          param_3[2] = plVar6;
          plVar6 = (int64_t *)*plVar7;
          param_1 = plVar1;
        }
        *(int8_t *)(plVar6 + 3) = 1;
        plVar5 = (int64_t *)plVar8[1];
        *(int8_t *)(plVar8 + 3) = 0;
        plVar7 = (int64_t *)param_3[2];
        plVar8[1] = *plVar5;
        if (*plVar5 != 0) {
          *(int64_t **)(*plVar5 + 0x10) = plVar8;
        }
        plVar5[2] = plVar8[2];
        if (plVar8 == plVar7) {
          *plVar5 = (int64_t)plVar8;
          plVar7 = plVar5;
        }
        else {
          puVar3 = (uint64_t *)plVar8[2];
          if (plVar8 == (int64_t *)*puVar3) {
            *puVar3 = plVar5;
            *plVar5 = (int64_t)plVar8;
          }
          else {
            puVar3[1] = plVar5;
            *plVar5 = (int64_t)plVar8;
          }
        }
LAB_18066bfd1:
        plVar8[2] = (int64_t)plVar5;
        param_3[2] = plVar7;
        plVar8 = param_1;
      }
      else {
        *(int8_t *)(plVar1 + 3) = 1;
        *(int8_t *)(lVar2 + 0x18) = 1;
        *(int8_t *)(plVar8 + 3) = 0;
      }
    }
    else {
      if ((plVar6 == (int64_t *)0x0) || ((char)plVar6[3] != '\0')) {
        plVar6 = (int64_t *)plVar1[1];
        plVar4 = plVar1;
        if (param_1 == plVar6) {
          plVar1[1] = *plVar6;
          if (*plVar6 != 0) {
            *(int64_t **)(*plVar6 + 0x10) = plVar1;
          }
          plVar6[2] = *plVar7;
          plVar4 = plVar6;
          if (plVar1 != plVar5) {
            puVar3 = (uint64_t *)*plVar7;
            plVar4 = plVar5;
            if (plVar1 == (int64_t *)*puVar3) {
              *puVar3 = plVar6;
            }
            else {
              puVar3[1] = plVar6;
            }
          }
          *plVar6 = (int64_t)plVar1;
          *plVar7 = (int64_t)plVar6;
          param_3[2] = plVar4;
          plVar4 = (int64_t *)*plVar7;
          param_1 = plVar1;
        }
        *(int8_t *)(plVar4 + 3) = 1;
        plVar5 = (int64_t *)*plVar8;
        *(int8_t *)(plVar8 + 3) = 0;
        plVar1 = (int64_t *)param_3[2];
        *plVar8 = plVar5[1];
        if (plVar5[1] != 0) {
          *(int64_t **)(plVar5[1] + 0x10) = plVar8;
        }
        plVar5[2] = plVar8[2];
        plVar7 = plVar5;
        if (plVar8 != plVar1) {
          puVar3 = (uint64_t *)plVar8[2];
          plVar7 = plVar1;
          if (plVar8 == (int64_t *)puVar3[1]) {
            puVar3[1] = plVar5;
          }
          else {
            *puVar3 = plVar5;
          }
        }
        plVar5[1] = (int64_t)plVar8;
        goto LAB_18066bfd1;
      }
      *(int8_t *)(plVar1 + 3) = 1;
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(plVar8 + 3) = 0;
    }
    plVar5 = (int64_t *)param_3[2];
    param_1 = plVar8;
  } while (plVar8 != plVar5);
  *(int8_t *)(plVar5 + 3) = 1;
  return;
}





// 函数: void FUN_18066be12(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_18066be12(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *in_R10;
  int64_t *plVar8;
  int64_t in_R11;
  
  do {
    plVar6 = (int64_t *)in_R10[2];
    if ((char)plVar6[3] != '\0') break;
    plVar8 = (int64_t *)plVar6[2];
    plVar4 = plVar6 + 2;
    lVar1 = plVar8[1];
    if (plVar6 == (int64_t *)lVar1) {
      lVar1 = *plVar8;
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) != '\0')) {
        plVar7 = plVar6;
        if ((plVar6 != (int64_t *)0x0) && (plVar5 = (int64_t *)*plVar6, in_R10 == plVar5)) {
          *plVar6 = plVar5[1];
          if (plVar5[1] != 0) {
            *(int64_t **)(plVar5[1] + 0x10) = plVar6;
          }
          plVar5[2] = *plVar4;
          plVar7 = plVar5;
          if (plVar6 != param_3) {
            puVar2 = (uint64_t *)*plVar4;
            plVar7 = param_3;
            if (plVar6 == (int64_t *)puVar2[1]) {
              puVar2[1] = plVar5;
            }
            else {
              *puVar2 = plVar5;
            }
          }
          plVar5[1] = (int64_t)plVar6;
          *plVar4 = (int64_t)plVar5;
          *(int64_t **)(in_R11 + 0x10) = plVar7;
          plVar7 = (int64_t *)*plVar4;
          in_R10 = plVar6;
        }
        *(int8_t *)((int64_t)plVar7 + 0x18) = 1;
        plVar6 = (int64_t *)plVar8[1];
        *(int8_t *)(plVar8 + 3) = 0;
        plVar7 = *(int64_t **)(in_R11 + 0x10);
        plVar8[1] = *plVar6;
        if (*plVar6 != 0) {
          *(int64_t **)(*plVar6 + 0x10) = plVar8;
        }
        plVar6[2] = plVar8[2];
        if (plVar8 == plVar7) {
          *plVar6 = (int64_t)plVar8;
          plVar7 = plVar6;
        }
        else {
          puVar2 = (uint64_t *)plVar8[2];
          if (plVar8 == (int64_t *)*puVar2) {
            *puVar2 = plVar6;
            *plVar6 = (int64_t)plVar8;
          }
          else {
            puVar2[1] = plVar6;
            *plVar6 = (int64_t)plVar8;
          }
        }
LAB_18066bfd1:
        plVar8[2] = (int64_t)plVar6;
        *(int64_t **)(in_R11 + 0x10) = plVar7;
        plVar8 = in_R10;
      }
      else {
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(lVar1 + 0x18) = 1;
        *(int8_t *)(plVar8 + 3) = 0;
      }
    }
    else {
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) != '\0')) {
        plVar7 = (int64_t *)plVar6[1];
        plVar5 = plVar6;
        if (in_R10 == plVar7) {
          plVar6[1] = *plVar7;
          if (*plVar7 != 0) {
            *(int64_t **)(*plVar7 + 0x10) = plVar6;
          }
          plVar7[2] = *plVar4;
          plVar5 = plVar7;
          if (plVar6 != param_3) {
            plVar3 = (int64_t *)*plVar4;
            plVar5 = param_3;
            if (plVar6 == (int64_t *)*plVar3) {
              *plVar3 = (int64_t)plVar7;
            }
            else {
              plVar3[1] = (int64_t)plVar7;
            }
          }
          *plVar7 = (int64_t)plVar6;
          *plVar4 = (int64_t)plVar7;
          *(int64_t **)(in_R11 + 0x10) = plVar5;
          plVar5 = (int64_t *)*plVar4;
          in_R10 = plVar6;
        }
        *(int8_t *)((int64_t)plVar5 + 0x18) = 1;
        plVar6 = (int64_t *)*plVar8;
        *(int8_t *)(plVar8 + 3) = 0;
        plVar4 = *(int64_t **)(in_R11 + 0x10);
        *plVar8 = plVar6[1];
        if (plVar6[1] != 0) {
          *(int64_t **)(plVar6[1] + 0x10) = plVar8;
        }
        plVar6[2] = plVar8[2];
        plVar7 = plVar6;
        if (plVar8 != plVar4) {
          puVar2 = (uint64_t *)plVar8[2];
          plVar7 = plVar4;
          if (plVar8 == (int64_t *)puVar2[1]) {
            puVar2[1] = plVar6;
          }
          else {
            *puVar2 = plVar6;
          }
        }
        plVar6[1] = (int64_t)plVar8;
        goto LAB_18066bfd1;
      }
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(lVar1 + 0x18) = 1;
      *(int8_t *)(plVar8 + 3) = 0;
    }
    param_3 = *(int64_t **)(in_R11 + 0x10);
    in_R10 = plVar8;
  } while (plVar8 != param_3);
  *(int8_t *)(param_3 + 3) = 1;
  return;
}





// 函数: void FUN_18066bff4(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18066bff4(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  *(int8_t *)(param_3 + 0x18) = 1;
  return;
}



uint FUN_18066c0c0(float *param_1,uint param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  float fVar5;
  
  puVar4 = (uint *)&processed_var_6192_ptr;
  lVar3 = 0x100;
  do {
    lVar2 = lVar3 >> 1;
    if (puVar4[lVar2] < (uint)(int64_t)((float)param_2 / *param_1)) {
      puVar4 = puVar4 + lVar2 + 1;
      lVar2 = lVar3 + (-1 - lVar2);
    }
    lVar3 = lVar2;
  } while (0 < lVar2);
  uVar1 = *puVar4;
  fVar5 = (float)ceilf((float)uVar1 * *param_1);
  param_1[2] = (float)(int64_t)fVar5;
  return uVar1;
}



uint FUN_18066c160(float *param_1,uint param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  float fVar5;
  
  puVar4 = (uint *)&processed_var_6192_ptr;
  lVar3 = 0x100;
  do {
    lVar2 = lVar3 >> 1;
    if (puVar4[lVar2] < param_2) {
      puVar4 = puVar4 + lVar2 + 1;
      lVar2 = lVar3 + (-1 - lVar2);
    }
    lVar3 = lVar2;
  } while (0 < lVar2);
  uVar1 = *puVar4;
  fVar5 = (float)ceilf((float)uVar1 * *param_1);
  param_1[2] = (float)(int64_t)fVar5;
  return uVar1;
}



int8_t * RenderingShaderProcessor0(float *param_1,int8_t *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((uint)(param_5 + param_4) <= (uint)param_1[2]) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 4) = 0;
    return param_2;
  }
  fVar7 = *param_1;
  uVar1 = 0;
  if (param_3 != 1) {
    uVar1 = param_3;
  }
  fVar8 = (float)(uint)(param_5 + param_4) / fVar7;
  fVar5 = (float)uVar1;
  if (fVar8 <= fVar5) {
    fVar7 = (float)ceilf(fVar5 * fVar7);
    *param_2 = 0;
    *(int32_t *)(param_2 + 4) = 0;
    param_1[2] = (float)(int64_t)fVar7;
    return param_2;
  }
  puVar4 = (uint *)&processed_var_6192_ptr;
  fVar6 = fVar5 * param_1[1];
  if (fVar5 * param_1[1] <= fVar8) {
    fVar6 = fVar8;
  }
  lVar3 = 0x100;
  do {
    lVar2 = lVar3 >> 1;
    if (puVar4[lVar2] < (uint)(int64_t)fVar6) {
      puVar4 = puVar4 + lVar2 + 1;
      lVar2 = lVar3 + (-1 - lVar2);
    }
    lVar3 = lVar2;
  } while (0 < lVar2);
  uVar1 = *puVar4;
  fVar7 = (float)ceilf((float)uVar1 * fVar7);
  *(uint *)(param_2 + 4) = uVar1;
  *param_2 = 1;
  param_1[2] = (float)(int64_t)fVar7;
  return param_2;
}





// 函数: void FUN_18066c279(float param_1,float param_2,uint *param_3)
void FUN_18066c279(float param_1,float param_2,uint *param_3)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RSI;
  int8_t *unaff_RDI;
  float fVar4;
  float in_XMM2_Da;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  lVar3 = 0x100;
  do {
    lVar2 = lVar3 >> 1;
    if (param_3[lVar2] < (uint)(int64_t)param_1) {
      param_3 = param_3 + lVar2 + 1;
      lVar2 = lVar3 + (-1 - lVar2);
    }
    lVar3 = lVar2;
  } while (0 < lVar2);
  uVar1 = *param_3;
  fVar4 = (float)ceilf((float)uVar1 * in_XMM2_Da);
  *(uint *)(unaff_RDI + 4) = uVar1;
  *unaff_RDI = 1;
  *(int *)(unaff_RSI + 8) = (int)(int64_t)fVar4;
  return;
}





// 函数: void FUN_18066c2f0(float param_1,uint64_t param_2,float param_3)
void FUN_18066c2f0(float param_1,uint64_t param_2,float param_3)

{
  int64_t unaff_RSI;
  int8_t *unaff_RDI;
  float fVar1;
  
  fVar1 = (float)ceilf(param_1 * param_3);
  *unaff_RDI = 0;
  *(int32_t *)(unaff_RDI + 4) = 0;
  *(int *)(unaff_RSI + 8) = (int)(int64_t)fVar1;
  return;
}



int FUN_18066c3b0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint param_4,
                 int param_5)

{
  int iVar1;
  uint64_t uVar2;
  
  if (param_5 == 9) {
    if ((param_1 == (uint64_t *)0x0) || (param_2 == (uint64_t *)0x0)) {
      iVar1 = 8;
    }
    else if (*(int *)(param_2 + 1) == 5) {
      if (((param_4 >> 0x10 & 1) == 0) || ((*(uint *)((int64_t)param_2 + 0xc) & 0x40000) != 0)) {
        if (((param_4 >> 0x11 & 1) == 0) || ((*(uint *)((int64_t)param_2 + 0xc) & 0x80000) != 0)) {
          if (((param_4 >> 0x12 & 1) == 0) || ((*(uint *)((int64_t)param_2 + 0xc) & 0x100000) != 0)
             ) {
            if ((*(byte *)((int64_t)param_2 + 0xc) & 1) == 0) {
              iVar1 = 4;
            }
            else {
              uVar2 = 0;
              *param_1 = 0;
              param_1[2] = 0;
              param_1[3] = 0;
              param_1[4] = 0;
              param_1[5] = 0;
              param_1[6] = 0;
              param_1[1] = param_2;
              *param_1 = *param_2;
              param_1[6] = 0;
              *(uint *)(param_1 + 4) = param_4;
              param_1[5] = param_3;
              iVar1 = (*(code *)param_2[2])(param_1,0);
              if (iVar1 != 0) {
                if ((uint64_t *)param_1[6] != (uint64_t *)0x0) {
                  uVar2 = *(uint64_t *)param_1[6];
                }
                param_1[3] = uVar2;
                FUN_18066d310(param_1);
              }
            }
          }
          else {
            iVar1 = 4;
          }
        }
        else {
          iVar1 = 4;
        }
      }
      else {
        iVar1 = 4;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 3;
  }
  if (param_1 != (uint64_t *)0x0) {
    *(int *)(param_1 + 2) = iVar1;
  }
  return iVar1;
}



int FUN_18066c3c2(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t in_R10;
  bool in_ZF;
  
  if (in_ZF) {
    if ((param_1 == (uint64_t *)0x0) || (param_2 == (uint64_t *)0x0)) {
      iVar1 = 8;
    }
    else if (*(int *)(param_2 + 1) == 5) {
      if (((param_4 >> 0x10 & 1) == 0) || ((*(uint *)((int64_t)param_2 + 0xc) & 0x40000) != 0)) {
        if (((param_4 >> 0x11 & 1) == 0) || ((*(uint *)((int64_t)param_2 + 0xc) & 0x80000) != 0)) {
          if (((param_4 >> 0x12 & 1) == 0) || ((*(uint *)((int64_t)param_2 + 0xc) & 0x100000) != 0)
             ) {
            if ((*(byte *)((int64_t)param_2 + 0xc) & 1) == 0) {
              iVar1 = 4;
            }
            else {
              uVar2 = 0;
              *param_1 = 0;
              param_1[2] = 0;
              param_1[3] = 0;
              param_1[4] = 0;
              param_1[5] = 0;
              param_1[6] = 0;
              param_1[1] = param_2;
              *param_1 = *param_2;
              param_1[6] = 0;
              *(uint *)(param_1 + 4) = param_4;
              param_1[5] = param_3;
              iVar1 = (**(code **)(in_R10 + 0x10))(param_1,0);
              if (iVar1 != 0) {
                if ((uint64_t *)param_1[6] != (uint64_t *)0x0) {
                  uVar2 = *(uint64_t *)param_1[6];
                }
                param_1[3] = uVar2;
                FUN_18066d310(param_1);
              }
            }
          }
          else {
            iVar1 = 4;
          }
        }
        else {
          iVar1 = 4;
        }
      }
      else {
        iVar1 = 4;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 3;
  }
  if (param_1 != (uint64_t *)0x0) {
    *(int *)(param_1 + 2) = iVar1;
  }
  return iVar1;
}





// 函数: void FUN_18066c4b8(void)
void FUN_18066c4b8(void)

{
  int32_t unaff_EBX;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x10) = unaff_EBX;
  return;
}





// 函数: void FUN_18066c4d0(int64_t param_1,int64_t param_2,int param_3)
void FUN_18066c4d0(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
LAB_18066c500:
        if ((*(int64_t *)(param_1 + 8) == 0) || (*(int64_t *)(param_1 + 0x30) == 0)) {
          uVar1 = 1;
        }
        else {
          uVar1 = (**(code **)(*(int64_t *)(param_1 + 8) + 0x38))();
        }
        goto LAB_18066c4ed;
      }
    }
    else if (param_3 != 0) goto LAB_18066c500;
  }
  uVar1 = 8;
LAB_18066c4ed:
  if (param_1 != 0) {
    *(int32_t *)(param_1 + 0x10) = uVar1;
  }
  return;
}



uint64_t FUN_18066c5a0(int64_t param_1,int64_t *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  
  puVar1 = (uint *)*param_2;
  if ((puVar1 != (uint *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    lVar5 = *(int64_t *)(param_1 + 0x1b0) + 0x12c0;
    iVar2 = func_0x00018066f280(lVar5,3);
    iVar3 = func_0x00018066f280(lVar5,2);
    iVar4 = func_0x00018066f280(lVar5,1);
    *puVar1 = (uint)(iVar4 != 0) | -(uint)(iVar3 != 0) & 2 | -(uint)(iVar2 != 0) & 4;
    return 0;
  }
  return 8;
}



uint64_t FUN_18066c5bb(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint *unaff_R14;
  
  lVar4 = *(int64_t *)(param_1 + 0x1b0) + 0x12c0;
  iVar1 = func_0x00018066f280(lVar4,3);
  iVar2 = func_0x00018066f280(lVar4,2);
  iVar3 = func_0x00018066f280(lVar4,1);
  *unaff_R14 = (uint)(iVar3 != 0) | -(uint)(iVar2 != 0) & 2 | -(uint)(iVar1 != 0) & 4;
  return 0;
}



uint64_t FUN_18066c633(void)

{
  return 8;
}



uint64_t FUN_18066c6c0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  func_0x00018066d6e0();
  func_0x00018066e220();
  func_0x00018066e360();
  if (*(int64_t *)(param_1 + 0x30) == 0) {
    lVar2 = CoreSystem_MemoryController0(1);
    *(int64_t *)(param_1 + 0x30) = lVar2;
    *(int32_t *)(lVar2 + 8) = *(int32_t *)(param_1 + 0x20);
    *(int32_t *)(lVar2 + 0xe4) = 0x10;
    *(uint64_t *)(lVar2 + 0x108) = 0;
    *(uint64_t *)(lVar2 + 0x110) = 0;
    puVar1 = *(uint64_t **)(param_1 + 0x28);
    if (puVar1 != (uint64_t *)0x0) {
      *(uint64_t *)(lVar2 + 0xd8) = *puVar1;
      *(int32_t *)(lVar2 + 0xe0) = *(int32_t *)(puVar1 + 1);
      *(uint64_t **)(param_1 + 0x28) = (uint64_t *)(lVar2 + 0xd8);
    }
    lVar2 = *(int64_t *)(param_1 + 0x30);
    *(int32_t *)(lVar2 + 700) = 0;
    *(uint *)(lVar2 + 0x2b8) = *(uint *)(lVar2 + 8) & 0x40000;
    *(int32_t *)(lVar2 + 0x1a8) = 0;
    return 0;
  }
  *(int32_t *)(*(int64_t *)(param_1 + 0x30) + 0x1a8) = 0;
  return 0;
}



uint64_t FUN_18066c770(int64_t param_1)

{
  FUN_18066ef00(param_1 + 0x1a8);
  func_0x00018066e940(param_1);
  return 0;
}





// 函数: void FUN_18066c7a0(void)
void FUN_18066c7a0(void)

{
  FUN_18066d210();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



