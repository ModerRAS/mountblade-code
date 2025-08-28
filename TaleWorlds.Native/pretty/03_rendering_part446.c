#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part446.c - 7 个函数

// 函数: void FUN_18050e967(uint64_t param_1,uint64_t param_2)
void FUN_18050e967(uint64_t param_1,uint64_t param_2)

{
  uint64_t *in_stack_00000098;
  
  *in_stack_00000098 = param_2;
  return;
}





// 函数: void FUN_18050e977(uint64_t param_1,uint64_t param_2)
void FUN_18050e977(uint64_t param_1,uint64_t param_2)

{
  uint64_t *in_stack_00000098;
  
  *in_stack_00000098 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short FUN_18050e990(longlong param_1,short param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  short sVar8;
  ulonglong uVar9;
  int iVar10;
  short sVar11;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
  sVar11 = 0;
  bVar4 = false;
  *param_3 = -1;
  lVar7 = (longlong)*(int *)(lVar2 + 0xf0) * 0xa0;
  iVar10 = *(int *)(lVar7 + 0x5c + *(longlong *)(lVar2 + 0xd0));
  iVar1 = *(int *)(lVar7 + 0x60 + *(longlong *)(lVar2 + 0xd0));
  if (0 < param_2) {
    do {
      if (iVar10 == iVar1) {
        lVar7 = *(longlong *)(param_1 + 0x8f8);
        iVar6 = *(int *)(lVar7 + 0x9e0);
        if ((iVar6 < 0) || (iVar10 != iVar1)) goto LAB_18050ea1f;
      }
      else {
LAB_18050ea1f:
        lVar7 = *(longlong *)(param_1 + 0x8f8);
        iVar6 = FUN_180537ef0(lVar7,lVar2);
      }
      if (iVar6 < 0) break;
      sVar5 = *(short *)((longlong)iVar6 * 0x1f8 + 0x10 + lVar7);
      sVar8 = sVar5;
      if ((short)(param_2 - sVar11) < sVar5) {
        sVar8 = param_2 - sVar11;
      }
      FUN_180537a80(lVar7,iVar6,sVar5 - sVar8);
      sVar11 = sVar11 + sVar8;
      *param_3 = iVar6;
      bVar4 = true;
    } while (sVar11 < param_2);
  }
  if (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >> 8
       & 1) != 0) && (*(short *)(lVar2 + 8) < 1)) {
    sVar5 = func_0x000180535060(lVar2);
    lVar2 = _DAT_180c8ece0;
    if (sVar5 == 1) {
      piVar3 = *(int **)(param_1 + 0x8f8);
      iVar10 = piVar3[0x278];
      iVar1 = *(int *)((longlong)*piVar3 * 0xa60 + 0x30b8 + *(longlong *)(piVar3 + 0x286));
      if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
      }
      (**(code **)(lVar2 + 0x70))(iVar1,iVar10);
      if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
      }
      FUN_18050e340((longlong)*piVar3 * 0xa60 + *(longlong *)(piVar3 + 0x286) + 0x30a0);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x638);
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x640);
      FUN_1805a3a20(param_1 + 0x28);
      uVar9 = uVar9 & 0xffffffff;
      if (iVar10 < 1) {
        uVar9 = 0xffffffff;
      }
      FUN_18050b440(param_1,0,uVar9,1,0);
    }
  }
  if (bVar4) {
    FUN_18050c1c0(param_1);
  }
  return sVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ebe0(longlong param_1,float param_2)
void FUN_18050ebe0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar11 = 0.0;
  fVar12 = 0.0;
  if ((((7 < *(uint *)(param_1 + 0x1fc)) ||
       ((0x91U >> (*(uint *)(param_1 + 0x1fc) & 0x1f) & 1) == 0)) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8), lVar4 != 0)) &&
     ((*(byte *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0)) >> 1
      & 1) != 0)) {
    fVar11 = *(float *)(param_1 + 0x3bc);
    fVar15 = *(float *)(param_1 + 0x3c4);
    fVar10 = *(float *)(param_1 + 0x3d0);
    fVar14 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x268) * 8) -
                    *(longlong *)(param_1 + 0x260)) * 1e-05;
    fVar1 = *(float *)(param_1 + 0x3cc);
    fStack_c4 = fVar14 + 3.0;
    fVar12 = *(float *)(param_1 + 0x3c0);
    fStack_c0 = fVar14 * 1.5;
    uStack_bc = 0x7f7fffff;
    fStack_c8 = fVar14;
    FUN_18046d350(&system_error_code,&fStack_c8,&fStack_b8);
    lVar7 = param_1;
    if (-1 < *(int *)(param_1 + 0x564)) {
      lVar7 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x564) * 0xa60;
    }
    lVar5 = *(longlong *)(lVar7 + 0x20);
    fVar2 = *(float *)(lVar5 + 0x50);
    fVar13 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x138);
    fVar16 = SQRT(*(float *)(lVar5 + 0x1c) * *(float *)(lVar5 + 0x1c) +
                  *(float *)(lVar5 + 0x20) * *(float *)(lVar5 + 0x20));
    if (*(longlong *)(param_1 + 0x280) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *(int32_t *)(*(longlong *)(param_1 + 0x280) + 0x1c);
    }
    lVar6 = FUN_18053a5a0(&system_data_5f30,*(int32_t *)(*(longlong *)(param_1 + 0x590) + 0xac),
                          uVar8);
    fVar9 = 1.0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
    if (lVar5 != 0) {
      fVar9 = (float)*(int *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x68 +
                             *(longlong *)(lVar5 + 0xd0)) * 0.01;
    }
    fVar9 = *(float *)(lVar6 + 0x188) / (fVar9 * *(float *)(param_1 + 0x3ac));
    if (lVar7 != param_1) {
      fVar13 = fVar13 + *(float *)(*(longlong *)(lVar7 + 0x20) + 0x138);
    }
    if (((*(byte *)(*(longlong *)(lVar7 + 0x20) + 0x40) & 1) == 0) ||
       ((iVar3 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2450), iVar3 != -1 &&
        (*(int *)((longlong)iVar3 * 0x68 + 0x58 + _DAT_180c96150) == 0x2e)))) {
      fVar16 = fVar16 + fVar2 * 0.75;
    }
    fVar16 = fVar16 / fVar2;
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    fVar12 = ABS(fVar13) * *(float *)(param_1 + 0x3d4) +
             fVar16 * ((fVar12 + fVar11) - fVar11) + fVar11;
    if (fVar1 <= 0.0) {
      if ((*(uint *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0))
           >> 8 & 1) == 0) {
        fVar11 = fVar9 + *(float *)(param_1 + 0x3c8);
        if (fVar9 <= fVar14) {
          if (fVar14 < fVar11) goto LAB_18050ef77;
        }
        else {
          fVar12 = fVar12 + fVar15;
        }
      }
    }
    else {
      fVar11 = fVar9 + *(float *)(param_1 + 0x3c8);
      if (fVar9 <= fVar14) {
        if (fVar14 < fVar11) {
LAB_18050ef77:
          fVar12 = fVar12 + ((fVar11 - fVar14) * fVar15) / fVar11;
        }
        else if (fVar11 + fVar1 < fVar14) {
          fVar11 = (fVar14 - (fVar11 + fVar1)) / (fVar10 - fVar1);
          if (1.0 <= fVar11) {
            fVar11 = 1.0;
          }
          fVar12 = fVar12 + fVar11 * fVar15;
        }
      }
      else {
        fVar12 = fVar12 + fVar15;
      }
    }
    fVar11 = ((fStack_b4 + fStack_b8) * 0.9 + 1.1) * fVar12 + (fStack_b4 + fStack_b8) * 0.2;
    fVar15 = 0.0;
    if (fVar12 < 0.0) goto LAB_18050efe7;
  }
  fVar15 = fVar12;
  if (0.25 <= fVar12) {
    fVar15 = 0.25;
  }
LAB_18050efe7:
  if (fVar11 <= fVar15) {
    fVar11 = fVar15;
  }
  fVar10 = param_2 * 5.0;
  fVar12 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b0);
  if (fVar12 < fVar15) {
    fVar10 = fVar10 + fVar10;
  }
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b0) = (fVar15 - fVar12) * fVar10 + fVar12;
  fVar12 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4);
  *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4) = (fVar11 - fVar12) * fVar10 + fVar12;
  fVar11 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4);
  if (1.0 < fVar11) {
    param_2 = param_2 * 50.0;
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4) = param_2 * (1.0 - fVar11) + fVar11;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ec04(longlong param_1,uint64_t param_2,float param_3,int32_t param_4,
void FUN_18050ec04(longlong param_1,uint64_t param_2,float param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong in_RAX;
  longlong lVar5;
  uint64_t unaff_RBX;
  longlong lVar6;
  uint64_t unaff_RDI;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  int32_t unaff_XMM6_Da;
  float fVar10;
  float fVar11;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fVar12;
  int32_t unaff_XMM8_Da;
  float fVar13;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar14;
  float fVar15;
  float in_stack_000000f0;
  float fStack0000000000000100;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  fVar10 = 0.0;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  if ((((7 < *(uint *)(param_1 + 0x1fc)) ||
       ((0x91U >> (*(uint *)(param_1 + 0x1fc) & 0x1f) & 1) == 0)) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8), lVar3 != 0)) &&
     ((*(byte *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0)) >> 1
      & 1) != 0)) {
    fStack0000000000000100 = *(float *)(param_1 + 0x3bc);
    fVar13 = *(float *)(param_1 + 0x3c4);
    fVar9 = *(float *)(param_1 + 0x3d0);
    fVar12 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x268) * 8) -
                    *(longlong *)(param_1 + 0x260)) * 1e-05;
    fVar1 = *(float *)(param_1 + 0x3cc);
    fVar10 = *(float *)(param_1 + 0x3c0);
    param_5._0_4_ = fVar12 * 1.5;
    param_5._4_4_ = 0x7f7fffff;
    FUN_18046d350(&system_error_code,&stack0x00000020,&param_6,param_4,fVar12);
    lVar6 = param_1;
    if (-1 < *(int *)(param_1 + 0x564)) {
      lVar6 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x564) * 0xa60;
    }
    lVar4 = *(longlong *)(lVar6 + 0x20);
    in_stack_000000f0 = *(float *)(lVar4 + 0x50);
    fVar11 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x138);
    fVar14 = SQRT(*(float *)(lVar4 + 0x1c) * *(float *)(lVar4 + 0x1c) +
                  *(float *)(lVar4 + 0x20) * *(float *)(lVar4 + 0x20));
    if (*(longlong *)(param_1 + 0x280) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(*(longlong *)(param_1 + 0x280) + 0x1c);
    }
    lVar5 = FUN_18053a5a0(&system_data_5f30,*(int32_t *)(*(longlong *)(param_1 + 0x590) + 0xac),
                          uVar7);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
    fVar8 = unaff_XMM10_Da;
    if (lVar4 != 0) {
      fVar8 = (float)*(int *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x68 +
                             *(longlong *)(lVar4 + 0xd0)) * 0.01;
    }
    fVar8 = *(float *)(lVar5 + 0x188) / (fVar8 * *(float *)(param_1 + 0x3ac));
    if (lVar6 != param_1) {
      fVar11 = fVar11 + *(float *)(*(longlong *)(lVar6 + 0x20) + 0x138);
    }
    if (((*(byte *)(*(longlong *)(lVar6 + 0x20) + 0x40) & 1) == 0) ||
       ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2450), iVar2 != -1 &&
        (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) == 0x2e)))) {
      fVar14 = fVar14 + in_stack_000000f0 * 0.75;
    }
    fVar15 = fVar14 / in_stack_000000f0;
    if (unaff_XMM10_Da <= fVar14 / in_stack_000000f0) {
      fVar15 = unaff_XMM10_Da;
    }
    fVar10 = ABS(fVar11) * *(float *)(param_1 + 0x3d4) +
             fVar15 * ((fVar10 + fStack0000000000000100) - fStack0000000000000100) +
             fStack0000000000000100;
    if (fVar1 <= 0.0) {
      if ((*(uint *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0))
           >> 8 & 1) == 0) {
        fVar11 = fVar8 + *(float *)(param_1 + 0x3c8);
        if (fVar8 <= fVar12) {
          if (fVar12 < fVar11) goto LAB_18050ef77;
        }
        else {
          fVar10 = fVar10 + fVar13;
        }
      }
    }
    else {
      fVar11 = fVar8 + *(float *)(param_1 + 0x3c8);
      if (fVar8 <= fVar12) {
        if (fVar12 < fVar11) {
LAB_18050ef77:
          fVar10 = fVar10 + ((fVar11 - fVar12) * fVar13) / fVar11;
        }
        else if (fVar11 + fVar1 < fVar12) {
          fVar9 = (fVar12 - (fVar11 + fVar1)) / (fVar9 - fVar1);
          if (unaff_XMM10_Da <= fVar9) {
            fVar9 = unaff_XMM10_Da;
          }
          fVar10 = fVar10 + fVar9 * fVar13;
        }
      }
      else {
        fVar10 = fVar10 + fVar13;
      }
    }
    param_3 = ((param_6._4_4_ + (float)param_6) * 0.9 + 1.1) * fVar10 +
              (param_6._4_4_ + (float)param_6) * 0.2;
    fVar13 = 0.0;
    if (fVar10 < 0.0) goto LAB_18050efe7;
  }
  fVar13 = fVar10;
  if (0.25 <= fVar10) {
    fVar13 = 0.25;
  }
LAB_18050efe7:
  if (param_3 <= fVar13) {
    param_3 = fVar13;
  }
  fVar9 = unaff_XMM9_Da * 5.0;
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b0);
  if (fVar10 < fVar13) {
    fVar9 = fVar9 + fVar9;
  }
  if (unaff_XMM10_Da <= fVar9) {
    fVar9 = unaff_XMM10_Da;
  }
  *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b0) = (fVar13 - fVar10) * fVar9 + fVar10;
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4);
  *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4) = (param_3 - fVar10) * fVar9 + fVar10;
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar10) {
    fVar13 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar13 = unaff_XMM10_Da;
    }
    *(float *)(*(longlong *)(param_1 + 0x728) + 0x5b4) = fVar13 * (unaff_XMM10_Da - fVar10) + fVar10
    ;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ec0b(longlong param_1,uint64_t param_2,float param_3,int32_t param_4,
void FUN_18050ec0b(longlong param_1,uint64_t param_2,float param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong in_RAX;
  longlong lVar5;
  longlong unaff_RBX;
  longlong lVar6;
  uint64_t unaff_RDI;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  int32_t unaff_XMM6_Da;
  float fVar10;
  float fVar11;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fVar12;
  int32_t unaff_XMM8_Da;
  float fVar13;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar14;
  float fVar15;
  float in_stack_000000f0;
  float fStack0000000000000100;
  
  *(uint64_t *)(in_RAX + -8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  fVar10 = 0.0;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  if ((((7 < *(uint *)(param_1 + 0x1fc)) ||
       ((0x91U >> (*(uint *)(param_1 + 0x1fc) & 0x1f) & 1) == 0)) &&
      (lVar3 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8), lVar3 != 0)) &&
     ((*(byte *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0)) >> 1
      & 1) != 0)) {
    fStack0000000000000100 = *(float *)(unaff_RBX + 0x3bc);
    fVar13 = *(float *)(unaff_RBX + 0x3c4);
    fVar9 = *(float *)(unaff_RBX + 0x3d0);
    fVar12 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x268) * 8) -
                    *(longlong *)(unaff_RBX + 0x260)) * 1e-05;
    fVar1 = *(float *)(unaff_RBX + 0x3cc);
    fVar10 = *(float *)(unaff_RBX + 0x3c0);
    param_5._0_4_ = fVar12 * 1.5;
    param_5._4_4_ = 0x7f7fffff;
    FUN_18046d350(&system_error_code,&stack0x00000020,&param_6,param_4,fVar12);
    lVar6 = unaff_RBX;
    if (-1 < *(int *)(unaff_RBX + 0x564)) {
      lVar6 = *(longlong *)(unaff_RBX + 0x8d8) + 0x30a0 +
              (longlong)*(int *)(unaff_RBX + 0x564) * 0xa60;
    }
    lVar4 = *(longlong *)(lVar6 + 0x20);
    in_stack_000000f0 = *(float *)(lVar4 + 0x50);
    fVar11 = *(float *)(*(longlong *)(unaff_RBX + 0x20) + 0x138);
    fVar14 = SQRT(*(float *)(lVar4 + 0x1c) * *(float *)(lVar4 + 0x1c) +
                  *(float *)(lVar4 + 0x20) * *(float *)(lVar4 + 0x20));
    if (*(longlong *)(unaff_RBX + 0x280) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(*(longlong *)(unaff_RBX + 0x280) + 0x1c);
    }
    lVar5 = FUN_18053a5a0(&system_data_5f30,*(int32_t *)(*(longlong *)(unaff_RBX + 0x590) + 0xac),
                          uVar7);
    lVar4 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8);
    fVar8 = unaff_XMM10_Da;
    if (lVar4 != 0) {
      fVar8 = (float)*(int *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x68 +
                             *(longlong *)(lVar4 + 0xd0)) * 0.01;
    }
    fVar8 = *(float *)(lVar5 + 0x188) / (fVar8 * *(float *)(unaff_RBX + 0x3ac));
    if (lVar6 != unaff_RBX) {
      fVar11 = fVar11 + *(float *)(*(longlong *)(lVar6 + 0x20) + 0x138);
    }
    if (((*(byte *)(*(longlong *)(lVar6 + 0x20) + 0x40) & 1) == 0) ||
       ((iVar2 = *(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2450), iVar2 != -1 &&
        (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) == 0x2e)))) {
      fVar14 = fVar14 + in_stack_000000f0 * 0.75;
    }
    fVar15 = fVar14 / in_stack_000000f0;
    if (unaff_XMM10_Da <= fVar14 / in_stack_000000f0) {
      fVar15 = unaff_XMM10_Da;
    }
    fVar10 = ABS(fVar11) * *(float *)(unaff_RBX + 0x3d4) +
             fVar15 * ((fVar10 + fStack0000000000000100) - fStack0000000000000100) +
             fStack0000000000000100;
    if (fVar1 <= 0.0) {
      if ((*(uint *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0))
           >> 8 & 1) == 0) {
        fVar11 = fVar8 + *(float *)(unaff_RBX + 0x3c8);
        if (fVar8 <= fVar12) {
          if (fVar12 < fVar11) goto LAB_18050ef77;
        }
        else {
          fVar10 = fVar10 + fVar13;
        }
      }
    }
    else {
      fVar11 = fVar8 + *(float *)(unaff_RBX + 0x3c8);
      if (fVar8 <= fVar12) {
        if (fVar12 < fVar11) {
LAB_18050ef77:
          fVar10 = fVar10 + ((fVar11 - fVar12) * fVar13) / fVar11;
        }
        else if (fVar11 + fVar1 < fVar12) {
          fVar9 = (fVar12 - (fVar11 + fVar1)) / (fVar9 - fVar1);
          if (unaff_XMM10_Da <= fVar9) {
            fVar9 = unaff_XMM10_Da;
          }
          fVar10 = fVar10 + fVar9 * fVar13;
        }
      }
      else {
        fVar10 = fVar10 + fVar13;
      }
    }
    param_3 = ((param_6._4_4_ + (float)param_6) * 0.9 + 1.1) * fVar10 +
              (param_6._4_4_ + (float)param_6) * 0.2;
    fVar13 = 0.0;
    if (fVar10 < 0.0) goto LAB_18050efe7;
  }
  fVar13 = fVar10;
  if (0.25 <= fVar10) {
    fVar13 = 0.25;
  }
LAB_18050efe7:
  if (param_3 <= fVar13) {
    param_3 = fVar13;
  }
  fVar9 = unaff_XMM9_Da * 5.0;
  fVar10 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b0);
  if (fVar10 < fVar13) {
    fVar9 = fVar9 + fVar9;
  }
  if (unaff_XMM10_Da <= fVar9) {
    fVar9 = unaff_XMM10_Da;
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b0) = (fVar13 - fVar10) * fVar9 + fVar10;
  fVar10 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4) = (param_3 - fVar10) * fVar9 + fVar10;
  fVar10 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar10) {
    fVar13 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar13 = unaff_XMM10_Da;
    }
    *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4) =
         fVar13 * (unaff_XMM10_Da - fVar10) + fVar10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ec90(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18050ec90(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  int iVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong unaff_RDI;
  int32_t uVar5;
  float in_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar14;
  float fStack0000000000000100;
  
  fVar9 = *(float *)(unaff_RBX + 0x3c4);
  fVar13 = *(float *)(unaff_RBX + 0x3d0);
  fVar12 = (float)(*(longlong *)(param_1 + in_RAX * 8) - *(longlong *)(unaff_RBX + 0x260)) * 1e-05;
  fVar8 = *(float *)(unaff_RBX + 0x3cc);
  fVar11 = *(float *)(unaff_RBX + 0x3c0);
  param_5._0_4_ = fVar12 * 1.5;
  param_5._4_4_ = 0x7f7fffff;
  fStack0000000000000100 = in_XMM0_Da;
  FUN_18046d350(param_1,&stack0x00000020,param_3,param_4,fVar12);
  lVar4 = unaff_RBX;
  if (-1 < *(int *)(unaff_RBX + 0x564)) {
    lVar4 = *(longlong *)(unaff_RBX + 0x8d8) + 0x30a0 +
            (longlong)*(int *)(unaff_RBX + 0x564) * 0xa60;
  }
  lVar2 = *(longlong *)(lVar4 + 0x20);
  fVar7 = *(float *)(lVar2 + 0x50);
  fVar10 = *(float *)(*(longlong *)(unaff_RBX + 0x20) + 0x138);
  fVar14 = SQRT(*(float *)(lVar2 + 0x1c) * *(float *)(lVar2 + 0x1c) +
                *(float *)(lVar2 + 0x20) * *(float *)(lVar2 + 0x20));
  if (*(longlong *)(unaff_RBX + 0x280) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(int32_t *)(*(longlong *)(unaff_RBX + 0x280) + 0x1c);
  }
  lVar3 = FUN_18053a5a0(&system_data_5f30,*(int32_t *)(*(longlong *)(unaff_RBX + 0x590) + 0xac),
                        uVar5);
  lVar2 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8);
  fVar6 = unaff_XMM10_Da;
  if (lVar2 != 0) {
    fVar6 = (float)*(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x68 +
                           *(longlong *)(lVar2 + 0xd0)) * 0.01;
  }
  fVar6 = *(float *)(lVar3 + 0x188) / (fVar6 * *(float *)(unaff_RBX + 0x3ac));
  if (lVar4 != unaff_RBX) {
    fVar10 = fVar10 + *(float *)(*(longlong *)(lVar4 + 0x20) + 0x138);
  }
  if (((*(byte *)(*(longlong *)(lVar4 + 0x20) + 0x40) & 1) == 0) ||
     ((iVar1 = *(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2450), iVar1 != -1 &&
      (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) == 0x2e)))) {
    fVar14 = fVar14 + fVar7 * 0.75;
  }
  fVar14 = fVar14 / fVar7;
  if (unaff_XMM10_Da <= fVar14) {
    fVar14 = unaff_XMM10_Da;
  }
  fVar11 = ABS(fVar10) * *(float *)(unaff_RBX + 0x3d4) +
           fVar14 * ((fVar11 + fStack0000000000000100) - fStack0000000000000100) +
           fStack0000000000000100;
  if (fVar8 <= unaff_XMM8_Da) {
    if ((*(uint *)((longlong)*(int *)(unaff_RDI + 0xf0) * 0xa0 + 0x50 +
                  *(longlong *)(unaff_RDI + 0xd0)) >> 8 & 1) != 0) goto LAB_18050ef8b;
    fVar7 = fVar6 + *(float *)(unaff_RBX + 0x3c8);
    if (fVar12 < fVar6) {
      fVar11 = fVar11 + fVar9;
      goto LAB_18050ef8b;
    }
    if (fVar7 <= fVar12) goto LAB_18050ef8b;
  }
  else {
    fVar7 = fVar6 + *(float *)(unaff_RBX + 0x3c8);
    if (fVar12 < fVar6) {
      fVar11 = fVar11 + fVar9;
      goto LAB_18050ef8b;
    }
    if (fVar7 <= fVar12) {
      if (fVar7 + fVar8 < fVar12) {
        fVar13 = (fVar12 - (fVar7 + fVar8)) / (fVar13 - fVar8);
        if (unaff_XMM10_Da <= fVar13) {
          fVar13 = unaff_XMM10_Da;
        }
        fVar11 = fVar11 + fVar13 * fVar9;
      }
      goto LAB_18050ef8b;
    }
  }
  fVar11 = fVar11 + ((fVar7 - fVar12) * fVar9) / fVar7;
LAB_18050ef8b:
  fVar9 = ((param_6._4_4_ + (float)param_6) * 0.9 + 1.1) * fVar11 +
          (param_6._4_4_ + (float)param_6) * 0.2;
  if ((unaff_XMM8_Da <= fVar11) && (unaff_XMM8_Da = fVar11, 0.25 <= fVar11)) {
    unaff_XMM8_Da = 0.25;
  }
  if (fVar9 <= unaff_XMM8_Da) {
    fVar9 = unaff_XMM8_Da;
  }
  fVar8 = unaff_XMM9_Da * 5.0;
  fVar13 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b0);
  if (fVar13 < unaff_XMM8_Da) {
    fVar8 = fVar8 + fVar8;
  }
  if (unaff_XMM10_Da <= fVar8) {
    fVar8 = unaff_XMM10_Da;
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b0) = (unaff_XMM8_Da - fVar13) * fVar8 + fVar13;
  fVar13 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4) = (fVar9 - fVar13) * fVar8 + fVar13;
  fVar9 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar9) {
    fVar13 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar13 = unaff_XMM10_Da;
    }
    *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4) = fVar13 * (unaff_XMM10_Da - fVar9) + fVar9
    ;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ee4a(uint64_t param_1,uint64_t param_2,float param_3,uint64_t param_4,
void FUN_18050ee4a(uint64_t param_1,uint64_t param_2,float param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  int iVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar2;
  float fVar3;
  float unaff_XMM6_Da;
  float fVar4;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float in_stack_000000f0;
  float in_stack_00000100;
  
  if (((*(byte *)(in_RAX + 0x40) & 1) == 0) ||
     ((iVar1 = *(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2450), iVar1 != -1 &&
      (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) == 0x2e)))) {
    unaff_XMM11_Da = unaff_XMM11_Da + in_stack_000000f0 * 0.75;
  }
  fVar4 = unaff_XMM11_Da / in_stack_000000f0;
  if (unaff_XMM10_Da <= unaff_XMM11_Da / in_stack_000000f0) {
    fVar4 = unaff_XMM10_Da;
  }
  fVar4 = ABS(unaff_XMM6_Da + *(float *)(in_RAX + 0x138)) * *(float *)(unaff_RBX + 0x3d4) +
          fVar4 * ((unaff_XMM15_Da + in_stack_00000100) - in_stack_00000100) + in_stack_00000100;
  if (unaff_XMM14_Da <= unaff_XMM8_Da) {
    if ((*(uint *)((longlong)*(int *)(unaff_RDI + 0xf0) * 0xa0 + 0x50 +
                  *(longlong *)(unaff_RDI + 0xd0)) >> 8 & 1) != 0) goto LAB_18050ef8b;
    fVar2 = param_3 + *(float *)(unaff_RBX + 0x3c8);
    if (unaff_XMM7_Da < param_3) {
      fVar4 = fVar4 + unaff_XMM12_Da;
      goto LAB_18050ef8b;
    }
    if (fVar2 <= unaff_XMM7_Da) goto LAB_18050ef8b;
  }
  else {
    fVar2 = param_3 + *(float *)(unaff_RBX + 0x3c8);
    if (unaff_XMM7_Da < param_3) {
      fVar4 = fVar4 + unaff_XMM12_Da;
      goto LAB_18050ef8b;
    }
    if (fVar2 <= unaff_XMM7_Da) {
      if (fVar2 + unaff_XMM14_Da < unaff_XMM7_Da) {
        fVar2 = (unaff_XMM7_Da - (fVar2 + unaff_XMM14_Da)) / (unaff_XMM13_Da - unaff_XMM14_Da);
        if (unaff_XMM10_Da <= fVar2) {
          fVar2 = unaff_XMM10_Da;
        }
        fVar4 = fVar4 + fVar2 * unaff_XMM12_Da;
      }
      goto LAB_18050ef8b;
    }
  }
  fVar4 = fVar4 + ((fVar2 - unaff_XMM7_Da) * unaff_XMM12_Da) / fVar2;
LAB_18050ef8b:
  fVar2 = ((param_6._4_4_ + (float)param_6) * 0.9 + 1.1) * fVar4 +
          (param_6._4_4_ + (float)param_6) * 0.2;
  if ((unaff_XMM8_Da <= fVar4) && (unaff_XMM8_Da = fVar4, 0.25 <= fVar4)) {
    unaff_XMM8_Da = 0.25;
  }
  if (fVar2 <= unaff_XMM8_Da) {
    fVar2 = unaff_XMM8_Da;
  }
  fVar3 = unaff_XMM9_Da * 5.0;
  fVar4 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b0);
  if (fVar4 < unaff_XMM8_Da) {
    fVar3 = fVar3 + fVar3;
  }
  if (unaff_XMM10_Da <= fVar3) {
    fVar3 = unaff_XMM10_Da;
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b0) = (unaff_XMM8_Da - fVar4) * fVar3 + fVar4;
  fVar4 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4) = (fVar2 - fVar4) * fVar3 + fVar4;
  fVar4 = *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar4) {
    fVar2 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar2 = unaff_XMM10_Da;
    }
    *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x5b4) = fVar2 * (unaff_XMM10_Da - fVar4) + fVar4;
  }
  return;
}





