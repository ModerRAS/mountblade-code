#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part015.c - 3 个函数

// 函数: void FUN_1808acf1c(void)
void FUN_1808acf1c(void)

{
  return;
}



uint64_t FUN_1808acf30(int64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint auStackX_8 [2];
  int32_t auStackX_18 [2];
  
  lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + (int64_t)param_3 * 8);
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  if (iVar3 == 0) {
    auStackX_18[0] = 0;
  }
  else if (iVar3 == 1) {
    auStackX_18[0] = 1;
  }
  else if (iVar3 == 2) {
    auStackX_18[0] = 2;
  }
  else if (iVar3 == 3) {
    auStackX_18[0] = 3;
  }
  else {
    auStackX_18[0] = 4;
  }
  uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))(*(uint64_t **)(*param_2 + 8),auStackX_18,4)
  ;
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (iVar3 == 0) {
    uVar4 = FUN_180898eb0(param_2,lVar5 + 0x18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else if (iVar3 == 1) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_18[0] = *(int32_t *)(lVar5 + 0x18);
    uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else if (iVar3 == 2) {
    uVar4 = FUN_1808a2e90(param_2,lVar5 + 0x18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    if (iVar3 != 3) {
      return 0x1c;
    }
    lVar5 = lVar5 + 0x18;
    uVar2 = func_0x0001808d9e60(lVar5);
    puVar1 = *(uint64_t **)(*param_2 + 8);
    if (uVar2 < 0x8000) {
      auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar2);
      uVar4 = (**(code **)*puVar1)(puVar1,auStackX_18,2);
    }
    else {
      auStackX_8[0] = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff;
      uVar4 = (**(code **)*puVar1)(puVar1,auStackX_8,4);
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (uVar2 != 0) {
      iVar3 = func_0x0001808d9e60(lVar5);
      uVar4 = func_0x0001808d9e70(lVar5);
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),uVar4,(int64_t)iVar3);
        if ((int)uVar4 == 0) {
          return 0;
        }
      }
      else {
        uVar4 = 0x1c;
      }
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808ad130(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint auStackX_10 [2];
  uint auStackX_18 [4];
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  iVar5 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (*(uint *)(param_2 + 8) < 0x43) {
    puVar4 = (uint64_t *)FUN_180847820();
    uStack_58 = *puVar4;
    uStack_50 = puVar4[1];
    uStack_48 = 0;
    if (*(int *)(param_2[1] + 0x18) != 0) {
      iVar2 = 0x1c;
      goto LAB_1808ad451;
    }
    uVar1 = *param_2;
    iVar2 = SystemErrorHandler(uVar1,&uStack_58,4);
    if (((iVar2 == 0) && (iVar2 = SystemErrorHandler(uVar1,(int64_t)&uStack_58 + 4,2), iVar2 == 0)) &&
       (iVar2 = SystemErrorHandler(uVar1,(int64_t)&uStack_58 + 6,2), iVar2 == 0)) {
      iVar2 = SystemErrorHandler(uVar1,&uStack_50,8);
    }
    if (iVar2 != 0) goto LAB_1808ad451;
    iVar2 = SystemConfigManager(uVar1,&uStack_48);
    if (iVar2 == 0) {
      iVar2 = SystemConfigManager(uVar1,(int64_t)&uStack_48 + 4);
    }
    if (iVar2 != 0) goto LAB_1808ad451;
    if ((((int)uStack_58 != 0) || (uStack_58._4_4_ != 0)) ||
       (((int)uStack_50 != 0 || (uStack_50._4_4_ != 0)))) {
      iVar2 = (int)uStack_60 + 1;
      iVar5 = uStack_60._4_4_;
      if ((int64_t)uStack_60 < 0) {
        iVar5 = -uStack_60._4_4_;
      }
      if (iVar5 < iVar2) {
        iVar5 = uStack_60._4_4_;
        if ((int64_t)uStack_60 < 0) {
          iVar5 = -uStack_60._4_4_;
        }
        iVar6 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar2;
        if (iVar2 <= iVar6) {
          iVar5 = iVar6;
        }
        iVar10 = 2;
        if ((1 < iVar5) && (iVar10 = iVar6, iVar6 < iVar2)) {
          iVar10 = iVar2;
        }
        iVar2 = FUN_1808aef40(&uStack_68,iVar10);
        if (iVar2 != 0) goto LAB_1808ad451;
      }
      lVar9 = (int64_t)(int)uStack_60;
      puVar4 = (uint64_t *)(uStack_68 + lVar9 * 0x18);
      *puVar4 = uStack_58;
      puVar4[1] = uStack_50;
      *(int32_t *)(uStack_68 + 0x10 + lVar9 * 0x18) = (int32_t)uStack_48;
      *(int32_t *)(uStack_68 + 0x14 + lVar9 * 0x18) = uStack_48._4_4_;
      uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 + 1);
    }
  }
  else if (*(uint *)(param_2 + 8) < 0x82) {
    auStackX_18[0] = 0;
    iVar2 = FUN_1808afe30(*param_2,auStackX_18);
    uVar3 = auStackX_18[0];
    if (iVar2 == 0) {
      uVar12 = auStackX_18[0] & 1;
      uVar11 = auStackX_18[0] >> 1;
      iVar2 = uStack_60._4_4_;
      if ((int64_t)uStack_60 < 0) {
        iVar2 = -uStack_60._4_4_;
      }
      if (((int)uVar11 <= iVar2) || (iVar2 = FUN_1808aef40(&uStack_68,uVar11), iVar2 == 0)) {
        if (((int)uStack_60 < (int)uVar11) &&
           (lVar9 = (int64_t)(int)(uVar11 - (int)uStack_60), 0 < (int)(uVar11 - (int)uStack_60))) {
          lVar7 = uStack_68 + 0x14 + (int64_t)(int)uStack_60 * 0x18;
          do {
            puVar4 = (uint64_t *)FUN_180847820();
            uVar1 = puVar4[1];
            *(uint64_t *)(lVar7 + -0x14) = *puVar4;
            *(uint64_t *)(lVar7 + -0xc) = uVar1;
            *(uint64_t *)(lVar7 + -4) = 0;
            lVar9 = lVar9 + -1;
            lVar7 = lVar7 + 0x18;
          } while (lVar9 != 0);
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar11);
        iVar2 = 0;
      }
      if (iVar2 != 0) goto LAB_1808ad451;
      auStackX_10[0] = 0;
      if (uVar3 >> 1 != 0) {
        do {
          iVar2 = FUN_1808dde10(param_2,auStackX_10[0]);
          if (((iVar2 != 0) ||
              (iVar2 = FUN_180899180(param_2,uStack_68 + (int64_t)iVar5 * 0x18), iVar2 != 0)) ||
             (iVar2 = FUN_1808de0e0(param_2,auStackX_10), iVar2 != 0)) goto LAB_1808ad3d1;
          iVar5 = iVar5 + 1;
          auStackX_10[0] = auStackX_10[0] & -uVar12;
        } while (iVar5 < (int)uVar11);
      }
    }
    else {
LAB_1808ad3d1:
      if (iVar2 != 0) goto LAB_1808ad451;
    }
  }
  if (*(uint *)(param_2 + 8) < 0x82) {
    uVar8 = uStack_68;
    if ((int)uStack_60 != 0) {
      for (; (uStack_68 <= uVar8 && (uVar8 < uStack_68 + (int64_t)(int)uStack_60 * 0x18));
          uVar8 = uVar8 + 0x18) {
        FUN_1808b06c0(param_1 + 0x40,uVar8,*(int32_t *)(uVar8 + 0x10),
                      *(int32_t *)(uVar8 + 0x14),1);
      }
    }
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      iVar2 = 0x1c;
      goto LAB_1808ad451;
    }
    iVar2 = FUN_1808993e0(param_1 + 0x40,*param_2);
    if (iVar2 != 0) goto LAB_1808ad451;
  }
  iVar2 = 0;
LAB_1808ad451:
  iVar5 = uStack_60._4_4_;
  if ((int64_t)uStack_60 < 0) {
    iVar5 = -uStack_60._4_4_;
  }
  if (iVar5 < 0) {
    if (0 < (int)uStack_60) {
      return iVar2;
    }
    if ((0 < (int)uStack_60._4_4_) && (uStack_68 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uStack_68,&unknown_var_8432_ptr,0x100,1);
    }
    uStack_68 = 0;
    uStack_60 = uStack_60 & 0xffffffff;
  }
  if (((int)uStack_60 < 0) && (lVar9 = (int64_t)-(int)uStack_60, (int)uStack_60 < 0)) {
    lVar7 = uStack_68 + 0x14 + (int64_t)(int)uStack_60 * 0x18;
    do {
      puVar4 = (uint64_t *)FUN_180847820();
      uVar1 = puVar4[1];
      *(uint64_t *)(lVar7 + -0x14) = *puVar4;
      *(uint64_t *)(lVar7 + -0xc) = uVar1;
      *(uint64_t *)(lVar7 + -4) = 0;
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + 0x18;
    } while (lVar9 != 0);
  }
  uVar8 = uStack_60;
  uVar3 = uStack_60._4_4_;
  uStack_60 = (uint64_t)uStack_60._4_4_ << 0x20;
  if ((int64_t)uVar8 < 0) {
    uVar3 = -uVar3;
  }
  if (0 < (int)uVar3) {
    FUN_1808aef40(&uStack_68,0);
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808ad144(int64_t param_1,uint64_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t unaff_RBP;
  int64_t lVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t unaff_R12;
  uint uVar16;
  
  *(uint64_t *)(unaff_RBP + -0x40) = unaff_R12;
  *(uint64_t *)(unaff_RBP + -0x38) = unaff_R12;
  iVar7 = (int)unaff_R12;
  if (in_EAX < 0x43) {
    puVar8 = (uint64_t *)FUN_180847820();
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    lVar13 = param_2[1];
    *(uint64_t *)(unaff_RBP + -0x20) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x30) = uVar2;
    *(uint64_t *)(unaff_RBP + -0x28) = uVar3;
    if (*(int *)(lVar13 + 0x18) != iVar7) {
      iVar4 = iVar7 + 0x1c;
      goto LAB_1808ad451;
    }
    uVar2 = *param_2;
    iVar4 = SystemErrorHandler(uVar2,unaff_RBP + -0x30,4);
    if (((iVar4 == 0) && (iVar4 = SystemErrorHandler(uVar2,unaff_RBP + -0x2c,2), iVar4 == 0)) &&
       (iVar4 = SystemErrorHandler(uVar2,unaff_RBP + -0x2a,2), iVar4 == 0)) {
      iVar4 = SystemErrorHandler(uVar2,unaff_RBP + -0x28,8);
    }
    if (iVar4 != 0) goto LAB_1808ad451;
    iVar4 = SystemConfigManager(uVar2,unaff_RBP + -0x20);
    if (iVar4 == 0) {
      iVar4 = SystemConfigManager(uVar2,unaff_RBP + -0x1c);
    }
    if (iVar4 != 0) goto LAB_1808ad451;
    if (((*(int *)(unaff_RBP + -0x30) != iVar7) || (*(int *)(unaff_RBP + -0x2c) != iVar7)) ||
       ((*(int *)(unaff_RBP + -0x28) != iVar7 || (*(int *)(unaff_RBP + -0x24) != iVar7)))) {
      iVar4 = *(int *)(unaff_RBP + -0x34);
      iVar6 = *(int *)(unaff_RBP + -0x38);
      iVar11 = iVar6 + 1;
      iVar10 = iVar4;
      if (iVar4 < 0) {
        iVar10 = -iVar4;
      }
      if (iVar10 < iVar11) {
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        iVar6 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar11;
        if (iVar11 <= iVar6) {
          iVar4 = iVar6;
        }
        iVar10 = 2;
        if ((1 < iVar4) && (iVar10 = iVar6, iVar6 < iVar11)) {
          iVar10 = iVar11;
        }
        iVar4 = FUN_1808aef40(unaff_RBP + -0x40,iVar10);
        if (iVar4 != 0) goto LAB_1808ad451;
        iVar6 = *(int *)(unaff_RBP + -0x38);
      }
      uVar2 = *(uint64_t *)(unaff_RBP + -0x28);
      lVar9 = (int64_t)iVar6;
      lVar13 = *(int64_t *)(unaff_RBP + -0x40);
      puVar8 = (uint64_t *)(lVar13 + lVar9 * 0x18);
      *puVar8 = *(uint64_t *)(unaff_RBP + -0x30);
      puVar8[1] = uVar2;
      *(int32_t *)(lVar13 + 0x10 + lVar9 * 0x18) = *(int32_t *)(unaff_RBP + -0x20);
      *(int32_t *)(lVar13 + 0x14 + lVar9 * 0x18) = *(int32_t *)(unaff_RBP + -0x1c);
      *(int *)(unaff_RBP + -0x38) = *(int *)(unaff_RBP + -0x38) + 1;
    }
  }
  else if (in_EAX < 0x82) {
    uVar2 = *param_2;
    *(int *)(unaff_RBP + 0x40) = iVar7;
    iVar4 = FUN_1808afe30(uVar2,unaff_RBP + 0x40);
    if (iVar4 == 0) {
      uVar1 = *(uint *)(unaff_RBP + 0x40);
      uVar16 = uVar1 >> 1;
      if (*(int *)(unaff_RBP + -0x34) < 0) {
        iVar4 = -*(int *)(unaff_RBP + -0x34);
      }
      else {
        iVar4 = *(int *)(unaff_RBP + -0x34);
      }
      if (((int)uVar16 <= iVar4) || (iVar4 = FUN_1808aef40(unaff_RBP + -0x40,uVar16), iVar4 == 0)) {
        iVar4 = *(int *)(unaff_RBP + -0x38);
        if (iVar4 < (int)uVar16) {
          lVar13 = (int64_t)(int)(uVar16 - iVar4);
          if (0 < (int)(uVar16 - iVar4)) {
            lVar9 = *(int64_t *)(unaff_RBP + -0x40) + 0x14 + (int64_t)iVar4 * 0x18;
            do {
              puVar8 = (uint64_t *)FUN_180847820();
              uVar2 = puVar8[1];
              *(uint64_t *)(lVar9 + -0x14) = *puVar8;
              *(uint64_t *)(lVar9 + -0xc) = uVar2;
              *(uint64_t *)(lVar9 + -4) = unaff_R12;
              lVar13 = lVar13 + -1;
              lVar9 = lVar9 + 0x18;
            } while (lVar13 != 0);
          }
        }
        *(uint *)(unaff_RBP + -0x38) = uVar16;
        iVar4 = iVar7;
      }
      if (iVar4 != 0) goto LAB_1808ad451;
      uVar12 = unaff_R12 & 0xffffffff;
      *(int *)(unaff_RBP + 0x38) = iVar7;
      uVar15 = unaff_R12 & 0xffffffff;
      if (uVar1 >> 1 != 0) {
        do {
          iVar4 = FUN_1808dde10(param_2,uVar12);
          if (iVar4 != 0) goto LAB_1808ad3d1;
          iVar4 = FUN_180899180(param_2,*(int64_t *)(unaff_RBP + -0x40) +
                                        (int64_t)(int)uVar15 * 0x18);
          if ((iVar4 != 0) || (iVar4 = FUN_1808de0e0(param_2,unaff_RBP + 0x38), iVar4 != 0))
          goto LAB_1808ad3d1;
          uVar14 = (int)uVar15 + 1;
          uVar15 = (uint64_t)uVar14;
          uVar5 = *(uint *)(unaff_RBP + 0x38) & -(uVar1 & 1);
          uVar12 = (uint64_t)uVar5;
          *(uint *)(unaff_RBP + 0x38) = uVar5;
        } while ((int)uVar14 < (int)uVar16);
      }
    }
    else {
LAB_1808ad3d1:
      if (iVar4 != 0) goto LAB_1808ad451;
    }
  }
  if (*(uint *)(param_2 + 8) < 0x82) {
    if (*(int *)(unaff_RBP + -0x38) != iVar7) {
      for (uVar12 = *(uint64_t *)(unaff_RBP + -0x40);
          (*(uint64_t *)(unaff_RBP + -0x40) <= uVar12 &&
          (uVar12 < *(uint64_t *)(unaff_RBP + -0x40) + (int64_t)*(int *)(unaff_RBP + -0x38) * 0x18
          )); uVar12 = uVar12 + 0x18) {
        FUN_1808b06c0(param_1 + 0x40,uVar12,*(int32_t *)(uVar12 + 0x10),
                      *(int32_t *)(uVar12 + 0x14),1);
      }
    }
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != iVar7) {
      iVar4 = 0x1c;
      goto LAB_1808ad451;
    }
    iVar4 = FUN_1808993e0(param_1 + 0x40,*param_2);
    if (iVar4 != 0) goto LAB_1808ad451;
  }
  iVar4 = iVar7;
LAB_1808ad451:
  if (*(int *)(unaff_RBP + -0x34) < 0) {
    iVar6 = -*(int *)(unaff_RBP + -0x34);
  }
  else {
    iVar6 = *(int *)(unaff_RBP + -0x34);
  }
  if (iVar6 < 0) {
    if (iVar7 < *(int *)(unaff_RBP + -0x38)) {
      return iVar4;
    }
    if ((iVar7 < *(int *)(unaff_RBP + -0x34)) && (*(int64_t *)(unaff_RBP + -0x40) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + -0x40),
                    &unknown_var_8432_ptr,0x100,1);
    }
    *(uint64_t *)(unaff_RBP + -0x40) = unaff_R12;
    *(int *)(unaff_RBP + -0x34) = iVar7;
  }
  iVar6 = *(int *)(unaff_RBP + -0x38);
  if (iVar6 < 0) {
    lVar13 = (int64_t)-iVar6;
    if (iVar6 < 0) {
      lVar9 = *(int64_t *)(unaff_RBP + -0x40) + 0x14 + (int64_t)iVar6 * 0x18;
      do {
        puVar8 = (uint64_t *)FUN_180847820();
        uVar2 = puVar8[1];
        *(uint64_t *)(lVar9 + -0x14) = *puVar8;
        *(uint64_t *)(lVar9 + -0xc) = uVar2;
        *(uint64_t *)(lVar9 + -4) = unaff_R12;
        lVar13 = lVar13 + -1;
        lVar9 = lVar9 + 0x18;
      } while (lVar13 != 0);
    }
  }
  *(int *)(unaff_RBP + -0x38) = iVar7;
  if (*(int *)(unaff_RBP + -0x34) < 0) {
    iVar7 = -*(int *)(unaff_RBP + -0x34);
  }
  else {
    iVar7 = *(int *)(unaff_RBP + -0x34);
  }
  if (0 < iVar7) {
    FUN_1808aef40(unaff_RBP + -0x40,0);
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808ad46a(void)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int in_EAX;
  int iVar5;
  int32_t *puVar6;
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t unaff_R12;
  
  iVar5 = (int)unaff_R12;
  if (0 < in_EAX) {
    if (iVar5 < *(int *)(unaff_RBP + -0x38)) {
      return unaff_EBX;
    }
    if ((iVar5 < *(int *)(unaff_RBP + -0x34)) && (*(int64_t *)(unaff_RBP + -0x40) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + -0x40),
                    &unknown_var_8432_ptr,0x100,1);
    }
    *(uint64_t *)(unaff_RBP + -0x40) = unaff_R12;
    *(int *)(unaff_RBP + -0x34) = iVar5;
  }
  iVar1 = *(int *)(unaff_RBP + -0x38);
  if (iVar1 < 0) {
    lVar7 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      lVar8 = *(int64_t *)(unaff_RBP + -0x40) + 0x14 + (int64_t)iVar1 * 0x18;
      do {
        puVar6 = (int32_t *)FUN_180847820();
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *(int32_t *)(lVar8 + -0x14) = *puVar6;
        *(int32_t *)(lVar8 + -0x10) = uVar2;
        *(int32_t *)(lVar8 + -0xc) = uVar3;
        *(int32_t *)(lVar8 + -8) = uVar4;
        *(uint64_t *)(lVar8 + -4) = unaff_R12;
        lVar7 = lVar7 + -1;
        lVar8 = lVar8 + 0x18;
      } while (lVar7 != 0);
    }
  }
  *(int *)(unaff_RBP + -0x38) = iVar5;
  if (*(int *)(unaff_RBP + -0x34) < 0) {
    iVar5 = -*(int *)(unaff_RBP + -0x34);
  }
  else {
    iVar5 = *(int *)(unaff_RBP + -0x34);
  }
  if (0 < iVar5) {
    FUN_1808aef40(unaff_RBP + -0x40,0);
  }
  return unaff_EBX;
}



uint64_t FUN_1808ad530(uint64_t *param_1,int64_t *param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t lVar5;
  int aiStackX_8 [2];
  
  aiStackX_8[0] = 0;
  uVar3 = FUN_1808afe30(*param_1,aiStackX_8);
  iVar2 = aiStackX_8[0];
  if (((int)uVar3 == 0) &&
     ((uVar4 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f, lVar5 = (int64_t)aiStackX_8[0],
      aiStackX_8[0] <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar4) - uVar4) ||
      (uVar3 = FUN_180747e10(param_2,aiStackX_8[0]), (int)uVar3 == 0)))) {
    iVar1 = (int)param_2[1];
    if (iVar1 < iVar2) {
                    // WARNING: Subroutine does not return
      memset(*param_2 + (int64_t)iVar1 * 4,0,(int64_t)(iVar2 - iVar1) << 2);
    }
    *(int *)(param_2 + 1) = iVar2;
    if (iVar2 != 0) {
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar3 = SystemErrorHandler(*param_1,*param_2,lVar5 << 2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808ad561(uint64_t param_1,uint param_2)

{
  int iVar1;
  uint in_EAX;
  uint64_t uVar2;
  uint64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int in_stack_00000030;
  
  if ((in_stack_00000030 <= (int)((in_EAX ^ param_2) - param_2)) ||
     (uVar2 = FUN_180747e10(), (int)uVar2 == 0)) {
    iVar1 = (int)unaff_RDI[1];
    if (iVar1 < in_stack_00000030) {
                    // WARNING: Subroutine does not return
      memset(*unaff_RDI + (int64_t)iVar1 * 4,0,(int64_t)(in_stack_00000030 - iVar1) << 2);
    }
    *(int *)(unaff_RDI + 1) = in_stack_00000030;
    if (in_stack_00000030 != 0) {
      if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar2 = SystemErrorHandler(*unaff_RSI,*unaff_RDI,(int64_t)in_stack_00000030 << 2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808ad5ce(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  
  uVar1 = SystemErrorHandler(*unaff_RSI,*unaff_RDI,unaff_RBX << 2);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}






// 函数: void FUN_1808ad5eb(void)
void FUN_1808ad5eb(void)

{
  return;
}



uint64_t FUN_1808ad600(uint64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t lVar4;
  int aiStackX_8 [2];
  
  aiStackX_8[0] = 0;
  uVar2 = FUN_1808afe30(*param_1,aiStackX_8);
  iVar1 = aiStackX_8[0];
  if (((int)uVar2 == 0) &&
     ((uVar3 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f, lVar4 = (int64_t)aiStackX_8[0],
      aiStackX_8[0] <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar3) - uVar3) ||
      (uVar2 = FUN_180898d60(param_2,aiStackX_8[0]), (int)uVar2 == 0)))) {
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 != 0) {
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar2 = SystemErrorHandler(*param_1,*param_2,lVar4 * 3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808ad62d(uint64_t param_1,uint param_2)

{
  uint in_EAX;
  uint64_t uVar1;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  int in_stack_00000030;
  
  if ((in_stack_00000030 <= (int)((in_EAX ^ param_2) - param_2)) ||
     (uVar1 = FUN_180898d60(), (int)uVar1 == 0)) {
    *(int *)(unaff_RDI + 1) = in_stack_00000030;
    if (in_stack_00000030 != 0) {
      if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemErrorHandler(*unaff_RSI,*unaff_RDI,(int64_t)in_stack_00000030 * 3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808ad679(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  
  uVar1 = SystemErrorHandler(*unaff_RSI,*unaff_RDI,unaff_RBX * 3);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}






// 函数: void FUN_1808ad693(void)
void FUN_1808ad693(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ad6a0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint auStackX_10 [2];
  uint auStackX_18 [4];
  uint64_t in_stack_ffffffffffffffa8;
  int8_t auStack_38 [4];
  int iStack_34;
  
  if (*(uint *)(param_2 + 8) < 0x2d) {
    return 0;
  }
  uVar2 = FUN_1808ddc20(param_2,auStack_38,0,0x4c425453);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (iStack_34 == 0) goto LAB_1808ad80d;
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else if (plVar1[2] == 0) {
LAB_1808ad747:
    in_stack_ffffffffffffffa8 = 0;
    uVar2 = SystemDataAnalyzer(*plVar1,auStackX_18,1,4,0);
  }
  else {
    auStackX_10[0] = 0;
    uVar2 = func_0x00018076a7d0(*plVar1,auStackX_10);
    if ((int)uVar2 == 0) {
      if ((uint64_t)auStackX_10[0] + 4 <= (uint64_t)plVar1[2]) goto LAB_1808ad747;
      uVar2 = 0x11;
    }
  }
  uVar4 = auStackX_10[0];
  if (((int)uVar2 == 0) && (uVar2 = 0xd, uVar4 = auStackX_18[0], auStackX_18[0] < 2)) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (uVar4 == 0) {
    return 0xd;
  }
  if (uVar4 == 1) {
    puVar3 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_688_ptr,0xdbc,
                           in_stack_ffffffffffffffa8 & 0xffffffff00000000,0,1);
    if (puVar3 == (uint64_t *)0x0) {
      return 0x26;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(uint64_t **)(param_1 + 0x2e0) = puVar3;
    uVar2 = FUN_18089c030(puVar3,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
LAB_1808ad80d:
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_2,auStack_38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ad6f7(void)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t in_stack_00000020;
  uint in_stack_00000088;
  uint in_stack_00000090;
  
  plVar1 = (int64_t *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
    goto LAB_1808ad766;
  }
  if (plVar1[2] != 0) {
    in_stack_00000088 = 0;
    uVar3 = func_0x00018076a7d0(*plVar1,&stack0x00000088);
    if ((int)uVar3 != 0) goto LAB_1808ad766;
    if ((uint64_t)plVar1[2] < (uint64_t)in_stack_00000088 + 4) {
      uVar3 = 0x11;
      goto LAB_1808ad766;
    }
  }
  in_stack_00000020 = 0;
  uVar3 = SystemDataAnalyzer(*plVar1,&stack0x00000090,1,4,0);
LAB_1808ad766:
  uVar4 = in_stack_00000088;
  if (((int)uVar3 == 0) && (uVar3 = 0xd, uVar4 = in_stack_00000090, in_stack_00000090 < 2)) {
    uVar3 = 0;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (uVar4 == 0) {
    return 0xd;
  }
  if (uVar4 == 1) {
    puVar2 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_688_ptr,0xdbc,
                           in_stack_00000020 & 0xffffffff00000000);
    if (puVar2 == (uint64_t *)0x0) {
      return 0x26;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(uint64_t **)(unaff_RSI + 0x2e0) = puVar2;
    uVar3 = FUN_18089c030(puVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ad772(void)

{
  uint64_t in_RAX;
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int in_stack_00000088;
  
  if ((int)in_RAX != 0) {
    return in_RAX;
  }
  if (in_stack_00000088 == 0) {
    return 0xd;
  }
  if (in_stack_00000088 == 1) {
    puVar1 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_688_ptr,0xdbc);
    if (puVar1 == (uint64_t *)0x0) {
      return 0x26;
    }
    *puVar1 = unaff_RBP;
    puVar1[1] = unaff_RBP;
    puVar1[2] = unaff_RBP;
    puVar1[3] = unaff_RBP;
    puVar1[4] = unaff_RBP;
    *(uint64_t **)(unaff_RSI + 0x2e0) = puVar1;
    uVar2 = FUN_18089c030(puVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ad840(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint64_t in_stack_ffffffffffffffa8;
  int8_t auStack_38 [4];
  int iStack_34;
  
  uVar2 = FUN_1808ddc20(param_2,auStack_38,0,0x54445453);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (iStack_34 == 0) goto LAB_1808ad9a6;
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
LAB_1808ad8fd:
    uVar4 = auStackX_18[0];
    if (((int)uVar2 == 0) && (uVar2 = 0xd, uVar4 = auStackX_20[0], auStackX_20[0] < 2)) {
      uVar2 = 0;
    }
  }
  else {
    if (plVar1[2] == 0) {
LAB_1808ad8de:
      in_stack_ffffffffffffffa8 = 0;
      uVar2 = SystemDataAnalyzer(*plVar1,auStackX_20,1,4,0);
      goto LAB_1808ad8fd;
    }
    auStackX_18[0] = 0;
    uVar2 = func_0x00018076a7d0(*plVar1,auStackX_18);
    uVar4 = auStackX_18[0];
    if ((int)uVar2 == 0) {
      if ((uint64_t)plVar1[2] < (uint64_t)auStackX_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_1808ad8fd;
      }
      goto LAB_1808ad8de;
    }
  }
  if ((int)uVar2 == 0) {
    if (1 < uVar4) {
LAB_1808ad9a6:
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,auStack_38);
    }
    puVar3 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_688_ptr,0xd7d,
                           in_stack_ffffffffffffffa8 & 0xffffffff00000000,0,1);
    if (puVar3 == (uint64_t *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *(uint64_t **)(param_1 + 0x2d8) = puVar3;
      uVar2 = FUN_18089be10(puVar3,param_2,uVar4);
      if ((int)uVar2 == 0) goto LAB_1808ad9a6;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ad86b(void)

{
  int64_t *plVar1;
  int in_EAX;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t in_stack_00000020;
  uint64_t in_stack_00000040;
  uint in_stack_00000090;
  uint in_stack_00000098;
  
  if (in_stack_00000040._4_4_ == in_EAX) goto LAB_1808ad9a6;
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
LAB_1808ad8fd:
    uVar4 = in_stack_00000090;
    if (((int)uVar3 == 0) && (uVar3 = 0xd, uVar4 = in_stack_00000098, in_stack_00000098 < 2)) {
      uVar3 = 0;
    }
  }
  else {
    if (plVar1[2] == 0) {
LAB_1808ad8de:
      in_stack_00000020 = 0;
      uVar3 = SystemDataAnalyzer(*plVar1,&stack0x00000098,1,4,0);
      goto LAB_1808ad8fd;
    }
    in_stack_00000090 = 0;
    uVar3 = func_0x00018076a7d0(*plVar1,&stack0x00000090);
    uVar4 = in_stack_00000090;
    if ((int)uVar3 == 0) {
      if ((uint64_t)plVar1[2] < (uint64_t)in_stack_00000090 + 4) {
        uVar3 = 0x11;
        goto LAB_1808ad8fd;
      }
      goto LAB_1808ad8de;
    }
  }
  if ((int)uVar3 == 0) {
    if (1 < uVar4) {
LAB_1808ad9a6:
                    // WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
    puVar2 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_688_ptr,0xd7d,
                           in_stack_00000020 & 0xffffffff00000000);
    if (puVar2 == (uint64_t *)0x0) {
      uVar3 = 0x26;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      *(uint64_t **)(unaff_RSI + 0x2d8) = puVar2;
      uVar3 = FUN_18089be10(puVar2);
      if ((int)uVar3 == 0) goto LAB_1808ad9a6;
    }
  }
  return uVar3;
}






