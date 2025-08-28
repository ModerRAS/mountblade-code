#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part130.c - 8 个函数

// 函数: void FUN_18012f0c0(void)
void FUN_18012f0c0(void)

{
  int *piVar1;
  char *pcVar2;
  int32_t *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  uint uVar16;
  int32_t uVar17;
  
  lVar7 = SYSTEM_DATA_MANAGER_A;
  lVar8 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if ((((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) == lVar8) &&
       (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d21) != '\0')) && (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1d38) == 0)) &&
     (((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1d98) == 0 && (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1d28) == 0)) &&
      (iVar5 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1cfc), iVar5 == 0)))) {
    iVar6 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1d2c);
    uVar9 = *(int32_t *)(lVar8 + 0x3d0);
    uVar10 = *(int32_t *)(lVar8 + 0x3d8);
    iVar11 = iVar6;
    if (iVar6 == 1) {
      iVar11 = 1;
    }
    uVar17 = (int)*(uint64_t *)(lVar8 + 0x3d0);
    if (iVar11 == 2) {
      fVar15 = *(float *)(lVar8 + 100);
      if (*(float *)(lVar8 + 100) <= *(float *)(lVar8 + 0x54)) {
        fVar15 = *(float *)(lVar8 + 0x54);
      }
      pcVar2 = (char *)(SYSTEM_DATA_MANAGER_A + 0x1d09);
      fVar15 = fVar15 - *(float *)(lVar8 + 0x90);
      *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1d21) = 0;
      *(bool *)(lVar7 + 0x1d08) = *pcVar2 != '\0';
      *(int32_t *)(lVar7 + 0x1d2c) = 2;
      *(int *)(lVar7 + 0x1d34) = iVar6;
      *(int32_t *)(lVar7 + 0x1d28) = 1;
      *(int32_t *)(lVar7 + 0x1d24) = 2;
      puVar3 = (int32_t *)(*(int64_t *)(lVar7 + 0x1c98) + ((int64_t)iVar5 + 0x3d) * 0x10);
      *puVar3 = uVar9;
      puVar3[1] = fVar15;
      puVar3[2] = uVar10;
      puVar3[3] = fVar15;
      iVar11 = *(int *)(lVar7 + 0x1d2c);
      uVar17 = uVar9;
    }
    if (iVar11 == 3) {
      uVar16 = *(uint *)(lVar8 + 0x90) ^ 0x80000000;
      *(bool *)(lVar7 + 0x1d08) = *(char *)(lVar7 + 0x1d09) != '\0';
      *(int8_t *)(lVar7 + 0x1d21) = 0;
      *(int32_t *)(lVar7 + 0x1d2c) = 3;
      *(int *)(lVar7 + 0x1d34) = iVar6;
      *(int32_t *)(lVar7 + 0x1d28) = 1;
      *(int32_t *)(lVar7 + 0x1d24) = 2;
      puVar3 = (int32_t *)
               (*(int64_t *)(lVar7 + 0x1c98) + ((int64_t)*(int *)(lVar7 + 0x1cfc) + 0x3d) * 0x10);
      *puVar3 = uVar17;
      puVar3[1] = uVar16;
      puVar3[2] = uVar10;
      puVar3[3] = uVar16;
    }
  }
  lVar8 = SYSTEM_DATA_MANAGER_A;
  if ((1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ad0)) || (*(char *)(SYSTEM_DATA_MANAGER_A + 2) == '\0')) {
    lVar7 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    if (*(int64_t *)(lVar7 + 0x210) != 0) {
      FUN_180134b80();
    }
    uVar16 = *(uint *)(lVar7 + 0xc);
    if ((uVar16 >> 0x1d & 1) == 0) {
      FUN_180126d80();
      uVar16 = *(uint *)(lVar7 + 0xc);
    }
    lVar13 = SYSTEM_DATA_MANAGER_A;
    lVar14 = 0;
    if (((uVar16 >> 0x18 & 1) == 0) && (pcVar2 = (char *)(SYSTEM_DATA_MANAGER_A + 0x2e38), *pcVar2 != '\0')
       ) {
      FUN_18013c760(&unknown_var_3196_ptr);
      if (*(int64_t *)(lVar13 + 0x2e40) != 0) {
        lVar12 = __acrt_iob_func(1);
        if (*(int64_t *)(lVar13 + 0x2e40) == lVar12) {
          fflush();
        }
        else {
          fclose();
        }
        *(uint64_t *)(lVar13 + 0x2e40) = 0;
      }
      piVar1 = (int *)(lVar13 + 0x2e48);
      lVar12 = *(int64_t *)(lVar13 + 0x2e50);
      if ((lVar12 != 0) && (1 < *piVar1 + -1)) {
        if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
          (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),lVar12);
          lVar12 = *(int64_t *)(lVar13 + 0x2e50);
        }
        lVar13 = SYSTEM_DATA_MANAGER_A;
        if (lVar12 != 0) {
          piVar1[0] = 0;
          piVar1[1] = 0;
          if (lVar13 != 0) {
            piVar1 = (int *)(lVar13 + 0x3a8);
            *piVar1 = *piVar1 + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar12,SYSTEM_DATA_MANAGER_B);
        }
      }
      lVar13 = SYSTEM_DATA_MANAGER_A;
      *pcVar2 = '\0';
    }
    if (((*(int64_t *)(lVar7 + 0x408) != 0) && ((*(byte *)(lVar7 + 0x432) & 2) != 0)) &&
       (lVar12 = *(int64_t *)(*(int64_t *)(lVar7 + 0x408) + 0x68), lVar12 != 0)) {
      fVar15 = *(float *)(lVar7 + 0x11c);
      fVar4 = *(float *)(lVar7 + 0x74);
      *(float *)(lVar12 + 0x118) =
           (*(float *)(lVar7 + 0x118) + *(float *)(lVar7 + 0x70)) - *(float *)(lVar12 + 0x70);
      *(float *)(lVar12 + 0x11c) = (fVar15 + fVar4) - *(float *)(lVar12 + 0x74);
    }
    *(int *)(lVar8 + 0x1ad0) = *(int *)(lVar8 + 0x1ad0) + -1;
    if ((*(uint *)(lVar7 + 0xc) & 0x4000000) != 0) {
      *(int *)(lVar8 + 0x1bc0) = *(int *)(lVar8 + 0x1bc0) + -1;
    }
    if (*(int *)(lVar8 + 0x1ad0) != 0) {
      lVar14 = *(int64_t *)
                (*(int64_t *)(lVar8 + 0x1ad8) + -8 + (int64_t)*(int *)(lVar8 + 0x1ad0) * 8);
    }
    *(int64_t *)(lVar13 + 0x1af8) = lVar14;
    if (lVar14 != 0) {
      fVar15 = *(float *)(lVar13 + 0x19fc) * *(float *)(lVar14 + 0x2d8) * *(float *)(lVar14 + 0x2dc)
      ;
      *(float *)(lVar13 + 0x1a10) = fVar15;
      *(float *)(lVar13 + 0x19f8) = fVar15;
    }
    if (*(int64_t *)(lVar8 + 0x1af8) != 0) {
      lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x1af8) + 0x28);
      if (lVar8 != 0) {
        *(int32_t *)(lVar8 + 0x54) = *(int32_t *)(lVar13 + 0x1a90);
      }
      if (((*(int64_t *)(lVar13 + 0x1c78) != lVar8) &&
          (*(int64_t *)(lVar13 + 0x1c78) = lVar8, lVar8 != 0)) &&
         (*(code **)(lVar13 + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(lVar13 + 0x15c0))();
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012f260(float *param_1,float *param_2,float *param_3,int *param_4,float *param_5,
void FUN_18012f260(float *param_1,float *param_2,float *param_3,int *param_4,float *param_5,
                  float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_78;
  fVar10 = param_2[1];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_5[1];
  fVar13 = fVar3;
  if ((fVar3 <= fVar10) && (fVar13 = fVar10, param_5[3] - fVar2 <= fVar10)) {
    fVar13 = param_5[3] - fVar2;
  }
  fVar10 = *param_2;
  fVar11 = *param_5;
  fVar12 = fVar11;
  if ((fVar11 <= fVar10) && (fVar12 = fVar10, param_5[2] - fVar1 <= fVar10)) {
    fVar12 = param_5[2] - fVar1;
  }
  if (param_7 == 1) {
    iVar5 = *param_4;
    uStack_78 = 0x100000003;
    uStack_70 = 0;
    uStack_6c = 2;
    lVar8 = -(uint64_t)(iVar5 != -1);
    do {
      iVar6 = iVar5;
      if ((lVar8 == -1) || (iVar6 = *(int *)((int64_t)&uStack_78 + lVar8 * 4), iVar6 != iVar5)) {
        fVar9 = 0.0;
        fVar10 = 0.0;
        if (iVar6 == 3) {
          fVar10 = *param_6;
          fVar9 = param_6[3];
        }
        else if (iVar6 == 1) {
          fVar10 = *param_6;
LAB_18012f381:
          fVar9 = param_6[1] - fVar2;
        }
        else if (iVar6 == 0) {
          fVar9 = param_6[3];
          fVar10 = param_6[2] - fVar1;
        }
        else if (iVar6 == 2) {
          fVar10 = param_6[2] - fVar1;
          goto LAB_18012f381;
        }
        if ((((fVar11 <= fVar10) && (fVar3 <= fVar9)) &&
            (fVar1 + fVar10 < param_5[2] || fVar1 + fVar10 == param_5[2])) &&
           (fVar2 + fVar9 < param_5[3] || fVar2 + fVar9 == param_5[3])) {
          *param_4 = iVar6;
          *param_1 = fVar10;
          param_1[1] = fVar9;
          goto LAB_18012f4b4;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < 4);
  }
  iVar5 = *param_4;
  uStack_78 = 0x300000001;
  uStack_70 = 2;
  uStack_6c = 0;
  lVar8 = -(uint64_t)(iVar5 != -1);
  do {
    iVar6 = iVar5;
    if ((lVar8 == -1) || (iVar6 = *(int *)((int64_t)&uStack_78 + lVar8 * 4), iVar6 != iVar5)) {
      if (iVar6 == 0) {
        fVar10 = *param_6;
      }
      else {
        fVar10 = param_5[2];
      }
      pfVar7 = param_6 + 2;
      if (iVar6 != 1) {
        pfVar7 = param_5;
      }
      fVar11 = fVar3;
      if (iVar6 == 2) {
        fVar9 = param_6[1];
      }
      else {
        fVar9 = param_5[3];
        if (iVar6 == 3) {
          fVar11 = param_6[3];
        }
      }
      if ((fVar1 <= fVar10 - *pfVar7) && (fVar2 <= fVar9 - fVar11)) {
        if (iVar6 == 0) {
          fVar10 = *param_6;
          *param_4 = 0;
          param_1[1] = fVar13;
          *param_1 = fVar10 - fVar1;
        }
        else if (iVar6 == 1) {
          fVar10 = param_6[2];
          *param_4 = 1;
          *param_1 = fVar10;
          param_1[1] = fVar13;
        }
        else if (iVar6 == 2) {
          fVar10 = param_6[1];
          *param_4 = 2;
          *param_1 = fVar12;
          param_1[1] = fVar10 - fVar2;
        }
        else {
          if (iVar6 == 3) {
            fVar13 = param_6[3];
          }
          *param_4 = iVar6;
          *param_1 = fVar12;
          param_1[1] = fVar13;
        }
        goto LAB_18012f4b4;
      }
    }
    lVar8 = lVar8 + 1;
    if (3 < lVar8) {
      *param_4 = -1;
      uVar4 = *(uint64_t *)param_2;
      fVar10 = *param_3 + (float)uVar4;
      if (param_5[2] <= fVar10) {
        fVar10 = param_5[2];
      }
      fVar10 = fVar10 - *param_3;
      if (fVar10 < *param_5) {
        fVar10 = *param_5;
      }
      uStack_78._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
      uStack_78._4_4_ = param_3[1] + uStack_78._4_4_;
      if (param_5[3] <= uStack_78._4_4_) {
        uStack_78._4_4_ = param_5[3];
      }
      uStack_78._4_4_ = uStack_78._4_4_ - param_3[1];
      if (uStack_78._4_4_ < param_5[1]) {
        uStack_78._4_4_ = param_5[1];
      }
      *param_1 = fVar10;
      param_1[1] = uStack_78._4_4_;
      uStack_78 = uVar4;
LAB_18012f4b4:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_68 ^ (uint64_t)&uStack_78);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_18012f580(float *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *param_1 = 3.4028235e+38;
  param_1[1] = 3.4028235e+38;
  param_1[2] = -3.4028235e+38;
  param_1[3] = -3.4028235e+38;
  lVar3 = (int64_t)*(int *)(param_2 + 0x3c);
  if (*(int *)(param_2 + 0x3c) < 0) {
    *(uint64_t *)param_1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
    lVar3 = *(int64_t *)(param_2 + 0x28);
    fVar5 = *(float *)(lVar3 + 8) + *(float *)(lVar3 + 0x10);
    fVar4 = *(float *)(lVar3 + 0xc) + *(float *)(lVar3 + 0x14);
  }
  else {
    lVar1 = *(int64_t *)(lVar2 + 0x1608);
    *(uint64_t *)param_1 = *(uint64_t *)(lVar1 + 0x10 + lVar3 * 0x24);
    fVar5 = *(float *)(lVar1 + 0x18 + lVar3 * 0x24) + *(float *)(lVar1 + 0x10 + lVar3 * 0x24);
    fVar4 = *(float *)(lVar1 + 0x1c + lVar3 * 0x24) + *(float *)(lVar1 + 0x14 + lVar3 * 0x24);
  }
  *(uint64_t *)(param_1 + 2) = CONCAT44(fVar4,fVar5);
  fVar4 = *(float *)(lVar2 + 0x16b8);
  fVar5 = *(float *)(lVar2 + 0x16b4);
  if (param_1[3] - param_1[1] <= fVar4 + fVar4) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = -fVar4;
  }
  if (param_1[2] - *param_1 <= fVar5 + fVar5) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = -fVar5;
  }
  param_1[1] = param_1[1] - fVar4;
  param_1[3] = param_1[3] + fVar4;
  *param_1 = *param_1 - fVar5;
  param_1[2] = param_1[2] + fVar5;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18012f6d0(uint64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int *piVar4;
  float fVar5;
  float fStackX_10;
  float fStackX_14;
  uint64_t uStackX_18;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int8_t auStack_48 [64];
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 >> 0x1c & 1) == 0) {
    if ((uVar1 >> 0x1a & 1) == 0) {
      if ((uVar1 >> 0x19 & 1) == 0) {
        *param_1 = *(uint64_t *)(param_2 + 0x40);
      }
      else {
        fVar5 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16bc);
        lVar3 = SYSTEM_DATA_MANAGER_A;
        func_0x000180131890(&fStackX_10);
        FUN_18012f580(auStack_48,param_2);
        if (((*(char *)(lVar3 + 0x1d06) == '\0') && (*(char *)(lVar3 + 0x1d07) != '\0')) &&
           ((*(byte *)(lVar3 + 8) & 4) == 0)) {
          fStack_50 = fStackX_10 + 16.0;
          fStack_4c = fStackX_14 + 8.0;
        }
        else {
          fVar5 = fVar5 * 24.0;
          fStack_50 = fVar5 + fStackX_10;
          fStack_4c = fVar5 + fStackX_14;
        }
        fStack_54 = fStackX_14 - 8.0;
        fStack_58 = fStackX_10 - 16.0;
        piVar4 = (int *)(param_2 + 0xd4);
        FUN_18012f260(&uStackX_18,&fStackX_10,param_2 + 0x48,piVar4,auStack_48,&fStack_58,0);
        if (*piVar4 == -1) {
          *param_1 = CONCAT44(fStackX_14 + 2.0,fStackX_10 + 2.0);
        }
        else {
          *param_1 = uStackX_18;
        }
      }
    }
    else {
      lVar3 = param_2;
      FUN_18012f580(auStack_48);
      fStack_58 = *(float *)(param_2 + 0x40) - 1.0;
      fStack_50 = *(float *)(param_2 + 0x40) + 1.0;
      fStack_54 = *(float *)(lVar3 + 0x44) - 1.0;
      fStack_4c = *(float *)(lVar3 + 0x44) + 1.0;
      FUN_18012f260(param_1,param_2 + 0x40,lVar3 + 0x48,lVar3 + 0xd4,auStack_48,&fStack_58,0);
    }
  }
  else {
    fVar5 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x166c);
    lVar3 = *(int64_t *)(param_2 + 0x398);
    lVar2 = SYSTEM_DATA_MANAGER_A;
    FUN_18012f580(auStack_48);
    if (*(char *)(lVar3 + 0x17e) == '\0') {
      fStack_58 = *(float *)(lVar3 + 0x40) + fVar5;
      fStack_50 = ((*(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x48)) - fVar5) -
                  *(float *)(lVar3 + 0xa4);
      fStack_54 = -3.4028235e+38;
      fStack_4c = 3.4028235e+38;
    }
    else {
      fStack_54 = 0.0;
      uVar1 = *(uint *)(lVar3 + 0xc) & 1;
      if (uVar1 == 0) {
        fVar5 = *(float *)(lVar2 + 0x19fc) * *(float *)(lVar3 + 0x2d8) * *(float *)(lVar3 + 0x2dc) +
                *(float *)(lVar2 + 0x1660) + *(float *)(lVar2 + 0x1660);
      }
      else {
        fVar5 = 0.0;
      }
      if ((*(uint *)(lVar3 + 0xc) >> 10 & 1) == 0) {
        fStack_4c = 0.0;
      }
      else {
        fStack_4c = *(float *)(lVar2 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                    *(float *)(lVar3 + 0x2dc) + *(float *)(lVar3 + 0x184) +
                    *(float *)(lVar2 + 0x1660) + *(float *)(lVar2 + 0x1660);
      }
      fStack_4c = *(float *)(lVar3 + 0x44) + fVar5 + fStack_4c;
      if (uVar1 == 0) {
        fStack_54 = *(float *)(lVar2 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                    *(float *)(lVar3 + 0x2dc) +
                    *(float *)(lVar2 + 0x1660) + *(float *)(lVar2 + 0x1660);
      }
      fStack_54 = *(float *)(lVar3 + 0x44) + fStack_54;
      fStack_58 = -3.4028235e+38;
      fStack_50 = 3.4028235e+38;
    }
    FUN_18012f260(param_1,param_2 + 0x40,param_2 + 0x48,param_2 + 0xd4,auStack_48,&fStack_58,0);
  }
  return param_1;
}





// 函数: void FUN_18012f711(uint64_t param_1,int64_t param_2)
void FUN_18012f711(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  int64_t unaff_RBP;
  int64_t in_R10;
  int32_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM6_Da;
  
  lVar1 = *(int64_t *)(param_2 + 0x398);
  FUN_18012f580();
  if (*(char *)(lVar1 + 0x17e) == '\0') {
    uVar3 = 0xff7fffff;
    fVar5 = *(float *)(lVar1 + 0x40) + unaff_XMM6_Da;
    fVar6 = ((*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0x48)) - unaff_XMM6_Da) -
            *(float *)(lVar1 + 0xa4);
    *(float *)(unaff_RBP + 7) = fVar5;
    *(int32_t *)(unaff_RBP + 0xb) = 0xff7fffff;
    *(float *)(unaff_RBP + 0xf) = fVar6;
    *(int32_t *)(unaff_RBP + 0x13) = 0x7f7fffff;
    *(float *)(unaff_RBP + 7) = fVar5;
    *(int32_t *)(unaff_RBP + 0xb) = 0xff7fffff;
    *(float *)(unaff_RBP + 0xf) = fVar6;
    *(int32_t *)(unaff_RBP + 0x13) = 0x7f7fffff;
  }
  else {
    fVar6 = 0.0;
    uVar2 = *(uint *)(lVar1 + 0xc) & 1;
    if (uVar2 == 0) {
      fVar5 = *(float *)(in_R10 + 0x19fc) * *(float *)(lVar1 + 0x2d8) * *(float *)(lVar1 + 0x2dc) +
              *(float *)(in_R10 + 0x1660) + *(float *)(in_R10 + 0x1660);
    }
    else {
      fVar5 = 0.0;
    }
    if ((*(uint *)(lVar1 + 0xc) >> 10 & 1) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(in_R10 + 0x19fc) * *(float *)(lVar1 + 0x2d8) * *(float *)(lVar1 + 0x2dc) +
              *(float *)(lVar1 + 0x184) + *(float *)(in_R10 + 0x1660) + *(float *)(in_R10 + 0x1660);
    }
    fVar4 = *(float *)(lVar1 + 0x44) + fVar5 + fVar4;
    if (uVar2 == 0) {
      fVar6 = *(float *)(in_R10 + 0x19fc) * *(float *)(lVar1 + 0x2d8) * *(float *)(lVar1 + 0x2dc) +
              *(float *)(in_R10 + 0x1660) + *(float *)(in_R10 + 0x1660);
    }
    fVar6 = *(float *)(lVar1 + 0x44) + fVar6;
    uVar3 = 0x7f7fffff;
    *(int32_t *)(unaff_RBP + 7) = 0xff7fffff;
    *(float *)(unaff_RBP + 0xb) = fVar6;
    *(int32_t *)(unaff_RBP + 0xf) = 0x7f7fffff;
    *(float *)(unaff_RBP + 0x13) = fVar4;
    *(int32_t *)(unaff_RBP + 7) = 0xff7fffff;
    *(float *)(unaff_RBP + 0xb) = fVar6;
    *(int32_t *)(unaff_RBP + 0xf) = 0x7f7fffff;
    *(float *)(unaff_RBP + 0x13) = fVar4;
  }
  FUN_18012f260(uVar3,param_2 + 0x40,param_2 + 0x48,param_2 + 0xd4,unaff_RBP + 0x17);
  return;
}





// 函数: void FUN_18012f8b5(uint64_t *param_1,int64_t param_2)
void FUN_18012f8b5(uint64_t *param_1,int64_t param_2)

{
  uint in_EAX;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t in_R10;
  int *piVar1;
  int64_t in_R11;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((in_EAX >> 0x1a & 1) == 0) {
    if ((in_EAX >> 0x19 & 1) == 0) {
      *param_1 = *(uint64_t *)(param_2 + 0x40);
    }
    else {
      fVar5 = *(float *)(in_R10 + 0x16bc);
      func_0x000180131890(unaff_RBP + 0x6f);
      FUN_18012f580(unaff_RBP + 0x17,in_R11);
      if (((*(char *)(in_R10 + 0x1d06) == '\0') && (*(char *)(in_R10 + 0x1d07) != '\0')) &&
         ((*(byte *)(in_R10 + 8) & 4) == 0)) {
        fVar4 = *(float *)(unaff_RBP + 0x6f);
        fVar2 = *(float *)(unaff_RBP + 0x73);
        *(float *)(unaff_RBP + 7) = fVar4 - 16.0;
        *(float *)(unaff_RBP + 0xb) = fVar2 - 8.0;
        *(float *)(unaff_RBP + 0xf) = fVar4 + 16.0;
        *(float *)(unaff_RBP + 0x13) = fVar2 + 8.0;
        *(float *)(unaff_RBP + 7) = fVar4 - 16.0;
        *(float *)(unaff_RBP + 0xb) = fVar2 - 8.0;
        *(float *)(unaff_RBP + 0xf) = fVar4 + 16.0;
        *(float *)(unaff_RBP + 0x13) = fVar2 + 8.0;
      }
      else {
        fVar4 = *(float *)(unaff_RBP + 0x6f);
        fVar2 = *(float *)(unaff_RBP + 0x73);
        fVar5 = fVar5 * 24.0;
        fVar3 = fVar5 + fVar4;
        fVar5 = fVar5 + fVar2;
        *(float *)(unaff_RBP + 7) = fVar4 - 16.0;
        *(float *)(unaff_RBP + 0xb) = fVar2 - 8.0;
        *(float *)(unaff_RBP + 0xf) = fVar3;
        *(float *)(unaff_RBP + 0x13) = fVar5;
        *(float *)(unaff_RBP + 7) = fVar4 - 16.0;
        *(float *)(unaff_RBP + 0xb) = fVar2 - 8.0;
        *(float *)(unaff_RBP + 0xf) = fVar3;
        *(float *)(unaff_RBP + 0x13) = fVar5;
      }
      piVar1 = (int *)(in_R11 + 0xd4);
      FUN_18012f260(unaff_RBP + 0x77,unaff_RBP + 0x6f,in_R11 + 0x48,piVar1,unaff_RBP + 0x17);
      if (*piVar1 == -1) {
        *unaff_RDI = CONCAT44(fVar2 + 2.0,fVar4 + 2.0);
      }
      else {
        *unaff_RDI = *(uint64_t *)(unaff_RBP + 0x77);
      }
    }
  }
  else {
    FUN_18012f580(unaff_RBP + 0x17);
    fVar5 = *(float *)(param_2 + 0x40);
    fVar4 = *(float *)(in_R11 + 0x44);
    *(float *)(unaff_RBP + 7) = fVar5 - 1.0;
    fVar2 = fVar4 - 1.0;
    *(float *)(unaff_RBP + 0xf) = fVar5 + 1.0;
    *(float *)(unaff_RBP + 0xb) = fVar2;
    *(float *)(unaff_RBP + 0x13) = fVar4 + 1.0;
    FUN_18012f260(fVar2,param_2 + 0x40,in_R11 + 0x48,in_R11 + 0xd4,unaff_RBP + 0x17);
  }
  return;
}





// 函数: void FUN_18012f941(void)
void FUN_18012f941(void)

{
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t in_R10;
  int *piVar1;
  int64_t in_R11;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(in_R10 + 0x16bc);
  func_0x000180131890(unaff_RBP + 0x6f);
  FUN_18012f580(unaff_RBP + 0x17,in_R11);
  if (((*(char *)(in_R10 + 0x1d06) == '\0') && (*(char *)(in_R10 + 0x1d07) != '\0')) &&
     ((*(byte *)(in_R10 + 8) & 4) == 0)) {
    fVar3 = *(float *)(unaff_RBP + 0x6f);
    fVar4 = *(float *)(unaff_RBP + 0x73);
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar3 + 16.0;
    *(float *)(unaff_RBP + 0x13) = fVar4 + 8.0;
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar3 + 16.0;
    *(float *)(unaff_RBP + 0x13) = fVar4 + 8.0;
  }
  else {
    fVar3 = *(float *)(unaff_RBP + 0x6f);
    fVar4 = *(float *)(unaff_RBP + 0x73);
    fVar5 = fVar5 * 24.0;
    fVar2 = fVar5 + fVar3;
    fVar5 = fVar5 + fVar4;
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar2;
    *(float *)(unaff_RBP + 0x13) = fVar5;
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar2;
    *(float *)(unaff_RBP + 0x13) = fVar5;
  }
  piVar1 = (int *)(in_R11 + 0xd4);
  FUN_18012f260(unaff_RBP + 0x77,unaff_RBP + 0x6f,in_R11 + 0x48,piVar1,unaff_RBP + 0x17);
  if (*piVar1 == -1) {
    *unaff_RDI = CONCAT44(fVar4 + 2.0,fVar3 + 2.0);
  }
  else {
    *unaff_RDI = *(uint64_t *)(unaff_RBP + 0x77);
  }
  return;
}





// 函数: void FUN_18012f94a(void)
void FUN_18012f94a(void)

{
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t in_R10;
  int *piVar1;
  int64_t in_R11;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(in_R10 + 0x16bc);
  func_0x000180131890();
  FUN_18012f580(unaff_RBP + 0x17,in_R11);
  if (((*(char *)(in_R10 + 0x1d06) == '\0') && (*(char *)(in_R10 + 0x1d07) != '\0')) &&
     ((*(byte *)(in_R10 + 8) & 4) == 0)) {
    fVar3 = *(float *)(unaff_RBP + 0x6f);
    fVar4 = *(float *)(unaff_RBP + 0x73);
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar3 + 16.0;
    *(float *)(unaff_RBP + 0x13) = fVar4 + 8.0;
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar3 + 16.0;
    *(float *)(unaff_RBP + 0x13) = fVar4 + 8.0;
  }
  else {
    fVar3 = *(float *)(unaff_RBP + 0x6f);
    fVar4 = *(float *)(unaff_RBP + 0x73);
    fVar5 = fVar5 * 24.0;
    fVar2 = fVar5 + fVar3;
    fVar5 = fVar5 + fVar4;
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar2;
    *(float *)(unaff_RBP + 0x13) = fVar5;
    *(float *)(unaff_RBP + 7) = fVar3 - 16.0;
    *(float *)(unaff_RBP + 0xb) = fVar4 - 8.0;
    *(float *)(unaff_RBP + 0xf) = fVar2;
    *(float *)(unaff_RBP + 0x13) = fVar5;
  }
  piVar1 = (int *)(in_R11 + 0xd4);
  FUN_18012f260(unaff_RBP + 0x77,unaff_RBP + 0x6f,in_R11 + 0x48,piVar1,unaff_RBP + 0x17);
  if (*piVar1 == -1) {
    *unaff_RDI = CONCAT44(fVar4 + 2.0,fVar3 + 2.0);
  }
  else {
    *unaff_RDI = *(uint64_t *)(unaff_RBP + 0x77);
  }
  return;
}





// 函数: void FUN_18012fa7d(void)
void FUN_18012fa7d(void)

{
  uint64_t *unaff_RDI;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  *unaff_RDI = CONCAT44(unaff_XMM7_Da + 2.0,unaff_XMM6_Da + 2.0);
  return;
}





// 函数: void FUN_18012fa9e(void)
void FUN_18012fa9e(void)

{
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  
  *unaff_RDI = *(uint64_t *)(unaff_RBP + 0x77);
  return;
}





