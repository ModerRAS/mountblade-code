#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part020.c - 10 个函数

// 函数: void FUN_1808b1880(int64_t *param_1)
void FUN_1808b1880(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  
  plVar6 = (int64_t *)0x0;
  if (param_1[9] != 0) {
    *(int64_t *)param_1[1] = *param_1;
    *(int64_t *)(*param_1 + 8) = param_1[1];
    param_1[1] = (int64_t)param_1;
    *param_1 = (int64_t)param_1;
    FUN_1808b22c0();
    param_1[9] = 0;
  }
  plVar1 = param_1 + 7;
  do {
    plVar3 = (int64_t *)*plVar1;
    plVar4 = plVar6;
    if (plVar3 == plVar1) {
      plVar5 = (int64_t *)param_1[8];
      if (plVar5 == plVar1) break;
      if (plVar3 != plVar1) goto LAB_1808b18dc;
    }
    else {
LAB_1808b18dc:
      if (plVar3 != (int64_t *)0x0) {
        plVar4 = plVar3 + -1;
      }
    }
    plVar3 = plVar4 + 1;
    if (plVar4 == (int64_t *)0x0) {
      plVar3 = plVar6;
    }
    plVar4 = plVar1;
    if (plVar3 != (int64_t *)0x0) {
      plVar4 = plVar3;
    }
    plVar3 = plVar4 + -1;
    if (plVar4 == (int64_t *)0x0) {
      plVar3 = plVar6;
    }
    (**(code **)(*plVar3 + 0x18))();
  } while( true );
  plVar4 = plVar3 + -1;
  if (plVar3 == (int64_t *)0x0) {
    plVar4 = plVar6;
  }
  plVar7 = plVar4 + 1;
  if (plVar4 == (int64_t *)0x0) {
    plVar7 = plVar6;
  }
  if (plVar7 != plVar1) {
    do {
      if (plVar7 == plVar1) break;
      lVar2 = *plVar7;
      plVar3 = (int64_t *)(lVar2 + -8);
      if (lVar2 == 0) {
        plVar3 = plVar6;
      }
      plVar4 = plVar6;
      if (plVar3 != (int64_t *)0x0) {
        plVar4 = plVar3 + 1;
      }
      *(int64_t *)plVar7[1] = lVar2;
      *(int64_t *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (int64_t)plVar7;
      *plVar7 = (int64_t)plVar7;
      plVar7 = plVar4;
    } while (plVar4 != plVar1);
    plVar3 = (int64_t *)*plVar1;
    plVar5 = (int64_t *)param_1[8];
  }
  *plVar5 = (int64_t)plVar3;
  plVar6 = param_1 + 2;
  *(int64_t *)(*plVar1 + 8) = param_1[8];
  param_1[8] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[8] = plVar1;
  *(int64_t *)(*plVar1 + 8) = param_1[8];
  param_1[8] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t *)param_1[3] = *plVar6;
  *(int64_t *)(*plVar6 + 8) = param_1[3];
  param_1[3] = (int64_t)plVar6;
  *plVar6 = (int64_t)plVar6;
  *(int64_t **)param_1[3] = plVar6;
  *(int64_t *)(*plVar6 + 8) = param_1[3];
  param_1[3] = (int64_t)plVar6;
  *plVar6 = (int64_t)plVar6;
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  *(int64_t **)param_1[1] = param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b1a30(uint64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint uVar7;
  
  *param_1 = &unknown_var_1880_ptr;
  puVar2 = (uint64_t *)param_1[2];
  puVar3 = (uint64_t *)param_1[2];
  if ((puVar2 < puVar3) || (puVar3 + *(int *)(param_1 + 3) <= puVar2)) {
    FUN_1808b2020(param_1 + 2,puVar3,puVar2);
  }
  else {
    uVar6 = *puVar2;
    if ((param_1[1] == 0) || (iVar5 = FUN_1808d9230(param_1[1],uVar6), iVar5 == 0)) {
      FUN_1808b1880(uVar6);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6,&unknown_var_1232_ptr,0x357,1);
    }
  }
  plVar1 = param_1 + 2;
  uVar7 = *(uint *)((int64_t)param_1 + 0x1c);
  if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 3)) {
      return 0x1c;
    }
    if ((0 < (int)uVar7) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&unknown_var_8432_ptr,0x100,1);
    }
    *plVar1 = 0;
    uVar7 = 0;
    *(int32_t *)((int64_t)param_1 + 0x1c) = 0;
  }
  *(int32_t *)(param_1 + 3) = 0;
  uVar4 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar4 = uVar7;
  }
  if ((0 < (int)uVar4) && (uVar6 = FUN_180747f10(plVar1,0), (int)uVar6 != 0)) {
    return uVar6;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b1b50(int64_t param_1,int64_t *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t uVar18;
  float fVar19;
  int8_t auStack_138 [32];
  uint uStack_118;
  int64_t *plStack_110;
  int64_t lStack_108;
  uint uStack_100;
  uint uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  float fStack_e0;
  float fStack_dc;
  int iStack_d8;
  int64_t lStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_30;
  
  plVar12 = (int64_t *)0x0;
  plVar13 = param_2 + 1;
  if (param_2 == (int64_t *)0x0) {
    plVar13 = plVar12;
  }
  if (plVar13 == (int64_t *)0x0) {
    return 0x1c;
  }
  plVar8 = (int64_t *)*plVar13;
  plVar11 = plVar12;
  if (plVar8 != plVar13) {
    do {
      plVar8 = (int64_t *)*plVar8;
      uVar10 = (int)plVar11 + 1;
      plVar11 = (int64_t *)(uint64_t)uVar10;
    } while (plVar8 != plVar13);
    if (uVar10 != 0) {
      return 0x1c;
    }
  }
  plVar13[1] = *(int64_t *)(param_1 + 0x40);
  *plVar13 = param_1 + 0x38;
  *(int64_t **)(param_1 + 0x40) = plVar13;
  *(int64_t **)plVar13[1] = plVar13;
  uStack_30 = 0x1808b1bb4;
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  plStack_110 = (int64_t *)0x0;
  lStack_108 = param_1;
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    lVar3 = *(int64_t *)(param_1 + 0x30);
    uVar1 = *(ushort *)(*(int64_t *)(param_1 + 0x20) + 0x4a);
    uVar10 = (uint)uVar1;
    uStack_118 = uVar10;
    uStack_f8 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x18))
                          (*(int64_t **)(param_1 + 0x28),
                           *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x40));
    plVar13 = (int64_t *)0x0;
    uVar18 = 0;
    uVar2 = *(ushort *)(*(int64_t *)(param_1 + 0x20) + 0x48);
    uStack_100 = (uint)uVar2;
    uStack_f4 = 0;
    fStack_e0 = 0.0;
    fStack_dc = 1.0;
    iStack_d8 = 0;
    if ((uVar1 == 0) || (uVar1 == 1)) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      switch(uVar2) {
      case 0:
        uVar18 = 0x7f7fffff;
        uStack_f4 = 0x7f7fffff;
        break;
      case 1:
        uStack_f4 = 0xff7fffff;
        uVar18 = 0xff7fffff;
        break;
      case 4:
        uStack_f4 = 0x3f800000;
        uVar18 = 0x3f800000;
      }
    }
    uStack_fc = uVar10;
    lStack_d0 = lVar3;
    if (*(int64_t *)(param_1 + 0x48) != 0) {
      iVar7 = FUN_1808b35b0(*(int64_t *)(param_1 + 0x48),&uStack_100);
      if (iVar7 != 0) goto LAB_1808b342e;
      uStack_118 = uStack_fc;
      uVar18 = uStack_f4;
    }
    lVar3 = lStack_d0;
    uVar5 = uStack_100;
    uVar10 = uStack_118;
    plVar8 = (int64_t *)(param_1 + 0x38);
    plVar11 = (int64_t *)(*(int64_t *)(param_1 + 0x38) + -8);
    if (*(int64_t *)(param_1 + 0x38) == 0) {
      plVar11 = plVar13;
    }
    plVar4 = plVar13;
    fVar17 = fStack_e0;
    fVar19 = fStack_dc;
    if (plVar11 != (int64_t *)0x0) {
      plVar4 = plVar11 + 1;
    }
    while (plVar4 != plVar8) {
      plVar12 = plVar4 + -1;
      if (plVar4 == (int64_t *)0x0) {
        plVar12 = plVar13;
      }
      fVar14 = (float)(**(code **)(*plVar12 + 8))(plVar12);
      if (uVar10 == 0) {
        lVar9 = (**(code **)*plVar12)(plVar12);
        iVar7 = *(int *)(lVar9 + 0x48);
        if (lVar3 == 0) {
          fVar15 = 100.0;
        }
        else {
          fVar15 = (float)func_0x0001808c64d0(lVar3);
        }
        fVar14 = fVar14 * fVar15 * 0.01;
        if ((iVar7 == 0) && (uVar5 == 4)) {
          fVar19 = fVar19 * fVar14;
        }
        else {
LAB_1808b32c9:
          fVar17 = fVar17 + fVar14;
          fStack_e0 = fVar17;
        }
      }
      else if (uVar10 == 1) {
        if (lVar3 != 0) {
          fVar14 = (float)func_0x0001808c6590(lVar3,fVar14);
        }
        if ((fVar17 != -3.4028235e+38) && (-80.0 < fVar14)) goto LAB_1808b32c9;
        fVar17 = -3.4028235e+38;
        fStack_e0 = fVar17;
      }
      plVar12 = plStack_110;
      param_1 = lStack_108;
      if (plVar4 == plVar8) break;
      plVar11 = (int64_t *)(*plVar4 + -8);
      if (*plVar4 == 0) {
        plVar11 = plVar13;
      }
      plVar4 = plVar13;
      if (plVar11 != (int64_t *)0x0) {
        plVar4 = plVar11 + 1;
      }
    }
    fStack_dc = fVar19;
    iVar7 = iStack_d8;
    fVar19 = fStack_dc;
    uVar10 = uStack_118;
    fVar14 = (float)FUN_1808b3770(&uStack_100,uVar18,iStack_d8);
    do {
      fVar15 = *(float *)((int64_t)&uStack_e8 + (int64_t)plVar13 * 4);
      if (fVar15 != 0.0) {
        fVar16 = (float)FUN_1808b3770(&uStack_100,
                                      *(int32_t *)((int64_t)&uStack_f0 + (int64_t)plVar13 * 4),
                                      iVar7 + 1);
        fVar14 = fVar14 + (fVar16 - fVar14) * fVar15;
      }
      plVar13 = (int64_t *)((int64_t)plVar13 + 1);
    } while ((int64_t)plVar13 < 2);
    if (uVar10 == 1) {
      if (-80.0 < fVar14) {
        if ((fVar14 == -3.4028235e+38) || (fVar17 <= -80.0)) {
          fVar14 = -3.4028235e+38;
        }
        else {
          fVar14 = fVar14 + fVar17;
        }
      }
    }
    else {
      fVar14 = (fVar17 + fVar14) * fVar19;
      if ((uVar10 == 0) && (lVar3 != 0)) {
        fVar14 = (float)func_0x0001808c6590(lVar3,fVar14);
      }
    }
    if ((fVar14 != *(float *)(param_1 + 0x54)) ||
       (cVar6 = FUN_1808b3900(param_1,plVar12), cVar6 != '\0')) {
      *(float *)(param_1 + 0x54) = fVar14;
      if ((*(uint *)(param_1 + 0x5c) >> 3 & 1) == 0) {
        FUN_1808b20c0(param_1,fVar14,plVar12);
      }
      else {
        (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x10))
                  (*(int64_t **)(param_1 + 0x28),param_1);
      }
    }
  }
LAB_1808b342e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (uint64_t)auStack_138);
}






// 函数: void FUN_1808b1be0(int64_t param_1,uint64_t param_2)
void FUN_1808b1be0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
  iVar3 = *(int *)(param_1 + 0x18) + 1;
  iVar1 = (*(uint *)(param_1 + 0x1c) ^ uVar2) - uVar2;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    iVar3 = FUN_180747f10(param_1 + 0x10,iVar3);
    if (iVar3 != 0) {
      return;
    }
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 0x10) + (int64_t)*(int *)(param_1 + 0x18) * 8) = param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  iVar3 = FUN_1808b3060(param_2,0);
  if (iVar3 == 0) {
    FUN_1808d8e90(*(uint64_t *)(param_1 + 8),param_2);
  }
  return;
}



uint64_t FUN_1808b1c90(int64_t param_1)

{
  char cVar1;
  uint64_t uVar2;
  float fVar3;
  
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffffb;
  fVar3 = *(float *)(param_1 + 0x58);
  if (*(int64_t *)(param_1 + 0x30) != 0) {
    fVar3 = (float)func_0x0001808c6590(*(int64_t *)(param_1 + 0x30),fVar3);
  }
  if (((*(byte *)(param_1 + 0x5c) & 1) != 0) &&
     (((fVar3 != *(float *)(param_1 + 0x50) || ((*(uint *)(param_1 + 0x5c) >> 1 & 1) == 0)) ||
      ((cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x20))(), cVar1 == '\0' &&
       (cVar1 = FUN_1808b2c50(param_1), cVar1 == '\0')))))) {
    *(float *)(param_1 + 0x50) = fVar3;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
    uVar2 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 8))
                      (*(int64_t **)(param_1 + 0x28),
                       *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x40),fVar3,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t
FUN_1808b1d10(int64_t param_1,float *param_2,float param_3,float param_4,int32_t param_5,
             char param_6,float *param_7,float *param_8)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 == (float *)0x0) {
    return 0x1c;
  }
  fVar2 = *param_2;
  fVar4 = param_4 * 0.01;
  if (*(short *)(*(int64_t *)(param_1 + 0x20) + 0x4a) == 1) {
    lVar1 = *(int64_t *)(param_1 + 0x30);
    if (lVar1 != 0) {
      fVar2 = (float)func_0x0001808c6590(lVar1,fVar2);
      lVar1 = *(int64_t *)(param_1 + 0x30);
    }
    if (-80.0 < fVar2) {
      fVar2 = (float)powf(0x41200000,fVar2 * 0.05);
    }
    else {
      fVar2 = 0.0;
    }
    if (lVar1 != 0) {
      param_3 = (float)func_0x0001808c6590(lVar1,param_3);
    }
    if (-80.0 < param_3) {
      param_3 = (float)powf(0x41200000,param_3 * 0.05);
    }
    else {
      param_3 = 0.0;
    }
  }
  fVar3 = param_3;
  fVar5 = fVar4;
  if (param_6 != '\0') goto LAB_1808b1eae;
  fVar3 = fVar2;
  switch(param_5) {
  case 0:
    if (param_3 <= fVar2) {
      fVar3 = param_3;
    }
    break;
  case 1:
    if (fVar2 <= param_3) {
      fVar3 = param_3;
    }
    break;
  case 2:
    goto code_r0x0001808b1eaa;
  case 3:
    if (param_7 == (float *)0x0) {
      return 0x1c;
    }
    fVar5 = *param_7 + fVar4;
    fVar3 = 0.0;
    if (fVar5 != 0.0) {
      fVar3 = (*param_7 * fVar2 + fVar4 * param_3) / fVar5;
    }
    goto LAB_1808b1eae;
  case 4:
    fVar3 = fVar2 * param_3;
    break;
  case 5:
    fVar3 = param_3;
    break;
  default:
    return 0x1c;
  }
  param_3 = fVar3 - fVar2;
code_r0x0001808b1eaa:
  fVar3 = param_3 * fVar4 + fVar2;
  fVar5 = 0.0;
LAB_1808b1eae:
  if (*(short *)(*(int64_t *)(param_1 + 0x20) + 0x4a) == 1) {
    lVar1 = *(int64_t *)(param_1 + 0x30);
    if (0.0 < fVar3) {
      fVar3 = (float)log10f();
      fVar3 = fVar3 * 20.0;
    }
    else {
      fVar3 = -80.0;
    }
    if (lVar1 != 0) {
      fVar3 = (float)func_0x0001808c6500(lVar1,fVar3);
    }
  }
  *param_2 = fVar3;
  if (param_8 != (float *)0x0) {
    fVar2 = *param_8;
    if (*param_8 <= param_4) {
      fVar2 = param_4;
    }
    *param_8 = fVar2;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = fVar5;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b1f70(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if ((puVar1 < puVar2) || (puVar2 + *(int *)(param_1 + 0x18) <= puVar1)) {
    FUN_1808b2020(param_1 + 0x10,puVar2,puVar1);
    return 0;
  }
  uVar3 = *puVar1;
  if ((*(int64_t *)(param_1 + 8) != 0) &&
     (uVar4 = FUN_1808d9230(*(int64_t *)(param_1 + 8),uVar3), (int)uVar4 != 0)) {
    return uVar4;
  }
  FUN_1808b1880(uVar3);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar3,&unknown_var_1232_ptr,0x357,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b2020(int64_t *param_1)

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
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
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
  if ((0 < (int)uVar1) && (uVar2 = FUN_180747f10(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_1808b20c0(int64_t param_1,float param_2,int64_t param_3)

{
  char cVar1;
  uint64_t uVar2;
  
  if (((*(byte *)(param_1 + 0x5c) & 1) != 0) &&
     ((((param_2 != *(float *)(param_1 + 0x50) || ((*(uint *)(param_1 + 0x5c) >> 1 & 1) == 0)) ||
       (param_3 != 0)) ||
      ((cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x20))(), cVar1 == '\0' &&
       (cVar1 = FUN_1808b2c50(param_1), cVar1 == '\0')))))) {
    *(float *)(param_1 + 0x50) = param_2;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
    uVar2 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 8))
                      (*(int64_t **)(param_1 + 0x28),
                       *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x40),param_2,param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



int32_t FUN_1808b2170(uint64_t *param_1,int32_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int32_t auStackX_8 [8];
  
  auStackX_8[0] = 0;
  uVar2 = (**(code **)*param_1)();
  iVar1 = FUN_1808b05f0(uVar2,param_2,auStackX_8);
  if (iVar1 != 0) {
    return 0;
  }
  return auStackX_8[0];
}






// 函数: void FUN_1808b21b0(int64_t *param_1,int param_2)
void FUN_1808b21b0(int64_t *param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int32_t auStackX_8 [2];
  
  plVar1 = (int64_t *)param_1[2];
  plVar5 = plVar1;
  while( true ) {
    if ((plVar5 < plVar1) || (plVar1 + (int)param_1[3] <= plVar5)) goto LAB_1808b2200;
    lVar2 = *plVar5;
    if (*(int *)(*(int64_t *)(lVar2 + 0x20) + 0x40) == param_2) break;
    plVar5 = plVar5 + 1;
  }
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x5c) = *(uint *)(lVar2 + 0x5c) & 0xfffffffd;
  }
LAB_1808b2200:
  plVar1 = (int64_t *)param_1[2];
  plVar5 = plVar1;
  while( true ) {
    if ((plVar5 < plVar1) || (plVar1 + (int)param_1[3] <= plVar5)) goto LAB_1808b2258;
    lVar2 = *plVar5;
    if (*(int *)(*(int64_t *)(lVar2 + 0x20) + 0x40) == param_2) break;
    plVar5 = plVar5 + 1;
  }
  if (lVar2 != 0) {
    iVar3 = FUN_1808b3060(lVar2,0);
    if (iVar3 != 0) {
      return;
    }
    FUN_1808d8e90(param_1[1],lVar2);
    return;
  }
LAB_1808b2258:
  auStackX_8[0] = 0;
  uVar4 = (**(code **)*param_1)(param_1);
  iVar3 = FUN_1808b05f0(uVar4,param_2,auStackX_8);
  uVar6 = 0;
  if (iVar3 == 0) {
    uVar6 = auStackX_8[0];
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,uVar6,0);
  return;
}






// 函数: void FUN_1808b225e(void)
void FUN_1808b225e(void)

{
  uint64_t *in_RAX;
  uint64_t uVar1;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  int32_t uStack0000000000000040;
  
  uStack0000000000000040 = 0;
  uVar1 = (*(code *)*in_RAX)();
  FUN_1808b05f0(uVar1,unaff_ESI,&stack0x00000040);
  (**(code **)(*unaff_RDI + 8))();
  return;
}






// 函数: void FUN_1808b229f(void)
void FUN_1808b229f(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b22c0(int64_t param_1)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)(param_1 + 0x10);
  if (((((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x18) == plVar1)) &&
      (plVar1 = (int64_t *)(param_1 + 0x20), (int64_t *)*plVar1 == plVar1)) &&
     (*(int64_t **)(param_1 + 0x28) == plVar1)) {
    func_0x0001808b1730();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1232_ptr,0x32a,1);
  }
  return (uint64_t)plVar1 & 0xffffffffffffff00;
}



int8_t FUN_1808b2340(int64_t param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 0x5c) >> 4 & 1) == 0) {
    cVar1 = FUN_1808b2c50();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b2370(int64_t param_1,uint64_t *param_2,int8_t *param_3)
void FUN_1808b2370(int64_t param_1,uint64_t *param_2,int8_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  int32_t uStack_78;
  ushort uStack_74;
  ushort uStack_72;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  plVar5 = *(int64_t **)(param_1 + 0x30);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,&uStack_78);
    plVar5 = (int64_t *)
             (**(code **)(*(int64_t *)*param_2 + 0x110))((int64_t *)*param_2,&uStack_78,1);
    if (plVar5 == (int64_t *)0x0) {
      uStack_80 = (uint)bStack_69;
      uStack_88 = (uint)bStack_6a;
      uStack_90 = (uint)bStack_6b;
      uStack_98 = (uint)bStack_6c;
      uStack_a0 = (uint)bStack_6d;
      uStack_a8 = (uint)bStack_6e;
      uStack_b0 = (uint)bStack_6f;
      uStack_b8 = (uint)bStack_70;
      uStack_c0 = (uint)uStack_72;
      uStack_c8 = (uint)uStack_74;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_68,0x27,&unknown_var_8960_ptr,uStack_78);
    }
    *(int64_t **)(param_1 + 0x30) = plVar5;
  }
  cVar3 = func_0x0001808c5870(param_2,plVar5);
  if (cVar3 == '\0') {
    *param_3 = 1;
  }
  else {
    plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x30) + 0x20);
    plVar5 = (int64_t *)*plVar6;
    if (plVar5 != plVar6) {
      while ((int)plVar5[8] != *(int *)(*(int64_t *)(param_1 + 0x38) + 0x40)) {
        if ((plVar5 == plVar6) || (plVar5 = (int64_t *)*plVar5, plVar5 == plVar6))
        goto LAB_1808b24c9;
      }
      if (plVar5 != (int64_t *)0x0) {
        *param_3 = 1;
        puVar1 = (uint64_t *)(param_1 + 0x20);
        *(int64_t **)(param_1 + 0x38) = plVar5;
        for (puVar2 = (uint64_t *)*puVar1;
            ((puVar2 != puVar1 && (iVar4 = FUN_1808b3060(puVar2,0), iVar4 == 0)) &&
            (puVar2 != puVar1)); puVar2 = (uint64_t *)*puVar2) {
        }
        goto LAB_1808b2513;
      }
    }
LAB_1808b24c9:
    *param_3 = 0;
  }
LAB_1808b2513:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_e8);
}






// 函数: void FUN_1808b2391(int64_t param_1,uint64_t *param_2,int8_t *param_3)
void FUN_1808b2391(int64_t param_1,uint64_t *param_2,int8_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int32_t uStack0000000000000070;
  int16_t uStack0000000000000074;
  int8_t in_stack_00000078;
  uint64_t in_stack_000000a8;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  plVar5 = *(int64_t **)(param_1 + 0x30);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,in_R11 + -0x78);
    plVar5 = (int64_t *)
             (**(code **)(*(int64_t *)*param_2 + 0x110))((int64_t *)*param_2,&stack0x00000070,1);
    if (plVar5 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(&stack0x00000080,0x27,&unknown_var_8960_ptr,uStack0000000000000070,
                    uStack0000000000000074);
    }
    *(int64_t **)(param_1 + 0x30) = plVar5;
  }
  cVar3 = func_0x0001808c5870(param_2,plVar5);
  if (cVar3 == '\0') {
    *param_3 = 1;
  }
  else {
    plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x30) + 0x20);
    plVar5 = (int64_t *)*plVar6;
    if (plVar5 != plVar6) {
      while ((int)plVar5[8] != *(int *)(*(int64_t *)(param_1 + 0x38) + 0x40)) {
        if ((plVar5 == plVar6) || (plVar5 = (int64_t *)*plVar5, plVar5 == plVar6))
        goto LAB_1808b24c9;
      }
      if (plVar5 != (int64_t *)0x0) {
        *param_3 = 1;
        puVar1 = (uint64_t *)(param_1 + 0x20);
        *(int64_t **)(param_1 + 0x38) = plVar5;
        for (puVar2 = (uint64_t *)*puVar1;
            ((puVar2 != puVar1 && (iVar4 = FUN_1808b3060(puVar2,0), iVar4 == 0)) &&
            (puVar2 != puVar1)); puVar2 = (uint64_t *)*puVar2) {
        }
        goto LAB_1808b2513;
      }
    }
LAB_1808b24c9:
    *param_3 = 0;
  }
LAB_1808b2513:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808b244a(void)
void FUN_1808b244a(void)

{
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}






// 函数: void FUN_1808b246c(void)
void FUN_1808b246c(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t unaff_RBP;
  uint64_t unaff_R14;
  int8_t *unaff_R15;
  uint64_t in_stack_000000a8;
  
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R14;
  cVar3 = func_0x0001808c5870();
  if (cVar3 == '\0') {
    *unaff_R15 = 1;
  }
  else {
    plVar6 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x30) + 0x20);
    plVar5 = (int64_t *)*plVar6;
    if (plVar5 != plVar6) {
      while ((int)plVar5[8] != *(int *)(*(int64_t *)(unaff_RBP + 0x38) + 0x40)) {
        if ((plVar5 == plVar6) || (plVar5 = (int64_t *)*plVar5, plVar5 == plVar6))
        goto LAB_1808b24c9;
      }
      if (plVar5 != (int64_t *)0x0) {
        *unaff_R15 = 1;
        puVar1 = (uint64_t *)(unaff_RBP + 0x20);
        *(int64_t **)(unaff_RBP + 0x38) = plVar5;
        for (puVar2 = (uint64_t *)*puVar1;
            ((puVar2 != puVar1 && (iVar4 = FUN_1808b3060(puVar2,0), iVar4 == 0)) &&
            (puVar2 != puVar1)); puVar2 = (uint64_t *)*puVar2) {
        }
        goto LAB_1808b2513;
      }
    }
LAB_1808b24c9:
    *unaff_R15 = 0;
  }
LAB_1808b2513:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808b248f(void)
void FUN_1808b248f(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t unaff_RBP;
  int8_t *unaff_R15;
  uint64_t in_stack_000000a8;
  
  plVar5 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x30) + 0x20);
  plVar4 = (int64_t *)*plVar5;
  if (plVar4 != plVar5) {
    while ((int)plVar4[8] != *(int *)(*(int64_t *)(unaff_RBP + 0x38) + 0x40)) {
      if ((plVar4 == plVar5) || (plVar4 = (int64_t *)*plVar4, plVar4 == plVar5))
      goto LAB_1808b24c9;
    }
    if (plVar4 != (int64_t *)0x0) {
      *unaff_R15 = 1;
      puVar1 = (uint64_t *)(unaff_RBP + 0x20);
      *(int64_t **)(unaff_RBP + 0x38) = plVar4;
      for (puVar2 = (uint64_t *)*puVar1;
          ((puVar2 != puVar1 && (iVar3 = FUN_1808b3060(puVar2,0), iVar3 == 0)) && (puVar2 != puVar1)
          ); puVar2 = (uint64_t *)*puVar2) {
      }
      goto LAB_1808b2513;
    }
  }
LAB_1808b24c9:
  *unaff_R15 = 0;
LAB_1808b2513:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




