#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part057.c - 4 个函数

// 函数: void FUN_1808cdb90(int64_t param_1)
void FUN_1808cdb90(int64_t param_1)

{
  FUN_1808ca090(param_1,*(uint64_t *)(param_1 + 0xf0),
                *(float *)(param_1 + 200) * *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xcc),
                *(uint64_t *)(param_1 + 0xb8),*(uint64_t *)(param_1 + 0x1c8));
  return;
}



uint64_t FUN_1808cdbd0(int64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  float fVar12;
  
  lVar1 = *(int64_t *)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0x178);
  fVar12 = *(float *)(param_1 + 200) * *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xcc);
  if (*(int64_t *)(param_1 + 0xf8) == 0) {
    bVar2 = false;
    iVar10 = iVar4 + -1;
    if (-1 < iVar10) {
      lVar9 = (int64_t)iVar10 << 4;
      lVar11 = lVar9;
      do {
        if (*(uint64_t *)(*(int64_t *)(param_1 + 0x170) + lVar9) < *(uint64_t *)(param_1 + 0x38))
        {
          if (bVar2) {
            if ((-1 < iVar10) && (iVar4 = *(int *)(param_1 + 0x178), iVar10 < iVar4)) {
              iVar3 = (iVar4 - iVar10) + -1;
              if (0 < iVar3) {
                lVar11 = lVar11 + *(int64_t *)(param_1 + 0x170);
                    // WARNING: Subroutine does not return
                memmove(lVar11,lVar11 + 0x10,(int64_t)iVar3 << 4);
              }
              *(int *)(param_1 + 0x178) = iVar4 + -1;
            }
          }
          else {
            bVar2 = true;
          }
        }
        lVar11 = lVar11 + -0x10;
        lVar9 = lVar9 + -0x10;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      iVar4 = *(int *)(param_1 + 0x178);
    }
    if ((iVar4 == 0) ||
       (plVar8 = (int64_t *)
                 (*(int64_t *)(param_1 + 0x170) + -0x10 +
                 (int64_t)*(int *)(param_1 + 0x178) * 0x10), lVar1 != *plVar8)) {
      iVar4 = *(int *)(param_1 + 0x178);
      uVar6 = (int)*(uint *)(param_1 + 0x17c) >> 0x1f;
      iVar10 = (*(uint *)(param_1 + 0x17c) ^ uVar6) - uVar6;
      iVar3 = iVar4 + 1;
      if (iVar10 < iVar3) {
        iVar7 = (int)((float)iVar10 * 1.5);
        iVar10 = iVar3;
        if (iVar3 <= iVar7) {
          iVar10 = iVar7;
        }
        if (iVar10 < 4) {
          iVar7 = 4;
        }
        else if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        uVar5 = FUN_180748010((int64_t *)(param_1 + 0x170),iVar7);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      plVar8 = (int64_t *)((int64_t)iVar4 * 0x10 + *(int64_t *)(param_1 + 0x170));
    }
    *plVar8 = lVar1;
    *(float *)(plVar8 + 1) = fVar12;
  }
  else {
    if (iVar4 != 0) {
      iVar10 = 0;
      if (0 < iVar4) {
        lVar11 = 0;
        do {
          uVar5 = FUN_1808ca090(param_1,*(uint64_t *)(param_1 + 0xf8),
                                *(int32_t *)(lVar11 + 8 + *(int64_t *)(param_1 + 0x170)),
                                *(uint64_t *)(lVar11 + *(int64_t *)(param_1 + 0x170)),
                                *(uint64_t *)(param_1 + 0x120));
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x10;
        } while (iVar10 < *(int *)(param_1 + 0x178));
      }
      uVar5 = FUN_1807d3160(param_1 + 0x170);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar5 = FUN_1808ca090(param_1,*(uint64_t *)(param_1 + 0xf8),fVar12,lVar1,
                          *(uint64_t *)(param_1 + 0x120));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((*(int64_t *)(param_1 + 0xf8) != 0) && ((*(uint *)(param_1 + 0x134) >> 2 & 1) != 0)) {
      uVar5 = FUN_18073d3c0(*(int64_t *)(param_1 + 0xf8),*(uint64_t *)(param_1 + 0x110),0);
      if (0x1e < (uint)uVar5) {
        return uVar5;
      }
      if ((0x40000009U >> ((uint)uVar5 & 0x1f) & 1) == 0) {
        return uVar5;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808cdd0a(void)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t unaff_RBX;
  int64_t lVar8;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar9;
  char unaff_R15B;
  int32_t unaff_XMM6_Da;
  
  lVar8 = (int64_t)unaff_ESI << 4;
  lVar9 = lVar8;
  do {
    if (*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x170) + lVar8) < *(uint64_t *)(unaff_RDI + 0x38))
    {
      if (unaff_R15B == '\0') {
        unaff_R15B = '\x01';
      }
      else if ((-1 < unaff_ESI) && (iVar1 = *(int *)(unaff_RDI + 0x178), unaff_ESI < iVar1)) {
        iVar2 = (iVar1 - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar9 = lVar9 + *(int64_t *)(unaff_RDI + 0x170);
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar9 + 0x10,(int64_t)iVar2 << 4);
        }
        *(int *)(unaff_RDI + 0x178) = iVar1 + -1;
      }
    }
    lVar9 = lVar9 + -0x10;
    lVar8 = lVar8 + -0x10;
    unaff_ESI = unaff_ESI + -1;
  } while (-1 < unaff_ESI);
  if ((*(int *)(unaff_RDI + 0x178) == 0) ||
     (plVar7 = (int64_t *)
               (*(int64_t *)(unaff_RDI + 0x170) + -0x10 +
               (int64_t)*(int *)(unaff_RDI + 0x178) * 0x10), unaff_RBX != *plVar7)) {
    iVar1 = *(int *)(unaff_RDI + 0x178);
    uVar5 = (int)*(uint *)(unaff_RDI + 0x17c) >> 0x1f;
    iVar2 = (*(uint *)(unaff_RDI + 0x17c) ^ uVar5) - uVar5;
    iVar4 = iVar1 + 1;
    if (iVar2 < iVar4) {
      iVar6 = (int)((float)iVar2 * 1.5);
      iVar2 = iVar4;
      if (iVar4 <= iVar6) {
        iVar2 = iVar6;
      }
      if (iVar2 < 4) {
        iVar6 = 4;
      }
      else if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      uVar3 = FUN_180748010((int64_t *)(unaff_RDI + 0x170),iVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    *(int *)(unaff_RDI + 0x178) = *(int *)(unaff_RDI + 0x178) + 1;
    plVar7 = (int64_t *)((int64_t)iVar1 * 0x10 + *(int64_t *)(unaff_RDI + 0x170));
  }
  *plVar7 = unaff_RBX;
  *(int32_t *)(plVar7 + 1) = unaff_XMM6_Da;
  return 0;
}



uint64_t FUN_1808cdd8e(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t unaff_XMM6_Da;
  
  if ((in_EAX == 0) ||
     (plVar7 = (int64_t *)
               (*(int64_t *)(unaff_RDI + 0x170) + -0x10 +
               (int64_t)*(int *)(unaff_RDI + 0x178) * 0x10), unaff_RBX != *plVar7)) {
    iVar1 = *(int *)(unaff_RDI + 0x178);
    uVar5 = (int)*(uint *)(unaff_RDI + 0x17c) >> 0x1f;
    iVar2 = (*(uint *)(unaff_RDI + 0x17c) ^ uVar5) - uVar5;
    iVar4 = iVar1 + 1;
    if (iVar2 < iVar4) {
      iVar6 = (int)((float)iVar2 * 1.5);
      iVar2 = iVar4;
      if (iVar4 <= iVar6) {
        iVar2 = iVar6;
      }
      if (iVar2 < 4) {
        iVar6 = 4;
      }
      else if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      uVar3 = FUN_180748010((int64_t *)(unaff_RDI + 0x170),iVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    *(int *)(unaff_RDI + 0x178) = *(int *)(unaff_RDI + 0x178) + 1;
    plVar7 = (int64_t *)((int64_t)iVar1 * 0x10 + *(int64_t *)(unaff_RDI + 0x170));
  }
  *plVar7 = unaff_RBX;
  *(int32_t *)(plVar7 + 1) = unaff_XMM6_Da;
  return 0;
}



uint64_t FUN_1808cde90(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (((*(int64_t *)(param_1 + 0xe8) != *(int64_t *)(param_2 + 0x78)) &&
      (*(int64_t *)(param_1 + 0xe8) = *(int64_t *)(param_2 + 0x78),
      *(int64_t *)(param_1 + 0xf8) != 0)) && (uVar1 = FUN_18073fc90(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808cdee0(int64_t *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  
  FUN_1808ca620(param_1 + 1);
  if (*(int *)(*param_1 + 0xe8) == 2) {
    *(int32_t *)(param_1 + 3) = 0x7f7fffff;
    iVar3 = *(int *)(*param_1 + 0xe0);
    uVar7 = (int)*(uint *)((int64_t)param_1 + 0x14) >> 0x1f;
    if (((int)((*(uint *)((int64_t)param_1 + 0x14) ^ uVar7) - uVar7) < iVar3) &&
       (uVar5 = FUN_180861ef0(param_1 + 1,iVar3), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (0 < iVar3) {
      lVar9 = 0;
      lVar10 = lVar9;
      do {
        uVar7 = (int)*(uint *)((int64_t)param_1 + 0x14) >> 0x1f;
        fVar1 = *(float *)(*(int64_t *)(*param_1 + 0xd8) + 0x10 + lVar9);
        iVar4 = (*(uint *)((int64_t)param_1 + 0x14) ^ uVar7) - uVar7;
        iVar6 = (int)param_1[2] + 1;
        if (iVar4 < iVar6) {
          iVar8 = (int)((float)iVar4 * 1.5);
          iVar4 = iVar6;
          if (iVar6 <= iVar8) {
            iVar4 = iVar8;
          }
          if (iVar4 < 0x10) {
            iVar8 = 0x10;
          }
          else if (iVar8 < iVar6) {
            iVar8 = iVar6;
          }
          uVar5 = FUN_180861ef0(param_1 + 1,iVar8);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x14;
        *(float *)(param_1[1] + (int64_t)(int)param_1[2] * 4) = fVar1;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        fVar2 = *(float *)(param_1 + 3);
        if (fVar1 <= *(float *)(param_1 + 3)) {
          fVar2 = fVar1;
        }
        *(float *)(param_1 + 3) = fVar2;
      } while (lVar10 < iVar3);
    }
  }
  return 0;
}



uint64_t FUN_1808ce030(int64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t uVar1;
  uint64_t uStackX_8;
  uint64_t uStackX_20;
  
  uStackX_20 = 0;
  uStackX_8 = 0;
  uVar1 = func_0x0001808601b0(*(uint64_t *)(param_1 + 0xf8),&uStackX_20,&uStackX_8);
  if ((int)uVar1 == 0) {
    if ((uStackX_8 == 0) || (param_2 < uStackX_8)) {
      if (*(int64_t *)(param_1 + 0xf8) == 0) {
        return 0x1c;
      }
      if (((*(byte *)(*(int64_t *)(param_1 + 0xe8) + 0xb8) & 1) == 0) && (param_3 == '\0')) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      uVar1 = FUN_180862d70(*(int64_t *)(param_1 + 0xf8),uStackX_20,param_2,uVar1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808ce0e0(int64_t *param_1,uint64_t param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lStackX_8;
  
  if ((param_2 != param_1[0x36]) ||
     ((*(char *)((int64_t)param_1 + 0x1dc) == '\0' && (param_3 != '\0')))) {
    if ((*(char *)((int64_t)param_1 + 0x1dc) == '\0') ||
       ((param_1[6] == 0 || ((uint64_t)param_1[6] <= param_2)))) {
      param_1[0x35] = param_2;
      if (param_3 == '\0') {
        lVar4 = (**(code **)*param_1)();
        bVar1 = *(byte *)(lVar4 + 0xb8) & 1;
      }
      else {
        bVar1 = 1;
      }
      *(byte *)((int64_t)param_1 + 0x1dc) = bVar1;
      lStackX_8 = 0;
      uVar3 = FUN_1808ca7e0(param_1,param_2,&lStackX_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (lStackX_8 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x148))
                          (param_1,lStackX_8,*(int8_t *)((int64_t)param_1 + 0x1dc));
        if (((int)uVar3 != 0x4a) && ((int)uVar3 != 0)) {
          return uVar3;
        }
      }
      uVar3 = FUN_1808ced00(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar2 = (**(code **)(*param_1 + 0x160))(param_1);
      if ((iVar2 != 2) &&
         ((*(char *)((int64_t)param_1 + 0x1dc) != '\0' ||
          (iVar2 = (**(code **)(*param_1 + 0x160))(param_1), iVar2 == 1)))) {
        uVar3 = FUN_18073d3c0(param_1[0x1e],param_1[0x36],0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_18073d230(param_1[0x1e],param_1[6],param_1[0x36],1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
    }
    else {
      *(int32_t *)(param_1 + 9) = 5;
      uVar3 = (**(code **)(*param_1 + 0x90))();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808ce2c0(int64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(uint64_t *)(param_1 + 0x110) == 0) || (param_2 < *(uint64_t *)(param_1 + 0x110))) {
    *(uint64_t *)(param_1 + 0x110) = param_2;
    *(uint64_t *)(param_1 + 0x118) = param_2;
    if ((param_3 == '\0') && ((*(byte *)(*(int64_t *)(param_1 + 0xf0) + 0xb8) & 1) == 0)) {
      uVar2 = 0;
      uVar3 = 0xfffffffe;
    }
    else {
      uVar2 = 1;
      uVar3 = 0xffffffff;
    }
    *(uint *)(param_1 + 0x134) = (*(uint *)(param_1 + 0x134) | uVar2) & uVar3;
    uVar1 = FUN_1808ce950(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (((*(byte *)(param_1 + 0x134) & 1) == 0) && (param_2 != 0)) {
      *(int32_t *)(param_1 + 0x48) = 3;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ce360(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808ce360(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,char param_7,uint64_t *param_8)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plVar6;
  int8_t auStack_f8 [32];
  int64_t **pplStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  int64_t *plStack_88;
  int32_t uStack_80;
  ushort uStack_7c;
  ushort uStack_7a;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  plVar6 = (int64_t *)0x0;
  if (param_8 != (uint64_t *)0x0) {
    *param_8 = 0;
  }
  if (((param_4 == 0) || (param_3 < param_4)) &&
     ((*(int64_t *)(param_1 + 0x50) != 0 ||
      (((((int)param_2[8] != 0 || (*(int *)((int64_t)param_2 + 0x44) != 0)) ||
        ((int)param_2[9] != 0)) || (*(int *)((int64_t)param_2 + 0x4c) != 0)))))) {
    pplStack_d8 = &plStack_88;
    plStack_88 = (int64_t *)0x0;
    iVar1 = FUN_1808b6780(*(uint64_t *)(param_1 + 0x48),param_2,*(uint64_t *)(param_1 + 0x68));
    if (iVar1 != 0) {
      (**(code **)(*param_2 + 0x30))(param_2,&uStack_80);
      uStack_90 = (uint)bStack_71;
      uStack_98 = (uint)bStack_72;
      uStack_a0 = (uint)bStack_73;
      uStack_a8 = (uint)bStack_74;
      uStack_b0 = (uint)bStack_75;
      uStack_b8 = (uint)bStack_76;
      uStack_c0 = (uint)bStack_77;
      uStack_c8 = (uint)bStack_78;
      uStack_d0 = (uint)uStack_7a;
      pplStack_d8 = (int64_t **)CONCAT44(pplStack_d8._4_4_,(uint)uStack_7c);
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_70,0x27,&unknown_var_8960_ptr,uStack_80);
    }
    iVar1 = (**(code **)(*plStack_88 + 0x40))(plStack_88,param_1);
    if (iVar1 == 0) {
      (**(code **)(*plStack_88 + 0x58))(plStack_88,*(int8_t *)(param_1 + 0x78));
      (**(code **)(*plStack_88 + 0xb8))
                (plStack_88,param_1 + 0x18,*(int8_t *)(param_1 + 0x79),
                 *(int8_t *)(param_1 + 0x78));
      plVar4 = plStack_88 + 4;
      if (plStack_88 == (int64_t *)0x0) {
        plVar4 = plVar6;
      }
      if (plVar4 != (int64_t *)0x0) {
        plVar2 = (int64_t *)*plVar4;
        if (plVar2 != plVar4) {
          do {
            plVar2 = (int64_t *)*plVar2;
            uVar5 = (int)plVar6 + 1;
            plVar6 = (int64_t *)(uint64_t)uVar5;
          } while (plVar2 != plVar4);
          if (uVar5 != 0) goto LAB_1808ce57f;
        }
        plVar4[1] = *(int64_t *)(param_1 + 0x10);
        *plVar4 = param_1 + 8;
        *(int64_t **)(param_1 + 0x10) = plVar4;
        *(int64_t **)plVar4[1] = plVar4;
        lVar3 = (**(code **)*plStack_88)();
        uStack_c8 = *(int32_t *)(lVar3 + 0xb0);
        if ((param_7 != '\0') && (lVar3 = (**(code **)(*plStack_88 + 0x98))(), lVar3 != 0)) {
          *(int8_t *)(lVar3 + 0x1de) = 1;
        }
        uStack_d0 = param_6;
        pplStack_d8 = (int64_t **)CONCAT44(pplStack_d8._4_4_,param_5);
        iVar1 = FUN_1808cf270(plStack_88,*(uint64_t *)(param_1 + 0x70),param_3,param_4);
        if ((iVar1 == 0) && (param_8 != (uint64_t *)0x0)) {
          *param_8 = plStack_88;
        }
      }
    }
  }
LAB_1808ce57f:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}



uint64_t
FUN_1808ce5b0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
             int32_t param_5,int32_t param_6)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *aplStackX_10 [3];
  char cVar3;
  int64_t **pplVar4;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  cVar3 = *(char *)(param_1 + 0x1de);
  if ((cVar3 == '\0') || (*(int *)(param_2 + 0xb0) != -1)) {
    *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(param_1 + 0x1c0);
    pplVar4 = aplStackX_10;
    aplStackX_10[0] = (int64_t *)0x0;
    uVar2 = FUN_1808ce360(param_1 + 0x118);
    plVar1 = aplStackX_10[0];
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (aplStackX_10[0] == (int64_t *)0x0) {
      *(int32_t *)(param_1 + 0x1d0) = 1;
      *(uint64_t *)(param_1 + 0x1b8) = 0;
    }
    else {
      *(uint *)((int64_t)aplStackX_10[0] + 0x4c) = *(uint *)((int64_t)aplStackX_10[0] + 0x4c) | 4;
      uVar2 = (**(code **)(*aplStackX_10[0] + 0x78))
                        (aplStackX_10[0],param_1 + 0x1d0,param_1 + 0x1b8,param_4,param_5,param_6,
                         cVar3,pplVar4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(char *)(param_1 + 0x1de) != (char)uVar2) {
        *(int32_t *)(plVar1 + 9) = 3;
        return uVar2;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808ce5cf(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t unaff_RDI;
  char in_R10B;
  int32_t uVar3;
  int32_t uStack0000000000000028;
  int8_t *puStack0000000000000038;
  int64_t *plStack0000000000000058;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  
  if ((in_R10B == '\0') || (*(int *)(param_2 + 0xb0) != -1)) {
    *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(param_1 + 0x1c0);
    puStack0000000000000038 = (int8_t *)&stack0x00000058;
    plStack0000000000000058 = (int64_t *)0x0;
    uStack0000000000000028 = in_stack_00000078;
    uVar3 = in_stack_00000070;
    uVar2 = FUN_1808ce360(param_1 + 0x118);
    plVar1 = plStack0000000000000058;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (plStack0000000000000058 == (int64_t *)0x0) {
      *(int32_t *)(unaff_RDI + 0x1d0) = 1;
      *(uint64_t *)(unaff_RDI + 0x1b8) = 0;
    }
    else {
      *(uint *)((int64_t)plStack0000000000000058 + 0x4c) =
           *(uint *)((int64_t)plStack0000000000000058 + 0x4c) | 4;
      uVar2 = (**(code **)(*plStack0000000000000058 + 0x78))
                        (plStack0000000000000058,unaff_RDI + 0x1d0,unaff_RDI + 0x1b8,param_4,uVar3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(char *)(unaff_RDI + 0x1de) != (char)uVar2) {
        *(int32_t *)(plVar1 + 9) = 3;
        return uVar2;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808ce673(void)

{
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x1d0) = 1;
  *(uint64_t *)(unaff_RDI + 0x1b8) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ce6a0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1808ce6a0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int iVar1;
  int32_t *puVar2;
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
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int64_t lStack_68;
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  puVar2 = (int32_t *)SystemCoreProcessor();
  uStack_78 = *puVar2;
  uStack_74 = puVar2[1];
  uStack_70 = puVar2[2];
  uStack_6c = puVar2[3];
  iVar1 = FUN_1808cb2c0(*(uint64_t *)(param_1 + 0x1a0),&uStack_78);
  if (iVar1 == 0) {
    lStack_68 = (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x128))
                          (*(int64_t **)(param_1 + 0x178),&uStack_78,1);
    if (lStack_68 == 0) {
      uStack_80 = uStack_6c >> 0x18;
      uStack_a0 = uStack_70 >> 0x18;
      uStack_88 = uStack_6c >> 0x10 & 0xff;
      uStack_90 = uStack_6c >> 8 & 0xff;
      uStack_98 = uStack_6c & 0xff;
      uStack_a8 = uStack_70 >> 0x10 & 0xff;
      uStack_b0 = uStack_70 >> 8 & 0xff;
      uStack_b8 = uStack_70 & 0xff;
      uStack_c0 = uStack_74 >> 0x10;
      uStack_c8 = uStack_74 & 0xffff;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_60,0x27,&unknown_var_8960_ptr,uStack_78);
    }
    uStack_c0 = param_5;
    uStack_c8 = param_4;
    FUN_1808ce5b0(param_1,lStack_68,param_2,param_3);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}






// 函数: void FUN_1808ce76f(void)
void FUN_1808ce76f(void)

{
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  uint64_t in_stack_00000070;
  byte bStack0000000000000078;
  byte bStack0000000000000079;
  
  uStack0000000000000038 = (uint)bStack0000000000000079;
  uStack0000000000000030 = (uint)bStack0000000000000078;
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}






