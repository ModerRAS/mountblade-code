#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part183.c - 1 个函数

// 函数: void FUN_180773a64(void)
void FUN_180773a64(void)

{
  return;
}



uint64_t * FUN_180773a80(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  func_0x00018074fb20();
  *param_1 = &unknown_var_3104_ptr;
  puVar1 = param_1 + 0x2c;
  param_1[0x2d] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2e] = 0;
  *(int32_t *)(param_1 + 0x31) = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x32) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x18c) = 1;
  param_1[0x2f] = 0;
  *(int32_t *)((int64_t)param_1 + 0x194) = 0;
  return param_1;
}



uint64_t FUN_180773af0(int64_t param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int64_t lVar10;
  int32_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  uint uStackX_8;
  int iStack_78;
  uint uStack_74;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  lVar12 = *(int64_t *)(param_1 + 0x180);
  uVar13 = 0;
  uStackX_8 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
    lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x180);
  }
  uVar4 = 0;
  uVar14 = param_3;
  uVar8 = param_3;
  if ((*(uint *)(param_1 + 0x58) & 8) == 0) {
    do {
      uStack_74 = uVar14;
      lVar10 = param_1;
      uVar4 = uStackX_8;
      if ((*(int64_t *)(param_1 + 0xa0) != 0) &&
         (lVar10 = *(int64_t *)
                    (*(int64_t *)(param_1 + 0xa0) + (int64_t)*(int *)(param_1 + 0xc0) * 8),
         lVar10 == 0)) break;
      if (*(int64_t *)(param_1 + 0xa8) == 0) {
        iVar9 = *(int *)(lVar10 + 0x44);
      }
      else {
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        (**(code **)(*(int64_t *)(lVar10 + 0x60) + 0x88))
                  (*(int64_t *)(lVar10 + 0x60),*(int32_t *)(param_1 + 0xc0),&uStack_70);
        iVar9 = (int)uStack_58;
      }
      if (((*(byte *)(param_1 + 0x2c) & 2) == 0) || (*(int *)(param_1 + 400) == 0)) {
        uVar14 = iVar9 - 1;
        if ((*(byte *)(*(int64_t *)(lVar12 + 0x60) + 0x2c) & 1) == 0) {
          uVar14 = 0xffffffff;
        }
      }
      else {
        uVar14 = *(int *)(lVar10 + 0x4c) + -1 + *(int *)(lVar10 + 0x50);
      }
      uVar3 = *(uint *)(lVar10 + 0x40);
      uVar7 = *(int *)(lVar12 + 0x44) - param_2;
      if (uVar8 + param_2 <= *(uint *)(lVar12 + 0x44)) {
        uVar7 = uStack_74;
      }
      if (uVar14 < uVar3) {
        uVar7 = 0;
      }
      else if (uVar14 < uVar3 + uVar7) {
        uVar7 = (uVar14 - uVar3) + 1;
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 1) {
        lVar5 = 8;
LAB_180773c80:
        uVar8 = (uint)((uint64_t)uVar7 * lVar5 >> 3);
      }
      else {
        if (iVar2 == 2) {
          lVar5 = 0x10;
          goto LAB_180773c80;
        }
        if (iVar2 == 3) {
          lVar5 = 0x18;
          goto LAB_180773c80;
        }
        if ((iVar2 == 4) || (uVar8 = uVar7, iVar2 == 5)) {
          lVar5 = 0x20;
          goto LAB_180773c80;
        }
      }
      if (*(int *)(param_1 + 0x68) * uVar8 == 0) {
        uVar13 = 0x10;
        iStack_78 = 0;
      }
      else {
        uVar6 = FUN_180751310(lVar12,param_2,uVar7,&iStack_78);
        uVar13 = uVar6 & 0xffffffff;
        if ((int)uVar6 == 0) {
          if ((iStack_78 == 0) && (uVar7 != 0)) break;
        }
        else if (1 < (int)uVar6 - 0xfU) {
          return uVar6;
        }
      }
      uStackX_8 = uStackX_8 + iStack_78;
      uVar8 = uStack_74 - iStack_78;
      uVar3 = iStack_78 + param_2;
      uVar4 = *(uint *)(lVar12 + 0x44);
      *(int *)(lVar10 + 0x188) = *(int *)(lVar10 + 0x40);
      param_2 = 0;
      if (uVar3 < uVar4) {
        param_2 = uVar3;
      }
      uVar3 = iStack_78 + *(int *)(lVar10 + 0x40);
      *(uint *)(lVar10 + 0x40) = uVar3;
      if (param_4 != (uint *)0x0) {
        *param_4 = uStackX_8;
        uVar3 = *(uint *)(lVar10 + 0x40);
      }
      uVar4 = uStackX_8;
      uStack_74 = uVar8;
      if ((uVar14 < uVar3) || ((int)uVar13 == 0x10)) {
        if ((((*(uint *)(param_1 + 0x2c) & 2) == 0) || (*(int *)(param_1 + 400) == 0)) ||
           ((*(int *)(param_1 + 0x44) == -1 && ((*(uint *)(param_1 + 0x2c) >> 10 & 1) == 0)))) {
          if (lVar10 != param_1) {
            if (*(int *)(param_1 + 0x44) == -1) {
              *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_1 + 0x40);
            }
            else {
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x44);
            }
            LOCK();
            *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 8;
            UNLOCK();
          }
          if (iVar9 == -1) {
            *(int32_t *)(lVar10 + 0x44) = *(int32_t *)(lVar10 + 0x40);
          }
          else {
            *(int *)(lVar10 + 0x40) = iVar9;
          }
          LOCK();
          *(uint *)(lVar10 + 0x58) = *(uint *)(lVar10 + 0x58) | 8;
          UNLOCK();
          if (*(int64_t *)(lVar10 + 0xb8) != 0) {
            LOCK();
            puVar1 = (uint *)(*(int64_t *)(lVar10 + 0xb8) + 0x58);
            *puVar1 = *puVar1 | 8;
            UNLOCK();
          }
          break;
        }
        uVar11 = *(int32_t *)(param_1 + 0x4c);
        *(int32_t *)(lVar10 + 0x40) = uVar11;
        if (*(int *)(param_1 + 0x44) != -1) {
          if ((*(int64_t *)(param_1 + 0x60) != 0) &&
             (lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + 0x170), lVar5 != 0)) {
            *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 0x60) + 0x170) + 0x194) =
                 *(uint *)(lVar5 + 0x194) | 0x100;
            uVar11 = *(int32_t *)(lVar10 + 0x40);
          }
          uVar6 = FUN_180752040(lVar12,*(int32_t *)(param_1 + 0xc0),uVar11);
          uVar13 = uVar6 & 0xffffffff;
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          *(int32_t *)(lVar10 + 0x40) = *(int32_t *)(lVar12 + 0x40);
        }
        if (0 < *(int *)(param_1 + 400)) {
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
        }
      }
      else if (iStack_78 == 0) break;
      uVar14 = uStack_74;
    } while (uVar8 != 0);
  }
  if (uVar4 < param_3) {
    uVar14 = *(uint *)(lVar12 + 0x44);
    iVar9 = param_3 - uVar4;
    do {
      iVar2 = uVar14 - param_2;
      if (iVar9 + param_2 <= uVar14) {
        iVar2 = iVar9;
      }
      FUN_180750000(lVar12,param_2,iVar2);
      uVar14 = *(uint *)(lVar12 + 0x44);
      uVar4 = iVar2 + param_2;
      param_2 = 0;
      if (uVar4 < uVar14) {
        param_2 = uVar4;
      }
      iVar9 = iVar9 - iVar2;
    } while (iVar9 != 0);
  }
  return uVar13;
}



uint64_t FUN_180773eb0(int64_t param_1)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  
  lVar2 = *(int64_t *)(param_1 + 0x180);
  if (lVar2 != 0) {
    if (((*(uint *)(param_1 + 0x2c) & 0x400) != 0) ||
       (uVar4 = *(uint *)(param_1 + 0x44), *(uint *)(lVar2 + 0x44) < uVar4)) {
      uVar4 = *(uint *)(lVar2 + 0x44);
    }
    uVar3 = FUN_180773af0(param_1,0,uVar4,0);
    if ((uVar3 & 0xffffffef) != 0) {
      return uVar3;
    }
    uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x180) + 0x44);
    if (uVar4 < uVar1) {
      FUN_180750000(*(int64_t *)(param_1 + 0x180),uVar4,uVar1 - uVar4);
    }
  }
  LOCK();
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffffef;
  UNLOCK();
  return 0;
}



uint64_t FUN_180773f20(int64_t param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  if ((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x110) != 7)) {
    return 0x2e;
  }
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  if (param_3 == 2) {
    *param_2 = *(int *)(param_1 + 0x188);
  }
  else {
    if (param_3 == 4) {
      uVar4 = (uint64_t)*(uint *)(param_1 + 0x188);
      iVar1 = *(int *)(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          *param_2 = (int)(uVar4 * 0x10 >> 3) * iVar1;
          return 0;
        }
        if (iVar2 == 3) {
          *param_2 = (int)(uVar4 * 0x18 >> 3) * iVar1;
          return 0;
        }
        if ((iVar2 == 4) || (iVar2 == 5)) {
          *param_2 = (int)(uVar4 * 0x20 >> 3) * iVar1;
          return 0;
        }
      }
      *param_2 = *(uint *)(param_1 + 0x188) * iVar1;
      return 0;
    }
    if (param_3 == 1) {
      *param_2 = (int)(int64_t)
                      ((float)*(uint *)(param_1 + 0x188) * 0.001 * *(float *)(param_1 + 0x6c));
      return 0;
    }
    uVar3 = FUN_180772f60(*(uint64_t *)(param_1 + 0x60));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



uint64_t FUN_180774090(int64_t param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int64_t lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  byte bVar8;
  uint auStackX_10 [2];
  
  uVar5 = 0;
  bVar8 = 1;
  if (param_3 == 2) {
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
      uVar4 = *(int *)(param_1 + 0x4c) + -1 + *(int *)(param_1 + 0x50);
    }
    else {
      uVar4 = *(int *)(param_1 + 0x44) - 1;
    }
    if (uVar4 < param_2) {
      return 0x20;
    }
  }
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + 0x170);
  if (lVar2 != 0) {
    bVar8 = (byte)*(int32_t *)(lVar2 + 0x194) & 1;
  }
  LOCK();
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffffb7;
  UNLOCK();
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0xb8) + 0x58);
    *puVar1 = *puVar1 & 0xffffffb7;
    UNLOCK();
  }
  if (bVar8 == 0) {
    if ((*(int *)(param_1 + 0x188) == 0) && (param_2 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0xe;
    }
  }
  else {
    auStackX_10[0] = param_2;
    if ((*(int64_t *)(param_1 + 0xa0) == 0) || (param_3 != 2)) {
      lVar2 = *(int64_t *)(param_1 + 0x60);
      *(int32_t *)(lVar2 + 0x158) = 0;
      if (*(int64_t *)(lVar2 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
        memset(*(int64_t *)(lVar2 + 0x140),0,*(int32_t *)(lVar2 + 0x154));
      }
      if (*(code **)(lVar2 + 0xb0) != (code *)0x0) {
        (**(code **)(lVar2 + 0xb0))(lVar2);
      }
      if (((*(int64_t *)(param_1 + 0xb8) != 0) &&
          (*(int *)(*(int64_t *)(param_1 + 0xb8) + 0xb0) != 0)) ||
         (uVar7 = 0, *(int *)(param_1 + 0xb0) != 0)) {
        uVar7 = *(int32_t *)(param_1 + 0xc0);
      }
      uVar6 = FUN_180773610(*(uint64_t *)(param_1 + 0x60),uVar7,auStackX_10[0],param_3);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar5 = 0;
      if (*(int64_t *)(param_1 + 0xb8) != 0) {
        *(int32_t *)(*(int64_t *)(param_1 + 0xb8) + 0xc0) = *(int32_t *)(param_1 + 0xc0);
      }
    }
    else {
      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xa0) + (int64_t)*(int *)(param_1 + 0xc0) * 8);
      if (lVar2 != 0) {
        uVar5 = FUN_180774090(lVar2,param_2,2);
      }
    }
    if ((*(int64_t *)(param_1 + 0x180) != 0) &&
       (pcVar3 = *(code **)(*(int64_t *)(param_1 + 0x180) + 0x150), pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(uint64_t *)(param_1 + 0x158),*(int32_t *)(param_1 + 0xc0),auStackX_10[0],
                param_3);
    }
    if (((param_3 - 1U & 0xfffffffc) == 0) && (param_3 != 3)) {
      *(uint *)(param_1 + 0x40) = auStackX_10[0];
      *(uint *)(param_1 + 0x188) = auStackX_10[0];
      uVar6 = (uint64_t)uVar5;
    }
    else {
      uVar5 = FUN_180772f60(*(uint64_t *)(param_1 + 0x60),auStackX_10,2);
      uVar6 = (uint64_t)uVar5;
      if (uVar5 != 0) {
        auStackX_10[0] = 0;
      }
      *(uint *)(param_1 + 0x40) = auStackX_10[0];
      *(uint *)(param_1 + 0x188) = auStackX_10[0];
    }
  }
  return uVar6;
}



uint64_t FUN_180774290(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  int32_t uVar8;
  uint64_t uVar7;
  
  lVar1 = *param_1;
  uVar5 = 0;
  puVar4 = (int32_t *)(lVar1 + 0x278);
  uVar7 = uVar5;
  do {
    uVar8 = cosf((float)(int)uVar7 * 0.0001917476);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (uint64_t)uVar6;
    *puVar4 = uVar8;
    puVar4 = puVar4 + 1;
  } while ((int)uVar6 < 0x2000);
  if ((int32_t *)(lVar1 + 0x25c) != (int32_t *)0x0) {
    *(int32_t *)(lVar1 + 0x25c) = *(int32_t *)(*(int64_t *)(lVar1 + 0xa8) + 0x6d0);
  }
  lVar2 = *(int64_t *)(lVar1 + 0xe8);
  *(int32_t *)(lVar1 + 0x260) = 0;
  *(uint64_t *)(lVar1 + 0x238) = 0;
  *(uint64_t *)(lVar1 + 0x248) = 0;
  *(int32_t *)(lVar1 + 0x254) = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(lVar2 + 0x60)) {
    do {
      uVar3 = func_0x000180762a70(lVar1,uVar7,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar2 + 0x68) + uVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(lVar1 + 0xe8);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(lVar2 + 0x60));
  }
  FUN_180774eb0(lVar1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180774390(int64_t *param_1)

{
  if (*(int64_t *)(*param_1 + 0x240) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(*param_1 + 0x240),
                  &unknown_var_3712_ptr,0x9a,1);
  }
  return 0;
}



uint64_t FUN_180774450(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x827c);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x827c);
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x8280);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x8280);
  }
  else {
    if ((param_2 != 2) || (*param_3 = *(int32_t *)(lVar1 + 0x8278), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x8278);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)fVar2);
}





