/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part023.c - 4 个函数

// 函数: void FUN_1808b3b1b(void)
void FUN_1808b3b1b(void)

{
  return;
}



uint64_t * FUN_1808b3b30(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  *param_1 = &unknown_var_1360_ptr;
  FUN_1808b41e0(param_1 + 0xc);
  plVar1 = param_1 + 4;
  *(int64_t *)param_1[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (int64_t)plVar1;
  FUN_1808b1a30(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x90);
  }
  return param_1;
}



uint64_t FUN_1808b3bc0(int64_t param_1,float *param_2)

{
  uint64_t uVar1;
  float *apfStackX_10 [3];
  
  if (param_2 == (float *)0x0) {
    return 0x1c;
  }
  if (*(int *)(param_1 + 0x78) != -1) {
    uVar1 = FUN_1807406e0(*(uint64_t *)(param_1 + 0x30),*(int *)(param_1 + 0x78),apfStackX_10,0,0,
                          0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_2 = *apfStackX_10[0] * *param_2 + apfStackX_10[0][1];
  }
  return 0;
}



uint64_t FUN_1808b3c20(int64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lStack_28;
  int64_t lStack_20;
  
  plVar5 = (int64_t *)param_2[9];
  puVar4 = param_2;
  do {
    if ((plVar5 < (int64_t *)param_2[9]) ||
       ((int64_t *)param_2[9] + (int64_t)*(int *)(param_2 + 10) * 2 <= plVar5)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 8;
      return 0;
    }
    puVar1 = (uint64_t *)func_0x0001808b5e80(param_1,puVar4,plVar5);
    for (puVar6 = (uint64_t *)*puVar1;
        (puVar4 = (uint64_t *)*puVar1, puVar4 <= puVar6 &&
        (puVar4 = puVar4 + (int)puVar1[1], puVar6 < puVar4)); puVar6 = puVar6 + 1) {
      puVar4 = (uint64_t *)*puVar6;
      plVar2 = (int64_t *)(**(code **)*puVar4)(puVar4);
      (**(code **)(*plVar2 + 0x40))(plVar2,&lStack_28);
      if ((lStack_28 == *plVar5) &&
         ((lStack_20 == plVar5[1] && (uVar3 = FUN_1808b3fc0(param_1,puVar4), (int)uVar3 != 0)))) {
        return uVar3;
      }
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b3d00(int64_t param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int iVar12;
  int64_t lStack_38;
  int64_t lStack_30;
  
  cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  uVar6 = 0;
  if (cVar2 == '\0') {
LAB_1808b3e00:
    cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if ((cVar2 != '\0') || (*(short *)((int64_t)param_2 + 0xc) == 7)) {
      if (*(int64_t *)(param_1 + 0x48) == 0) {
        puVar10 = (uint64_t *)(*(int64_t *)(param_1 + 0x38) + 0x7a8);
      }
      else {
        puVar10 = (uint64_t *)(*(int64_t *)(param_1 + 0x48) + 0x4b0);
      }
      uVar9 = (int)*(uint *)((int64_t)puVar10 + 0xc) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)puVar10 + 0xc) ^ uVar9) - uVar9;
      iVar7 = (int)puVar10[1] + 1;
      if (iVar3 < iVar7) {
        iVar12 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar7;
        if (iVar7 <= iVar12) {
          iVar3 = iVar12;
        }
        if (iVar3 < 8) {
          iVar12 = 8;
        }
        else if (iVar12 < iVar7) {
          iVar12 = iVar7;
        }
        if (iVar12 < (int)puVar10[1]) {
          return 0x1c;
        }
        if (iVar12 != 0) {
          if (0x3ffffffe < iVar12 * 8 - 1U) {
            return 0x26;
          }
          uVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar12 * 8,&unknown_var_8432_ptr,
                                0xf4,0,0,1);
          if (uVar6 == 0) {
            return 0x26;
          }
          if ((int)puVar10[1] != 0) {
                    // WARNING: Subroutine does not return
            memcpy(uVar6,*puVar10,(int64_t)(int)puVar10[1] << 3);
          }
        }
        if ((0 < *(int *)((int64_t)puVar10 + 0xc)) && (*puVar10 != 0)) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*puVar10,&unknown_var_8432_ptr,0x100,1);
        }
        *puVar10 = uVar6;
        *(int *)((int64_t)puVar10 + 0xc) = iVar12;
      }
      *(int64_t *)(*puVar10 + (int64_t)(int)puVar10[1] * 8) = param_1;
      *(int *)(puVar10 + 1) = (int)puVar10[1] + 1;
    }
    return 0;
  }
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    puVar10 = (uint64_t *)(*(int64_t *)(param_1 + 0x38) + 0x7a8);
  }
  else {
    puVar10 = (uint64_t *)(*(int64_t *)(param_1 + 0x48) + 0x4b0);
  }
  plVar11 = (int64_t *)*puVar10;
LAB_1808b3d50:
  do {
    if ((plVar11 < (int64_t *)*puVar10) || ((int64_t *)*puVar10 + (int)puVar10[1] <= plVar11))
    goto LAB_1808b3e00;
    puVar1 = (uint64_t *)*plVar11;
    lVar4 = (**(code **)*puVar1)(puVar1);
    if ((*(short *)(lVar4 + 0xc) == 7) &&
       (lVar4 = (**(code **)*puVar1)(puVar1), (*(uint *)(puVar1 + 0x11) >> 3 & 1) != 0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&lStack_38);
      if (0 < *(int *)(lVar4 + 0x50)) {
        uVar8 = uVar6;
        do {
          iVar7 = (int)uVar8;
          if ((*(int64_t *)(*(int64_t *)(lVar4 + 0x48) + (int64_t)iVar7 * 0x10) == lStack_38) &&
             (*(int64_t *)(*(int64_t *)(lVar4 + 0x48) + 8 + (int64_t)iVar7 * 0x10) == lStack_30))
          {
            uVar5 = FUN_1808b3fc0(puVar1,param_1);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            goto LAB_1808b3df7;
          }
          uVar8 = (uint64_t)(iVar7 + 1U);
        } while ((int)(iVar7 + 1U) < *(int *)(lVar4 + 0x50));
        plVar11 = plVar11 + 1;
        goto LAB_1808b3d50;
      }
    }
LAB_1808b3df7:
    plVar11 = plVar11 + 1;
  } while( true );
}



uint64_t FUN_1808b3f80(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1808b3d00();
  if ((int)uVar1 == 0) {
    if ((*(short *)(param_2 + 0xc) == 7) &&
       (uVar1 = FUN_1808b3c20(param_1,param_2), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808b3fc0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  
  plVar1 = *(int64_t **)(param_1 + 0x60);
  for (plVar7 = plVar1; plVar1 <= plVar7; plVar7 = plVar7 + 2) {
    iVar6 = *(int *)(param_1 + 0x68);
    if (plVar1 + (int64_t)iVar6 * 2 <= plVar7) goto LAB_1808b4011;
    if (*plVar7 == param_2) goto LAB_1808b4095;
  }
  iVar6 = *(int *)(param_1 + 0x68);
LAB_1808b4011:
  uVar5 = (int)*(uint *)(param_1 + 0x6c) >> 0x1f;
  if ((iVar6 + 1 <= (int)((*(uint *)(param_1 + 0x6c) ^ uVar5) - uVar5)) ||
     (uVar3 = FUN_1807d3f50(param_1 + 0x60), (int)uVar3 == 0)) {
    lVar2 = *(int64_t *)(param_1 + 0x60);
    lVar4 = (int64_t)iVar6 * 0x10;
    *(uint64_t *)(lVar4 + lVar2) = 0;
    *(uint64_t *)(lVar4 + 8 + lVar2) = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    lVar2 = *(int64_t *)(param_1 + 0x60);
    *(int64_t *)(lVar2 + lVar4) = param_2;
    uVar3 = FUN_180740030(*(uint64_t *)(param_2 + 0x30),*(uint64_t *)(param_1 + 0x30),
                          lVar2 + 8 + lVar4,3);
    if ((int)uVar3 == 0) {
LAB_1808b4095:
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1808b4130(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  float fVar3;
  int aiStackX_8 [2];
  
  uVar1 = FUN_180740c00(*(uint64_t *)(param_1 + 0x30),aiStackX_8);
  if ((int)uVar1 == 0) {
    if (aiStackX_8[0] != 0x18) {
      return 0x1c;
    }
    uVar2 = 0;
    if ((*(uint *)(param_1 + 0x88) >> 1 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
        fVar3 = *(float *)(param_2 + 0x48);
      }
      else {
        fVar3 = *(float *)(param_1 + 0x84);
      }
      if (-80.0 < fVar3) {
        uVar2 = powf(0x41200000,fVar3 * 0.05);
      }
    }
    uVar1 = FUN_1807416a0(*(uint64_t *)(param_1 + 0x30),1,uVar2);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b41e0(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset((int64_t)iVar1 * 0x10 + *param_1,0,(uint64_t)(uint)-iVar1 << 4);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_1807d3f50(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_1808b42b0(int64_t param_1)

{
  uint64_t uVar1;
  int aiStackX_8 [2];
  int64_t alStackX_10 [3];
  
  if (*(int64_t *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_180740c00(*(int64_t *)(param_1 + 0x30),aiStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (aiStackX_8[0] == 0x1b) {
      uVar1 = FUN_180763070(*(uint64_t *)(param_1 + 0x30),alStackX_10,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = (**(code **)(alStackX_10[0] + 0x120))(alStackX_10[0] + 0xb0,0x40,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808b4320(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  lVar2 = (**(code **)(*param_1 + 0x38))();
  plVar8 = (int64_t *)0x0;
  plVar5 = (int64_t *)(*(int64_t *)(lVar2 + 0x20) + -8);
  if (*(int64_t *)(lVar2 + 0x20) == 0) {
    plVar5 = plVar8;
  }
  plVar1 = plVar8;
  if (plVar5 != (int64_t *)0x0) {
    plVar1 = plVar5 + 1;
  }
  do {
    if (plVar1 == (int64_t *)(lVar2 + 0x20)) {
      return 0;
    }
    plVar5 = plVar1 + 5;
    if (plVar1 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x30;
    }
    lVar3 = (**(code **)*plVar5)();
    if (*(int *)(lVar3 + 0x48) == 2) {
      plVar5 = plVar1 + -1;
      if (plVar1 == (int64_t *)0x0) {
        plVar5 = plVar8;
      }
      lVar3 = (**(code **)plVar5[6])(plVar5 + 6);
      if (0 < *(int *)(param_2 + 0x60)) {
        plVar7 = plVar8;
        do {
          iVar6 = (int)plVar7;
          if ((*(int64_t *)(*(int64_t *)(param_2 + 0x58) + (int64_t)iVar6 * 0x10) ==
               *(int64_t *)(lVar3 + 0x10)) &&
             (*(int64_t *)(*(int64_t *)(param_2 + 0x58) + 8 + (int64_t)iVar6 * 0x10) ==
              *(int64_t *)(lVar3 + 0x18))) {
            uVar4 = FUN_1808d3730(plVar5,param_1);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            break;
          }
          plVar7 = (int64_t *)(uint64_t)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < *(int *)(param_2 + 0x60));
      }
    }
    if (plVar1 == (int64_t *)(lVar2 + 0x20)) {
      return 0;
    }
    plVar5 = (int64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar5 = plVar8;
    }
    plVar1 = plVar8;
    if (plVar5 != (int64_t *)0x0) {
      plVar1 = plVar5 + 1;
    }
  } while( true );
}



uint64_t FUN_1808b4440(int64_t param_1,int *param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  byte bVar4;
  int aiStackX_10 [2];
  int32_t auStackX_18 [4];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0;
  }
  uVar1 = FUN_180740c00(*(uint64_t *)(param_1 + 0x30),aiStackX_10);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (aiStackX_10[0] == 0x18) {
    iStack_18 = *param_2;
    iStack_14 = param_2[1];
    iStack_10 = param_2[2];
    iStack_c = param_2[3];
    uVar1 = FUN_1808bc010(*(uint64_t *)(param_1 + 0x38),&iStack_18,*(uint64_t *)(param_1 + 0x48)
                          ,param_1 + 0x58);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = func_0x00018084e6a0(*(uint64_t *)(param_1 + 0x58),param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = (**(code **)**(uint64_t **)(param_1 + 0x58))();
    bVar4 = *(byte *)(lVar2 + 0xc4) & 1;
    *(uint *)(param_1 + 0x88) = ((uint)bVar4 << 2 | *(uint *)(param_1 + 0x88)) & ~((bVar4 ^ 1) << 2)
    ;
    uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x58) + 0x68);
    uVar3 = FUN_180740c00(uVar1,aiStackX_10);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (aiStackX_10[0] == 0x19) {
      auStackX_18[0] = 0xffffffff;
      uVar1 = FUN_1807409b0(uVar1,0,auStackX_18,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1807417b0(*(uint64_t *)(param_1 + 0x30),0,auStackX_18[0]);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      return 0;
    }
  }
  return 0x1c;
}






// 函数: void FUN_1808b4570(void)
void FUN_1808b4570(void)

{
  FUN_1808b45d0();
  return;
}






// 函数: void FUN_1808b45a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808b45a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  FUN_1808b45d0(param_1,param_2,param_4,param_3,0,0,param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b45d0(uint64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1808b45d0(uint64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                  int8_t param_5,int param_6,uint64_t *param_7)

{
  int *piVar1;
  short sVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint uVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  int64_t lStack_f0;
  int64_t *plStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  int aiStack_d0 [2];
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int *apiStack_a8 [2];
  uint64_t uStack_98;
  int64_t lStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  int64_t *plStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  puStack_88 = param_7;
  uStack_98 = param_2;
  if (param_7 == (uint64_t *)0x0) goto FUN_1808b4c5a;
  *param_7 = 0;
  lStack_90 = param_1[2];
  uStack_d4 = uStack_d4 & 0xffffff00;
  uStack_d8 = uStack_d8 & 0xffffff00;
  *(int *)(lStack_90 + 0x98) = *(int *)(lStack_90 + 0x98) + 1;
  lStack_b0 = lStack_90 + 0x170;
  *(int *)(lStack_90 + 0x1d0) = *(int *)(lStack_90 + 0x1d0) + 1;
  lVar12 = lStack_90 + 0x1d8;
  *(int *)(lStack_90 + 0x168) = *(int *)(lStack_90 + 0x168) + 1;
  lVar13 = lStack_90 + 0x38;
  *(int *)(lStack_90 + 0x238) = *(int *)(lStack_90 + 0x238) + 1;
  lStack_b8 = lStack_90 + 0x108;
  uStack_dc = uStack_dc & 0xffffff00;
  uStack_e0 = uStack_e0 & 0xffffff00;
  lStack_c8 = lVar13;
  lStack_c0 = lVar12;
  lVar8 = (**(code **)(*(int64_t *)*param_1 + 0x140))((int64_t *)*param_1,param_2,1);
  if (lVar8 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_70);
  }
  plStack_e8 = (int64_t *)0x0;
  lVar3 = param_1[2];
  piVar1 = (int *)(lVar3 + 0x548);
  *piVar1 = *piVar1 + 1;
  uStack_f8 = *(int32_t *)(lVar3 + 0x548);
  lStack_f0 = param_3;
  iVar5 = FUN_1808bc320(param_1[2],&plStack_e8,param_5,lVar8);
  if (iVar5 == 0) {
    plStack_78 = plStack_e8;
    plStack_e8[10] = param_4;
    sVar2 = *(short *)(lVar8 + 0xc);
    puStack_80 = param_1;
    if (sVar2 == 4) {
      iVar5 = *(int *)(lVar8 + 0x60);
      uVar6 = 0x10;
      uVar10 = 0;
      if (iVar5 == 0x23) {
        uVar10 = 0x10;
      }
      if (iVar5 == 0x23) {
        uVar6 = 0;
      }
      *(uint *)(plStack_e8 + 0x11) = (uVar10 | *(uint *)(plStack_e8 + 0x11)) & ~uVar6;
      iVar5 = FUN_180739140(param_1[3],iVar5,plStack_e8 + 6);
      lVar13 = lStack_c8;
      if (iVar5 != 0) goto LAB_1808b4bdb;
      iVar5 = FUN_1808b5eb0(plStack_e8,lVar8,0);
joined_r0x0001808b48b2:
      lVar13 = lStack_c8;
      if (iVar5 == 0) {
LAB_1808b48bb:
        plVar4 = plStack_e8;
        iVar5 = 0;
        lVar13 = lStack_c8;
        if (plStack_e8[6] != 0) {
          plStack_e8[0xe] = -1;
          plStack_e8[0xf] = -1;
          iVar11 = 4;
          iVar7 = FUN_180740620(plStack_e8[6],aiStack_d0);
          if (iVar7 == 0) {
            do {
              if (aiStack_d0[0] <= iVar5) break;
              iVar7 = FUN_1807408b0(plVar4[6],iVar5,apiStack_a8);
              if (iVar7 != 0) goto LAB_1808b4979;
              if (*apiStack_a8[0] == 3) {
                if (((int)plVar4[0xe] == -1) && (apiStack_a8[0][0xc] == -2)) {
                  *(int *)(plVar4 + 0xe) = iVar5;
                }
                else if ((*(int *)((int64_t)plVar4 + 0x74) == -1) && (apiStack_a8[0][0xc] == -5)) {
                  *(int *)((int64_t)plVar4 + 0x74) = iVar5;
                }
                else if (((int)plVar4[0xf] == -1) && (apiStack_a8[0][0xc] == -1)) {
                  *(int *)(plVar4 + 0xf) = iVar5;
                }
                else {
                  if ((*(int *)((int64_t)plVar4 + 0x7c) != -1) || (apiStack_a8[0][0xc] != -6))
                  goto LAB_1808b4970;
                  *(int *)((int64_t)plVar4 + 0x7c) = iVar5;
                }
                iVar11 = iVar11 + -1;
              }
LAB_1808b4970:
              iVar5 = iVar5 + 1;
            } while (iVar11 != 0);
          }
          else {
LAB_1808b4979:
            lVar13 = lStack_c8;
            if (iVar7 != 0) goto LAB_1808b4bdb;
          }
          if (((param_3 == 0) ||
              ((((int)plStack_e8[0xe] == -1 && (*(int *)((int64_t)plStack_e8 + 0x74) == -1)) ||
               (iVar5 = FUN_18085ec90(param_3,plStack_e8), lVar13 = lStack_c8, iVar5 == 0)))) &&
             (iVar5 = FUN_1808b3f80(plStack_e8,lVar8), lVar13 = lStack_c8, iVar5 == 0)) {
            lVar13 = plStack_e8[6];
            if ((param_6 == 0) &&
               ((iVar5 = FUN_180740b40(lVar13,apiStack_a8), iVar5 != 0 ||
                (iVar5 = FUN_18073a840(apiStack_a8[0],0,aiStack_d0,0), param_6 = aiStack_d0[0],
                iVar5 != 0)))) {
              lVar13 = lStack_c8;
              if (iVar5 != 0) goto LAB_1808b4bdb;
            }
            else {
              FUN_1807411a0(lVar13,0,0,param_6);
            }
            iVar5 = FUN_180740ff0(plStack_e8[6],*(int8_t *)(lVar8 + 0x40));
            lVar13 = lStack_c8;
            if (iVar5 == 0) {
              uVar9 = (**(code **)(*plStack_e8 + 0x30))();
              iVar5 = FUN_1808b89f0(uVar9,plStack_e8);
              lVar13 = lStack_c8;
              if ((iVar5 == 0) &&
                 (iVar5 = FUN_1808b5390(param_1[1],uStack_98,plStack_e8), lVar13 = lStack_c8,
                 iVar5 == 0)) {
                iVar5 = 0x1c;
                if (*(int *)(lStack_c8 + 0x60) < 1) {
                  iVar7 = 0x1c;
                }
                else {
                  if ((*(int *)(lStack_c8 + 0x60) != 1) ||
                     (iVar7 = FUN_1808501b0(lStack_c8), iVar7 == 0)) {
                    *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + -1;
                    iVar7 = 0;
                  }
                  uStack_d4 = uStack_d4 & 0xff;
                  if (iVar7 == 0) {
                    uStack_d4 = 1;
                  }
                }
                lVar12 = lStack_b8;
                uVar6 = 1;
                if (iVar7 == 0) {
                  iVar7 = 0;
                }
                if (iVar7 == 0) {
                  if (*(int *)(lStack_b8 + 0x60) < 1) {
                    iVar7 = 0x1c;
                  }
                  else {
                    if ((*(int *)(lStack_b8 + 0x60) != 1) ||
                       (iVar7 = FUN_18084f7f0(lStack_b8), iVar7 == 0)) {
                      *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
                      iVar7 = 0;
                    }
                    uStack_dc = uStack_dc & 0xff;
                    if (iVar7 == 0) {
                      uStack_dc = uVar6;
                    }
                  }
                  lVar12 = lStack_b0;
                  if (iVar7 == 0) {
                    iVar7 = 0;
                  }
                  if (iVar7 != 0) goto LAB_1808b4bc4;
                  if (*(int *)(lStack_b0 + 0x60) < 1) {
                    iVar7 = 0x1c;
                  }
                  else {
                    if ((*(int *)(lStack_b0 + 0x60) != 1) ||
                       (iVar7 = FUN_18084fcd0(lStack_b0), iVar7 == 0)) {
                      *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
                      iVar7 = 0;
                    }
                    uStack_d8 = uStack_d8 & 0xff;
                    if (iVar7 == 0) {
                      uStack_d8 = uVar6;
                    }
                  }
                  lVar12 = lStack_c0;
                  if (iVar7 == 0) {
                    iVar7 = 0;
                  }
                  if (iVar7 != 0) goto LAB_1808b4bc4;
                  if (0 < *(int *)(lStack_c0 + 0x60)) {
                    if ((*(int *)(lStack_c0 + 0x60) != 1) ||
                       (iVar5 = FUN_180850690(lStack_c0), iVar5 == 0)) {
                      *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + -1;
                      iVar5 = 0;
                    }
                    uStack_e0 = uStack_e0 & 0xff;
                    if (iVar5 == 0) {
                      uStack_e0 = uVar6;
                    }
                  }
                  if (iVar5 == 0) {
                    iVar5 = 0;
                  }
                  if (iVar5 != 0) goto LAB_1808b4bdb;
                  iVar7 = FUN_1808bd690(lStack_90);
                  if (iVar7 != 0) goto LAB_1808b4bc4;
                }
                else {
LAB_1808b4bc4:
                  if (iVar7 != 0) goto LAB_1808b4bdb;
                }
                plStack_78 = (int64_t *)0x0;
                *puStack_88 = plStack_e8;
              }
            }
          }
        }
      }
    }
    else {
      if (sVar2 == 5) {
        if (*(int *)(lVar8 + 0x80) == 0) {
          iVar5 = FUN_180739140(param_1[3],1,plStack_e8 + 6);
        }
        else {
          iVar5 = FUN_180739010();
          lVar13 = lStack_c8;
          if (iVar5 != 0) goto LAB_1808b4bdb;
          iVar5 = FUN_1808b5eb0(plStack_e8,lVar8,0);
        }
        goto joined_r0x0001808b48b2;
      }
      if (sVar2 != 6) {
        if (sVar2 == 7) {
          iVar5 = FUN_180739140(param_1[3],1,plStack_e8 + 6);
          lVar13 = lStack_c8;
          if (iVar5 == 0) {
            iVar5 = FUN_1808b4320(plStack_e8,lVar8);
            goto joined_r0x0001808b48b2;
          }
          goto LAB_1808b4bdb;
        }
        goto LAB_1808b48bb;
      }
      iVar5 = FUN_180739140(param_1[3],0x18,plStack_e8 + 6);
      lVar13 = lStack_c8;
      if ((iVar5 == 0) && (iVar5 = FUN_1808b4130(plStack_e8,lVar8), lVar13 = lStack_c8, iVar5 == 0))
      {
        uVar9 = func_0x0001808da6d0(lVar8,apiStack_a8);
        iVar5 = FUN_1808b4440(plStack_e8,uVar9);
        goto joined_r0x0001808b48b2;
      }
    }
LAB_1808b4bdb:
    FUN_1808b3a30(&puStack_80);
    lVar12 = lStack_c0;
    if ((char)uStack_e0 == '\0') goto LAB_1808b4bef;
  }
  else {
LAB_1808b4bef:
    *(int32_t *)(lVar12 + 0x60) = 0;
    FUN_18084f560(lVar12 + 0x30);
  }
  if ((char)uStack_dc == '\0') {
    *(int32_t *)(lStack_b8 + 0x60) = 0;
    FUN_18084f040(lStack_b8 + 0x30);
  }
  if ((char)uStack_d8 == '\0') {
    *(int32_t *)(lStack_b0 + 0x60) = 0;
    FUN_18084f040(lStack_b0 + 0x30);
  }
  if ((char)uStack_d4 == '\0') {
    *(int32_t *)(lVar13 + 0x60) = 0;
    FUN_18084f2d0(lVar13 + 0x30);
  }
FUN_1808b4c5a:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_118);
}






