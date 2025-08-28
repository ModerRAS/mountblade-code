#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 02_core_engine_part108.c - 6 个函数

// 函数: void FUN_180123f30(int param_1,int64_t param_2)
void FUN_180123f30(int param_1,int64_t param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int64_t lVar9;
  
  lVar9 = SYSTEM_DATA_MANAGER_A;
  iVar8 = *(int *)(param_2 + 0x16c);
  if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) != param_2) {
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1d09) = 0;
  }
  *(int *)(lVar9 + 0x1ca0) = param_1;
  *(int64_t *)(lVar9 + 0x1c98) = param_2;
  *(int *)(lVar9 + 0x1cfc) = iVar8;
  *(int *)(param_2 + 0x3c8 + (int64_t)iVar8 * 4) = param_1;
  if (*(int *)(param_2 + 0x144) == param_1) {
    fVar2 = *(float *)(param_2 + 0x150);
    fVar3 = *(float *)(param_2 + 0x44);
    fVar4 = *(float *)(param_2 + 0x154);
    fVar5 = *(float *)(param_2 + 0x40);
    fVar6 = *(float *)(param_2 + 0x158);
    fVar7 = *(float *)(param_2 + 0x44);
    pfVar1 = (float *)(param_2 + ((int64_t)iVar8 + 0x3d) * 0x10);
    *pfVar1 = *(float *)(param_2 + 0x14c) - *(float *)(param_2 + 0x40);
    pfVar1[1] = fVar2 - fVar3;
    pfVar1[2] = fVar4 - fVar5;
    pfVar1[3] = fVar6 - fVar7;
  }
  if (*(int *)(lVar9 + 0x1b60) == 2) {
    *(int8_t *)(lVar9 + 0x1d07) = 1;
    return;
  }
  *(int8_t *)(lVar9 + 0x1d06) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t Memory_GarbageCollector(float *param_1,int param_2,float *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char cVar6;
  float *pfVar7;
  uint64_t uVar8;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if (((param_2 != 0) &&
      (((*(uint *)(lVar1 + 0x178) = *(uint *)(lVar1 + 0x178) | *(uint *)(lVar1 + 0x170),
        *(int *)(lVar5 + 0x1ca0) == param_2 || (*(char *)(lVar5 + 0x1d08) != '\0')) &&
       (lVar2 = *(int64_t *)(lVar5 + 0x1c98),
       *(int64_t *)(lVar2 + 0x3b8) == *(int64_t *)(lVar1 + 0x3b8))))) &&
     ((lVar1 == lVar2 || (((*(uint *)(lVar2 + 0xc) | *(uint *)(lVar1 + 0xc)) >> 0x17 & 1) != 0)))) {
    pfVar7 = param_1;
    if (param_3 != (float *)0x0) {
      pfVar7 = param_3;
    }
    FUN_1801314c0(lVar1,pfVar7,param_2);
  }
  *(int *)(lVar1 + 0x144) = param_2;
  uVar3 = *(uint64_t *)param_1;
  uVar4 = *(uint64_t *)(param_1 + 2);
  *(int32_t *)(lVar1 + 0x148) = 0;
  *(uint64_t *)(lVar1 + 0x14c) = uVar3;
  *(uint64_t *)(lVar1 + 0x154) = uVar4;
  lVar2 = *(int64_t *)(lVar5 + 0x1af8);
  pfVar7 = (float *)(lVar2 + 0x228);
  if ((((*(float *)(lVar2 + 0x22c) <= param_1[3] && param_1[3] != *(float *)(lVar2 + 0x22c)) &&
       (param_1[1] < *(float *)(lVar2 + 0x234))) &&
      ((*pfVar7 <= param_1[2] && param_1[2] != *pfVar7 && (*param_1 < *(float *)(lVar2 + 0x230)))))
     || (((param_2 != 0 && (param_2 == *(int *)(lVar5 + 0x1b2c))) ||
         (*(char *)(lVar5 + 0x2e38) != '\0')))) {
    uVar8 = 1;
    cVar6 = SystemCore_HashCalculator(param_1,param_1 + 2,1);
    if (cVar6 != '\0') {
      *(uint *)(lVar1 + 0x148) = *(uint *)(lVar1 + 0x148) | 1;
    }
    uVar8 = uVar8 & 0xff;
  }
  else {
    uVar8 = (uint64_t)pfVar7 & 0xffffffffffffff00;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801242c0(uint param_1)

{
  uint uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  
  uVar3 = (uint64_t)param_1;
  lVar2 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d07) == '\0') || (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d06) != '\0'))
  {
    if (((*(byte *)(lVar2 + 0x148) & 1) == 0) ||
       ((in_RAX = *(uint64_t *)(lVar2 + 0x3a0), *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b08) != in_RAX
        && ((param_1 & 0x40) == 0)))) goto LAB_180124390;
    if ((param_1 & 0x20) == 0) {
      uVar1 = *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
      in_RAX = (uint64_t)uVar1;
      if ((((uVar1 != 0) && (uVar1 != *(uint *)(lVar2 + 0x144))) &&
          (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1b3d) == '\0')) && (uVar1 != *(uint *)(lVar2 + 0x84)))
      goto LAB_180124390;
    }
    in_RAX = func_0x000180124000(lVar2,uVar3);
    if (((char)in_RAX == '\0') || (((*(byte *)(lVar2 + 0x1a8) & 4) != 0 && (-1 < (char)uVar3))))
    goto LAB_180124390;
    uVar1 = *(uint *)(lVar2 + 0x144);
    in_RAX = (uint64_t)uVar1;
    if (uVar1 != *(uint *)(lVar2 + 8)) {
      bVar4 = uVar1 == *(uint *)(lVar2 + 0x84);
      goto LAB_18012437e;
    }
  }
  else {
    if (*(uint *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) == 0) goto LAB_180124390;
    uVar1 = *(uint *)(lVar2 + 0x144);
    in_RAX = (uint64_t)uVar1;
    if (*(uint *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) != uVar1) goto LAB_180124390;
    bVar4 = uVar1 == *(uint *)(lVar2 + 8);
LAB_18012437e:
    if (!bVar4) goto LAB_180124389;
  }
  if (*(char *)(lVar2 + 0xb1) != '\0') {
LAB_180124390:
    return in_RAX & 0xffffffffffffff00;
  }
LAB_180124389:
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801243a0(int64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  
  if ((((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b18) == 0) || (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b18) == param_2))
      || (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1b1c) != '\0')) &&
     (lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8),
     *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b00) == lVar1)) {
    if (((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == 0) || (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == param_2))
       || (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1b3d) != '\0')) {
      lVar3 = SYSTEM_DATA_MANAGER_A;
      cVar2 = SystemCore_HashCalculator(param_1,param_1 + 8,1);
      if ((cVar2 != '\0') && (*(char *)(lVar3 + 0x1d07) == '\0')) {
        cVar2 = func_0x000180124000(lVar1,0);
        if ((cVar2 != '\0') && ((*(byte *)(lVar1 + 0x1a8) & 4) == 0)) {
          *(int *)(lVar3 + 0x1b18) = param_2;
          *(int8_t *)(lVar3 + 0x1b1c) = 0;
          if ((param_2 != 0) && (*(int *)(lVar3 + 0x1b20) != param_2)) {
            *(uint64_t *)(lVar3 + 0x1b24) = 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180124460(int64_t param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  iVar3 = *(int *)(param_1 + 0x3f0) + 1;
  *(int *)(param_1 + 0x3f0) = iVar3;
  uVar5 = *(uint *)(param_1 + 0x1a8) & 5;
  if (uVar5 == 0) {
    *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
  }
  if (((((param_3 != '\0') && (*(int *)(lVar4 + 0x1b2c) == param_2)) &&
       (*(int *)(param_1 + 0x400) == 0x7fffffff)) &&
      ((*(int *)(param_1 + 0x404) == 0x7fffffff && (*(char *)(lVar4 + 0x134) == '\0')))) &&
     (-1 < *(int *)(lVar4 + 0x3c))) {
    cVar1 = func_0x0001801281d0(*(int *)(lVar4 + 0x3c),1);
    if (cVar1 != '\0') {
      if (*(char *)(lVar4 + 0x135) == '\0') {
        iVar2 = 1;
      }
      else {
        iVar2 = (uVar5 != 0) - 1;
      }
      *(int *)(param_1 + 0x404) = iVar2 + *(int *)(param_1 + 0x3f4);
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x3f8)) {
    if ((uVar5 != 0) || (*(int *)(param_1 + 0x3f4) != *(int *)(param_1 + 0x3fc))) {
      return 0;
    }
    *(int *)(lVar4 + 0x1cb4) = param_2;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180124550(uint64_t *param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  uint64_t uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  uint64_t uStackX_8;
  
  fVar8 = 0.0;
  uStackX_8._4_4_ = (float)((uint64_t)param_2 >> 0x20);
  fVar4 = uStackX_8._4_4_;
  fVar7 = 0.0;
  uStackX_8._0_4_ = (float)param_2;
  if (((float)uStackX_8 < 0.0) || (uStackX_8._4_4_ < 0.0)) {
    lVar2 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    lVar3 = *(int64_t *)(lVar2 + 0x210);
    fVar7 = *(float *)(lVar2 + 0x278) - *(float *)(lVar2 + 0x40);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0xc) + 1;
      iVar6 = *(int *)(lVar3 + 0xc);
      if (-1 < iVar1) {
        iVar6 = iVar1;
      }
      fVar7 = ((*(float *)(lVar3 + 0x18) - *(float *)(lVar3 + 0x14)) *
               *(float *)((int64_t)iVar6 * 0x1c + *(int64_t *)(lVar3 + 0x38)) +
              *(float *)(lVar3 + 0x14)) - *(float *)(lVar2 + 0x70);
    }
    fVar7 = fVar7 + *(float *)(lVar2 + 0x40);
    fVar8 = (*(float *)(lVar2 + 0x27c) - *(float *)(lVar2 + 0x44)) + *(float *)(lVar2 + 0x44);
  }
  uVar5 = param_2;
  if ((float)uStackX_8 <= 0.0) {
    if ((float)uStackX_8 == 0.0) {
      uStackX_8 = CONCAT44(uStackX_8._4_4_,param_3);
      uVar5 = uStackX_8;
    }
    else {
      fVar7 = fVar7 - *(float *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x100);
      if (fVar7 <= 4.0) {
        fVar7 = 4.0;
      }
      uStackX_8 = CONCAT44(uStackX_8._4_4_,(float)uStackX_8 + fVar7);
      uVar5 = uStackX_8;
    }
  }
  uStackX_8 = uVar5;
  if (fVar4 <= 0.0) {
    if (fVar4 != 0.0) {
      fVar8 = fVar8 - *(float *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x104);
      if (fVar8 <= 4.0) {
        fVar8 = 4.0;
      }
      *param_1 = CONCAT44(fVar4 + fVar8,(int)uStackX_8);
      return param_1;
    }
    uStackX_8 = CONCAT44(param_4,(int)uStackX_8);
  }
  *param_1 = uStackX_8;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180124730(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uStackX_8;
  int64_t lStackX_10;
  uint64_t *puStackX_18;
  int64_t lStackX_20;
  
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  uStackX_8 = param_1;
  lStackX_10 = func_0x000180120ce0(0x3c58,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  puStackX_18 = &uStackX_8;
  lStackX_20 = lStackX_10;
  if (lStackX_10 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18011ff60(lStackX_10);
  }
  if (SYSTEM_DATA_MANAGER_A == 0) {
    SYSTEM_DATA_MANAGER_A = lVar1;
  }
  FUN_1801260f0(lVar1);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801247c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int8_t auStackX_8 [8];
  int64_t lStackX_10;
  int8_t *puStackX_18;
  int64_t lStackX_20;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  lVar2 = 0;
  if (*(int64_t *)(param_1 + 0x80) == 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    lStackX_10 = func_0x000180120ce0(0xa8,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
    puStackX_18 = auStackX_8;
    lStackX_20 = lStackX_10;
    if (lStackX_10 != 0) {
      lVar2 = FUN_18011fa30(lStackX_10,lVar1 + 0x1a00);
    }
    *(int64_t *)(param_1 + 0x80) = lVar2;
    *(void **)(lVar2 + 0x40) = &rendering_buffer_2408_ptr;
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(lVar1 + 0x1a90)) {
    FUN_180291500(*(uint64_t *)(param_1 + 0x80));
    RenderingSystem_TextureLoader(*(uint64_t *)(param_1 + 0x80),*(uint64_t *)(*(int64_t *)(lVar1 + 0xa0) + 8));
    FUN_180291b40(*(uint64_t *)(param_1 + 0x80),*(uint64_t *)(param_1 + 8),
                  CONCAT44(*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14),
                           *(float *)(param_1 + 8) + *(float *)(param_1 + 0x10)),0);
    *(uint *)(*(int64_t *)(param_1 + 0x80) + 0x30) =
         -(uint)(*(char *)(lVar1 + 0x16c1) != '\0') & 2 | (uint)(*(char *)(lVar1 + 0x16c0) != '\0');
    *(int32_t *)(param_1 + 0x58) = *(int32_t *)(lVar1 + 0x1a90);
  }
  return *(uint64_t *)(param_1 + 0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801248f0(int64_t param_1)
void FUN_1801248f0(int64_t param_1)

{
  float fVar1;
  int64_t lVar2;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  SystemCore_DataCompressor();
  func_0x000180123e90(*(int32_t *)(param_1 + 0x84),param_1);
  *(int8_t *)(lVar2 + 0x1d06) = 1;
  fVar1 = *(float *)(*(int64_t *)(param_1 + 0x3a0) + 0x44);
  *(float *)(lVar2 + 0x1b48) =
       *(float *)(lVar2 + 0x118) - *(float *)(*(int64_t *)(param_1 + 0x3a0) + 0x40);
  *(float *)(lVar2 + 0x1b4c) = *(float *)(lVar2 + 0x11c) - fVar1;
  if (((*(byte *)(param_1 + 0xc) & 4) == 0) &&
     ((*(byte *)(*(int64_t *)(param_1 + 0x3a0) + 0xc) & 4) == 0)) {
    *(int64_t *)(lVar2 + 0x1b78) = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180124980(void)
void FUN_180124980(void)

{
  uint *puVar1;
  int *piVar2;
  int64_t lVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t unaff_RDI;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  uint64_t uStackX_8;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  lVar8 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78);
  if (lVar8 == 0) {
    if ((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b50) != 0) &&
       (iVar7 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c),
       *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b50) + 0x84) == iVar7)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar7;
      if (*(int *)(lVar5 + 0x1b30) == iVar7) {
        *(int8_t *)(lVar5 + 0x1b3f) = 1;
      }
      if (*(char *)(lVar5 + 0x120) == '\0') {
        *(bool *)(lVar5 + 0x1b3c) = iVar7 != 0;
        if (iVar7 != 0) {
          *(int32_t *)(lVar5 + 0x1b38) = 0;
          *(int8_t *)(lVar5 + 0x1b3e) = 0;
        }
        *(int32_t *)(lVar5 + 0x1b2c) = 0;
        *(int32_t *)(lVar5 + 0x1b44) = 0;
        *(int8_t *)(lVar5 + 0x1b3d) = 0;
        *(uint64_t *)(lVar5 + 0x1b50) = 0;
      }
    }
    return;
  }
  piVar2 = (int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = *piVar2;
  if (*(int *)(lVar5 + 0x1b30) == *piVar2) {
    *(int8_t *)(lVar5 + 0x1b3f) = 1;
  }
  lVar8 = *(int64_t *)(lVar8 + 0x3a0);
  if (((*(char *)(lVar5 + 0x120) != '\0') && (-256000.0 <= *(float *)(lVar5 + 0x118))) &&
     (-256000.0 <= *(float *)(lVar5 + 0x11c))) {
    fVar10 = *(float *)(lVar5 + 0x118) - *(float *)(lVar5 + 0x1b48);
    fVar9 = *(float *)(lVar5 + 0x11c) - *(float *)(lVar5 + 0x1b4c);
    uStackX_8 = CONCAT44(fVar9,fVar10);
    if ((fVar10 != *(float *)(lVar8 + 0x40)) || (fVar9 != *(float *)(lVar8 + 0x44))) {
      if (((*(uint *)(lVar8 + 0xc) & 0x100) == 0) && (*(float *)(lVar5 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar5 + 0x2e04) = *(int32_t *)(lVar5 + 0x1c);
      }
      func_0x00018012ddc0(lVar8,&uStackX_8,1);
      if (*(char *)(lVar8 + 0xae) != '\0') {
        *(uint64_t *)(*(int64_t *)(lVar8 + 0x28) + 8) = uStackX_8;
      }
    }
    lVar3 = SYSTEM_DATA_MANAGER_A;
    lVar8 = *(int64_t *)(lVar5 + 0x1b78);
    uVar4 = 0;
    if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) != lVar8) {
      *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) = lVar8;
      if ((lVar8 != 0) && (*(char *)(lVar3 + 0x1d07) != '\0')) {
        *(int8_t *)(lVar3 + 0x1d05) = 1;
      }
      *(int8_t *)(lVar3 + 0x1d09) = 0;
      if (lVar8 != 0) {
        uVar4 = *(int32_t *)(lVar8 + 0x3c8);
      }
      *(int32_t *)(lVar3 + 0x1ca0) = uVar4;
      *(int8_t *)(lVar3 + 0x1d04) = 0;
      *(int32_t *)(lVar3 + 0x1cfc) = 0;
    }
    if (lVar8 != 0) {
      if ((*(int64_t *)(lVar8 + 0x408) != 0) &&
         (lVar5 = *(int64_t *)(*(int64_t *)(lVar8 + 0x408) + 0x30), lVar5 != 0)) {
        *(int32_t *)(lVar5 + 0x18) = *(int32_t *)(lVar8 + 8);
        lVar5 = *(int64_t *)(*(int64_t *)(lVar8 + 0x408) + 0x30);
        *(int32_t *)(lVar5 + 0x14) = *(int32_t *)(lVar5 + 0x18);
      }
      if (*(int64_t *)(lVar8 + 0x3a0) != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x3a0);
      }
      if (((((*(uint *)(lVar8 + 0xc) & 0x4000000) != 0) && (*(int *)(lVar3 + 0x1b2c) != 0)) &&
          (*(int64_t *)(lVar3 + 0x1b50) != 0)) &&
         (*(int64_t *)(*(int64_t *)(lVar3 + 0x1b50) + 0x3a0) != lVar8)) {
        *(int16_t *)(lVar3 + 0x1b3c) = 1;
        *(int32_t *)(lVar3 + 0x1b38) = 0;
        *(int8_t *)(lVar3 + 0x1b3e) = 0;
        *(int32_t *)(lVar3 + 0x1b2c) = 0;
        *(int32_t *)(lVar3 + 0x1b44) = 0;
        *(uint64_t *)(lVar3 + 0x1b50) = 0;
      }
      if ((*(int64_t *)
            (*(int64_t *)(lVar3 + 0x1ab8) + -8 + (int64_t)*(int *)(lVar3 + 0x1ab0) * 8) != lVar8)
         && (iVar7 = *(int *)(lVar3 + 0x1ab0) + -2, -1 < iVar7)) {
        lVar5 = (int64_t)iVar7;
        plVar6 = (int64_t *)(*(int64_t *)(lVar3 + 0x1ab8) + lVar5 * 8);
        do {
          if (*plVar6 == lVar8) {
                    // WARNING: Subroutine does not return
            memmove(*(int64_t *)(lVar3 + 0x1ab8) + (int64_t)iVar7 * 8,
                    *(int64_t *)(lVar3 + 0x1ab8) + (int64_t)(iVar7 + 1) * 8,
                    (int64_t)((*(int *)(lVar3 + 0x1ab0) - iVar7) + -1) << 3,(int64_t)iVar7,
                    unaff_RDI);
          }
          iVar7 = iVar7 + -1;
          plVar6 = plVar6 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
      if ((*(uint *)(lVar8 + 0xc) & 0x2000) == 0) {
        FUN_18012d230(lVar8);
      }
    }
    return;
  }
  if ((*(uint *)(lVar5 + 0x19e8) & 0x400) != 0) {
    FUN_18012fbd0(lVar8,*(uint64_t *)(lVar5 + 0x1c80));
  }
  if ((*(char *)(lVar5 + 0x1dd0) == '\0') || (*(int *)(lVar5 + 0x1e40) == 0)) {
    *(uint64_t *)(lVar5 + 0x1c80) = *(uint64_t *)(lVar8 + 0x28);
  }
  puVar1 = (uint *)(*(int64_t *)(lVar8 + 0x28) + 4);
  *puVar1 = *puVar1 & 0xfffffff7;
  *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
  if (*(int *)(lVar5 + 0x1b2c) != 0) {
    *(int32_t *)(lVar5 + 0x1b38) = 0;
    *(int8_t *)(lVar5 + 0x1b3e) = 0;
  }
  *(int32_t *)(lVar5 + 0x1b2c) = 0;
  *(int32_t *)(lVar5 + 0x1b44) = 0;
  *(int8_t *)(lVar5 + 0x1b3d) = 0;
  *(uint64_t *)(lVar5 + 0x1b50) = 0;
  *(uint64_t *)(lVar5 + 0x1b78) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180124b90(void)
void FUN_180124b90(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t *plVar11;
  bool bVar12;
  float fVar13;
  
  lVar8 = SYSTEM_DATA_MANAGER_A;
  if (((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == 0) && (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b18) == 0)) &&
     ((lVar5 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98), lVar5 == 0 ||
      (*(char *)(lVar5 + 0xb5) == '\0')))) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x410) != '\0') {
      if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b08) == 0) {
        if ((lVar5 != 0) && (lVar5 = func_0x00018012ea90(), lVar5 == 0)) {
          *(uint64_t *)(lVar8 + 0x1c98) = 0;
          *(int8_t *)(lVar8 + 0x1d09) = 0;
          *(int32_t *)(lVar8 + 0x1ca0) = 0;
          *(int8_t *)(lVar8 + 0x1d04) = 0;
          *(int32_t *)(lVar8 + 0x1cfc) = 0;
        }
      }
      else {
        FUN_1801248f0(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b00));
        if (*(char *)(lVar8 + 0xcc) != '\0') {
          lVar5 = *(int64_t *)(lVar8 + 0x1b08);
          uVar9 = *(uint *)(lVar5 + 0xc) & 1;
          if ((uVar9 == 0) ||
             ((*(byte *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x1b00) + 0x3a8) + 0x432) & 1) != 0)) {
            if (uVar9 == 0) {
              fVar13 = *(float *)(lVar8 + 0x19fc) * *(float *)(lVar5 + 0x2d8) *
                       *(float *)(lVar5 + 0x2dc) +
                       *(float *)(lVar8 + 0x1660) + *(float *)(lVar8 + 0x1660);
            }
            else {
              fVar13 = 0.0;
            }
            if ((((*(float *)(lVar8 + 0x3bc) < *(float *)(lVar5 + 0x40)) ||
                 (*(float *)(lVar8 + 0x3c0) < *(float *)(lVar5 + 0x44))) ||
                (*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x50) <= *(float *)(lVar8 + 0x3bc)))
               || (fVar13 + *(float *)(lVar5 + 0x44) <= *(float *)(lVar8 + 0x3c0))) {
              *(uint64_t *)(lVar8 + 0x1b78) = 0;
            }
          }
        }
      }
    }
    if (*(char *)(lVar8 + 0x411) != '\0') {
      lVar5 = func_0x00018012ea90();
      lVar3 = SYSTEM_DATA_MANAGER_A;
      bVar12 = lVar5 == 0;
      iVar4 = *(int *)(lVar8 + 0x1aa0) + -1;
      if (-1 < iVar4) {
        lVar10 = (int64_t)iVar4;
        do {
          if (bVar12) goto LAB_180124d2b;
          lVar1 = *(int64_t *)(*(int64_t *)(lVar8 + 0x1aa8) + lVar10 * 8);
          if (lVar1 == lVar5) goto LAB_180124d32;
          if (lVar1 == *(int64_t *)(lVar8 + 0x1b00)) {
            bVar12 = true;
          }
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      if (bVar12) {
LAB_180124d2b:
        lVar5 = *(int64_t *)(lVar8 + 0x1b00);
      }
LAB_180124d32:
      iVar4 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0);
      if (iVar4 != 0) {
        iVar7 = 0;
        if ((lVar5 != 0) && (iVar7 = 0, 0 < iVar4)) {
          lVar8 = 0;
          plVar11 = (int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + 8);
          iVar7 = 0;
          do {
            if ((*plVar11 != 0) && ((*(uint *)(*plVar11 + 0xc) & 0x1000000) == 0)) {
              bVar12 = false;
              plVar6 = plVar11;
              lVar10 = lVar8;
              if (iVar4 <= lVar8) break;
              do {
                if (bVar12) goto LAB_18012edb4;
                if ((*plVar6 != 0) &&
                   (*(int64_t *)(*plVar6 + 0x3a0) == *(int64_t *)(lVar5 + 0x3a0))) {
                  bVar12 = true;
                }
                lVar10 = lVar10 + 1;
                plVar6 = plVar6 + 6;
              } while (lVar10 < iVar4);
              if (!bVar12) break;
            }
LAB_18012edb4:
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 1;
            plVar11 = plVar11 + 6;
          } while (iVar7 < iVar4);
        }
        if (iVar7 < iVar4) {
          iVar4 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb4);
          if (iVar4 < iVar7) {
            if (iVar4 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar4 / 2 + iVar4;
            }
            iVar2 = iVar7;
            if (iVar7 < iVar4) {
              iVar2 = iVar4;
            }
            RenderingEngine_Renderer(SYSTEM_DATA_MANAGER_A + 0x1bb0,iVar2);
          }
          *(int *)(lVar3 + 0x1bb0) = iVar7;
        }
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180124e30(void)
void FUN_180124e30(void)

{
  float *pfVar1;
  int64_t lVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  char *pcVar6;
  int64_t lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fStackX_8;
  float fStackX_c;
  float afStackX_10 [3];
  float fStackX_1c;
  float afStackX_20 [2];
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  pfVar1 = (float *)(SYSTEM_DATA_MANAGER_A + 0x118);
  if ((-256000.0 <= *pfVar1) && (pfVar8 = (float *)(SYSTEM_DATA_MANAGER_A + 0x11c), -256000.0 <= *pfVar8))
  {
    fVar9 = (float)(int)*pfVar1;
    *(float *)(SYSTEM_DATA_MANAGER_A + 0x1b6c) = fVar9;
    *pfVar1 = fVar9;
    fVar9 = (float)(int)*pfVar8;
    *(float *)(lVar2 + 0x1b70) = fVar9;
    *(float *)(lVar2 + 0x11c) = fVar9;
  }
  if ((-256000.0 < *(float *)(lVar2 + 0x118) || *(float *)(lVar2 + 0x118) == -256000.0) &&
     (-256000.0 < *(float *)(lVar2 + 0x11c) || *(float *)(lVar2 + 0x11c) == -256000.0)) {
    pfVar8 = (float *)(lVar2 + 0x3b4);
    pfVar4 = pfVar8;
    if (pfVar8 == (float *)0x0) {
      pfVar4 = (float *)(lVar2 + 0x118);
    }
    if ((-256000.0 < *pfVar4 || *pfVar4 == -256000.0) &&
       (-256000.0 < pfVar4[1] || pfVar4[1] == -256000.0)) {
      fVar9 = *pfVar1 - *pfVar8;
      fVar10 = *(float *)(lVar2 + 0x11c) - *(float *)(lVar2 + 0x3b8);
      goto LAB_180124eff;
    }
  }
  fVar9 = 0.0;
  fVar10 = 0.0;
LAB_180124eff:
  *(float *)(lVar2 + 0x3ac) = fVar9;
  *(float *)(lVar2 + 0x3b0) = fVar10;
  if ((*(float *)(lVar2 + 0x3ac) != 0.0) || (fVar10 != 0.0)) {
    *(int8_t *)(lVar2 + 0x1d07) = 0;
  }
  pcVar6 = (char *)(lVar2 + 0x120);
  pfVar8 = (float *)(lVar2 + 0x424);
  pfVar4 = (float *)(lVar2 + 0x3c0);
  lVar7 = 5;
  *(uint64_t *)(lVar2 + 0x3b4) = *(uint64_t *)pfVar1;
  do {
    cVar3 = '\x01';
    if ((*pcVar6 == '\0') || (0.0 < *pfVar8 || *pfVar8 == 0.0)) {
      cVar3 = '\0';
    }
    pcVar6[0x2f0] = cVar3;
    if ((*pcVar6 != '\0') || (*pfVar8 <= 0.0 && *pfVar8 != 0.0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    pcVar6[0x2fa] = cVar3;
    fVar9 = *pfVar8;
    pfVar8[5] = fVar9;
    if (*pcVar6 == '\0') {
      fVar9 = -1.0;
    }
    else if (0.0 <= fVar9) {
      fVar9 = fVar9 + *(float *)(lVar2 + 0x18);
    }
    else {
      fVar9 = 0.0;
    }
    *pfVar8 = fVar9;
    pcVar6[0x2f5] = '\0';
    if (pcVar6[0x2f0] == '\0') {
      if (*pcVar6 != '\0') {
        if ((*(float *)(lVar2 + 0x118) <= -256000.0 && *(float *)(lVar2 + 0x118) != -256000.0) ||
           (*(float *)(lVar2 + 0x11c) <= -256000.0 && *(float *)(lVar2 + 0x11c) != -256000.0)) {
          afStackX_20[0] = 0.0;
          afStackX_20[1] = 0.0;
          pfVar5 = afStackX_20;
        }
        else {
          pfVar5 = afStackX_10 + 2;
          afStackX_10[2] = *pfVar1 - pfVar4[-1];
          fStackX_1c = *(float *)(lVar2 + 0x11c) - *pfVar4;
        }
        fVar9 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar11 = fVar10 * fVar10 + fVar9 * fVar9;
        if (fVar11 <= pfVar8[0x14]) {
          fVar11 = pfVar8[0x14];
        }
        pfVar8[0x14] = fVar11;
        fVar11 = ABS(fVar9);
        if (ABS(fVar9) <= pfVar4[0x23]) {
          fVar11 = pfVar4[0x23];
        }
        fVar9 = ABS(fVar10);
        if (ABS(fVar10) <= pfVar4[0x24]) {
          fVar9 = pfVar4[0x24];
        }
        pfVar4[0x23] = fVar11;
        pfVar4[0x24] = fVar9;
      }
    }
    else {
      dVar12 = *(double *)(lVar2 + 0x1a88);
      if ((float)(dVar12 - *(double *)(pfVar4 + 10)) < *(float *)(lVar2 + 0x30)) {
        if ((*(float *)(lVar2 + 0x118) <= -256000.0 && *(float *)(lVar2 + 0x118) != -256000.0) ||
           (*(float *)(lVar2 + 0x11c) <= -256000.0 && *(float *)(lVar2 + 0x11c) != -256000.0)) {
          afStackX_10[0] = 0.0;
          afStackX_10[1] = 0.0;
          pfVar5 = afStackX_10;
        }
        else {
          pfVar5 = &fStackX_8;
          fStackX_8 = *pfVar1 - pfVar4[-1];
          fStackX_c = *(float *)(lVar2 + 0x11c) - *pfVar4;
        }
        dVar12 = -3.4028234663852886e+38;
        cVar3 = pcVar6[0x2f5];
        if (pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5 <
            *(float *)(lVar2 + 0x34) * *(float *)(lVar2 + 0x34)) {
          cVar3 = '\x01';
        }
        pcVar6[0x2f5] = cVar3;
      }
      *(double *)(pfVar4 + 10) = dVar12;
      *(uint64_t *)(pfVar4 + -1) = *(uint64_t *)pfVar1;
      pfVar4[0x23] = 0.0;
      pfVar4[0x24] = 0.0;
      pfVar8[0x14] = 0.0;
    }
    if (pcVar6[0x2f0] != '\0') {
      *(int8_t *)(lVar2 + 0x1d07) = 0;
    }
    pfVar8 = pfVar8 + 1;
    pcVar6 = pcVar6 + 1;
    pfVar4 = pfVar4 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125180(void)
void FUN_180125180(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b00);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0xb2) == '\0')) &&
     ((fVar6 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x128), fVar6 != 0.0 ||
      (*(float *)(SYSTEM_DATA_MANAGER_A + 300) != 0.0)))) {
    uVar5 = *(uint *)(lVar1 + 0xc);
    lVar3 = lVar1;
    while ((((uVar5 >> 0x18 & 1) != 0 && ((uVar5 & 0x218) == 0x10)) &&
           (lVar2 = *(int64_t *)(lVar3 + 0x398), lVar2 != 0))) {
      uVar5 = *(uint *)(lVar2 + 0xc);
      lVar3 = lVar2;
    }
    uVar5 = *(uint *)(lVar3 + 0xc) & 0x210;
    if (fVar6 != 0.0) {
      if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x134) == '\0') {
        if (uVar5 == 0) {
          fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                  *(float *)(lVar3 + 0x2dc) * 5.0;
          fVar8 = *(float *)(lVar3 + 0x90);
          fVar9 = (*(float *)(lVar3 + 0x27c) - *(float *)(lVar3 + 0x274)) * 0.67 +
                  *(float *)(lVar3 + 0x74) * 1.34;
          if (fVar7 <= fVar9) {
            fVar9 = fVar7;
          }
          fVar6 = fVar8 - (float)(int)fVar9 * fVar6;
          *(float *)(lVar3 + 0x90) = fVar6;
          *(float *)(lVar3 + 0x11c) = (fVar8 + *(float *)(lVar3 + 0x11c)) - fVar6;
        }
      }
      else if (*(char *)(SYSTEM_DATA_MANAGER_A + 0xac) != '\0') {
        fVar8 = *(float *)(lVar1 + 0x2d8);
        fVar9 = fVar6 * 0.1 + fVar8;
        fVar6 = 0.5;
        if ((0.5 <= fVar9) && (fVar6 = fVar9, 2.5 <= fVar9)) {
          fVar6 = 2.5;
        }
        *(float *)(lVar1 + 0x2d8) = fVar6;
        fVar9 = *(float *)(lVar4 + 0x11c);
        fVar6 = fVar6 / fVar8;
        *(float *)(lVar1 + 0x40) =
             ((*(float *)(lVar4 + 0x118) - *(float *)(lVar1 + 0x40)) *
             *(float *)(lVar1 + 0x48) * (1.0 - fVar6)) / *(float *)(lVar1 + 0x48) +
             *(float *)(lVar1 + 0x40);
        *(float *)(lVar1 + 0x44) =
             (*(float *)(lVar1 + 0x4c) * (1.0 - fVar6) * (fVar9 - *(float *)(lVar1 + 0x44))) /
             *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x44);
        *(float *)(lVar1 + 0x48) = fVar6 * *(float *)(lVar1 + 0x48);
        *(float *)(lVar1 + 0x4c) = fVar6 * *(float *)(lVar1 + 0x4c);
        *(float *)(lVar1 + 0x54) = fVar6 * *(float *)(lVar1 + 0x54);
        *(float *)(lVar1 + 0x50) = fVar6 * *(float *)(lVar1 + 0x50);
      }
    }
    if (((*(float *)(lVar4 + 300) != 0.0) && (uVar5 == 0)) && (*(char *)(lVar4 + 0x134) == '\0')) {
      fVar6 = *(float *)(lVar3 + 0x8c);
      fVar8 = fVar6 - *(float *)(lVar4 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                      *(float *)(lVar3 + 0x2dc) * *(float *)(lVar4 + 300);
      *(float *)(lVar3 + 0x8c) = fVar8;
      *(float *)(lVar3 + 0x118) = (fVar6 + *(float *)(lVar3 + 0x118)) - fVar8;
    }
  }
  return;
}





