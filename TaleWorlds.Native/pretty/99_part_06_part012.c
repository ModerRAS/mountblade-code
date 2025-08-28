#include "TaleWorlds.Native.Split.h"

// 99_part_06_part012.c - 1 个函数

// 函数: void FUN_1803af8d0(uint64_t *param_1)
void FUN_1803af8d0(uint64_t *param_1)

{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  
  *param_1 = &unknown_var_952_ptr;
  iVar2 = _Mtx_lock(0x180c91f70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plVar5 = param_1 + 0x10;
  lVar4 = 0x10;
  do {
    puVar1 = (uint64_t *)*plVar5;
    if (puVar1 != (uint64_t *)0x0) {
      lVar3 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar3);
      }
    }
    *plVar5 = 0;
    plVar5 = plVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1803b00c0(param_1);
  plVar5 = (int64_t *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  iVar2 = _Mtx_unlock(0x180c91f70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_1[0x3cb] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_1803af240(param_1 + 0x38c);
  if ((int64_t *)param_1[0x38a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x38a] + 0x38))();
  }
  if ((int64_t *)param_1[0x389] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x389] + 0x38))();
  }
  if ((*(char *)(param_1 + 0x387) == '\0') && (param_1[900] != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if ((int64_t *)param_1[0x3c] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x3c] + 0x38))();
  }
  if ((int64_t *)param_1[0x3b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x3b] + 0x38))();
  }
  if ((int64_t *)param_1[0x3a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x3a] + 0x38))();
  }
  if ((int64_t *)param_1[0x39] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x39] + 0x38))();
  }
  FUN_1800ed380(param_1 + 0x31);
  if ((int64_t *)param_1[0x2d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2d] + 0x38))();
  }
  if ((int64_t *)param_1[0x2c] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2c] + 0x38))();
  }
  SystemDataValidator(param_1 + 0x27,8,3,DataCacheManager);
  SystemDataValidator(param_1 + 0x24,8,3,DataCacheManager);
  FUN_180057830();
  if ((int64_t *)param_1[0xe] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xe] + 0x38))();
  }
  FUN_18033ad00(param_1 + 7);
  if ((1 < (uint64_t)param_1[9]) && (param_1[8] != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}



BADSPACEBASE *
FUN_1803afb60(int64_t param_1,float *param_2,int param_3,float *param_4,byte param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t uStack_5c;
  
  fVar13 = *param_2;
  if ((0.0 <= fVar13) && (fVar10 = param_2[1], 0.0 <= fVar10)) {
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar8 = (float)*(int *)(param_1 + 0x14) * fVar11;
    if (fVar13 < fVar8) {
      fVar9 = (float)*(int *)(param_1 + 0x18) * fVar11;
      if (fVar10 < fVar9) {
        if ((((fVar13 < 0.0) || (fVar10 < 0.0)) || (fVar8 < fVar13)) || (fVar9 < fVar10)) {
          iVar7 = -1;
          puVar5 = (uint64_t *)0x0;
          iVar3 = -1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x14) + -1;
          iVar3 = (int)(fVar13 * (1.0 / fVar11));
          fVar8 = fVar10 * (1.0 / fVar11);
          if (iVar3 < iVar7) {
            iVar7 = iVar3;
          }
          iVar3 = *(int *)(param_1 + 0x18) + -1;
          iVar4 = (int)fVar8;
          if (iVar4 < iVar3) {
            iVar3 = iVar4;
          }
          puVar5 = (uint64_t *)FUN_180195330(fVar8,iVar7);
        }
        if ((void *)*puVar5 == &unknown_var_8576_ptr) {
          fVar8 = *(float *)(puVar5[2] + 0x1c) /
                  (float)(1 << ((byte)*(int32_t *)(puVar5 + 5) & 0x1f));
        }
        else {
          (**(code **)((void *)*puVar5 + 0x30))(puVar5);
          fVar8 = extraout_XMM0_Da;
        }
        uVar2 = CONCAT44((fVar10 - (float)iVar3 * fVar11) * (1.0 / fVar8) *
                         (1.0 / (float)*(int *)(puVar5 + 0xe)),
                         (fVar13 - (float)iVar7 * fVar11) * (1.0 / fVar8) *
                         (1.0 / (float)*(int *)(puVar5 + 0xe)));
        if ((param_5 & 1) != 0) {
          if (puVar5[0x103] == 0) {
            param_4[4] = 0.0;
          }
          else {
            lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x60b80);
            fVar13 = *(float *)(lVar1 + 0x154);
            fVar10 = *(float *)(lVar1 + 0x158);
            pfVar6 = (float *)FUN_1802a11e0(puVar5[0x103],&fStack_68,uVar2,0);
            param_4[4] = (fVar10 - fVar13) * *pfVar6 + fVar13;
          }
        }
        if (((param_5 & 2) != 0) && (puVar5[0x102] != 0)) {
          pfVar6 = (float *)FUN_1802a11e0(puVar5[0x102],&fStack_68,uVar2,1);
          fStack_68 = (*pfVar6 + *pfVar6) - 1.0;
          fStack_64 = (pfVar6[1] + pfVar6[1]) - 1.0;
          fVar10 = fStack_64 * fStack_64 + fStack_68 * fStack_68;
          fVar13 = 0.0;
          if ((0.0 <= fVar10) && (fVar13 = fVar10, 0.999 <= fVar10)) {
            fVar13 = 0.999;
          }
          fVar10 = (1.0 - fVar13) + fVar10;
          auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
          fVar11 = auVar12._0_4_;
          fStack_60 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
          fStack_68 = fStack_68 * fStack_60;
          fStack_64 = fStack_64 * fStack_60;
          fStack_60 = SQRT(1.0 - fVar13) * fStack_60;
          uStack_5c = 0x7f7fffff;
          *param_4 = fStack_68;
          param_4[1] = fStack_64;
          param_4[2] = fStack_60;
          param_4[3] = 3.4028235e+38;
        }
        if ((param_5 & 4) != 0) {
          if ((-1 < param_3) && (puVar5[(int64_t)param_3 + 0xe2] != 0)) {
            pfVar6 = (float *)FUN_1802a11e0(puVar5[(int64_t)param_3 + 0xe2],&fStack_68,uVar2,0);
            param_4[5] = *pfVar6;
            return (BADSPACEBASE *)(int8_t *)0x1;
          }
          param_4[5] = 0.0;
        }
        register0x00000020 = (BADSPACEBASE *)0x1;
      }
    }
  }
  return register0x00000020;
}



uint64_t
FUN_1803afbe2(float param_1,float param_2,int param_3,uint64_t param_4,uint64_t param_5,
             uint64_t param_6,uint64_t param_7)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t in_RAX;
  uint64_t *puVar4;
  float *pfVar5;
  int unaff_EBX;
  int iVar6;
  float *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t unaff_R15;
  bool in_CF;
  int8_t auVar7 [16];
  float fVar8;
  float in_XMM2_Da;
  float fVar9;
  int8_t auVar10 [16];
  float unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float in_stack_000000a8;
  float fStack00000000000000ac;
  byte in_stack_000000c0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  if ((((in_CF) || (unaff_XMM6_Da < unaff_XMM8_Da)) || (param_1 < unaff_XMM7_Da)) ||
     (param_2 < unaff_XMM6_Da)) {
    iVar6 = -1;
    puVar4 = (uint64_t *)0x0;
    iVar3 = -1;
  }
  else {
    iVar3 = (int)(unaff_XMM7_Da * (1.0 / in_XMM2_Da));
    auVar10._4_4_ = unaff_XMM6_Db;
    auVar10._0_4_ = unaff_XMM6_Da;
    auVar10._8_4_ = unaff_XMM6_Dc;
    auVar10._12_4_ = unaff_XMM6_Dd;
    auVar7._4_12_ = auVar10._4_12_;
    auVar7._0_4_ = unaff_XMM6_Da * (1.0 / in_XMM2_Da);
    iVar6 = unaff_EBX + -1;
    if (iVar3 < unaff_EBX + -1) {
      iVar6 = iVar3;
    }
    iVar3 = param_3 + -1;
    if ((int)auVar7._0_4_ < param_3 + -1) {
      iVar3 = (int)auVar7._0_4_;
    }
    puVar4 = (uint64_t *)FUN_180195330(auVar7._0_8_,iVar6);
  }
  if ((void *)*puVar4 == &unknown_var_8576_ptr) {
    fVar8 = *(float *)(puVar4[2] + 0x1c) / (float)(1 << ((byte)*(int32_t *)(puVar4 + 5) & 0x1f));
  }
  else {
    fVar8 = (float)(**(code **)((void *)*puVar4 + 0x30))(puVar4);
  }
  in_stack_000000a8 =
       (unaff_XMM7_Da - (float)iVar6 * in_XMM2_Da) * (1.0 / fVar8) *
       (1.0 / (float)*(int *)(puVar4 + 0xe));
  fStack00000000000000ac =
       (unaff_XMM6_Da - (float)iVar3 * in_XMM2_Da) * (1.0 / fVar8) *
       (1.0 / (float)*(int *)(puVar4 + 0xe));
  uVar2 = CONCAT44(fStack00000000000000ac,in_stack_000000a8);
  if ((in_stack_000000c0 & 1) != 0) {
    if (puVar4[0x103] == 0) {
      unaff_RBP[4] = 0.0;
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x68) + 0x60b80);
      fVar8 = *(float *)(lVar1 + 0x154);
      fVar9 = *(float *)(lVar1 + 0x158);
      pfVar5 = (float *)FUN_1802a11e0(puVar4[0x103],&param_6,uVar2,0);
      unaff_RBP[4] = (fVar9 - fVar8) * *pfVar5 + fVar8;
    }
  }
  if (((in_stack_000000c0 & 2) != 0) && (puVar4[0x102] != 0)) {
    pfVar5 = (float *)FUN_1802a11e0(puVar4[0x102],&param_6,uVar2,1);
    param_6._0_4_ = (*pfVar5 + *pfVar5) - 1.0;
    param_6._4_4_ = (pfVar5[1] + pfVar5[1]) - 1.0;
    fVar8 = param_6._4_4_ * param_6._4_4_ + (float)param_6 * (float)param_6;
    if ((unaff_XMM8_Da <= fVar8) && (unaff_XMM8_Da = fVar8, 0.999 <= fVar8)) {
      unaff_XMM8_Da = 0.999;
    }
    fVar8 = (1.0 - unaff_XMM8_Da) + fVar8;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    param_7._0_4_ = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
    param_6._0_4_ = (float)param_6 * (float)param_7;
    param_6._4_4_ = param_6._4_4_ * (float)param_7;
    param_7._0_4_ = SQRT(1.0 - unaff_XMM8_Da) * (float)param_7;
    param_7._4_4_ = 0x7f7fffff;
    *unaff_RBP = (float)param_6;
    unaff_RBP[1] = param_6._4_4_;
    unaff_RBP[2] = (float)param_7;
    unaff_RBP[3] = 3.4028235e+38;
  }
  if ((in_stack_000000c0 & 4) != 0) {
    if (((int)unaff_R15 < 0) || (puVar4[unaff_R15 + 0xe2] == 0)) {
      unaff_RBP[5] = 0.0;
    }
    else {
      pfVar5 = (float *)FUN_1802a11e0(puVar4[unaff_R15 + 0xe2],&param_6,uVar2,0);
      unaff_RBP[5] = *pfVar5;
    }
  }
  return 1;
}



uint64_t
FUN_1803afbe6(float param_1,float param_2,float param_3,uint64_t param_4,uint64_t param_5,
             uint64_t param_6,uint64_t param_7)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t in_RAX;
  uint64_t *puVar4;
  float *pfVar5;
  int unaff_EBX;
  int iVar6;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int in_R8D;
  int64_t unaff_R15;
  bool in_CF;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  int8_t auVar10 [16];
  float unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float in_stack_000000a8;
  float fStack00000000000000ac;
  byte in_stack_000000c0;
  
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  if ((((in_CF) || (unaff_XMM6_Da < unaff_XMM8_Da)) || (param_1 < unaff_XMM7_Da)) ||
     (param_2 < unaff_XMM6_Da)) {
    iVar6 = -1;
    puVar4 = (uint64_t *)0x0;
    iVar3 = -1;
  }
  else {
    iVar3 = (int)(unaff_XMM7_Da * (1.0 / param_3));
    auVar10._4_4_ = unaff_XMM6_Db;
    auVar10._0_4_ = unaff_XMM6_Da;
    auVar10._8_4_ = unaff_XMM6_Dc;
    auVar10._12_4_ = unaff_XMM6_Dd;
    auVar7._4_12_ = auVar10._4_12_;
    auVar7._0_4_ = unaff_XMM6_Da * (1.0 / param_3);
    iVar6 = unaff_EBX + -1;
    if (iVar3 < unaff_EBX + -1) {
      iVar6 = iVar3;
    }
    iVar3 = in_R8D + -1;
    if ((int)auVar7._0_4_ < in_R8D + -1) {
      iVar3 = (int)auVar7._0_4_;
    }
    puVar4 = (uint64_t *)FUN_180195330(auVar7._0_8_,iVar6);
  }
  if ((void *)*puVar4 == &unknown_var_8576_ptr) {
    fVar8 = *(float *)(puVar4[2] + 0x1c) / (float)(1 << ((byte)*(int32_t *)(puVar4 + 5) & 0x1f));
  }
  else {
    fVar8 = (float)(**(code **)((void *)*puVar4 + 0x30))(puVar4);
  }
  in_stack_000000a8 =
       (unaff_XMM7_Da - (float)iVar6 * param_3) * (1.0 / fVar8) *
       (1.0 / (float)*(int *)(puVar4 + 0xe));
  fStack00000000000000ac =
       (unaff_XMM6_Da - (float)iVar3 * param_3) * (1.0 / fVar8) *
       (1.0 / (float)*(int *)(puVar4 + 0xe));
  uVar2 = CONCAT44(fStack00000000000000ac,in_stack_000000a8);
  if ((in_stack_000000c0 & 1) != 0) {
    if (puVar4[0x103] == 0) {
      unaff_RBP[4] = 0.0;
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x68) + 0x60b80);
      fVar8 = *(float *)(lVar1 + 0x154);
      fVar9 = *(float *)(lVar1 + 0x158);
      pfVar5 = (float *)FUN_1802a11e0(puVar4[0x103],&param_6,uVar2,0);
      unaff_RBP[4] = (fVar9 - fVar8) * *pfVar5 + fVar8;
    }
  }
  if (((in_stack_000000c0 & 2) != 0) && (puVar4[0x102] != 0)) {
    pfVar5 = (float *)FUN_1802a11e0(puVar4[0x102],&param_6,uVar2,1);
    param_6._0_4_ = (*pfVar5 + *pfVar5) - 1.0;
    param_6._4_4_ = (pfVar5[1] + pfVar5[1]) - 1.0;
    fVar8 = param_6._4_4_ * param_6._4_4_ + (float)param_6 * (float)param_6;
    if ((unaff_XMM8_Da <= fVar8) && (unaff_XMM8_Da = fVar8, 0.999 <= fVar8)) {
      unaff_XMM8_Da = 0.999;
    }
    fVar8 = (1.0 - unaff_XMM8_Da) + fVar8;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    param_7._0_4_ = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
    param_6._0_4_ = (float)param_6 * (float)param_7;
    param_6._4_4_ = param_6._4_4_ * (float)param_7;
    param_7._0_4_ = SQRT(1.0 - unaff_XMM8_Da) * (float)param_7;
    param_7._4_4_ = 0x7f7fffff;
    *unaff_RBP = (float)param_6;
    unaff_RBP[1] = param_6._4_4_;
    unaff_RBP[2] = (float)param_7;
    unaff_RBP[3] = 3.4028235e+38;
  }
  if ((in_stack_000000c0 & 4) != 0) {
    if (((int)unaff_R15 < 0) || (puVar4[unaff_R15 + 0xe2] == 0)) {
      unaff_RBP[5] = 0.0;
    }
    else {
      pfVar5 = (float *)FUN_1802a11e0(puVar4[unaff_R15 + 0xe2],&param_6,uVar2,0);
      unaff_RBP[5] = *pfVar5;
    }
  }
  return 1;
}



uint64_t FUN_1803afe39(void)

{
  int64_t lVar1;
  int32_t *puVar2;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  
  if (((int)unaff_R15 < 0) || (lVar1 = *(int64_t *)(unaff_RDI + 0x710 + unaff_R15 * 8), lVar1 == 0)
     ) {
    *(int32_t *)(unaff_RBP + 0x14) = 0;
  }
  else {
    puVar2 = (int32_t *)FUN_1802a11e0(lVar1,&stack0x00000030);
    *(int32_t *)(unaff_RBP + 0x14) = *puVar2;
  }
  return 1;
}



int8_t FUN_1803afe6f(void)

{
  int64_t unaff_RBP;
  
  *(int32_t *)(unaff_RBP + 0x14) = 0;
  return 1;
}



int8_t FUN_1803afe82(void)

{
  return 0;
}



uint64_t FUN_1803afea8(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  float *pfVar3;
  int64_t in_RAX;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float in_stack_000000a8;
  float fStack00000000000000ac;
  byte in_stack_000000c0;
  
  fVar4 = (float)(**(code **)(in_RAX + 0x30))();
  fStack00000000000000ac = unaff_XMM9_Da / (float)*(int *)(unaff_RDI + 0x70);
  in_stack_000000a8 = unaff_XMM7_Da * (unaff_XMM9_Da / fVar4) * fStack00000000000000ac;
  fStack00000000000000ac = unaff_XMM6_Da * (unaff_XMM9_Da / fVar4) * fStack00000000000000ac;
  uVar2 = CONCAT44(fStack00000000000000ac,in_stack_000000a8);
  if ((in_stack_000000c0 & 1) != 0) {
    if (*(int64_t *)(unaff_RDI + 0x818) == 0) {
      unaff_RBP[4] = 0.0;
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x68) + 0x60b80);
      fVar4 = *(float *)(lVar1 + 0x154);
      fVar5 = *(float *)(lVar1 + 0x158);
      pfVar3 = (float *)FUN_1802a11e0(*(int64_t *)(unaff_RDI + 0x818),&stack0x00000030,uVar2,0);
      unaff_RBP[4] = (fVar5 - fVar4) * *pfVar3 + fVar4;
    }
  }
  if (((in_stack_000000c0 & 2) != 0) && (*(int64_t *)(unaff_RDI + 0x810) != 0)) {
    pfVar3 = (float *)FUN_1802a11e0(*(int64_t *)(unaff_RDI + 0x810),&stack0x00000030,uVar2,1);
    fStack0000000000000030 = (*pfVar3 + *pfVar3) - unaff_XMM9_Da;
    fStack0000000000000034 = (pfVar3[1] + pfVar3[1]) - unaff_XMM9_Da;
    fVar4 = fStack0000000000000034 * fStack0000000000000034 +
            fStack0000000000000030 * fStack0000000000000030;
    if ((unaff_XMM8_Da <= fVar4) && (unaff_XMM8_Da = fVar4, 0.999 <= fVar4)) {
      unaff_XMM8_Da = 0.999;
    }
    fVar4 = (unaff_XMM9_Da - unaff_XMM8_Da) + fVar4;
    auVar6._4_4_ = unaff_XMM9_Db;
    auVar6._0_4_ = fVar4;
    auVar6._8_4_ = unaff_XMM9_Dc;
    auVar6._12_4_ = unaff_XMM9_Dd;
    auVar7._4_4_ = unaff_XMM9_Db;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = unaff_XMM9_Dc;
    auVar7._12_4_ = unaff_XMM9_Dd;
    auVar7 = rsqrtss(auVar6,auVar7);
    fVar5 = auVar7._0_4_;
    fStack0000000000000038 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    fStack0000000000000030 = fStack0000000000000030 * fStack0000000000000038;
    fStack0000000000000034 = fStack0000000000000034 * fStack0000000000000038;
    fStack0000000000000038 = SQRT(unaff_XMM9_Da - unaff_XMM8_Da) * fStack0000000000000038;
    uStack000000000000003c = 0x7f7fffff;
    *unaff_RBP = fStack0000000000000030;
    unaff_RBP[1] = fStack0000000000000034;
    unaff_RBP[2] = fStack0000000000000038;
    unaff_RBP[3] = 3.4028235e+38;
  }
  if ((in_stack_000000c0 & 4) != 0) {
    if (((int)unaff_R15 < 0) ||
       (lVar1 = *(int64_t *)(unaff_RDI + 0x710 + unaff_R15 * 8), lVar1 == 0)) {
      unaff_RBP[5] = 0.0;
    }
    else {
      pfVar3 = (float *)FUN_1802a11e0(lVar1,&stack0x00000030,uVar2,0);
      unaff_RBP[5] = *pfVar3;
    }
  }
  return 1;
}



BADSPACEBASE * FUN_1803afec0(int64_t param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  int8_t auStack_48 [64];
  
  fVar1 = *param_2;
  if ((0.0 <= fVar1) && (fVar2 = param_2[1], 0.0 <= fVar2)) {
    fVar12 = *(float *)(param_1 + 0x1c);
    fVar10 = (float)*(int *)(param_1 + 0x14) * fVar12;
    if (fVar1 < fVar10) {
      fVar11 = (float)*(int *)(param_1 + 0x18) * fVar12;
      if (fVar2 < fVar11) {
        if ((((fVar1 < 0.0) || (fVar2 < 0.0)) || (fVar10 < fVar1)) || (fVar11 < fVar2)) {
          iVar9 = -1;
          puVar7 = (uint64_t *)0x0;
          iVar5 = -1;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x14) + -1;
          fVar10 = (1.0 / fVar12) * fVar1;
          iVar5 = (int)fVar10;
          if (iVar5 < iVar9) {
            iVar9 = iVar5;
          }
          iVar5 = *(int *)(param_1 + 0x18) + -1;
          iVar6 = (int)((1.0 / fVar12) * fVar2);
          if (iVar6 < iVar5) {
            iVar5 = iVar6;
          }
          puVar7 = (uint64_t *)FUN_180195330(fVar10,iVar9);
        }
        if ((void *)*puVar7 == &unknown_var_8576_ptr) {
          fVar10 = *(float *)(puVar7[2] + 0x1c) /
                   (float)(1 << ((byte)*(int32_t *)(puVar7 + 5) & 0x1f));
        }
        else {
          (**(code **)((void *)*puVar7 + 0x30))(puVar7);
          fVar10 = extraout_XMM0_Da;
        }
        iVar6 = *(int *)(puVar7 + 0xe);
        *param_3 = 0.0;
        if (puVar7[0x103] != 0) {
          lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x60b80);
          fVar11 = *(float *)(lVar4 + 0x154);
          fVar3 = *(float *)(lVar4 + 0x158);
          pfVar8 = (float *)FUN_1802a11e0(puVar7[0x103],auStack_48,
                                          CONCAT44((1.0 / fVar10) * (fVar2 - (float)iVar5 * fVar12)
                                                   * (1.0 / (float)iVar6),
                                                   (1.0 / fVar10) * (fVar1 - (float)iVar9 * fVar12)
                                                   * (1.0 / (float)iVar6)),0);
          *param_3 = (fVar3 - fVar11) * *pfVar8 + fVar11;
        }
        register0x00000020 = (BADSPACEBASE *)0x1;
      }
    }
  }
  return register0x00000020;
}



uint64_t FUN_1803aff35(float param_1,float param_2,int param_3,float param_4)

{
  float fVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t in_RAX;
  uint64_t *puVar5;
  float *pfVar6;
  uint64_t unaff_RBX;
  int unaff_ESI;
  int iVar7;
  int64_t unaff_RDI;
  float *unaff_R14;
  bool in_CF;
  float fVar8;
  float extraout_XMM0_Da;
  float in_XMM2_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float in_stack_00000088;
  float fStack000000000000008c;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  if ((((in_CF) || (unaff_XMM6_Da < param_2)) || (param_1 < unaff_XMM7_Da)) ||
     (in_XMM2_Da < unaff_XMM6_Da)) {
    iVar7 = -1;
    puVar5 = (uint64_t *)0x0;
    iVar3 = -1;
  }
  else {
    fVar8 = (1.0 / param_4) * unaff_XMM7_Da;
    iVar3 = (int)fVar8;
    iVar7 = unaff_ESI + -1;
    if (iVar3 < unaff_ESI + -1) {
      iVar7 = iVar3;
    }
    iVar4 = (int)((1.0 / param_4) * unaff_XMM6_Da);
    iVar3 = param_3 + -1;
    if (iVar4 < param_3 + -1) {
      iVar3 = iVar4;
    }
    puVar5 = (uint64_t *)FUN_180195330(fVar8,iVar7);
  }
  if ((void *)*puVar5 == &unknown_var_8576_ptr) {
    fVar8 = *(float *)(puVar5[2] + 0x1c) / (float)(1 << ((byte)*(int32_t *)(puVar5 + 5) & 0x1f));
  }
  else {
    (**(code **)((void *)*puVar5 + 0x30))(puVar5);
    fVar8 = extraout_XMM0_Da;
  }
  iVar4 = *(int *)(puVar5 + 0xe);
  *unaff_R14 = 0.0;
  in_stack_00000088 =
       (1.0 / fVar8) * (unaff_XMM7_Da - (float)iVar7 * param_4) * (1.0 / (float)iVar4);
  fStack000000000000008c =
       (1.0 / fVar8) * (unaff_XMM6_Da - (float)iVar3 * param_4) * (1.0 / (float)iVar4);
  if (puVar5[0x103] != 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b80);
    fVar8 = *(float *)(lVar2 + 0x154);
    fVar1 = *(float *)(lVar2 + 0x158);
    pfVar6 = (float *)FUN_1802a11e0(puVar5[0x103],&stack0x00000030,
                                    CONCAT44(fStack000000000000008c,in_stack_00000088),0);
    *unaff_R14 = (fVar1 - fVar8) * *pfVar6 + fVar8;
  }
  return 1;
}



uint64_t FUN_1803b0047(uint64_t param_1)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  float *pfVar4;
  int64_t unaff_RDI;
  float *unaff_R14;
  uint64_t in_stack_00000088;
  
  lVar3 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b80);
  fVar1 = *(float *)(lVar3 + 0x154);
  fVar2 = *(float *)(lVar3 + 0x158);
  pfVar4 = (float *)FUN_1802a11e0(param_1,&stack0x00000030,in_stack_00000088,0);
  *unaff_R14 = (fVar2 - fVar1) * *pfVar4 + fVar1;
  return 1;
}



uint64_t FUN_1803b00ab(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float *unaff_R14;
  float extraout_XMM0_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float in_stack_00000088;
  float fStack000000000000008c;
  
  (**(code **)(in_RAX + 0x30))();
  iVar3 = *(int *)(unaff_RBX + 0x70);
  *unaff_R14 = 0.0;
  fStack000000000000008c = unaff_XMM8_Da / (float)iVar3;
  in_stack_00000088 = (unaff_XMM8_Da / extraout_XMM0_Da) * unaff_XMM7_Da * fStack000000000000008c;
  fStack000000000000008c =
       (unaff_XMM8_Da / extraout_XMM0_Da) * unaff_XMM6_Da * fStack000000000000008c;
  if (*(int64_t *)(unaff_RBX + 0x818) != 0) {
    lVar4 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b80);
    fVar1 = *(float *)(lVar4 + 0x154);
    fVar2 = *(float *)(lVar4 + 0x158);
    pfVar5 = (float *)FUN_1802a11e0(*(int64_t *)(unaff_RBX + 0x818),&stack0x00000030,
                                    CONCAT44(fStack000000000000008c,in_stack_00000088),0);
    *unaff_R14 = (fVar2 - fVar1) * *pfVar5 + fVar1;
  }
  return 1;
}



uint64_t FUN_1803b00c0(int64_t param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  
  plVar2 = *(int64_t **)(param_1 + 0x40);
  lVar8 = *plVar2;
  plVar7 = plVar2;
  if (lVar8 == 0) {
    plVar7 = plVar2 + 1;
    lVar8 = *plVar7;
    while (lVar8 == 0) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
  }
  lVar3 = plVar2[*(int64_t *)(param_1 + 0x48)];
  while (lVar8 != lVar3) {
    puVar4 = *(uint64_t **)(lVar8 + 8);
    if (puVar4 != (uint64_t *)0x0) {
      lVar5 = __RTCastToVoid(puVar4);
      (**(code **)*puVar4)(puVar4,0);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar5);
      }
    }
    *(uint64_t *)(lVar8 + 8) = 0;
    lVar8 = *(int64_t *)(lVar8 + 0x10);
    while (lVar8 == 0) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
  }
  FUN_18033ad00(param_1 + 0x38);
  *(uint64_t *)(param_1 + 0x14) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x1c) = 0xbf800000;
  plVar7 = (int64_t *)(param_1 + 0x138);
  lVar8 = 3;
  do {
    plVar2 = (int64_t *)plVar7[-3];
    plVar7[-3] = 0;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar2 = (int64_t *)*plVar7;
    *plVar7 = 0;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar7 = plVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar7 = *(int64_t **)(param_1 + 0x160);
  *(uint64_t *)(param_1 + 0x160) = 0;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar7 = *(int64_t **)(param_1 + 0x168);
  *(uint64_t *)(param_1 + 0x168) = 0;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar7 = *(int64_t **)(param_1 + 0x1c8);
  *(uint64_t *)(param_1 + 0x1c8) = 0;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar7 = *(int64_t **)(param_1 + 0x1d0);
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar7 = *(int64_t **)(param_1 + 0x1d8);
  *(uint64_t *)(param_1 + 0x1d8) = 0;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar7 = *(int64_t **)(param_1 + 0x1e0);
  *(uint64_t *)(param_1 + 0x1e0) = 0;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  FUN_1800ed380(param_1 + 0x188);
  *(uint64_t *)(param_1 + 0x68) = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = 0;
  uVar6 = (uint64_t)uVar1;
  UNLOCK();
  if (*(int64_t *)(param_1 + 0x1c58) == 0) {
    if (*(int64_t *)(param_1 + 0x1c50) != 0) {
      plVar7 = *(int64_t **)(param_1 + 0x1c50);
      *(uint64_t *)(param_1 + 0x1c50) = 0;
      if (plVar7 != (int64_t *)0x0) {
        uVar6 = (**(code **)(*plVar7 + 0x38))();
      }
    }
    return uVar6;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






