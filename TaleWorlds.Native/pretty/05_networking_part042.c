#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part042.c - 5 个函数

// 函数: void FUN_180862d70(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4)
void FUN_180862d70(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4)

{
  int iVar1;
  char acStackX_18 [16];
  
  if (param_3 != 0) {
    if (param_4 == '\0') {
      acStackX_18[0] = param_4;
      iVar1 = FUN_180865800(param_1,acStackX_18);
      if (iVar1 != 0) {
        return;
      }
      if (acStackX_18[0] != '\0') {
        *(int64_t *)(param_1 + 0x348) = param_3;
        param_3 = 0;
        goto LAB_180862dd7;
      }
    }
    *(int64_t *)(param_1 + 0x340) = param_3;
    iVar1 = FUN_18073d3c0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),param_3,0);
    if (iVar1 != 0) {
      return;
    }
  }
LAB_180862dd7:
  FUN_18073d230(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),param_2,param_3,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180862e00(int64_t param_1,byte param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  uVar3 = (uint64_t)(*(uint *)(param_1 + 0x2d8) >> 7) & 0xffffffffffffff01;
  if (param_2 != (byte)uVar3) {
    uVar2 = ~((param_2 ^ 1) << 7);
    uVar3 = (uint64_t)uVar2;
    uVar2 = ((uint)param_2 << 7 | *(uint *)(param_1 + 0x2d8)) & uVar2;
    *(uint *)(param_1 + 0x2d8) = uVar2;
    if (((param_2 == 0) && ((uVar2 >> 2 & 1) != 0)) &&
       (lVar1 = *(int64_t *)(param_1 + 0x2c8), *(char *)(lVar1 + 0x780) == '\0')) {
      if (param_1 == 0) {
        return 0x1f;
      }
      uVar3 = FUN_1808ca6f0(param_1 + 0x378);
      if ((((int)uVar3 == 0) && (uVar3 = FUN_1808ca6f0(param_1 + 0x3f8), (int)uVar3 == 0)) &&
         ((uVar3 = thunk_FUN_180865550(param_1), (int)uVar3 == 0 &&
          (uVar3 = FUN_18085ff70(param_1), (int)uVar3 == 0)))) {
        if (*(int64_t *)(param_1 + 0x80) != 0) {
          uVar3 = FUN_180867d60();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int64_t *)(param_1 + 0x80) != 0) {
            return 0x1c;
          }
        }
        if (*(int64_t *)(param_1 + 0x350) != 0) {
          uVar3 = func_0x0001808cd390(*(int64_t *)(param_1 + 0x350),param_1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          *(uint64_t *)(param_1 + 0x350) = 0;
        }
        if ((*(int64_t *)(param_1 + 0x2d0) != 0) &&
           (uVar3 = func_0x0001808c16c0(*(int64_t *)(param_1 + 0x2d0),param_1,
                                        *(uint64_t *)(lVar1 + 0x3d8)), (int)uVar3 != 0)) {
          return uVar3;
        }
        uVar3 = FUN_1808b83b0(lVar1 + 0x3c8,param_1);
        if ((int)uVar3 == 0) {
          lVar4 = *(int64_t *)(param_1 + 0x2b8);
          if (lVar4 != 0) {
            if ((*(uint *)(param_1 + 0x2d8) >> 6 & 1) != 0) {
              uVar3 = FUN_1808538a0(lVar4,param_1);
              if ((int)uVar3 != 0) {
                return uVar3;
              }
              *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
              lVar4 = *(int64_t *)(param_1 + 0x2b8);
            }
            uVar3 = FUN_1808c19d0(*(uint64_t *)(lVar1 + 0x3d8),lVar4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          }
          uVar3 = FUN_1808b8130(*(uint64_t *)(param_1 + 0x2b0),*(uint64_t *)(lVar1 + 0x3d8));
          if ((int)uVar3 == 0) {
            *(uint64_t *)(param_1 + 0x2b0) = 0;
            uVar3 = FUN_1808b9030(*(uint64_t *)(lVar1 + 0x3d0),param_1);
            if (((int)uVar3 == 0x1f) || ((int)uVar3 == 0)) {
              FUN_1808559c0(param_1 + 200);
              (**(code **)(*(int64_t *)(param_1 + 8) + 0x28))(param_1 + 8,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_2288_ptr,0x4c4,1);
            }
          }
        }
      }
      return uVar3;
    }
  }
  return uVar3;
}



uint64_t FUN_180862e90(int64_t param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uStackX_8;
  
  if (((byte)(*(uint *)(param_1 + 0x2d8) >> 1) & 1) != param_2) {
    if (param_2 == 0) {
      if (((*(char *)(param_1 + 0x5c) != '\0') ||
          (cVar1 = func_0x0001808bc370(*(uint64_t *)(param_1 + 0x2c8)), cVar1 != '\0')) &&
         (uVar4 = FUN_180863bd0(param_1), (int)uVar4 != 0)) {
        return uVar4;
      }
      if (((*(uint *)(param_1 + 0x2d8) >> 0xd & 1) != 0) &&
         (uVar4 = FUN_180864780(param_1), (int)uVar4 != 0)) {
        return uVar4;
      }
      uVar4 = FUN_18085f440(param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    if ((*(int *)(param_1 + 0x2e4) < 3) || (cVar1 = FUN_180857ac0(param_1 + 200), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x2e4) - 1U < 2) {
        *(uint *)(param_1 + 0x2d8) =
             ((uint)param_2 << 0xc | *(uint *)(param_1 + 0x2d8)) & ~((param_2 ^ 1) << 0xc);
      }
      else {
        uVar4 = FUN_18073d8a0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),param_2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      uStackX_8 = 0;
      uVar4 = FUN_18073c730(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),&uStackX_8,0,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18073d230(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),uStackX_8,0,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18073ced0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0,
                            0xffffffffffffffff);
      iVar2 = (int)uVar4;
    }
    else {
      iVar2 = 0;
      if (param_2 == 0) {
        uVar4 = FUN_18073d8a0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar3 = FUN_18085ab70(param_1 + 200);
        if (0 < iVar3 + -0x40) {
          iVar2 = FUN_18085ab70(param_1 + 200);
          iVar2 = iVar2 + -0x40;
        }
        lVar5 = (int64_t)iVar2 + *(int64_t *)(param_1 + 0x338);
        uVar4 = FUN_18073ced0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0,
                              0xffffffffffffffff);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_18073c160(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0,0);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_18073d3c0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),lVar5 + 0x40,
                              0x3f800000);
        iVar2 = (int)uVar4;
        lVar6 = 0;
      }
      else {
        iVar2 = FUN_18085ab70(param_1 + 200);
        if (iVar2 < 0x41) {
          iVar2 = 0x40;
        }
        else {
          iVar2 = FUN_18085ab70(param_1 + 200);
        }
        lVar6 = (int64_t)iVar2 + *(int64_t *)(param_1 + 0x338);
        uVar4 = FUN_18073d3c0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),lVar6,0);
        iVar2 = (int)uVar4;
        lVar5 = 0;
      }
      if (iVar2 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18073d230(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),lVar5,lVar6,0);
      iVar2 = (int)uVar4;
    }
    if (iVar2 != 0) {
      return uVar4;
    }
    *(uint *)(param_1 + 0x2d8) =
         ~((param_2 ^ 1) * 2) & ((uint)param_2 * 2 | *(uint *)(param_1 + 0x2d8));
  }
  return 0;
}



uint64_t FUN_180863140(int64_t param_1,int param_2,int32_t param_3)

{
  uint64_t uVar1;
  
  *(int32_t *)(param_1 + 0x318 + (int64_t)param_2 * 4) = param_3;
  if ((2 < *(int *)(param_1 + 0x2e4)) &&
     (uVar1 = FUN_18073da60(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78)), (int)uVar1 != 0
     )) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_180863180(int64_t param_1,byte param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  if (((byte)(*(uint *)(param_1 + 0x2d8) >> 4) & 1) != param_2) {
    *(uint *)(param_1 + 0x2d8) =
         ~((param_2 ^ 1) << 4) & ((uint)param_2 << 4 | *(uint *)(param_1 + 0x2d8));
    uVar2 = FUN_180853c50(*(uint64_t *)(param_1 + 0x2b0));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    puVar1 = *(uint64_t **)(param_1 + 0x480);
    if ((puVar1 != (uint64_t *)0x0) &&
       (uVar2 = (**(code **)*puVar1)(puVar1,param_1,((param_2 ^ 1) + 1) * 0x8000,0), (int)uVar2 != 0
       )) {
      return uVar2;
    }
  }
  return 0;
}



bool FUN_180863210(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  uint auStackX_20 [2];
  byte abStack_18 [16];
  
  iVar1 = FUN_18073e470(param_1,abStack_18);
  if (iVar1 == 0) {
    if ((abStack_18[0] & 0x80) != 0) goto LAB_180863270;
    if ((param_2 == 0) || (param_3 < param_2)) {
      return false;
    }
  }
  else if (iVar1 == 0x2e) {
LAB_180863270:
    auStackX_20[0] = 2;
    FUN_18073e550(param_1,auStackX_20,0,0,0);
    return (auStackX_20[0] & 0xfffffffd) == 0;
  }
  return true;
}



uint FUN_1808632b0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int32_t uVar6;
  float fVar7;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if ((*(float *)(lVar1 + 0x2f0) <= 0.0 && *(float *)(lVar1 + 0x2f0) != 0.0) ||
     (*(char *)(lVar1 + 0x5c) != '\0')) {
LAB_1808632ec:
    uVar6 = FUN_1808d2430(lVar1 + 0x28,*(uint64_t *)(lVar1 + 0x2c8));
    *(int32_t *)(lVar1 + 0x2f0) = uVar6;
  }
  else {
    cVar3 = func_0x0001808bc370(*(uint64_t *)(lVar1 + 0x2c8));
    if (cVar3 != '\0') goto LAB_1808632ec;
  }
  fVar7 = *(float *)(lVar1 + 0x2f0);
  if ((0.0 < *(float *)(lVar2 + 0x2f0) || *(float *)(lVar2 + 0x2f0) == 0.0) &&
     (*(char *)(lVar2 + 0x5c) == '\0')) {
    cVar3 = func_0x0001808bc370(*(uint64_t *)(lVar2 + 0x2c8));
    if (cVar3 == '\0') goto LAB_180863343;
  }
  uVar6 = FUN_1808d2430(lVar2 + 0x28,*(uint64_t *)(lVar2 + 0x2c8));
  *(int32_t *)(lVar2 + 0x2f0) = uVar6;
LAB_180863343:
  fVar7 = fVar7 - *(float *)(lVar2 + 0x2f0);
  uVar5 = (uint)(0.0 < fVar7) - (uint)(fVar7 < 0.0);
  uVar4 = (int)(uVar5 * -0x80000000) >> 0x1f;
  return (*(int *)(lVar2 + 0x2e8) - *(int *)(lVar1 + 0x2e8) >> 0x1e & 0xfffffffeU) + 1 & ~uVar4 |
         uVar4 & uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180863420(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int32_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint64_t uVar14;
  float fVar15;
  byte abStackX_8 [8];
  uint auStackX_10 [2];
  int64_t lStack_28;
  uint uStack_20;
  char cStack_1c;
  uint64_t uVar13;
  
  uVar13 = 0;
  bVar11 = false;
  if (((*(byte *)(*(int64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4c0) + 0x7a) & 1) == 0) &&
     (*(char *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x158) == '\0')) {
    lStack_28 = 0;
    uVar10 = 0xffffbfff;
    uVar12 = 0;
  }
  else {
    cStack_1c = '\0';
    FUN_180768b90(&uStack_20);
    uVar12 = 0x4000;
    uVar10 = 0xffffffff;
    lStack_28 = param_1;
  }
  *(uint *)(param_1 + 0x2d8) = (uVar12 | *(uint *)(param_1 + 0x2d8)) & uVar10;
  iVar6 = FUN_1808605e0(param_1);
  if (iVar6 != 2) {
    uVar12 = *(uint *)(param_1 + 0x2d8);
    *(uint *)(param_1 + 0x2d8) = uVar12 | 0x800;
    bVar11 = 1 < *(int *)(param_1 + 0x2e4) - 1U;
    if ((*(int64_t *)(param_1 + 0x2b8) == 0) || ((uVar12 & 0x40) == 0)) {
LAB_1808634f7:
      iVar6 = FUN_18085f0e0(param_1,1);
      if (iVar6 == 0) goto LAB_18086350f;
    }
    else {
      iVar6 = FUN_1808538a0(*(int64_t *)(param_1 + 0x2b8),param_1);
      if (iVar6 == 0) {
        *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
        goto LAB_1808634f7;
      }
    }
    if (iVar6 != 0) goto LAB_180863795;
  }
LAB_18086350f:
  lVar9 = *(int64_t *)(param_1 + 0x80);
  if ((lVar9 != 0) && (uVar14 = uVar13, 0 < *(int *)(lVar9 + 0x28))) {
    do {
      lVar2 = *(int64_t *)(uVar14 + 8 + *(int64_t *)(lVar9 + 0x20));
      if (*(int *)(lVar2 + 0x30) != -1) {
        FUN_1808d73b0(lVar2,*(int32_t *)(uVar14 + 4 + *(int64_t *)(lVar9 + 0x20)),0);
        lVar9 = *(int64_t *)(param_1 + 0x80);
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar12;
      uVar14 = uVar14 + 0x18;
    } while ((int)uVar12 < *(int *)(lVar9 + 0x28));
  }
  abStackX_8[0] = (byte)(*(uint *)(param_1 + 0x2d8) >> 0xc) & 1;
  iVar6 = FUN_180861a70(param_1,abStackX_8);
  if (iVar6 != 0) goto LAB_180863795;
  uVar12 = 0x1000;
  if (abStackX_8[0] != 0) {
    uVar12 = 0;
  }
  *(uint *)(param_1 + 0x2d8) =
       (-(uint)(abStackX_8[0] != 0) & 0x1000 | *(uint *)(param_1 + 0x2d8)) & ~uVar12;
  lVar9 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0xd0) + 0x30);
  if (lVar9 == network_system_buffer_config) {
LAB_180863615:
    if (*(int64_t *)(param_1 + 0x2d0) == 0) goto LAB_180863724;
    auStackX_10[0] = 0;
    cVar5 = FUN_1808c2150(*(int64_t *)(param_1 + 0x2d0),param_1,auStackX_10);
    if ((cVar5 == '\0') ||
       (((*(int64_t *)(param_1 + 0x2b8) != 0 && (auStackX_10[0] == 0)) &&
        (cVar5 = FUN_180853d20(*(int64_t *)(param_1 + 0x2b8),param_1), cVar5 == '\0'))))
    goto LAB_180863724;
    lVar9 = *(int64_t *)(param_1 + 0x2c8);
    piVar1 = (int *)(lVar9 + 0x54c);
    *piVar1 = *piVar1 + 1;
    *(int32_t *)(param_1 + 0x2e8) = *(int32_t *)(lVar9 + 0x54c);
    *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0xd0) + 0x30) =
         *(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4d0);
    iVar6 = FUN_1808c1410(*(uint64_t *)(param_1 + 0x2d0),param_1,*(uint64_t *)(param_1 + 0x2c8))
    ;
    if (iVar6 != 0) goto LAB_180863795;
    if (*(int64_t *)(param_1 + 0x2b8) != 0) {
      iVar6 = FUN_18084e710(*(int64_t *)(param_1 + 0x2b8),param_1,1);
      if (iVar6 != 0) goto LAB_180863795;
      *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x40;
    }
    puVar3 = *(uint64_t **)(param_1 + 0x480);
    if (((puVar3 != (uint64_t *)0x0) && (bVar11 == false)) &&
       (iVar6 = (**(code **)*puVar3)(puVar3,param_1,4), iVar6 != 0)) goto LAB_180863795;
    iVar6 = FUN_1808650a0(param_1,bVar11);
LAB_180863790:
    if (iVar6 != 0) goto LAB_180863795;
  }
  else {
    fVar15 = *(float *)(param_1 + 0x314);
    if (fVar15 == -1.0) {
      fVar15 = *(float *)(*(int64_t *)(param_1 + 0x88) + 0xec);
    }
    if ((uint64_t)
        ((int)((float)*(uint *)(*(int64_t *)(param_1 + 0x2c8) + 0x774) * fVar15) + lVar9) <=
        *(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4d0)) goto LAB_180863615;
LAB_180863724:
    bVar4 = abStackX_8[0];
    iVar6 = FUN_18085f670(param_1);
    if ((iVar6 != 0) ||
       (iVar6 = FUN_18073d8a0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),bVar4),
       iVar6 != 0)) goto LAB_180863790;
    lVar9 = *(int64_t *)(param_1 + 0x80);
    *(int32_t *)(param_1 + 0x2e4) = 0;
    if (lVar9 != 0) {
      uVar7 = FUN_1808605e0(param_1);
      *(int32_t *)(lVar9 + 0x80) = uVar7;
    }
    puVar3 = *(uint64_t **)(param_1 + 0x480);
    if ((puVar3 != (uint64_t *)0x0) &&
       (iVar6 = (**(code **)*puVar3)(puVar3,param_1,0x40), iVar6 != 0)) goto LAB_180863790;
  }
  iVar6 = 0;
LAB_180863795:
  if (lStack_28 != 0) {
    iVar8 = FUN_1808605e0();
    if (iVar8 == 2) {
      *(int32_t *)(lStack_28 + 0x488) = 0;
      return iVar6;
    }
    FUN_180768b90(auStackX_10);
    if (uStack_20 <= auStackX_10[0]) {
      if (cStack_1c != '\0') {
        *(int *)(lStack_28 + 0x488) = *(int *)(lStack_28 + 0x488) + (auStackX_10[0] - uStack_20);
        return iVar6;
      }
      *(uint *)(lStack_28 + 0x488) = auStackX_10[0] - uStack_20;
    }
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180863430(uint64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int32_t uVar8;
  int64_t in_RAX;
  int64_t lVar9;
  uint uVar10;
  bool bVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  char cVar14;
  uint64_t unaff_R14;
  float fVar16;
  uint64_t uVar17;
  uint uStack0000000000000028;
  char cStack000000000000002c;
  byte in_stack_00000050;
  uint in_stack_00000058;
  uint uVar15;
  
  bVar11 = false;
  cVar14 = (char)unaff_R14;
  uVar15 = (uint)unaff_R14;
  if (((*(byte *)(*(int64_t *)(in_RAX + 0x4c0) + 0x7a) & 1) == 0) &&
     (*(char *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x158) == cVar14)) {
    uVar10 = 0xffffbfff;
    uVar7 = uVar15;
    uVar17 = unaff_R14;
  }
  else {
    cStack000000000000002c = cVar14;
    FUN_180768b90(&stack0x00000028);
    uVar7 = 0x4000;
    uVar10 = 0xffffffff;
    uVar17 = param_1;
  }
  *(uint *)(param_1 + 0x2d8) = (uVar7 | *(uint *)(param_1 + 0x2d8)) & uVar10;
  iVar6 = FUN_1808605e0(param_1);
  if (iVar6 != 2) {
    uVar7 = *(uint *)(param_1 + 0x2d8);
    *(uint *)(param_1 + 0x2d8) = uVar7 | 0x800;
    bVar11 = 1 < *(int *)(param_1 + 0x2e4) - 1U;
    if ((*(int64_t *)(param_1 + 0x2b8) == 0) || ((uVar7 & 0x40) == 0)) {
LAB_1808634f7:
      uVar7 = FUN_18085f0e0(param_1,1);
      if (uVar7 == 0) goto LAB_18086350f;
    }
    else {
      uVar7 = FUN_1808538a0(*(int64_t *)(param_1 + 0x2b8),param_1);
      if (uVar7 == 0) {
        *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
        goto LAB_1808634f7;
      }
    }
    uVar13 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180863795;
  }
LAB_18086350f:
  lVar9 = *(int64_t *)(param_1 + 0x80);
  if ((lVar9 != 0) &&
     (uVar12 = unaff_R14 & 0xffffffff, uVar13 = unaff_R14, (int)uVar15 < *(int *)(lVar9 + 0x28))) {
    do {
      lVar2 = *(int64_t *)(uVar13 + 8 + *(int64_t *)(lVar9 + 0x20));
      if (*(int *)(lVar2 + 0x30) != -1) {
        FUN_1808d73b0(lVar2,*(int32_t *)(uVar13 + 4 + *(int64_t *)(lVar9 + 0x20)),0);
        lVar9 = *(int64_t *)(param_1 + 0x80);
      }
      uVar7 = (int)uVar12 + 1;
      uVar12 = (uint64_t)uVar7;
      uVar13 = uVar13 + 0x18;
    } while ((int)uVar7 < *(int *)(lVar9 + 0x28));
  }
  in_stack_00000050 = (byte)(*(uint *)(param_1 + 0x2d8) >> 0xc) & 1;
  uVar7 = FUN_180861a70(param_1,&stack0x00000050);
  uVar13 = (uint64_t)uVar7;
  if (uVar7 != 0) goto LAB_180863795;
  uVar7 = 0x1000;
  if (in_stack_00000050 != 0) {
    uVar7 = uVar15;
  }
  *(uint *)(param_1 + 0x2d8) =
       (-(uint)(in_stack_00000050 != 0) & 0x1000 | *(uint *)(param_1 + 0x2d8)) & ~uVar7;
  lVar9 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0xd0) + 0x30);
  if (lVar9 == network_system_buffer_config) {
LAB_180863615:
    if (((*(int64_t *)(param_1 + 0x2d0) == 0) ||
        (in_stack_00000058 = uVar15,
        cVar5 = FUN_1808c2150(*(int64_t *)(param_1 + 0x2d0),param_1,&stack0x00000058),
        cVar5 == '\0')) ||
       ((*(int64_t *)(param_1 + 0x2b8) != 0 &&
        ((in_stack_00000058 == uVar15 &&
         (cVar5 = FUN_180853d20(*(int64_t *)(param_1 + 0x2b8),param_1), cVar5 == '\0'))))))
    goto LAB_180863724;
    lVar9 = *(int64_t *)(param_1 + 0x2c8);
    piVar1 = (int *)(lVar9 + 0x54c);
    *piVar1 = *piVar1 + 1;
    *(int32_t *)(param_1 + 0x2e8) = *(int32_t *)(lVar9 + 0x54c);
    *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0xd0) + 0x30) =
         *(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4d0);
    uVar7 = FUN_1808c1410(*(uint64_t *)(param_1 + 0x2d0),param_1,*(uint64_t *)(param_1 + 0x2c8))
    ;
    uVar13 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180863795;
    if (*(int64_t *)(param_1 + 0x2b8) != 0) {
      uVar7 = FUN_18084e710(*(int64_t *)(param_1 + 0x2b8),param_1,1);
      uVar13 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180863795;
      *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x40;
    }
    puVar3 = *(uint64_t **)(param_1 + 0x480);
    if ((puVar3 != (uint64_t *)0x0) && (bVar11 == false)) {
      uVar7 = (**(code **)*puVar3)(puVar3,param_1,4);
      uVar13 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180863795;
    }
    uVar7 = FUN_1808650a0(param_1,bVar11);
    uVar13 = (uint64_t)uVar7;
LAB_180863790:
    if (uVar7 != 0) goto LAB_180863795;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x314);
    if (fVar16 == -1.0) {
      fVar16 = *(float *)(*(int64_t *)(param_1 + 0x88) + 0xec);
    }
    if ((uint64_t)
        ((int)((float)*(uint *)(*(int64_t *)(param_1 + 0x2c8) + 0x774) * fVar16) + lVar9) <=
        *(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4d0)) goto LAB_180863615;
LAB_180863724:
    bVar4 = in_stack_00000050;
    uVar7 = FUN_18085f670(param_1);
    uVar13 = (uint64_t)uVar7;
    if (uVar7 != 0) {
LAB_18086378e:
      uVar7 = (uint)uVar13;
      goto LAB_180863790;
    }
    uVar7 = FUN_18073d8a0(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),bVar4);
    uVar13 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_18086378e;
    lVar9 = *(int64_t *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x2e4) = uVar15;
    if (lVar9 != 0) {
      uVar8 = FUN_1808605e0(param_1);
      *(int32_t *)(lVar9 + 0x80) = uVar8;
    }
    puVar3 = *(uint64_t **)(param_1 + 0x480);
    if (puVar3 != (uint64_t *)0x0) {
      uVar7 = (**(code **)*puVar3)(puVar3,param_1,0x40);
      uVar13 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_18086378e;
    }
  }
  uVar13 = unaff_R14 & 0xffffffff;
LAB_180863795:
  if (uVar17 != 0) {
    iVar6 = FUN_1808605e0();
    if (iVar6 == 2) {
      *(uint *)(uVar17 + 0x488) = uVar15;
      return uVar13;
    }
    FUN_180768b90(&stack0x00000058);
    if (uStack0000000000000028 <= in_stack_00000058) {
      if (cStack000000000000002c != cVar14) {
        *(int *)(uVar17 + 0x488) =
             *(int *)(uVar17 + 0x488) + (in_stack_00000058 - uStack0000000000000028);
        return uVar13;
      }
      *(uint *)(uVar17 + 0x488) = in_stack_00000058 - uStack0000000000000028;
    }
  }
  return uVar13;
}



int32_t FUN_1808637ae(void)

{
  int iVar1;
  int32_t unaff_EDI;
  int32_t unaff_R14D;
  int64_t lStackX_20;
  uint uStack0000000000000028;
  char cStack000000000000002c;
  uint in_stack_00000058;
  
  iVar1 = FUN_1808605e0();
  if (iVar1 == 2) {
    *(int32_t *)(lStackX_20 + 0x488) = unaff_R14D;
    return unaff_EDI;
  }
  FUN_180768b90(&stack0x00000058);
  if (uStack0000000000000028 <= in_stack_00000058) {
    if (cStack000000000000002c != (char)unaff_R14D) {
      *(int *)(lStackX_20 + 0x488) =
           *(int *)(lStackX_20 + 0x488) + (in_stack_00000058 - uStack0000000000000028);
      return unaff_EDI;
    }
    *(uint *)(lStackX_20 + 0x488) = in_stack_00000058 - uStack0000000000000028;
  }
  return unaff_EDI;
}



uint64_t FUN_180863820(int64_t param_1,int param_2,int8_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  iVar1 = *(int *)(param_1 + 0x2e4);
  if ((*(int64_t *)(param_1 + 0x2b8) != 0) && ((*(uint *)(param_1 + 0x2d8) >> 6 & 1) != 0)) {
    uVar2 = FUN_1808538a0(*(int64_t *)(param_1 + 0x2b8),param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
  }
  if ((param_2 == 2) || (iVar1 - 1U < 2)) {
    uVar2 = FUN_18085f0e0(param_1,param_3);
    iVar1 = (int)uVar2;
    goto joined_r0x000180863909;
  }
  if (param_2 == 3) {
    *(int32_t *)(param_1 + 0x2e4) = 8;
    return 0;
  }
  if (param_2 == 1) {
LAB_18086389c:
    uVar2 = FUN_18085f2b0(param_1);
    iVar1 = (int)uVar2;
  }
  else {
    if (*(int *)(param_1 + 0x2e4) != 3) {
      return 0;
    }
    if (param_2 != 4) {
      if (param_2 != 0) goto LAB_18086389c;
      lVar3 = (*(code *)**(uint64_t **)(param_1 + 8))(param_1 + 8);
      if ((*(uint *)(lVar3 + 0xf8) >> 4 & 1) != 0) {
        uVar2 = FUN_180863a80(param_1,*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30));
        iVar1 = (int)uVar2;
        goto joined_r0x000180863909;
      }
    }
    uVar2 = FUN_18085f340(param_1);
    iVar1 = (int)uVar2;
  }
joined_r0x000180863909:
  if (iVar1 == 0) {
    return 0;
  }
  return uVar2;
}





// 函数: void FUN_180863930(int64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4,
void FUN_180863930(int64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4,
                  int8_t param_5,int8_t param_6)

{
  byte bVar1;
  int8_t auStack_18 [16];
  
  bVar1 = (byte)(*(uint *)(param_2 + 0x1c) >> 1) & 1;
  (**(code **)(**(int64_t **)(param_2 + 0x10) + 0x30))(*(int64_t **)(param_2 + 0x10),auStack_18);
  FUN_1808d0760(param_1 + 0x378 + ((uint64_t)bVar1 ^ 1) * 0x80,auStack_18,param_3,bVar1,param_4,
                param_5,param_6);
  return;
}



uint64_t FUN_1808639c0(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int8_t auStack_28 [16];
  
  puVar1 = (uint64_t *)(param_1 + 0x490);
  puVar3 = (uint64_t *)*puVar1;
  puVar4 = puVar3;
  while (puVar3 != puVar1) {
    uVar2 = *(uint *)((int64_t)puVar4 + 0x1c);
    if ((uVar2 >> 2 & 1) != 0) {
      puVar4[5] = puVar4[4];
      *(uint *)((int64_t)puVar4 + 0x1c) = uVar2 & 0xfffffffb | 8;
      puVar4[4] = 0;
      if ((uVar2 & 2) == 0) {
        (**(code **)(*(int64_t *)puVar4[2] + 0x30))((int64_t *)puVar4[2],auStack_28);
        FUN_1808cee30(param_1 + 0x3f8,auStack_28,param_2);
      }
    }
    if (puVar4 != puVar1) {
      puVar3 = (uint64_t *)*puVar4;
      puVar4 = puVar3;
    }
  }
  func_0x0001808cef10(param_1 + 0x378,param_2);
  return 0;
}



uint64_t FUN_1808639e2(void)

{
  uint uVar1;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar2;
  uint64_t *unaff_R14;
  int8_t auStackX_20 [8];
  
  puVar2 = unaff_RSI;
  do {
    uVar1 = *(uint *)((int64_t)puVar2 + 0x1c);
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2[5] = puVar2[4];
      *(uint *)((int64_t)puVar2 + 0x1c) = uVar1 & 0xfffffffb | 8;
      puVar2[4] = 0;
      if ((uVar1 & 2) == 0) {
        (**(code **)(*(int64_t *)puVar2[2] + 0x30))((int64_t *)puVar2[2],auStackX_20);
        FUN_1808cee30(unaff_RBP + 0x3f8,auStackX_20);
      }
    }
    if (puVar2 != unaff_R14) {
      unaff_RSI = (uint64_t *)*puVar2;
      puVar2 = unaff_RSI;
    }
  } while (unaff_RSI != unaff_R14);
  func_0x0001808cef10(unaff_RBP + 0x378);
  return 0;
}



uint64_t FUN_180863a57(void)

{
  int64_t unaff_RBP;
  
  func_0x0001808cef10(unaff_RBP + 0x378);
  return 0;
}



uint64_t FUN_180863a80(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  if ((*(uint *)(param_1 + 0x2d8) >> 0xf & 1) == 0) {
    puVar1 = (uint64_t *)(param_1 + 0x490);
    *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x8000;
    for (puVar2 = (uint64_t *)*puVar1;
        (puVar2 != puVar1 && (FUN_180862080(param_1,puVar2[2],param_2), puVar2 != puVar1));
        puVar2 = (uint64_t *)*puVar2) {
    }
    uVar5 = FUN_1808d5520(param_1 + 0x280,param_2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    lVar3 = *(int64_t *)(param_1 + 0x80);
    if (lVar3 != 0) {
      uVar4 = FUN_1808605e0(param_1);
      *(int32_t *)(lVar3 + 0x80) = uVar4;
    }
  }
  return 0;
}



uint64_t FUN_180863aa3(uint param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  
  puVar1 = (uint64_t *)(unaff_RBP + 0x490);
  *(uint *)(unaff_RBP + 0x2d8) = param_1 | 0x8000;
  for (puVar2 = (uint64_t *)*puVar1; (puVar2 != puVar1 && (FUN_180862080(), puVar2 != puVar1));
      puVar2 = (uint64_t *)*puVar2) {
  }
  uVar5 = FUN_1808d5520(unaff_RBP + 0x280);
  if ((int)uVar5 == 0) {
    lVar3 = *(int64_t *)(unaff_RBP + 0x80);
    if (lVar3 != 0) {
      uVar4 = FUN_1808605e0();
      *(int32_t *)(lVar3 + 0x80) = uVar4;
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_180863b09(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t unaff_RBP;
  
  lVar1 = *(int64_t *)(unaff_RBP + 0x80);
  if (lVar1 != 0) {
    uVar2 = FUN_1808605e0();
    *(int32_t *)(lVar1 + 0x80) = uVar2;
  }
  return 0;
}



uint64_t FUN_180863b30(int64_t param_1)

{
  uint64_t uVar1;
  
  if ((*(byte *)(param_1 + 0x2d8) & 1) == 0) {
    return 0x1c;
  }
  uVar1 = FUN_1808c7d50(*(uint64_t *)(*(int64_t *)(param_1 + 0x88) + 0xd0));
  if ((int)uVar1 == 0) {
    *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xfffffffe;
  }
  return uVar1;
}



uint64_t FUN_180863b80(int64_t param_1)

{
  char cVar1;
  uint64_t uVar2;
  
  if (((*(char *)(param_1 + 0x5c) != '\0') ||
      (cVar1 = func_0x0001808bc370(*(uint64_t *)(param_1 + 0x2c8)), cVar1 != '\0')) &&
     (uVar2 = FUN_180863bd0(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  if (((*(uint *)(param_1 + 0x2d8) >> 0xd & 1) != 0) &&
     (uVar2 = FUN_180864780(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180863bd0(void)
void FUN_180863bd0(void)

{
  int8_t auStack_2e8 [64];
  int8_t auStack_2a8 [624];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
                    // WARNING: Subroutine does not return
  memset(auStack_2a8,0,0x60);
}





// 函数: void FUN_180863bf7(void)
void FUN_180863bf7(void)

{
  uint64_t unaff_RSI;
  int64_t in_R11;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
                    // WARNING: Subroutine does not return
  memset(&stack0x00000040,0,0x60);
}





// 函数: void FUN_180863c00(uint64_t param_1,uint64_t param_2)
void FUN_180863c00(uint64_t param_1,uint64_t param_2)

{
  int64_t in_R11;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
                    // WARNING: Subroutine does not return
  memset(&stack0x00000040,param_2,(int)param_2 + 0x60);
}





